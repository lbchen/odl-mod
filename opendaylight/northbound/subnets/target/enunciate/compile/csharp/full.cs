// <auto-generated>
// 
//
// Generated by <a href="http://enunciate.codehaus.org">Enunciate</a>.
// </auto-generated>
using System;

namespace Org.Opendaylight.Controller.Subnets.Northbound {

  /// <remarks>
  ///  
  /// </remarks>
  /// <summary>
  ///  
  /// </summary>
  [System.SerializableAttribute()]
  [System.Xml.Serialization.XmlTypeAttribute(Namespace="",TypeName="subnetConfigs")]
  [System.Xml.Serialization.SoapTypeAttribute(TypeName="subnetConfigs")]
  [System.Xml.Serialization.XmlRootAttribute(Namespace="",ElementName="subnetConfigs")]
  public partial class SubnetConfigs {

    private System.Collections.Generic.List<Org.Opendaylight.Controller.Switchmanager.SubnetConfig> _subnetConfig;
    /// <summary>
    ///  (no documentation provided)
    /// </summary>
    [System.Xml.Serialization.XmlElementAttribute(ElementName="subnetConfig",Namespace="")]
    [System.Xml.Serialization.SoapElementAttribute(ElementName="subnetConfig")]
    public System.Collections.Generic.List<Org.Opendaylight.Controller.Switchmanager.SubnetConfig> SubnetConfig {
      get {
        return this._subnetConfig;
      }
      set {
        this._subnetConfig = value;
      }
    }
  }
}  
namespace Org.Opendaylight.Controller.Switchmanager {

  /// <remarks>
  ///  
  /// </remarks>
  /// <summary>
  ///  
  /// </summary>
  [System.SerializableAttribute()]
  [System.Xml.Serialization.XmlTypeAttribute(Namespace="",TypeName="subnetConfig")]
  [System.Xml.Serialization.SoapTypeAttribute(TypeName="subnetConfig")]
  [System.Xml.Serialization.XmlRootAttribute(Namespace="",ElementName="subnetConfig")]
  public partial class SubnetConfig {

    private string _name;
    private string _subnet;
    private System.Collections.Generic.List<string> _nodePorts;
    /// <summary>
    ///  (no documentation provided)
    /// </summary>
    [System.Xml.Serialization.XmlAttributeAttribute(AttributeName="name")]
    [System.Xml.Serialization.SoapAttributeAttribute(AttributeName="name")]
    public string Name {
      get {
        return this._name;
      }
      set {
        this._name = value;
      }
    }
    /// <summary>
    ///  (no documentation provided)
    /// </summary>
    [System.Xml.Serialization.XmlAttributeAttribute(AttributeName="subnet")]
    [System.Xml.Serialization.SoapAttributeAttribute(AttributeName="subnet")]
    public string Subnet {
      get {
        return this._subnet;
      }
      set {
        this._subnet = value;
      }
    }
    /// <summary>
    ///  (no documentation provided)
    /// </summary>
    [System.Xml.Serialization.XmlElementAttribute(ElementName="nodePorts",Namespace="")]
    [System.Xml.Serialization.SoapElementAttribute(ElementName="nodePorts")]
    public System.Collections.Generic.List<string> NodePorts {
      get {
        return this._nodePorts;
      }
      set {
        this._nodePorts = value;
      }
    }
  }
}  
