/**
 * 
 *
 * Generated by <a href="http://enunciate.codehaus.org">Enunciate</a>.
 */
package org.opendaylight.controller.topology.northbound;

/**
 * (no documentation provided)
 */
@javax.xml.bind.annotation.XmlType (
  name = "topologyUserLinks",
  namespace = ""
)
@javax.xml.bind.annotation.XmlRootElement (
  name = "topologyUserLinks",
  namespace = ""
)
public class TopologyUserLinks implements java.io.Serializable {

  private java.util.List<org.opendaylight.controller.topologymanager.TopologyUserLinkConfig> _userLinks;

  /**
   * (no documentation provided)
   */
  @javax.xml.bind.annotation.XmlElement (
    name = "userLinks",
    namespace = ""
  )
  public java.util.List<org.opendaylight.controller.topologymanager.TopologyUserLinkConfig> getUserLinks() {
    return this._userLinks;
  }

  /**
   * (no documentation provided)
   */
  public void setUserLinks(java.util.List<org.opendaylight.controller.topologymanager.TopologyUserLinkConfig> _userLinks) {
    this._userLinks = _userLinks;
  }

}