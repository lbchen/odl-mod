/**
 * 
 *
 * Generated by <a href="http://enunciate.codehaus.org">Enunciate</a>.
 */
package org.opendaylight.controller.sal.action.json;

import org.codehaus.jackson.annotate.*;

/**
 * (no documentation provided)
 */
public class SetDlDst extends org.opendaylight.controller.sal.action.json.Action {

  @JsonIgnore
  private java.lang.String _dlAddressString;

  /**
   * (no documentation provided)
   */
  @JsonProperty("address")
  public java.lang.String getDlAddressString() {
    return this._dlAddressString;
  }

  /**
   * (no documentation provided)
   */
  @JsonProperty("address")
  public void setDlAddressString(java.lang.String _dlAddressString) {
    this._dlAddressString = _dlAddressString;
  }
}
