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
  name = "macAddress",
  namespace = ""
)
@javax.xml.bind.annotation.XmlRootElement (
  name = "macAddress",
  namespace = ""
)
public class MacAddress extends org.opendaylight.controller.sal.core.Property {

  private byte[] _address;

  /**
   * (no documentation provided)
   */
  @javax.xml.bind.annotation.XmlElement (
    name = "macAddress",
    namespace = ""
  )
  public byte[] getAddress() {
    return this._address;
  }

  /**
   * (no documentation provided)
   */
  public void setAddress(byte[] _address) {
    this._address = _address;
  }

}