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
public class SetNwTos extends org.opendaylight.controller.sal.action.json.Action {

  @JsonIgnore
  private int _tos;

  /**
   * (no documentation provided)
   */
  @JsonProperty("tos")
  public int getTos() {
    return this._tos;
  }

  /**
   * (no documentation provided)
   */
  @JsonProperty("tos")
  public void setTos(int _tos) {
    this._tos = _tos;
  }
}
