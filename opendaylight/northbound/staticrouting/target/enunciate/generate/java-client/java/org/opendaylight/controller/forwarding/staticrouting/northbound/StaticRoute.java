/**
 * 
 *
 * Generated by <a href="http://enunciate.codehaus.org">Enunciate</a>.
 */
package org.opendaylight.controller.forwarding.staticrouting.northbound;

/**
 * (no documentation provided)
 */
@javax.xml.bind.annotation.XmlType (
  name = "staticRoute",
  namespace = ""
)
@javax.xml.bind.annotation.XmlRootElement (
  name = "staticRoute",
  namespace = ""
)
public class StaticRoute implements java.io.Serializable {

  private java.lang.String _name;
  private java.lang.String _prefix;
  private java.lang.String _nextHop;

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
    name = "prefix",
    namespace = ""
  )
  public java.lang.String getPrefix() {
    return this._prefix;
  }

  /**
   * (no documentation provided)
   */
  public void setPrefix(java.lang.String _prefix) {
    this._prefix = _prefix;
  }

  /**
   * (no documentation provided)
   */
  @javax.xml.bind.annotation.XmlElement (
    name = "nextHop",
    namespace = ""
  )
  public java.lang.String getNextHop() {
    return this._nextHop;
  }

  /**
   * (no documentation provided)
   */
  public void setNextHop(java.lang.String _nextHop) {
    this._nextHop = _nextHop;
  }

}