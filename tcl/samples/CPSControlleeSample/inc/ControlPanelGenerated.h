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

#ifndef CONTROL_GENERATED_H_
#define CONTROL_GENERATED_H_

#include <alljoyn.h>

/**
 * Defines and objectPaths
 */
#define NUM_PRECEDING_OBJECTS NUM_PRE_CONTROLPANEL_OBJECTS

#define UNIQUE_DEVICE_ID "MyDevice"

#define GET_WIDGET_VALUE_CASES \
case EN_ROOTCONTAINER_GET_VALUE: \
case DE_AT_ROOTCONTAINER_GET_VALUE: \
case EN_CURRENTTEMP_GET_VALUE: \
case DE_AT_CURRENTTEMP_GET_VALUE: \
case EN_HEATPROPERTY_GET_VALUE: \
case DE_AT_HEATPROPERTY_GET_VALUE: \
case EN_OVENACTION_GET_VALUE: \
case DE_AT_OVENACTION_GET_VALUE: \
case EN_LIGHTACTION_GET_VALUE: \
case DE_AT_LIGHTACTION_GET_VALUE: \
case EN_LIGHTCONFIRM_GET_VALUE: \
case DE_AT_LIGHTCONFIRM_GET_VALUE: \
case EN_AREYOUSURE_GET_VALUE: \
case DE_AT_AREYOUSURE_GET_VALUE: \


#define GET_WIDGET_ALL_VALUE_CASES \
case EN_ROOTCONTAINER_GET_ALL_VALUES: \
case DE_AT_ROOTCONTAINER_GET_ALL_VALUES: \
case EN_CURRENTTEMP_GET_ALL_VALUES: \
case DE_AT_CURRENTTEMP_GET_ALL_VALUES: \
case EN_HEATPROPERTY_GET_ALL_VALUES: \
case DE_AT_HEATPROPERTY_GET_ALL_VALUES: \
case EN_OVENACTION_GET_ALL_VALUES: \
case DE_AT_OVENACTION_GET_ALL_VALUES: \
case EN_LIGHTACTION_GET_ALL_VALUES: \
case DE_AT_LIGHTACTION_GET_ALL_VALUES: \
case EN_LIGHTCONFIRM_GET_ALL_VALUES: \
case DE_AT_LIGHTCONFIRM_GET_ALL_VALUES: \
case EN_AREYOUSURE_GET_ALL_VALUES: \
case DE_AT_AREYOUSURE_GET_ALL_VALUES: \


#define GET_ROOT_VALUE_CASES \
case ROOT_CONTROLPANEL_ROOTCONTAINER_GET_VALUE: \
case NOTIFICATION_ACTION_AREYOUSURE_GET_VALUE: \


#define GET_ROOT_ALL_VALUE_CASES \
case ROOT_CONTROLPANEL_ROOTCONTAINER_GET_ALL_VALUES: \
case NOTIFICATION_ACTION_AREYOUSURE_GET_ALL_VALUES: \


#define SET_VALUE_CASES \
case ROOT_CONTROLPANEL_ROOTCONTAINER_SET_VALUE: \
case EN_ROOTCONTAINER_SET_VALUE: \
case DE_AT_ROOTCONTAINER_SET_VALUE: \
case EN_CURRENTTEMP_SET_VALUE: \
case DE_AT_CURRENTTEMP_SET_VALUE: \
case EN_HEATPROPERTY_SET_VALUE: \
case DE_AT_HEATPROPERTY_SET_VALUE: \
case EN_OVENACTION_SET_VALUE: \
case DE_AT_OVENACTION_SET_VALUE: \
case EN_LIGHTACTION_SET_VALUE: \
case DE_AT_LIGHTACTION_SET_VALUE: \
case EN_LIGHTCONFIRM_SET_VALUE: \
case DE_AT_LIGHTCONFIRM_SET_VALUE: \
case NOTIFICATION_ACTION_AREYOUSURE_SET_VALUE: \
case EN_AREYOUSURE_SET_VALUE: \
case DE_AT_AREYOUSURE_SET_VALUE: \


#define ACTION_CASES \
case EN_OVENACTION_EXEC: \
case DE_AT_OVENACTION_EXEC: \
case EN_LIGHTACTION_EXEC: \
case DE_AT_LIGHTACTION_EXEC: \
case EN_LIGHTCONFIRM_EXEC_ACTION1: \
case EN_LIGHTCONFIRM_EXEC_ACTION2: \
case EN_LIGHTCONFIRM_EXEC_ACTION3: \
case DE_AT_LIGHTCONFIRM_EXEC_ACTION1: \
case DE_AT_LIGHTCONFIRM_EXEC_ACTION2: \
case DE_AT_LIGHTCONFIRM_EXEC_ACTION3: \
case EN_AREYOUSURE_EXEC_ACTION1: \
case EN_AREYOUSURE_EXEC_ACTION2: \
case EN_AREYOUSURE_EXEC_ACTION3: \
case DE_AT_AREYOUSURE_EXEC_ACTION1: \
case DE_AT_AREYOUSURE_EXEC_ACTION2: \
case DE_AT_AREYOUSURE_EXEC_ACTION3: \


#define GET_URL_CASES \


#define CONTROLPANELAPPOBJECTS     {  rootContainerObjectPath, ControlPanelInterfaces  }, \
    {  enRootcontainerObjectPath, ContainerInterfaces  }, \
    {  de_ATRootcontainerObjectPath, ContainerInterfaces  }, \
    {  enCurrenttempObjectPath, LabelPropertyInterfaces  }, \
    {  de_ATCurrenttempObjectPath, LabelPropertyInterfaces  }, \
    {  enHeatpropertyObjectPath, PropertyInterfaces  }, \
    {  de_ATHeatpropertyObjectPath, PropertyInterfaces  }, \
    {  enOvenactionObjectPath, ActionInterfaces  }, \
    {  de_ATOvenactionObjectPath, ActionInterfaces  }, \
    {  enLightactionObjectPath, ActionInterfaces  }, \
    {  de_ATLightactionObjectPath, ActionInterfaces  }, \
    {  enLightconfirmObjectPath, DialogInterfaces  }, \
    {  de_ATLightconfirmObjectPath, DialogInterfaces  }, \
    {  areYouSureObjectPath, NotificationActionInterfaces  }, \
    {  enAreyousureObjectPath, DialogInterfaces  }, \
    {  de_ATAreyousureObjectPath, DialogInterfaces  }, \


#define CONTROLPANELANNOUNCEOBJECTS     {  rootContainerObjectPath, ControlPanelInterfaces  }, \


#define MAX_NUM_LANGUAGES 2

#define NUM_CONTROLPANEL_OBJECTS 16

#define MYLANGUAGES_EN 0
#define MYLANGUAGES_DE_AT 1

#define ROOT_CONTROLPANEL_ROOTCONTAINER_GET_VALUE                  AJ_APP_MESSAGE_ID(0 + NUM_PRECEDING_OBJECTS, 0, AJ_PROP_GET)
#define ROOT_CONTROLPANEL_ROOTCONTAINER_SET_VALUE                  AJ_APP_MESSAGE_ID(0 + NUM_PRECEDING_OBJECTS, 0, AJ_PROP_SET)
#define ROOT_CONTROLPANEL_ROOTCONTAINER_GET_ALL_VALUES             AJ_APP_MESSAGE_ID(0 + NUM_PRECEDING_OBJECTS, 0, AJ_PROP_GET_ALL)
#define ROOT_CONTROLPANEL_ROOTCONTAINER_VERSION_PROPERTY           AJ_APP_PROPERTY_ID(0 + NUM_PRECEDING_OBJECTS, 1, 0)

#define EN_ROOTCONTAINER_GET_VALUE                  AJ_APP_MESSAGE_ID(1 + NUM_PRECEDING_OBJECTS, 0, AJ_PROP_GET)
#define EN_ROOTCONTAINER_SET_VALUE                  AJ_APP_MESSAGE_ID(1 + NUM_PRECEDING_OBJECTS, 0, AJ_PROP_SET)
#define EN_ROOTCONTAINER_GET_ALL_VALUES             AJ_APP_MESSAGE_ID(1 + NUM_PRECEDING_OBJECTS, 0, AJ_PROP_GET_ALL)
#define EN_ROOTCONTAINER_VERSION_PROPERTY           AJ_APP_PROPERTY_ID(1 + NUM_PRECEDING_OBJECTS, 1, 0)
#define EN_ROOTCONTAINER_STATES_PROPERTY            AJ_APP_PROPERTY_ID(1 + NUM_PRECEDING_OBJECTS, 1, 1)
#define EN_ROOTCONTAINER_OPTPARAMS_PROPERTY         AJ_APP_PROPERTY_ID(1 + NUM_PRECEDING_OBJECTS, 1, 2)
#define EN_ROOTCONTAINER_SIGNAL_PROPERTIES_CHANGED  AJ_APP_MESSAGE_ID(1 + NUM_PRECEDING_OBJECTS, 1, 3)

#define DE_AT_ROOTCONTAINER_GET_VALUE                  AJ_APP_MESSAGE_ID(2 + NUM_PRECEDING_OBJECTS, 0, AJ_PROP_GET)
#define DE_AT_ROOTCONTAINER_SET_VALUE                  AJ_APP_MESSAGE_ID(2 + NUM_PRECEDING_OBJECTS, 0, AJ_PROP_SET)
#define DE_AT_ROOTCONTAINER_GET_ALL_VALUES             AJ_APP_MESSAGE_ID(2 + NUM_PRECEDING_OBJECTS, 0, AJ_PROP_GET_ALL)
#define DE_AT_ROOTCONTAINER_VERSION_PROPERTY           AJ_APP_PROPERTY_ID(2 + NUM_PRECEDING_OBJECTS, 1, 0)
#define DE_AT_ROOTCONTAINER_STATES_PROPERTY            AJ_APP_PROPERTY_ID(2 + NUM_PRECEDING_OBJECTS, 1, 1)
#define DE_AT_ROOTCONTAINER_OPTPARAMS_PROPERTY         AJ_APP_PROPERTY_ID(2 + NUM_PRECEDING_OBJECTS, 1, 2)
#define DE_AT_ROOTCONTAINER_SIGNAL_PROPERTIES_CHANGED  AJ_APP_MESSAGE_ID(2 + NUM_PRECEDING_OBJECTS, 1, 3)

#define EN_CURRENTTEMP_GET_VALUE                  AJ_APP_MESSAGE_ID(3 + NUM_PRECEDING_OBJECTS, 0, AJ_PROP_GET)
#define EN_CURRENTTEMP_SET_VALUE                  AJ_APP_MESSAGE_ID(3 + NUM_PRECEDING_OBJECTS, 0, AJ_PROP_SET)
#define EN_CURRENTTEMP_GET_ALL_VALUES             AJ_APP_MESSAGE_ID(3 + NUM_PRECEDING_OBJECTS, 0, AJ_PROP_GET_ALL)
#define EN_CURRENTTEMP_VERSION_PROPERTY           AJ_APP_PROPERTY_ID(3 + NUM_PRECEDING_OBJECTS, 1, 0)
#define EN_CURRENTTEMP_STATES_PROPERTY            AJ_APP_PROPERTY_ID(3 + NUM_PRECEDING_OBJECTS, 1, 1)
#define EN_CURRENTTEMP_OPTPARAMS_PROPERTY         AJ_APP_PROPERTY_ID(3 + NUM_PRECEDING_OBJECTS, 1, 2)
#define EN_CURRENTTEMP_SIGNAL_PROPERTIES_CHANGED  AJ_APP_MESSAGE_ID(3 + NUM_PRECEDING_OBJECTS, 1, 3)
#define EN_CURRENTTEMP_LABEL_PROPERTY             AJ_APP_PROPERTY_ID(3 + NUM_PRECEDING_OBJECTS, 1, 4)

#define DE_AT_CURRENTTEMP_GET_VALUE                  AJ_APP_MESSAGE_ID(4 + NUM_PRECEDING_OBJECTS, 0, AJ_PROP_GET)
#define DE_AT_CURRENTTEMP_SET_VALUE                  AJ_APP_MESSAGE_ID(4 + NUM_PRECEDING_OBJECTS, 0, AJ_PROP_SET)
#define DE_AT_CURRENTTEMP_GET_ALL_VALUES             AJ_APP_MESSAGE_ID(4 + NUM_PRECEDING_OBJECTS, 0, AJ_PROP_GET_ALL)
#define DE_AT_CURRENTTEMP_VERSION_PROPERTY           AJ_APP_PROPERTY_ID(4 + NUM_PRECEDING_OBJECTS, 1, 0)
#define DE_AT_CURRENTTEMP_STATES_PROPERTY            AJ_APP_PROPERTY_ID(4 + NUM_PRECEDING_OBJECTS, 1, 1)
#define DE_AT_CURRENTTEMP_OPTPARAMS_PROPERTY         AJ_APP_PROPERTY_ID(4 + NUM_PRECEDING_OBJECTS, 1, 2)
#define DE_AT_CURRENTTEMP_SIGNAL_PROPERTIES_CHANGED  AJ_APP_MESSAGE_ID(4 + NUM_PRECEDING_OBJECTS, 1, 3)
#define DE_AT_CURRENTTEMP_LABEL_PROPERTY             AJ_APP_PROPERTY_ID(4 + NUM_PRECEDING_OBJECTS, 1, 4)

#define EN_HEATPROPERTY_GET_VALUE                  AJ_APP_MESSAGE_ID(5 + NUM_PRECEDING_OBJECTS, 0, AJ_PROP_GET)
#define EN_HEATPROPERTY_SET_VALUE                  AJ_APP_MESSAGE_ID(5 + NUM_PRECEDING_OBJECTS, 0, AJ_PROP_SET)
#define EN_HEATPROPERTY_GET_ALL_VALUES             AJ_APP_MESSAGE_ID(5 + NUM_PRECEDING_OBJECTS, 0, AJ_PROP_GET_ALL)
#define EN_HEATPROPERTY_VERSION_PROPERTY           AJ_APP_PROPERTY_ID(5 + NUM_PRECEDING_OBJECTS, 1, 0)
#define EN_HEATPROPERTY_STATES_PROPERTY            AJ_APP_PROPERTY_ID(5 + NUM_PRECEDING_OBJECTS, 1, 1)
#define EN_HEATPROPERTY_OPTPARAMS_PROPERTY         AJ_APP_PROPERTY_ID(5 + NUM_PRECEDING_OBJECTS, 1, 2)
#define EN_HEATPROPERTY_SIGNAL_PROPERTIES_CHANGED  AJ_APP_MESSAGE_ID(5 + NUM_PRECEDING_OBJECTS, 1, 3)
#define EN_HEATPROPERTY_VALUE_PROPERTY             AJ_APP_PROPERTY_ID(5 + NUM_PRECEDING_OBJECTS, 1, 4)
#define EN_HEATPROPERTY_SIGNAL_VALUE_CHANGED       AJ_APP_MESSAGE_ID(5 + NUM_PRECEDING_OBJECTS, 1, 5)

#define DE_AT_HEATPROPERTY_GET_VALUE                  AJ_APP_MESSAGE_ID(6 + NUM_PRECEDING_OBJECTS, 0, AJ_PROP_GET)
#define DE_AT_HEATPROPERTY_SET_VALUE                  AJ_APP_MESSAGE_ID(6 + NUM_PRECEDING_OBJECTS, 0, AJ_PROP_SET)
#define DE_AT_HEATPROPERTY_GET_ALL_VALUES             AJ_APP_MESSAGE_ID(6 + NUM_PRECEDING_OBJECTS, 0, AJ_PROP_GET_ALL)
#define DE_AT_HEATPROPERTY_VERSION_PROPERTY           AJ_APP_PROPERTY_ID(6 + NUM_PRECEDING_OBJECTS, 1, 0)
#define DE_AT_HEATPROPERTY_STATES_PROPERTY            AJ_APP_PROPERTY_ID(6 + NUM_PRECEDING_OBJECTS, 1, 1)
#define DE_AT_HEATPROPERTY_OPTPARAMS_PROPERTY         AJ_APP_PROPERTY_ID(6 + NUM_PRECEDING_OBJECTS, 1, 2)
#define DE_AT_HEATPROPERTY_SIGNAL_PROPERTIES_CHANGED  AJ_APP_MESSAGE_ID(6 + NUM_PRECEDING_OBJECTS, 1, 3)
#define DE_AT_HEATPROPERTY_VALUE_PROPERTY             AJ_APP_PROPERTY_ID(6 + NUM_PRECEDING_OBJECTS, 1, 4)
#define DE_AT_HEATPROPERTY_SIGNAL_VALUE_CHANGED       AJ_APP_MESSAGE_ID(6 + NUM_PRECEDING_OBJECTS, 1, 5)

#define EN_OVENACTION_GET_VALUE                  AJ_APP_MESSAGE_ID(7 + NUM_PRECEDING_OBJECTS, 0, AJ_PROP_GET)
#define EN_OVENACTION_SET_VALUE                  AJ_APP_MESSAGE_ID(7 + NUM_PRECEDING_OBJECTS, 0, AJ_PROP_SET)
#define EN_OVENACTION_GET_ALL_VALUES             AJ_APP_MESSAGE_ID(7 + NUM_PRECEDING_OBJECTS, 0, AJ_PROP_GET_ALL)
#define EN_OVENACTION_VERSION_PROPERTY           AJ_APP_PROPERTY_ID(7 + NUM_PRECEDING_OBJECTS, 1, 0)
#define EN_OVENACTION_STATES_PROPERTY            AJ_APP_PROPERTY_ID(7 + NUM_PRECEDING_OBJECTS, 1, 1)
#define EN_OVENACTION_OPTPARAMS_PROPERTY         AJ_APP_PROPERTY_ID(7 + NUM_PRECEDING_OBJECTS, 1, 2)
#define EN_OVENACTION_SIGNAL_PROPERTIES_CHANGED  AJ_APP_MESSAGE_ID(7 + NUM_PRECEDING_OBJECTS, 1, 3)
#define EN_OVENACTION_EXEC                       AJ_APP_MESSAGE_ID(7 + NUM_PRECEDING_OBJECTS, 1, 4)

#define DE_AT_OVENACTION_GET_VALUE                  AJ_APP_MESSAGE_ID(8 + NUM_PRECEDING_OBJECTS, 0, AJ_PROP_GET)
#define DE_AT_OVENACTION_SET_VALUE                  AJ_APP_MESSAGE_ID(8 + NUM_PRECEDING_OBJECTS, 0, AJ_PROP_SET)
#define DE_AT_OVENACTION_GET_ALL_VALUES             AJ_APP_MESSAGE_ID(8 + NUM_PRECEDING_OBJECTS, 0, AJ_PROP_GET_ALL)
#define DE_AT_OVENACTION_VERSION_PROPERTY           AJ_APP_PROPERTY_ID(8 + NUM_PRECEDING_OBJECTS, 1, 0)
#define DE_AT_OVENACTION_STATES_PROPERTY            AJ_APP_PROPERTY_ID(8 + NUM_PRECEDING_OBJECTS, 1, 1)
#define DE_AT_OVENACTION_OPTPARAMS_PROPERTY         AJ_APP_PROPERTY_ID(8 + NUM_PRECEDING_OBJECTS, 1, 2)
#define DE_AT_OVENACTION_SIGNAL_PROPERTIES_CHANGED  AJ_APP_MESSAGE_ID(8 + NUM_PRECEDING_OBJECTS, 1, 3)
#define DE_AT_OVENACTION_EXEC                       AJ_APP_MESSAGE_ID(8 + NUM_PRECEDING_OBJECTS, 1, 4)

#define EN_LIGHTACTION_GET_VALUE                  AJ_APP_MESSAGE_ID(9 + NUM_PRECEDING_OBJECTS, 0, AJ_PROP_GET)
#define EN_LIGHTACTION_SET_VALUE                  AJ_APP_MESSAGE_ID(9 + NUM_PRECEDING_OBJECTS, 0, AJ_PROP_SET)
#define EN_LIGHTACTION_GET_ALL_VALUES             AJ_APP_MESSAGE_ID(9 + NUM_PRECEDING_OBJECTS, 0, AJ_PROP_GET_ALL)
#define EN_LIGHTACTION_VERSION_PROPERTY           AJ_APP_PROPERTY_ID(9 + NUM_PRECEDING_OBJECTS, 1, 0)
#define EN_LIGHTACTION_STATES_PROPERTY            AJ_APP_PROPERTY_ID(9 + NUM_PRECEDING_OBJECTS, 1, 1)
#define EN_LIGHTACTION_OPTPARAMS_PROPERTY         AJ_APP_PROPERTY_ID(9 + NUM_PRECEDING_OBJECTS, 1, 2)
#define EN_LIGHTACTION_SIGNAL_PROPERTIES_CHANGED  AJ_APP_MESSAGE_ID(9 + NUM_PRECEDING_OBJECTS, 1, 3)
#define EN_LIGHTACTION_EXEC                       AJ_APP_MESSAGE_ID(9 + NUM_PRECEDING_OBJECTS, 1, 4)

#define DE_AT_LIGHTACTION_GET_VALUE                  AJ_APP_MESSAGE_ID(10 + NUM_PRECEDING_OBJECTS, 0, AJ_PROP_GET)
#define DE_AT_LIGHTACTION_SET_VALUE                  AJ_APP_MESSAGE_ID(10 + NUM_PRECEDING_OBJECTS, 0, AJ_PROP_SET)
#define DE_AT_LIGHTACTION_GET_ALL_VALUES             AJ_APP_MESSAGE_ID(10 + NUM_PRECEDING_OBJECTS, 0, AJ_PROP_GET_ALL)
#define DE_AT_LIGHTACTION_VERSION_PROPERTY           AJ_APP_PROPERTY_ID(10 + NUM_PRECEDING_OBJECTS, 1, 0)
#define DE_AT_LIGHTACTION_STATES_PROPERTY            AJ_APP_PROPERTY_ID(10 + NUM_PRECEDING_OBJECTS, 1, 1)
#define DE_AT_LIGHTACTION_OPTPARAMS_PROPERTY         AJ_APP_PROPERTY_ID(10 + NUM_PRECEDING_OBJECTS, 1, 2)
#define DE_AT_LIGHTACTION_SIGNAL_PROPERTIES_CHANGED  AJ_APP_MESSAGE_ID(10 + NUM_PRECEDING_OBJECTS, 1, 3)
#define DE_AT_LIGHTACTION_EXEC                       AJ_APP_MESSAGE_ID(10 + NUM_PRECEDING_OBJECTS, 1, 4)

#define EN_LIGHTCONFIRM_GET_VALUE                  AJ_APP_MESSAGE_ID(11 + NUM_PRECEDING_OBJECTS, 0, AJ_PROP_GET)
#define EN_LIGHTCONFIRM_SET_VALUE                  AJ_APP_MESSAGE_ID(11 + NUM_PRECEDING_OBJECTS, 0, AJ_PROP_SET)
#define EN_LIGHTCONFIRM_GET_ALL_VALUES             AJ_APP_MESSAGE_ID(11 + NUM_PRECEDING_OBJECTS, 0, AJ_PROP_GET_ALL)
#define EN_LIGHTCONFIRM_VERSION_PROPERTY           AJ_APP_PROPERTY_ID(11 + NUM_PRECEDING_OBJECTS, 1, 0)
#define EN_LIGHTCONFIRM_STATES_PROPERTY            AJ_APP_PROPERTY_ID(11 + NUM_PRECEDING_OBJECTS, 1, 1)
#define EN_LIGHTCONFIRM_OPTPARAMS_PROPERTY         AJ_APP_PROPERTY_ID(11 + NUM_PRECEDING_OBJECTS, 1, 2)
#define EN_LIGHTCONFIRM_SIGNAL_PROPERTIES_CHANGED  AJ_APP_MESSAGE_ID(11 + NUM_PRECEDING_OBJECTS, 1, 3)
#define EN_LIGHTCONFIRM_MESSAGE_PROPERTY           AJ_APP_PROPERTY_ID(11 + NUM_PRECEDING_OBJECTS, 1, 4)
#define EN_LIGHTCONFIRM_NUM_ACTIONS_PROPERTY       AJ_APP_PROPERTY_ID(11 + NUM_PRECEDING_OBJECTS, 1, 5)
#define EN_LIGHTCONFIRM_EXEC_ACTION1               AJ_APP_MESSAGE_ID(11 + NUM_PRECEDING_OBJECTS, 1, 6)
#define EN_LIGHTCONFIRM_EXEC_ACTION2               AJ_APP_MESSAGE_ID(11 + NUM_PRECEDING_OBJECTS, 1, 7)
#define EN_LIGHTCONFIRM_EXEC_ACTION3               AJ_APP_MESSAGE_ID(11 + NUM_PRECEDING_OBJECTS, 1, 8)

#define DE_AT_LIGHTCONFIRM_GET_VALUE                  AJ_APP_MESSAGE_ID(12 + NUM_PRECEDING_OBJECTS, 0, AJ_PROP_GET)
#define DE_AT_LIGHTCONFIRM_SET_VALUE                  AJ_APP_MESSAGE_ID(12 + NUM_PRECEDING_OBJECTS, 0, AJ_PROP_SET)
#define DE_AT_LIGHTCONFIRM_GET_ALL_VALUES             AJ_APP_MESSAGE_ID(12 + NUM_PRECEDING_OBJECTS, 0, AJ_PROP_GET_ALL)
#define DE_AT_LIGHTCONFIRM_VERSION_PROPERTY           AJ_APP_PROPERTY_ID(12 + NUM_PRECEDING_OBJECTS, 1, 0)
#define DE_AT_LIGHTCONFIRM_STATES_PROPERTY            AJ_APP_PROPERTY_ID(12 + NUM_PRECEDING_OBJECTS, 1, 1)
#define DE_AT_LIGHTCONFIRM_OPTPARAMS_PROPERTY         AJ_APP_PROPERTY_ID(12 + NUM_PRECEDING_OBJECTS, 1, 2)
#define DE_AT_LIGHTCONFIRM_SIGNAL_PROPERTIES_CHANGED  AJ_APP_MESSAGE_ID(12 + NUM_PRECEDING_OBJECTS, 1, 3)
#define DE_AT_LIGHTCONFIRM_MESSAGE_PROPERTY           AJ_APP_PROPERTY_ID(12 + NUM_PRECEDING_OBJECTS, 1, 4)
#define DE_AT_LIGHTCONFIRM_NUM_ACTIONS_PROPERTY       AJ_APP_PROPERTY_ID(12 + NUM_PRECEDING_OBJECTS, 1, 5)
#define DE_AT_LIGHTCONFIRM_EXEC_ACTION1               AJ_APP_MESSAGE_ID(12 + NUM_PRECEDING_OBJECTS, 1, 6)
#define DE_AT_LIGHTCONFIRM_EXEC_ACTION2               AJ_APP_MESSAGE_ID(12 + NUM_PRECEDING_OBJECTS, 1, 7)
#define DE_AT_LIGHTCONFIRM_EXEC_ACTION3               AJ_APP_MESSAGE_ID(12 + NUM_PRECEDING_OBJECTS, 1, 8)

#define NOTIFICATION_ACTION_AREYOUSURE_GET_VALUE                  AJ_APP_MESSAGE_ID(13 + NUM_PRECEDING_OBJECTS, 0, AJ_PROP_GET)
#define NOTIFICATION_ACTION_AREYOUSURE_SET_VALUE                  AJ_APP_MESSAGE_ID(13 + NUM_PRECEDING_OBJECTS, 0, AJ_PROP_SET)
#define NOTIFICATION_ACTION_AREYOUSURE_GET_ALL_VALUES             AJ_APP_MESSAGE_ID(13 + NUM_PRECEDING_OBJECTS, 0, AJ_PROP_GET_ALL)
#define NOTIFICATION_ACTION_AREYOUSURE_VERSION_PROPERTY           AJ_APP_PROPERTY_ID(13 + NUM_PRECEDING_OBJECTS, 1, 0)
#define NOTIFICATION_ACTION_AREYOUSURE_SIGNAL_DISMISS             AJ_APP_MESSAGE_ID(13 + NUM_PRECEDING_OBJECTS, 1, 1)

#define EN_AREYOUSURE_GET_VALUE                  AJ_APP_MESSAGE_ID(14 + NUM_PRECEDING_OBJECTS, 0, AJ_PROP_GET)
#define EN_AREYOUSURE_SET_VALUE                  AJ_APP_MESSAGE_ID(14 + NUM_PRECEDING_OBJECTS, 0, AJ_PROP_SET)
#define EN_AREYOUSURE_GET_ALL_VALUES             AJ_APP_MESSAGE_ID(14 + NUM_PRECEDING_OBJECTS, 0, AJ_PROP_GET_ALL)
#define EN_AREYOUSURE_VERSION_PROPERTY           AJ_APP_PROPERTY_ID(14 + NUM_PRECEDING_OBJECTS, 1, 0)
#define EN_AREYOUSURE_STATES_PROPERTY            AJ_APP_PROPERTY_ID(14 + NUM_PRECEDING_OBJECTS, 1, 1)
#define EN_AREYOUSURE_OPTPARAMS_PROPERTY         AJ_APP_PROPERTY_ID(14 + NUM_PRECEDING_OBJECTS, 1, 2)
#define EN_AREYOUSURE_SIGNAL_PROPERTIES_CHANGED  AJ_APP_MESSAGE_ID(14 + NUM_PRECEDING_OBJECTS, 1, 3)
#define EN_AREYOUSURE_MESSAGE_PROPERTY           AJ_APP_PROPERTY_ID(14 + NUM_PRECEDING_OBJECTS, 1, 4)
#define EN_AREYOUSURE_NUM_ACTIONS_PROPERTY       AJ_APP_PROPERTY_ID(14 + NUM_PRECEDING_OBJECTS, 1, 5)
#define EN_AREYOUSURE_EXEC_ACTION1               AJ_APP_MESSAGE_ID(14 + NUM_PRECEDING_OBJECTS, 1, 6)
#define EN_AREYOUSURE_EXEC_ACTION2               AJ_APP_MESSAGE_ID(14 + NUM_PRECEDING_OBJECTS, 1, 7)
#define EN_AREYOUSURE_EXEC_ACTION3               AJ_APP_MESSAGE_ID(14 + NUM_PRECEDING_OBJECTS, 1, 8)

#define DE_AT_AREYOUSURE_GET_VALUE                  AJ_APP_MESSAGE_ID(15 + NUM_PRECEDING_OBJECTS, 0, AJ_PROP_GET)
#define DE_AT_AREYOUSURE_SET_VALUE                  AJ_APP_MESSAGE_ID(15 + NUM_PRECEDING_OBJECTS, 0, AJ_PROP_SET)
#define DE_AT_AREYOUSURE_GET_ALL_VALUES             AJ_APP_MESSAGE_ID(15 + NUM_PRECEDING_OBJECTS, 0, AJ_PROP_GET_ALL)
#define DE_AT_AREYOUSURE_VERSION_PROPERTY           AJ_APP_PROPERTY_ID(15 + NUM_PRECEDING_OBJECTS, 1, 0)
#define DE_AT_AREYOUSURE_STATES_PROPERTY            AJ_APP_PROPERTY_ID(15 + NUM_PRECEDING_OBJECTS, 1, 1)
#define DE_AT_AREYOUSURE_OPTPARAMS_PROPERTY         AJ_APP_PROPERTY_ID(15 + NUM_PRECEDING_OBJECTS, 1, 2)
#define DE_AT_AREYOUSURE_SIGNAL_PROPERTIES_CHANGED  AJ_APP_MESSAGE_ID(15 + NUM_PRECEDING_OBJECTS, 1, 3)
#define DE_AT_AREYOUSURE_MESSAGE_PROPERTY           AJ_APP_PROPERTY_ID(15 + NUM_PRECEDING_OBJECTS, 1, 4)
#define DE_AT_AREYOUSURE_NUM_ACTIONS_PROPERTY       AJ_APP_PROPERTY_ID(15 + NUM_PRECEDING_OBJECTS, 1, 5)
#define DE_AT_AREYOUSURE_EXEC_ACTION1               AJ_APP_MESSAGE_ID(15 + NUM_PRECEDING_OBJECTS, 1, 6)
#define DE_AT_AREYOUSURE_EXEC_ACTION2               AJ_APP_MESSAGE_ID(15 + NUM_PRECEDING_OBJECTS, 1, 7)
#define DE_AT_AREYOUSURE_EXEC_ACTION3               AJ_APP_MESSAGE_ID(15 + NUM_PRECEDING_OBJECTS, 1, 8)



extern const char rootContainerObjectPath[];
extern const char enRootcontainerObjectPath[];
extern const char de_ATRootcontainerObjectPath[];
extern const char enCurrenttempObjectPath[];
extern const char de_ATCurrenttempObjectPath[];
extern const char enHeatpropertyObjectPath[];
extern const char de_ATHeatpropertyObjectPath[];
extern const char enOvenactionObjectPath[];
extern const char de_ATOvenactionObjectPath[];
extern const char enLightactionObjectPath[];
extern const char de_ATLightactionObjectPath[];
extern const char enLightconfirmObjectPath[];
extern const char de_ATLightconfirmObjectPath[];
extern const char areYouSureObjectPath[];
extern const char enAreyousureObjectPath[];
extern const char de_ATAreyousureObjectPath[];


typedef struct {
    const char* sender;
    uint16_t numSignals;
    int32_t signals[MAX_NUM_LANGUAGES];
} SetValueContext;

typedef struct {
    uint8_t signalType;
    int32_t signalId;
} Signal;

typedef struct {
    uint16_t numSignals;
    Signal signals[MAX_NUM_LANGUAGES * 2];
} ExecuteActionContext;
/**
 *
 * @return
 */
void WidgetsInit();

/**
 * Set Value of a property.
 * @param replyMsg - reply message
 * @param propId - id of property being changed
 * @param context - setvaluecontext. can be used to send signals
 * @return status
 */
AJ_Status SetValueProperty(AJ_Message* replyMsg, uint32_t propId, void* context);

/**
 * Execute Action
 * @param msg - the msg for the response
 * @param msgId - the Action being executed
 * @param context - ExecuteActionContext used to send signals as a result of action
 * @return status
 */
AJ_Status ExecuteAction(AJ_Message* msg, uint32_t msgId, ExecuteActionContext* context);


/* Defines and functions for Tester App */
typedef struct {
    uint32_t msgId;
    uint16_t numParams;
    uint16_t param[3];
} CPSTest;

#define NUMBER_OF_TESTS //NUM_TESTS_GO_HERE

#define ALL_REPLY_CASES                //ALL_REPLIES_GO_HERE

void TestsInit(CPSTest* testsToRun);

#endif /* CONTROL_GENERATED_H_ */
