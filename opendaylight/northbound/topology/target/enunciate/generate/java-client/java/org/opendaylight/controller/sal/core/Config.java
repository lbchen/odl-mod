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
  name = "config",
  namespace = ""
)
@javax.xml.bind.annotation.XmlRootElement (
  name = "config",
  namespace = ""
)
public class Config extends org.opendaylight.controller.sal.core.Property {

  private short _configValue;

  /**
   * (no documentation provided)
   */
  @javax.xml.bind.annotation.XmlElement (
    name = "configValue",
    namespace = ""
  )
  public short getConfigValue() {
    return this._configValue;
  }

  /**
   * (no documentation provided)
   */
  public void setConfigValue(short _configValue) {
    this._configValue = _configValue;
  }

}