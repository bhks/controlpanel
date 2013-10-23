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

#include "alljoyn/controlpanel/NotificationAction.h"
#include "ControlPanelConstants.h"
#include "alljoyn/about/AboutServiceApi.h"
#include "BusObjects/NotificationActionBusObject.h"
#include "alljoyn/controlpanel/ControlPanelService.h"

namespace ajn {
namespace services {
using namespace cpsConsts;

NotificationAction::NotificationAction(LanguageSet const& languageSet) :
    m_LanguageSet(languageSet), m_RootWidget(0),
    m_NotificationActionBusObject(0), TAG(TAG_NOTIFICATIONACTION)
{

}

NotificationAction::~NotificationAction() {
}

QStatus NotificationAction::setRootWidget(RootWidget* rootWidget)
{
    GenericLogger* logger = ControlPanelService::getInstance()->getLogger();

    if (!rootWidget) {
        if (logger)
            logger->warn(TAG, "Could not add a NULL rootWidget");
        return ER_BAD_ARG_1;
    }

    if (m_RootWidget) {
        if (logger)
            logger->warn(TAG, "Could not set RootWidget. RootWidget already set");
        return ER_BUS_PROPERTY_ALREADY_EXISTS;
    }

    m_RootWidget = rootWidget;
    return ER_OK;
}

QStatus NotificationAction::registerObjects(BusAttachment* bus, qcc::String const& unitName)
{
    GenericLogger* logger = ControlPanelService::getInstance()->getLogger();

    if (m_NotificationActionBusObject) {
        if (logger)
            logger->warn(TAG, "Could not register Object. BusObject already exists");
        return ER_BUS_OBJ_ALREADY_EXISTS;
    }

    QStatus status = ER_OK;
    qcc::String objectPath = AJ_OBJECTPATH_PREFIX + unitName + "/" + m_RootWidget->getWidgetName();
    m_NotificationActionBusObject = new NotificationActionBusObject(bus, objectPath.c_str(), status);
    if (status != ER_OK) {
        if (logger)
            logger->warn(TAG, "Could not create NotificationActionBusObject");
        return status;
    }
    status = bus->RegisterBusObject(*m_NotificationActionBusObject);
    if (status != ER_OK) {
        if (logger)
            logger->warn(TAG, "Could not register NotificationActionBusObject.");
        return status;
    }

    if (!m_RootWidget) {
        if (logger)
            logger->warn(TAG, "Root Widget not set");
        return ER_BUS_OBJECT_NOT_REGISTERED;
    }

    status = m_RootWidget->setNotificationActionBusObject(m_NotificationActionBusObject);
    if (status != ER_OK) {
        if (logger)
            logger->warn(TAG, "Could not set NotificationActionBusObject.");
        return status;
    }

    return m_RootWidget->registerObjects(bus, m_LanguageSet, objectPath + "/", "", true);
}

} /* namespace services */
} /* namespace ajn */
