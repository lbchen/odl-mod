/**
 * 
 *
 * Generated by <a href="http://enunciate.codehaus.org">Enunciate</a>.
 */
package org.opendaylight.controller.samples.loadbalancer.entities;

/**
 * (no documentation provided)
 */
@javax.xml.bind.annotation.XmlType (
  name = "pool",
  namespace = ""
)
@javax.xml.bind.annotation.XmlRootElement (
  name = "pool",
  namespace = ""
)
public class Pool implements java.io.Serializable {

  private java.lang.String _status;
  private java.lang.String _name;
  private java.lang.String _lbMethod;
  private java.util.List<org.opendaylight.controller.samples.loadbalancer.entities.PoolMember> _members;
  private java.util.List<org.opendaylight.controller.samples.loadbalancer.entities.VIP> _vips;

  /**
   * (no documentation provided)
   */
  @javax.xml.bind.annotation.XmlElement (
    name = "status",
    namespace = ""
  )
  public java.lang.String getStatus() {
    return this._status;
  }

  /**
   * (no documentation provided)
   */
  public void setStatus(java.lang.String _status) {
    this._status = _status;
  }

  /**
   * (no documentation provided)
   */
  @javax.xml.bind.annotation.XmlElement (
    name = "name",
    namespace = ""
  )
  public java.lang.String getName() {
    return this._name;
  }

  /**
   * (no documentation provided)
   */
  public void setName(java.lang.String _name) {
    this._name = _name;
  }

  /**
   * (no documentation provided)
   */
  @javax.xml.bind.annotation.XmlElement (
    name = "lbmethod",
    namespace = ""
  )
  public java.lang.String getLbMethod() {
    return this._lbMethod;
  }

  /**
   * (no documentation provided)
   */
  public void setLbMethod(java.lang.String _lbMethod) {
    this._lbMethod = _lbMethod;
  }

  /**
   * (no documentation provided)
   */
  @javax.xml.bind.annotation.XmlElement (
    name = "members",
    namespace = ""
  )
  public java.util.List<org.opendaylight.controller.samples.loadbalancer.entities.PoolMember> getMembers() {
    return this._members;
  }

  /**
   * (no documentation provided)
   */
  public void setMembers(java.util.List<org.opendaylight.controller.samples.loadbalancer.entities.PoolMember> _members) {
    this._members = _members;
  }

  /**
   * (no documentation provided)
   */
  @javax.xml.bind.annotation.XmlElement (
    name = "vips",
    namespace = ""
  )
  public java.util.List<org.opendaylight.controller.samples.loadbalancer.entities.VIP> getVips() {
    return this._vips;
  }

  /**
   * (no documentation provided)
   */
  public void setVips(java.util.List<org.opendaylight.controller.samples.loadbalancer.entities.VIP> _vips) {
    this._vips = _vips;
  }

}