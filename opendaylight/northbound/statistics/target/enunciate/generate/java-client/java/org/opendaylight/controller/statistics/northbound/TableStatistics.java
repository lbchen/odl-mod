/**
 * 
 *
 * Generated by <a href="http://enunciate.codehaus.org">Enunciate</a>.
 */
package org.opendaylight.controller.statistics.northbound;

/**
 * (no documentation provided)
 */
@javax.xml.bind.annotation.XmlType (
  name = "tableStatistics",
  namespace = ""
)
@javax.xml.bind.annotation.XmlRootElement (
  name = "tableStatistics",
  namespace = ""
)
public class TableStatistics implements java.io.Serializable {

  private org.opendaylight.controller.sal.core.Node _node;
  private java.util.List<org.opendaylight.controller.sal.reader.NodeTableStatistics> _tableStats;

  /**
   * (no documentation provided)
   */
  @javax.xml.bind.annotation.XmlElement (
    name = "node",
    namespace = ""
  )
  public org.opendaylight.controller.sal.core.Node getNode() {
    return this._node;
  }

  /**
   * (no documentation provided)
   */
  public void setNode(org.opendaylight.controller.sal.core.Node _node) {
    this._node = _node;
  }

  /**
   * (no documentation provided)
   */
  @javax.xml.bind.annotation.XmlElement (
    name = "tableStat",
    namespace = ""
  )
  public java.util.List<org.opendaylight.controller.sal.reader.NodeTableStatistics> getTableStats() {
    return this._tableStats;
  }

  /**
   * (no documentation provided)
   */
  public void setTableStats(java.util.List<org.opendaylight.controller.sal.reader.NodeTableStatistics> _tableStats) {
    this._tableStats = _tableStats;
  }

}