# Copyright 2013, Qualcomm Innovation Center, Inc.
#
#    All rights reserved.
#    This file is licensed under the 3-clause BSD license in the NOTICE.txt
#    file for this project. A copy of the 3-clause BSD license is found at:
#
#        http://opensource.org/licenses/BSD-3-Clause.
#
#    Unless required by applicable law or agreed to in writing, software
#    distributed under the license is distributed on an "AS IS" BASIS,
#    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
#    See the license for the specific language governing permissions and
#    limitations under the license.
#
import sys
import xml.etree.ElementTree as xml
import commonWidget as common

class Property (common.Widget):

    def __init__(self, generated, propertyElement, parentObjectPath, languageSetName) :
        common.Widget.__init__(self, generated, propertyElement, parentObjectPath, languageSetName)
        self.widgetName = self.name[:1].upper() + self.name [1:]
        self.name = self.name[:1].lower() + self.name [1:]
        self.getSignatureAndVarType()
        self.additionalParams = ", " + self.propType

    def generateMandatoryVariables (self) :
        common.Widget.generateMandatoryVariables(self)
        self.setWritable()
        self.generateSetAndGetCode()

    def setWritable (self) :
        if not hasattr(self.element, "writable") :
            return
        writable = self.element.writable
        if hasattr(writable, "attr") and "code" in writable.attr and writable.attr["code"] == "true" : 
            self.generated.initCode += "    {0}->setGetWritable({1});\n".format(self.name, writable)
        else :
            if writable != "true" and writable != "false" :
                print "ERROR - The value {0} is not supported for writable in {1}. Exiting".format(writable, self.name)
                sys.exit(0)	
            self.generated.initCode += "    {0}->setWritable({1});\n".format(self.name, writable)

    def generateSetAndGetCode (self) :

        self.generated.initCode += "    CHECK({0}->setGetValue({1}));\n".format(self.name, self.element.getCode)
        propertyHeaderFile = self.generated.propertyHeaderFile
        propertySrcFile = self.generated.propertySrcFile

        regularName = self.widgetName
        capitalName = self.name.upper()

        propertyHeaderFile = propertyHeaderFile.replace("CAPITAL_NAME_HERE", capitalName)
        propertyHeaderFile = propertyHeaderFile.replace("REGULAR_NAME_HERE", regularName)
        propertyHeaderFile = propertyHeaderFile.replace("VALUE_TYPE_HERE", self.varType)

        propertySrcFile = propertySrcFile.replace("CAPITAL_NAME_HERE", capitalName)
        propertySrcFile = propertySrcFile.replace("REGULAR_NAME_HERE", regularName)
        propertySrcFile = propertySrcFile.replace("ADDITIONAL_INCLUDES_HERE", self.generated.srcIncludes)
        propertySrcFile = propertySrcFile.replace("VALUE_TYPE_HERE", self.varType)
        propertySrcFile = propertySrcFile.replace("CODE_OF_SET_VALUE_HERE", self.element.setCode.replace("%s", "value"))

        self.generated.headerIncludes += """#include "../generated/{0}.h"\n""".format(regularName)

        genH = open(self.generated.path + "/" + regularName + ".h", 'w')
        genH.write(propertyHeaderFile)
        genH.close()
        genC = open(self.generated.path + "/" + regularName + ".cc", 'w')
        genC.write(propertySrcFile)
        genC.close()

    def generateOptionalVariables (self) :
        common.Widget.generateOptionalVariables(self)
        self.setUnitMeasure() 
        self.setConstraintList() 
        self.setConstraintRange() 

    def setUnitMeasure (self) :
        self.setCodeOrValueString ("unitMeasure", "setUnitOfMeasure", "setGetUnitOfMeasure")

    def setConstraintRange (self) :
        if not self.element._has('constraintDefs'): return
        if not self.element.constraintDefs._has('constraintRange'): return

        constraintRange = self.element.constraintDefs.constraintRange
        constraintRangeName = self.name + "ConstraintRange"

        self.generated.initCode += "\n    ConstraintRange* {0} = new ConstraintRange();\n".format(constraintRangeName)
        self.generated.initCode += "    CHECK({0}->setConstraintMin(({1}){2}));\n".format(constraintRangeName, self.varType, constraintRange.min)
        self.generated.initCode += "    CHECK({0}->setConstraintMax(({1}){2}));\n".format(constraintRangeName, self.varType, constraintRange.max)
        self.generated.initCode += "    CHECK({0}->setConstraintIncrement(({1}){2}));\n".format(constraintRangeName, self.varType, constraintRange.increment)
        self.generated.initCode += "    {0}->setConstraintRange({1});\n".format(self.name, constraintRangeName)

    def setConstraintList (self) :
        if self.element._name == "stringProperty" :
            if not self.element._has('constraintVals'): return
            constraintList = self.element.constraintVals
        else :
            if not self.element._has('constraintDefs'): return
            if not self.element.constraintDefs._has('constraintVals'): return
            constraintList = self.element.constraintDefs.constraintVals

        if isinstance(constraintList.constraint, list) :
            constraints = constraintList.constraint
        else :
            constraints = [constraintList.constraint];

        if len(constraints) > 0:
            vectorName = self.name + "ConstraintListVec"
            numConstraints = len(constraints)
            self.generated.initCode += "\n    std::vector<ConstraintList> {0}({1});\n".format(vectorName, str(numConstraints))

            indx = 0
            for constraint in constraints:
                self.setCodeOrValueString ("display", "setDisplay", "setGetDisplay", "Display%i" % (indx+1), 
                                           constraint, "{0}[{1}]".format(vectorName, str(indx)))
                if self.element._name == "stringProperty" :
                    self.generated.initCode += """    {0}[{1}].setConstraintValue("{2}");\n""".format(vectorName, str(indx), constraint.value)    
                else :
                    self.generated.initCode += """    {0}[{1}].setConstraintValue(({2}){3});\n""".format(vectorName, str(indx), 
                                               self.varType, constraint.value)    
                indx = indx + 1
            self.generated.initCode += "\n    {0}->setConstraintList({1});\n".format(self.name, vectorName)

    def getSignatureAndVarType(self) :
        self.signature = ""
        self.varType = ""
        self.propType = ""
    
        propertyType = self.element._name
        if propertyType == "stringProperty" :
            self.varType = "const char*"
            self.propType = "STRING_PROPERTY"
        elif propertyType == "booleanProperty" :
            self.varType = "bool"
            self.propType = "BOOL_PROPERTY"
#        elif propertyType == "dateProperty" :
#            self.varType = "DatePropertyValue"
#            self.propType = "DATE_VALUE_PROPERTY"
#        elif propertyType == "timeProperty" :
#            self.varType = "TimePropertyValue"
#            self.propType = "TIME_VALUE_PROPERTY"
        elif propertyType == "scalarProperty" :
            dbusType = self.element.attr["dbusType"]
       	    if dbusType == "INT16":
                self.propType = "INT16_PROPERTY"
                self.varType = "int16_t"
            elif dbusType == "UINT16":
                self.propType = "UINT16_PROPERTY"
                self.varType = "uint16_t"
            elif dbusType == "INT32":
                self.propType = "INT32_PROPERTY"
                self.varType = "int32_t"
	    elif dbusType == "UINT32":
                self.propType = "UINT32_PROPERTY"
                self.varType = "uint32_t"
            elif dbusType == "INT64":
                self.propType = "INT64_PROPERTY"
                self.varType = "int64_t"
            elif dbusType == "UINT64":
                self.propType = "UINT64_PROPERTY"
                self.varType = "uint64_t"
	    elif dbusType == "DOUBLE":
                self.propType = "DOUBLE_PROPERTY"
                self.varType = "double"
            else :
                print "ERROR - dbusType of property Unknown. Exiting"
                sys.exit(0)
        else :
            print "ERROR - Element Type of property Unknown. Exiting"
            sys.exit(0)





