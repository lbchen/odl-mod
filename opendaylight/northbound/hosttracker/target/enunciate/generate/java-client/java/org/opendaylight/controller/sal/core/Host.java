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
  name = "host",
  namespace = ""
)
@javax.xml.bind.annotation.XmlRootElement (
  name = "host",
  namespace = ""
)
public class Host implements java.io.Serializable {

  private java.lang.String _networkAddressAsString;
  private org.opendaylight.controller.sal.packet.address.DataLinkAddress _dataLayerAddress;

  /**
   * (no documentation provided)
   */
  @javax.xml.bind.annotation.XmlElement (
    name = "networkAddress",
    namespace = ""
  )
  public java.lang.String getNetworkAddressAsString() {
    return this._networkAddressAsString;
  }

  /**
   * (no documentation provided)
   */
  public void setNetworkAddressAsString(java.lang.String _networkAddressAsString) {
    this._networkAddressAsString = _networkAddressAsString;
  }

  /**
   * (no documentation provided)
   */
  @javax.xml.bind.annotation.XmlElement (
    name = "dataLayerAddress",
    namespace = ""
  )
  public org.opendaylight.controller.sal.packet.address.DataLinkAddress getDataLayerAddress() {
    return this._dataLayerAddress;
  }

  /**
   * (no documentation provided)
   */
  public void setDataLayerAddress(org.opendaylight.controller.sal.packet.address.DataLinkAddress _dataLayerAddress) {
    this._dataLayerAddress = _dataLayerAddress;
  }

}
