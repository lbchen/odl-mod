/**
 * 
 *
 * Generated by <a href="http://enunciate.codehaus.org">Enunciate</a>.
 */
package org.opendaylight.controller.sal.core.json;

import org.codehaus.jackson.annotate.*;

/**
 * (no documentation provided)
 */
public class Host implements java.io.Serializable {

  @JsonIgnore
  private java.lang.String _networkAddressAsString;
  @JsonIgnore
  private org.opendaylight.controller.sal.packet.address.json.DataLinkAddress _dataLayerAddress;

  /**
   * (no documentation provided)
   */
  @JsonProperty("networkAddress")
  public java.lang.String getNetworkAddressAsString() {
    return this._networkAddressAsString;
  }

  /**
   * (no documentation provided)
   */
  @JsonProperty("networkAddress")
  public void setNetworkAddressAsString(java.lang.String _networkAddressAsString) {
    this._networkAddressAsString = _networkAddressAsString;
  }

  /**
   * (no documentation provided)
   */
  @JsonProperty("dataLayerAddress")
  public org.opendaylight.controller.sal.packet.address.json.DataLinkAddress getDataLayerAddress() {
    return this._dataLayerAddress;
  }

  /**
   * (no documentation provided)
   */
  @JsonProperty("dataLayerAddress")
  public void setDataLayerAddress(org.opendaylight.controller.sal.packet.address.json.DataLinkAddress _dataLayerAddress) {
    this._dataLayerAddress = _dataLayerAddress;
  }
}
