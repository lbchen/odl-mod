/**
 * 
 *
 * Generated by <a href="http://enunciate.codehaus.org">Enunciate</a>.
 */
package org.opendaylight.controller.samples.loadbalancer.entities.json;

import org.codehaus.jackson.annotate.*;

/**
 * (no documentation provided)
 */
public class PoolMember implements java.io.Serializable {

  @JsonIgnore
  private java.lang.String _poolName;
  @JsonIgnore
  private java.lang.String _ip;
  @JsonIgnore
  private java.lang.String _status;
  @JsonIgnore
  private java.lang.String _name;

  /**
   * (no documentation provided)
   */
  @JsonProperty("poolname")
  public java.lang.String getPoolName() {
    return this._poolName;
  }

  /**
   * (no documentation provided)
   */
  @JsonProperty("poolname")
  public void setPoolName(java.lang.String _poolName) {
    this._poolName = _poolName;
  }

  /**
   * (no documentation provided)
   */
  @JsonProperty("ip")
  public java.lang.String getIp() {
    return this._ip;
  }

  /**
   * (no documentation provided)
   */
  @JsonProperty("ip")
  public void setIp(java.lang.String _ip) {
    this._ip = _ip;
  }

  /**
   * (no documentation provided)
   */
  @JsonProperty("status")
  public java.lang.String getStatus() {
    return this._status;
  }

  /**
   * (no documentation provided)
   */
  @JsonProperty("status")
  public void setStatus(java.lang.String _status) {
    this._status = _status;
  }

  /**
   * (no documentation provided)
   */
  @JsonProperty("name")
  public java.lang.String getName() {
    return this._name;
  }

  /**
   * (no documentation provided)
   */
  @JsonProperty("name")
  public void setName(java.lang.String _name) {
    this._name = _name;
  }
}