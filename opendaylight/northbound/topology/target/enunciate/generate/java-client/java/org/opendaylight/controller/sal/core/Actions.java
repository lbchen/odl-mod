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
  name = "actions",
  namespace = ""
)
@javax.xml.bind.annotation.XmlRootElement (
  name = "actions",
  namespace = ""
)
public class Actions extends org.opendaylight.controller.sal.core.Property {

  private int _actionsValue;

  /**
   * (no documentation provided)
   */
  @javax.xml.bind.annotation.XmlElement (
    name = "actionsValue",
    namespace = ""
  )
  public int getActionsValue() {
    return this._actionsValue;
  }

  /**
   * (no documentation provided)
   */
  public void setActionsValue(int _actionsValue) {
    this._actionsValue = _actionsValue;
  }

}
