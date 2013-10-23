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

package org.alljoyn.ioe.controlpanelservice.communication.interfaces;

import java.util.Map;

import org.alljoyn.bus.BusException;
import org.alljoyn.bus.Variant;
import org.alljoyn.bus.annotation.BusInterface;
import org.alljoyn.bus.annotation.BusProperty;
import org.alljoyn.bus.annotation.BusSignal;
import org.alljoyn.ioe.controlpanelservice.ControlPanelService;

/**
 * Property control interface
 */
@BusInterface (name = PropertyControl.IFNAME)
public interface PropertyControl extends PropertyControlSuper {
	public static final String IFNAME = ControlPanelService.INTERFACE_PREFIX + ".Property"; 

	public static final short VERSION = 1;
	
	/**
	 * @return Interface version
	 */
	@BusProperty(signature="q")
	public short getVersion() throws BusException;
	
	/**
	 * @return States bitmask 
	 * @throws BusException
	 */
	@BusProperty(signature="u")
	public int getStates() throws BusException;
	
	/**
	 * @return Optional parameters
	 * @throws BusException
	 */
	@BusProperty(signature="a{qv}")
	public Map<Short, Variant> getOptParams() throws BusException;
	
	/**
	 * @return Returns the property current value
	 */
	@BusProperty(signature="v")
	public Variant getValue() throws BusException;
	
	/**
	 * @param value The property value
	 */
	@BusProperty(signature="v")
	public void setValue(Variant value) throws BusException;

	/**
	 * Signal is sent when the property value changed 
	 * @param newValue The new property value
	 */
	@BusSignal(signature="v")
	public void ValueChanged(Variant newValue) throws BusException;
	
	/**
	 * Signal is sent when the property metadata changed 
	 * @param metadata
	 */
	@BusSignal
	public void MetadataChanged() throws BusException;
}
