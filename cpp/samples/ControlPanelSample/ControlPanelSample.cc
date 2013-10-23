/******************************************************************************
 * Copyright 2013, Qualcomm Innovation Center, Inc.
 *
 *    All rights reserved.
 *    This file is licensed under the 3-clause BSD license in the NOTICE.txt
 *    file for this project. A copy of the 3-clause BSD license is found at:
 *
 *        http://opensource.org/licenses/BSD-3-Clause.
 *
 *    Unless required by applicable law or agreed to in writing, software
 *    distributed under the license is distributed on an "AS IS" BASIS,
 *    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *    See the license for the specific language governing permissions and
 *    limitations under the license.
 ******************************************************************************/

#include <iostream>
#include <sstream>
#include <cstdio>
#include <signal.h>
#include "alljoyn/controlpanel/ControlPanelService.h"
#include "alljoyn/controlpanel/ControlPanelControllee.h"
#include "alljoyn/controlpanel/GenericLogger.h"
#include "PropertyStoreImpl.h"
#include "ControlPanelServiceSampleUtil.h"
#include "ControlPanelGenerated.h"

#define SERVICE_PORT 900

using namespace ajn;
using namespace services;
using namespace qcc;

PropertyStoreImpl* propertyStoreImpl = 0;
ControlPanelBusListener* controlpanelBusListener = 0;
BusAttachment* bus = 0;
ControlPanelService* controlPanelService = 0;
ControlPanelControllee* controlPanelControllee = 0;

void signal_callback_handler(int32_t signum)
{
    std::cout << "Program Finished" << std::endl;
    //clean up
    controlPanelService->shutdown();
    ControlPanelServiceSampleUtil::aboutServiceDestroy(bus, controlpanelBusListener);
    if (controlPanelControllee)
        delete controlPanelControllee;
    if (controlpanelBusListener)
        delete controlpanelBusListener;
    if (propertyStoreImpl)
        delete (propertyStoreImpl);
    if (bus)
        delete bus;

    std::cout << "Goodbye!" << std::endl;
    exit(signum);
}

int32_t main()
{
    QStatus status;

    // Allow CTRL+C to end application
    signal(SIGINT, signal_callback_handler);
    std::cout << "Beginning ControlPanel Application. (Press CTRL+C to end application)" << std::endl;

    // Initialize Service objects
    controlpanelBusListener = new ControlPanelBusListener();;
    controlPanelService = ControlPanelService::getInstance();
    bus = ControlPanelServiceSampleUtil::prepareBusAttachment(controlPanelService->getLogger());
    if (bus == NULL) {
        std::cout << "Could not initialize BusAttachment." << std::endl;
        return 1;
    }

    qcc::String device_id = "123456", device_name = "testdeviceName";
    qcc::String app_id = "2826752ae35c416a82bcef272c55eace", app_name = "testappName";
    propertyStoreImpl = ControlPanelServiceSampleUtil::preparePropertyStore(app_id, app_name, device_id, device_name);

    status = ControlPanelServiceSampleUtil::prepareAboutService(bus, propertyStoreImpl,
                                                                controlpanelBusListener, SERVICE_PORT);
    if (status != ER_OK) {
        std::cout << "Could not register bus object." << std::endl;
        return 1;
    }

    status = ControlPanelGenerated::PrepareLanguageSets();
    if (status != ER_OK) {
        std::cout << "Could not prepare LanguageSets." << std::endl;
        return 1;
    }

    status = ControlPanelGenerated::PrepareWidgets(controlPanelControllee); //TODO send ptr to ptr?
    if (status != ER_OK) {
        std::cout << "Could not prepare Widgets." << std::endl;
        return 1;
    }

    status = controlPanelService->initControllee(bus, controlPanelControllee);
    if (status != ER_OK) {
        std::cout << "Could not initialize Controllee." << std::endl;
        return 1;
    }

    status = ControlPanelServiceSampleUtil::aboutServiceAnnounce();
    if (status != ER_OK) {
        std::cout << "Could not announce." << std::endl;
        return 1;
    }

    while (1) {
        sleep(1);
    }
    return 0;
}
