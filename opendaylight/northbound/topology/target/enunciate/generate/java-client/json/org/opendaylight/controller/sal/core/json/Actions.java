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
public class Actions extends org.opendaylight.controller.sal.core.json.Property {

  @JsonIgnore
  private int _actionsValue;

  /**
   * (no documentation provided)
   */
  @JsonProperty("actionsValue")
  public int getActionsValue() {
    return this._actionsValue;
  }

  /**
   * (no documentation provided)
   */
  @JsonProperty("actionsValue")
  public void setActionsValue(int _actionsValue) {
    this._actionsValue = _actionsValue;
  }
}
