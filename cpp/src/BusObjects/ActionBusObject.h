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

#ifndef ACTIONBUSOBJECT_H_
#define ACTIONBUSOBJECT_H_

#include "alljoyn/controlpanel/WidgetBusObject.h"

namespace ajn {
namespace services {

class ActionBusObject : public WidgetBusObject {
  public:
    ActionBusObject(ajn::BusAttachment* bus, qcc::String const& servicePath,
                    uint16_t langIndx, QStatus& status, Widget* widget);

    virtual ~ActionBusObject();

    void ActionExecute(const ajn::InterfaceDescription::Member* member, ajn::Message& msg);
};

} /* namespace services */
} /* namespace ajn */
#endif /* ACTIONBUSOBJECT_H_ */
