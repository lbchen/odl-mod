/**
 * 
 *
 * Generated by <a href="http://enunciate.codehaus.org">Enunciate</a>.
 */
package org.opendaylight.controller.sal.core;

/**
 * (no documentation provided)
 */
@javax.xml.bind.annotation.XmlType (
  name = "capabilities",
  namespace = ""
)
@javax.xml.bind.annotation.XmlRootElement (
  name = "capabilities",
  namespace = ""
)
public class Capabilities extends org.opendaylight.controller.sal.core.Property {

  private int _capabilitiesValue;

  /**
   * (no documentation provided)
   */
  @javax.xml.bind.annotation.XmlElement (
    name = "capabilitiesValue",
    namespace = ""
  )
  public int getCapabilitiesValue() {
    return this._capabilitiesValue;
  }

  /**
   * (no documentation provided)
   */
  public void setCapabilitiesValue(int _capabilitiesValue) {
    this._capabilitiesValue = _capabilitiesValue;
  }

}