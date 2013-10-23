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

#ifndef CONSTRAINTRANGE_H_
#define CONSTRAINTRANGE_H_

#include "alljoyn/controlpanel/Definitions.h"
#include "alljoyn.h"

typedef struct {
    const char* const* signature;
    const void* minValue;
    const void* maxValue;
    const void* increment;

} ConstraintRange;

void initializeConstraintRange(ConstraintRange* constraints);

AJ_Status marshalConstraintRange(ConstraintRange* constraints, AJ_Message* reply);

#endif /* CONSTRAINTRANGE_H_ */
