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
public class Capabilities extends org.opendaylight.controller.sal.core.json.Property {

  @JsonIgnore
  private int _capabilitiesValue;

  /**
   * (no documentation provided)
   */
  @JsonProperty("capabilitiesValue")
  public int getCapabilitiesValue() {
    return this._capabilitiesValue;
  }

  /**
   * (no documentation provided)
   */
  @JsonProperty("capabilitiesValue")
  public void setCapabilitiesValue(int _capabilitiesValue) {
    this._capabilitiesValue = _capabilitiesValue;
  }
}