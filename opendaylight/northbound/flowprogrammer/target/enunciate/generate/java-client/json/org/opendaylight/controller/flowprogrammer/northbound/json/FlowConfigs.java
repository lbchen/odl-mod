/**
 * 
 *
 * Generated by <a href="http://enunciate.codehaus.org">Enunciate</a>.
 */
package org.opendaylight.controller.flowprogrammer.northbound.json;

import org.codehaus.jackson.annotate.*;

/**
 * (no documentation provided)
 */
public class FlowConfigs implements java.io.Serializable {

  @JsonIgnore
  private java.util.List<org.opendaylight.controller.forwardingrulesmanager.json.FlowConfig> _flowConfig;

  /**
   * (no documentation provided)
   */
  @JsonProperty("flowConfig")
  public java.util.List<org.opendaylight.controller.forwardingrulesmanager.json.FlowConfig> getFlowConfig() {
    return this._flowConfig;
  }

  /**
   * (no documentation provided)
   */
  @JsonProperty("flowConfig")
  public void setFlowConfig(java.util.List<org.opendaylight.controller.forwardingrulesmanager.json.FlowConfig> _flowConfig) {
    this._flowConfig = _flowConfig;
  }
}
