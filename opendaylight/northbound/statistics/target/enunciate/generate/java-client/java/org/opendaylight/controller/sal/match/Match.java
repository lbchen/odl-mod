/**
 * 
 *
 * Generated by <a href="http://enunciate.codehaus.org">Enunciate</a>.
 */
package org.opendaylight.controller.sal.match;

/**
 * (no documentation provided)
 */
@javax.xml.bind.annotation.XmlType (
  name = "match",
  namespace = ""
)
@javax.xml.bind.annotation.XmlRootElement (
  name = "match",
  namespace = ""
)
public class Match implements java.io.Serializable {

  private java.util.List<org.opendaylight.controller.sal.match.MatchField> _matchFields;

  /**
   * (no documentation provided)
   */
  @javax.xml.bind.annotation.XmlElement (
    name = "matchField",
    namespace = ""
  )
  public java.util.List<org.opendaylight.controller.sal.match.MatchField> getMatchFields() {
    return this._matchFields;
  }

  /**
   * (no documentation provided)
   */
  public void setMatchFields(java.util.List<org.opendaylight.controller.sal.match.MatchField> _matchFields) {
    this._matchFields = _matchFields;
  }

}
