/**
 * 
 *
 * Generated by <a href="http://enunciate.codehaus.org">Enunciate</a>.
 */
package org.opendaylight.controller.statistics.northbound.json;

import org.codehaus.jackson.annotate.*;

/**
 * (no documentation provided)
 */
public class TableStatistics implements java.io.Serializable {

  @JsonIgnore
  private org.opendaylight.controller.sal.core.json.Node _node;
  @JsonIgnore
  private java.util.List<org.opendaylight.controller.sal.reader.json.NodeTableStatistics> _tableStats;

  /**
   * (no documentation provided)
   */
  @JsonProperty("node")
  public org.opendaylight.controller.sal.core.json.Node getNode() {
    return this._node;
  }

  /**
   * (no documentation provided)
   */
  @JsonProperty("node")
  public void setNode(org.opendaylight.controller.sal.core.json.Node _node) {
    this._node = _node;
  }

  /**
   * (no documentation provided)
   */
  @JsonProperty("tableStat")
  public java.util.List<org.opendaylight.controller.sal.reader.json.NodeTableStatistics> getTableStats() {
    return this._tableStats;
  }

  /**
   * (no documentation provided)
   */
  @JsonProperty("tableStat")
  public void setTableStats(java.util.List<org.opendaylight.controller.sal.reader.json.NodeTableStatistics> _tableStats) {
    this._tableStats = _tableStats;
  }
}
