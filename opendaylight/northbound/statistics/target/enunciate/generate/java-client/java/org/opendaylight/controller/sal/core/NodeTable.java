/**
 * 
 *
 * Generated by <a href="http://enunciate.codehaus.org">Enunciate</a>.
 */
package org.opendaylight.controller.sal.core;

/**
 * (no documentation provided)
 */
@javax.xml.bind.annotation.XmlType (
  name = "nodeTable",
  namespace = ""
)
@javax.xml.bind.annotation.XmlRootElement (
  name = "nodeTable",
  namespace = ""
)
public class NodeTable implements java.io.Serializable {

  private java.lang.String _nodeTableIDString;
  private org.opendaylight.controller.sal.core.Node _nodeTableNode;

  /**
   * (no documentation provided)
   */
  @javax.xml.bind.annotation.XmlAttribute (
    name = "id",
    namespace = "",
    required = false
  )
  public java.lang.String getNodeTableIDString() {
    return this._nodeTableIDString;
  }

  /**
   * (no documentation provided)
   */
  public void setNodeTableIDString(java.lang.String _nodeTableIDString) {
    this._nodeTableIDString = _nodeTableIDString;
  }

  /**
   * (no documentation provided)
   */
  @javax.xml.bind.annotation.XmlElement (
    name = "node",
    namespace = ""
  )
  public org.opendaylight.controller.sal.core.Node getNodeTableNode() {
    return this._nodeTableNode;
  }

  /**
   * (no documentation provided)
   */
  public void setNodeTableNode(org.opendaylight.controller.sal.core.Node _nodeTableNode) {
    this._nodeTableNode = _nodeTableNode;
  }

}
