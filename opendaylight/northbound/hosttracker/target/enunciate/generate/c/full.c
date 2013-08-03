#include <enunciate-common.c>
#ifndef DEF_full_ns0_hostNodeConnector_H
#define DEF_full_ns0_hostNodeConnector_H

/**
 * (no documentation provided)
 */
struct full_ns0_hostNodeConnector {


  /**
   * (no documentation provided)
   */
  xmlChar *networkAddressAsString;

  /**
   * (no documentation provided)
   */
  struct full_ns0_dataLinkAddress *dataLayerAddress;

  /**
   * (no documentation provided)
   */
  short vlan;

  /**
   * (no documentation provided)
   */
  struct full_ns0_nodeConnector *nodeConnector;

  /**
   * (no documentation provided)
   */
  int staticHost;
};

/**
 * Reads a HostNodeConnector element from XML. The element to be read is "host", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The HostNodeConnector, or NULL in case of error.
 */
struct full_ns0_hostNodeConnector *xml_read_full_ns0_hostNodeConnector(xmlTextReaderPtr reader);

/**
 * Writes a HostNodeConnector to XML under element name "host".
 *
 * @param writer The XML writer.
 * @param _hostNodeConnector The HostNodeConnector to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
int xml_write_full_ns0_hostNodeConnector(xmlTextWriterPtr writer, struct full_ns0_hostNodeConnector *_hostNodeConnector);

/**
 * Frees a HostNodeConnector.
 *
 * @param _hostNodeConnector The HostNodeConnector to free.
 */
void free_full_ns0_hostNodeConnector(struct full_ns0_hostNodeConnector *_hostNodeConnector);

/**
 * Reads a HostNodeConnector element from XML. The element to be read is "host", and
 * it is assumed that the reader is already pointing to the element.
 *
 * @param reader The XML reader.
 * @return The HostNodeConnector, or NULL in case of error.
 */
struct full_ns0_hostNodeConnector *xmlTextReaderReadNs0HostElement(xmlTextReaderPtr reader);

/**
 * Writes a HostNodeConnector to XML under element name "host".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _hostNodeConnector The HostNodeConnector to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0HostElement(xmlTextWriterPtr writer, struct full_ns0_hostNodeConnector *_hostNodeConnector);

/**
 * Writes a HostNodeConnector to XML under element name "host".
 *
 * @param writer The XML writer.
 * @param _hostNodeConnector The HostNodeConnector to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0HostElementNS(xmlTextWriterPtr writer, struct full_ns0_hostNodeConnector *_hostNodeConnector, int writeNamespaces);

/**
 * Frees the children of a HostNodeConnector.
 *
 * @param _hostNodeConnector The HostNodeConnector whose children are to be free.
 */
static void freeNs0HostElement(struct full_ns0_hostNodeConnector *_hostNodeConnector);

/**
 * Reads a HostNodeConnector from XML. The reader is assumed to be at the start element.
 *
 * @param reader The XML reader.
 * @return The HostNodeConnector, or NULL in case of error.
 */
static struct full_ns0_hostNodeConnector *xmlTextReaderReadNs0HostNodeConnectorType(xmlTextReaderPtr reader);

/**
 * Writes a HostNodeConnector to XML.
 *
 * @param writer The XML writer.
 * @param _hostNodeConnector The HostNodeConnector to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0HostNodeConnectorType(xmlTextWriterPtr writer, struct full_ns0_hostNodeConnector *_hostNodeConnector);

/**
 * Frees the elements of a HostNodeConnector.
 *
 * @param _hostNodeConnector The HostNodeConnector to free.
 */
static void freeNs0HostNodeConnectorType(struct full_ns0_hostNodeConnector *_hostNodeConnector);

#endif /* DEF_full_ns0_hostNodeConnector_H */
#ifndef DEF_full_ns0_hosts_H
#define DEF_full_ns0_hosts_H

/**
 * (no documentation provided)
 */
struct full_ns0_hosts {


  /**
   * (no documentation provided)
   */
  struct full_ns0_hostNodeConnector *hostNodeConnector;

  /**
   * Size of the hostNodeConnector array.
   */
  int _sizeof_hostNodeConnector;
};

/**
 * Reads a Hosts element from XML. The element to be read is "hosts", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The Hosts, or NULL in case of error.
 */
struct full_ns0_hosts *xml_read_full_ns0_hosts(xmlTextReaderPtr reader);

/**
 * Writes a Hosts to XML under element name "hosts".
 *
 * @param writer The XML writer.
 * @param _hosts The Hosts to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
int xml_write_full_ns0_hosts(xmlTextWriterPtr writer, struct full_ns0_hosts *_hosts);

/**
 * Frees a Hosts.
 *
 * @param _hosts The Hosts to free.
 */
void free_full_ns0_hosts(struct full_ns0_hosts *_hosts);

/**
 * Reads a Hosts element from XML. The element to be read is "hosts", and
 * it is assumed that the reader is already pointing to the element.
 *
 * @param reader The XML reader.
 * @return The Hosts, or NULL in case of error.
 */
struct full_ns0_hosts *xmlTextReaderReadNs0HostsElement(xmlTextReaderPtr reader);

/**
 * Writes a Hosts to XML under element name "hosts".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _hosts The Hosts to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0HostsElement(xmlTextWriterPtr writer, struct full_ns0_hosts *_hosts);

/**
 * Writes a Hosts to XML under element name "hosts".
 *
 * @param writer The XML writer.
 * @param _hosts The Hosts to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0HostsElementNS(xmlTextWriterPtr writer, struct full_ns0_hosts *_hosts, int writeNamespaces);

/**
 * Frees the children of a Hosts.
 *
 * @param _hosts The Hosts whose children are to be free.
 */
static void freeNs0HostsElement(struct full_ns0_hosts *_hosts);

/**
 * Reads a Hosts from XML. The reader is assumed to be at the start element.
 *
 * @param reader The XML reader.
 * @return The Hosts, or NULL in case of error.
 */
static struct full_ns0_hosts *xmlTextReaderReadNs0HostsType(xmlTextReaderPtr reader);

/**
 * Writes a Hosts to XML.
 *
 * @param writer The XML writer.
 * @param _hosts The Hosts to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0HostsType(xmlTextWriterPtr writer, struct full_ns0_hosts *_hosts);

/**
 * Frees the elements of a Hosts.
 *
 * @param _hosts The Hosts to free.
 */
static void freeNs0HostsType(struct full_ns0_hosts *_hosts);

#endif /* DEF_full_ns0_hosts_H */
#ifndef DEF_full_ns0_host_H
#define DEF_full_ns0_host_H

/**
 * (no documentation provided)
 */
struct full_ns0_host {


  /**
   * (no documentation provided)
   */
  xmlChar *networkAddressAsString;

  /**
   * (no documentation provided)
   */
  struct full_ns0_dataLinkAddress *dataLayerAddress;
};

/**
 * Reads a Host element from XML. The element to be read is "host", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The Host, or NULL in case of error.
 */
struct full_ns0_host *xml_read_full_ns0_host(xmlTextReaderPtr reader);

/**
 * Writes a Host to XML under element name "host".
 *
 * @param writer The XML writer.
 * @param _host The Host to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
int xml_write_full_ns0_host(xmlTextWriterPtr writer, struct full_ns0_host *_host);

/**
 * Frees a Host.
 *
 * @param _host The Host to free.
 */
void free_full_ns0_host(struct full_ns0_host *_host);

/**
 * Reads a Host element from XML. The element to be read is "host", and
 * it is assumed that the reader is already pointing to the element.
 *
 * @param reader The XML reader.
 * @return The Host, or NULL in case of error.
 */
struct full_ns0_host *xmlTextReaderReadNs0HostElement(xmlTextReaderPtr reader);

/**
 * Writes a Host to XML under element name "host".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _host The Host to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0HostElement(xmlTextWriterPtr writer, struct full_ns0_host *_host);

/**
 * Writes a Host to XML under element name "host".
 *
 * @param writer The XML writer.
 * @param _host The Host to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0HostElementNS(xmlTextWriterPtr writer, struct full_ns0_host *_host, int writeNamespaces);

/**
 * Frees the children of a Host.
 *
 * @param _host The Host whose children are to be free.
 */
static void freeNs0HostElement(struct full_ns0_host *_host);

/**
 * Reads a Host from XML. The reader is assumed to be at the start element.
 *
 * @param reader The XML reader.
 * @return The Host, or NULL in case of error.
 */
static struct full_ns0_host *xmlTextReaderReadNs0HostType(xmlTextReaderPtr reader);

/**
 * Writes a Host to XML.
 *
 * @param writer The XML writer.
 * @param _host The Host to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0HostType(xmlTextWriterPtr writer, struct full_ns0_host *_host);

/**
 * Frees the elements of a Host.
 *
 * @param _host The Host to free.
 */
static void freeNs0HostType(struct full_ns0_host *_host);

#endif /* DEF_full_ns0_host_H */
#ifndef DEF_full_ns0_node_H
#define DEF_full_ns0_node_H

/**
 * (no documentation provided)
 */
struct full_ns0_node {


  /**
   * (no documentation provided)
   */
  xmlChar *nodeIDString;

  /**
   * (no documentation provided)
   */
  xmlChar *type;
};

/**
 * Reads a Node element from XML. The element to be read is "node", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The Node, or NULL in case of error.
 */
struct full_ns0_node *xml_read_full_ns0_node(xmlTextReaderPtr reader);

/**
 * Writes a Node to XML under element name "node".
 *
 * @param writer The XML writer.
 * @param _node The Node to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
int xml_write_full_ns0_node(xmlTextWriterPtr writer, struct full_ns0_node *_node);

/**
 * Frees a Node.
 *
 * @param _node The Node to free.
 */
void free_full_ns0_node(struct full_ns0_node *_node);

/**
 * Reads a Node element from XML. The element to be read is "node", and
 * it is assumed that the reader is already pointing to the element.
 *
 * @param reader The XML reader.
 * @return The Node, or NULL in case of error.
 */
struct full_ns0_node *xmlTextReaderReadNs0NodeElement(xmlTextReaderPtr reader);

/**
 * Writes a Node to XML under element name "node".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _node The Node to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0NodeElement(xmlTextWriterPtr writer, struct full_ns0_node *_node);

/**
 * Writes a Node to XML under element name "node".
 *
 * @param writer The XML writer.
 * @param _node The Node to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0NodeElementNS(xmlTextWriterPtr writer, struct full_ns0_node *_node, int writeNamespaces);

/**
 * Frees the children of a Node.
 *
 * @param _node The Node whose children are to be free.
 */
static void freeNs0NodeElement(struct full_ns0_node *_node);

/**
 * Reads a Node from XML. The reader is assumed to be at the start element.
 *
 * @param reader The XML reader.
 * @return The Node, or NULL in case of error.
 */
static struct full_ns0_node *xmlTextReaderReadNs0NodeType(xmlTextReaderPtr reader);

/**
 * Writes a Node to XML.
 *
 * @param writer The XML writer.
 * @param _node The Node to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0NodeType(xmlTextWriterPtr writer, struct full_ns0_node *_node);

/**
 * Frees the elements of a Node.
 *
 * @param _node The Node to free.
 */
static void freeNs0NodeType(struct full_ns0_node *_node);

#endif /* DEF_full_ns0_node_H */
#ifndef DEF_full_ns0_nodeConnector_H
#define DEF_full_ns0_nodeConnector_H

/**
 * (no documentation provided)
 */
struct full_ns0_nodeConnector {


  /**
   * (no documentation provided)
   */
  xmlChar *nodeConnectorIDString;

  /**
   * (no documentation provided)
   */
  xmlChar *type;

  /**
   * (no documentation provided)
   */
  struct full_ns0_node *nodeConnectorNode;
};

/**
 * Reads a NodeConnector element from XML. The element to be read is "nodeConnector", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The NodeConnector, or NULL in case of error.
 */
struct full_ns0_nodeConnector *xml_read_full_ns0_nodeConnector(xmlTextReaderPtr reader);

/**
 * Writes a NodeConnector to XML under element name "nodeConnector".
 *
 * @param writer The XML writer.
 * @param _nodeConnector The NodeConnector to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
int xml_write_full_ns0_nodeConnector(xmlTextWriterPtr writer, struct full_ns0_nodeConnector *_nodeConnector);

/**
 * Frees a NodeConnector.
 *
 * @param _nodeConnector The NodeConnector to free.
 */
void free_full_ns0_nodeConnector(struct full_ns0_nodeConnector *_nodeConnector);

/**
 * Reads a NodeConnector element from XML. The element to be read is "nodeConnector", and
 * it is assumed that the reader is already pointing to the element.
 *
 * @param reader The XML reader.
 * @return The NodeConnector, or NULL in case of error.
 */
struct full_ns0_nodeConnector *xmlTextReaderReadNs0NodeConnectorElement(xmlTextReaderPtr reader);

/**
 * Writes a NodeConnector to XML under element name "nodeConnector".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _nodeConnector The NodeConnector to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0NodeConnectorElement(xmlTextWriterPtr writer, struct full_ns0_nodeConnector *_nodeConnector);

/**
 * Writes a NodeConnector to XML under element name "nodeConnector".
 *
 * @param writer The XML writer.
 * @param _nodeConnector The NodeConnector to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0NodeConnectorElementNS(xmlTextWriterPtr writer, struct full_ns0_nodeConnector *_nodeConnector, int writeNamespaces);

/**
 * Frees the children of a NodeConnector.
 *
 * @param _nodeConnector The NodeConnector whose children are to be free.
 */
static void freeNs0NodeConnectorElement(struct full_ns0_nodeConnector *_nodeConnector);

/**
 * Reads a NodeConnector from XML. The reader is assumed to be at the start element.
 *
 * @param reader The XML reader.
 * @return The NodeConnector, or NULL in case of error.
 */
static struct full_ns0_nodeConnector *xmlTextReaderReadNs0NodeConnectorType(xmlTextReaderPtr reader);

/**
 * Writes a NodeConnector to XML.
 *
 * @param writer The XML writer.
 * @param _nodeConnector The NodeConnector to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0NodeConnectorType(xmlTextWriterPtr writer, struct full_ns0_nodeConnector *_nodeConnector);

/**
 * Frees the elements of a NodeConnector.
 *
 * @param _nodeConnector The NodeConnector to free.
 */
static void freeNs0NodeConnectorType(struct full_ns0_nodeConnector *_nodeConnector);

#endif /* DEF_full_ns0_nodeConnector_H */
#ifndef DEF_full_ns0_ethernetAddress_H
#define DEF_full_ns0_ethernetAddress_H

/**
 * (no documentation provided)
 */
struct full_ns0_ethernetAddress {


  /**
   * (no documentation provided)
   */
  xmlChar *macAddress;
};

/**
 * Reads a EthernetAddress element from XML. The element to be read is "ethernetAddress", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The EthernetAddress, or NULL in case of error.
 */
struct full_ns0_ethernetAddress *xml_read_full_ns0_ethernetAddress(xmlTextReaderPtr reader);

/**
 * Writes a EthernetAddress to XML under element name "ethernetAddress".
 *
 * @param writer The XML writer.
 * @param _ethernetAddress The EthernetAddress to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
int xml_write_full_ns0_ethernetAddress(xmlTextWriterPtr writer, struct full_ns0_ethernetAddress *_ethernetAddress);

/**
 * Frees a EthernetAddress.
 *
 * @param _ethernetAddress The EthernetAddress to free.
 */
void free_full_ns0_ethernetAddress(struct full_ns0_ethernetAddress *_ethernetAddress);

/**
 * Reads a EthernetAddress element from XML. The element to be read is "ethernetAddress", and
 * it is assumed that the reader is already pointing to the element.
 *
 * @param reader The XML reader.
 * @return The EthernetAddress, or NULL in case of error.
 */
struct full_ns0_ethernetAddress *xmlTextReaderReadNs0EthernetAddressElement(xmlTextReaderPtr reader);

/**
 * Writes a EthernetAddress to XML under element name "ethernetAddress".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _ethernetAddress The EthernetAddress to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0EthernetAddressElement(xmlTextWriterPtr writer, struct full_ns0_ethernetAddress *_ethernetAddress);

/**
 * Writes a EthernetAddress to XML under element name "ethernetAddress".
 *
 * @param writer The XML writer.
 * @param _ethernetAddress The EthernetAddress to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0EthernetAddressElementNS(xmlTextWriterPtr writer, struct full_ns0_ethernetAddress *_ethernetAddress, int writeNamespaces);

/**
 * Frees the children of a EthernetAddress.
 *
 * @param _ethernetAddress The EthernetAddress whose children are to be free.
 */
static void freeNs0EthernetAddressElement(struct full_ns0_ethernetAddress *_ethernetAddress);

/**
 * Reads a EthernetAddress from XML. The reader is assumed to be at the start element.
 *
 * @param reader The XML reader.
 * @return The EthernetAddress, or NULL in case of error.
 */
static struct full_ns0_ethernetAddress *xmlTextReaderReadNs0EthernetAddressType(xmlTextReaderPtr reader);

/**
 * Writes a EthernetAddress to XML.
 *
 * @param writer The XML writer.
 * @param _ethernetAddress The EthernetAddress to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0EthernetAddressType(xmlTextWriterPtr writer, struct full_ns0_ethernetAddress *_ethernetAddress);

/**
 * Frees the elements of a EthernetAddress.
 *
 * @param _ethernetAddress The EthernetAddress to free.
 */
static void freeNs0EthernetAddressType(struct full_ns0_ethernetAddress *_ethernetAddress);

#endif /* DEF_full_ns0_ethernetAddress_H */
#ifndef DEF_full_ns0_hostNodeConnector_M
#define DEF_full_ns0_hostNodeConnector_M

/**
 * Reads a HostNodeConnector element from XML. The element to be read is "host", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The HostNodeConnector, or NULL in case of error.
 */
struct full_ns0_hostNodeConnector *xml_read_full_ns0_hostNodeConnector(xmlTextReaderPtr reader) {
  int status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
  return xmlTextReaderReadNs0HostElement(reader);
}

/**
 * Writes a HostNodeConnector to XML under element name "host".
 *
 * @param writer The XML writer.
 * @param _hostNodeConnector The HostNodeConnector to write.
 * @return 1 if successful, 0 otherwise.
 */
int xml_write_full_ns0_hostNodeConnector(xmlTextWriterPtr writer, struct full_ns0_hostNodeConnector *_hostNodeConnector) {
  return xmlTextWriterWriteNs0HostElementNS(writer, _hostNodeConnector, 1);
}

/**
 * Frees a HostNodeConnector.
 *
 * @param _hostNodeConnector The HostNodeConnector to free.
 */
void free_full_ns0_hostNodeConnector(struct full_ns0_hostNodeConnector *_hostNodeConnector) {
  freeNs0HostNodeConnectorType(_hostNodeConnector);
  free(_hostNodeConnector);
}

/**
 * Reads a HostNodeConnector element from XML. The element to be read is "host", and
 * it is assumed that the reader is pointing to that element.
 *
 * @param reader The XML reader.
 * @return The HostNodeConnector, or NULL in case of error.
 */
struct full_ns0_hostNodeConnector *xmlTextReaderReadNs0HostElement(xmlTextReaderPtr reader) {
  struct full_ns0_hostNodeConnector *_hostNodeConnector = NULL;

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "host", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Attempting to read root element {}host.\n");
#endif
    _hostNodeConnector = xmlTextReaderReadNs0HostNodeConnectorType(reader);
  }
#if DEBUG_ENUNCIATE
  if (_hostNodeConnector == NULL) {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      printf("attempt to read {}host failed. current element: {}%s\n",  xmlTextReaderConstLocalName(reader));
    }
    else {
      printf("attempt to read {}host failed. current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
    }
  }
#endif

  return _hostNodeConnector;
}

/**
 * Writes a HostNodeConnector to XML under element name "host".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _hostNodeConnector The HostNodeConnector to write.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0HostElement(xmlTextWriterPtr writer, struct full_ns0_hostNodeConnector *_hostNodeConnector) {
  return xmlTextWriterWriteNs0HostElementNS(writer, _hostNodeConnector, 0);
}

/**
 * Writes a HostNodeConnector to XML under element name "host".
 *
 * @param writer The XML writer.
 * @param _hostNodeConnector The HostNodeConnector to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0HostElementNS(xmlTextWriterPtr writer, struct full_ns0_hostNodeConnector *_hostNodeConnector, int writeNamespaces) {
  int totalBytes = 0;
  int status;

  status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "host", NULL);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write start element {}host. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

#if DEBUG_ENUNCIATE > 1
  printf("writing type {}hostNodeConnector for root element {}host...\n");
#endif
  status = xmlTextWriterWriteNs0HostNodeConnectorType(writer, _hostNodeConnector);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write type for start element {}host. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  status = xmlTextWriterEndElement(writer);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to end element {}host. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  return totalBytes;
}

/**
 * Frees the children of a HostNodeConnector.
 *
 * @param _hostNodeConnector The HostNodeConnector whose children are to be free.
 */
static void freeNs0HostElement(struct full_ns0_hostNodeConnector *_hostNodeConnector) {
  freeNs0HostNodeConnectorType(_hostNodeConnector);
}

/**
 * Reads a HostNodeConnector from XML. The reader is assumed to be at the start element.
 *
 * @return the HostNodeConnector, or NULL in case of error.
 */
static struct full_ns0_hostNodeConnector *xmlTextReaderReadNs0HostNodeConnectorType(xmlTextReaderPtr reader) {
  int status, depth;
  void *_child_accessor;
  struct full_ns0_hostNodeConnector *_hostNodeConnector = calloc(1, sizeof(struct full_ns0_hostNodeConnector));



  if (xmlTextReaderIsEmptyElement(reader) == 0) {
    depth = xmlTextReaderDepth(reader);//track the depth.
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);

    while (xmlTextReaderDepth(reader) > depth) {
      if (status < 1) {
        //panic: XML read error.
#if DEBUG_ENUNCIATE
        printf("Failure to advance to next child element.\n");
#endif
        freeNs0HostNodeConnectorType(_hostNodeConnector);
        free(_hostNodeConnector);
        return NULL;
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "networkAddress", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}networkAddress of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}networkAddress of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0HostNodeConnectorType(_hostNodeConnector);
          free(_hostNodeConnector);
          return NULL;
        }

        _hostNodeConnector->networkAddressAsString = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "dataLayerAddress", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}dataLayerAddress of type {}dataLinkAddress.\n");
#endif
        _child_accessor = xmlTextReaderReadNs0DataLinkAddressType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}dataLayerAddress of type {}dataLinkAddress.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0HostNodeConnectorType(_hostNodeConnector);
          free(_hostNodeConnector);
          return NULL;
        }

        _hostNodeConnector->dataLayerAddress = ((struct full_ns0_dataLinkAddress*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "vlan", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}vlan of type {http://www.w3.org/2001/XMLSchema}short.\n");
#endif
        _child_accessor = xmlTextReaderReadXsShortType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}vlan of type {http://www.w3.org/2001/XMLSchema}short.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0HostNodeConnectorType(_hostNodeConnector);
          free(_hostNodeConnector);
          return NULL;
        }

        _hostNodeConnector->vlan = *((short*)_child_accessor);
        free(_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "nodeConnector", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}nodeConnector of type {}nodeConnector.\n");
#endif
        _child_accessor = xmlTextReaderReadNs0NodeConnectorType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}nodeConnector of type {}nodeConnector.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0HostNodeConnectorType(_hostNodeConnector);
          free(_hostNodeConnector);
          return NULL;
        }

        _hostNodeConnector->nodeConnector = ((struct full_ns0_nodeConnector*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "staticHost", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}staticHost of type {http://www.w3.org/2001/XMLSchema}boolean.\n");
#endif
        _child_accessor = xmlTextReaderReadXsBooleanType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}staticHost of type {http://www.w3.org/2001/XMLSchema}boolean.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0HostNodeConnectorType(_hostNodeConnector);
          free(_hostNodeConnector);
          return NULL;
        }

        _hostNodeConnector->staticHost = *((int*)_child_accessor);
        free(_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else {
#if DEBUG_ENUNCIATE > 1
        if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
          printf("unknown child element {}%s for type {}hostNodeConnector.  Skipping...\n",  xmlTextReaderConstLocalName(reader));
        }
        else {
          printf("unknown child element {%s}%s for type {}hostNodeConnector. Skipping...\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
        }
#endif
        status = xmlTextReaderSkipElement(reader);
      }
    }
  }

  return _hostNodeConnector;
}

/**
 * Writes a HostNodeConnector to XML.
 *
 * @param writer The XML writer.
 * @param _hostNodeConnector The HostNodeConnector to write.
 * @return The total bytes written, or -1 on error;
 */
static int xmlTextWriterWriteNs0HostNodeConnectorType(xmlTextWriterPtr writer, struct full_ns0_hostNodeConnector *_hostNodeConnector) {
  int status, totalBytes = 0, i;
  xmlChar *binaryData;
  if (_hostNodeConnector->networkAddressAsString != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "networkAddress", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}networkAddress. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}networkAddress...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_hostNodeConnector->networkAddressAsString));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}networkAddress. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}networkAddress. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_hostNodeConnector->dataLayerAddress != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "dataLayerAddress", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}dataLayerAddress. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {}dataLinkAddress for element {}dataLayerAddress...\n");
#endif
    status = xmlTextWriterWriteNs0DataLinkAddressType(writer, (_hostNodeConnector->dataLayerAddress));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {}dataLinkAddress for element {}dataLayerAddress. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}dataLayerAddress. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (1) { //always write the primitive element.
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "vlan", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}vlan. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}short for element {}vlan...\n");
#endif
    status = xmlTextWriterWriteXsShortType(writer, &(_hostNodeConnector->vlan));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}short for element {}vlan. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}vlan. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_hostNodeConnector->nodeConnector != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "nodeConnector", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}nodeConnector. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {}nodeConnector for element {}nodeConnector...\n");
#endif
    status = xmlTextWriterWriteNs0NodeConnectorType(writer, (_hostNodeConnector->nodeConnector));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {}nodeConnector for element {}nodeConnector. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}nodeConnector. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (1) { //always write the primitive element.
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "staticHost", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}staticHost. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}boolean for element {}staticHost...\n");
#endif
    status = xmlTextWriterWriteXsBooleanType(writer, &(_hostNodeConnector->staticHost));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}boolean for element {}staticHost. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}staticHost. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }

  return totalBytes;
}

/**
 * Frees the elements of a HostNodeConnector.
 *
 * @param _hostNodeConnector The HostNodeConnector to free.
 */
static void freeNs0HostNodeConnectorType(struct full_ns0_hostNodeConnector *_hostNodeConnector) {
  int i;
  if (_hostNodeConnector->networkAddressAsString != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor networkAddressAsString of type full_ns0_hostNodeConnector...\n");
#endif
    freeXsStringType(_hostNodeConnector->networkAddressAsString);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor networkAddressAsString of type full_ns0_hostNodeConnector...\n");
#endif
    free(_hostNodeConnector->networkAddressAsString);
  }
  if (_hostNodeConnector->dataLayerAddress != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor dataLayerAddress of type full_ns0_hostNodeConnector...\n");
#endif
    freeNs0DataLinkAddressType(_hostNodeConnector->dataLayerAddress);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor dataLayerAddress of type full_ns0_hostNodeConnector...\n");
#endif
    free(_hostNodeConnector->dataLayerAddress);
  }
  if (_hostNodeConnector->nodeConnector != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor nodeConnector of type full_ns0_hostNodeConnector...\n");
#endif
    freeNs0NodeConnectorType(_hostNodeConnector->nodeConnector);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor nodeConnector of type full_ns0_hostNodeConnector...\n");
#endif
    free(_hostNodeConnector->nodeConnector);
  }
}
#endif /* DEF_full_ns0_hostNodeConnector_M */
#ifndef DEF_full_ns0_hosts_M
#define DEF_full_ns0_hosts_M

/**
 * Reads a Hosts element from XML. The element to be read is "hosts", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The Hosts, or NULL in case of error.
 */
struct full_ns0_hosts *xml_read_full_ns0_hosts(xmlTextReaderPtr reader) {
  int status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
  return xmlTextReaderReadNs0HostsElement(reader);
}

/**
 * Writes a Hosts to XML under element name "hosts".
 *
 * @param writer The XML writer.
 * @param _hosts The Hosts to write.
 * @return 1 if successful, 0 otherwise.
 */
int xml_write_full_ns0_hosts(xmlTextWriterPtr writer, struct full_ns0_hosts *_hosts) {
  return xmlTextWriterWriteNs0HostsElementNS(writer, _hosts, 1);
}

/**
 * Frees a Hosts.
 *
 * @param _hosts The Hosts to free.
 */
void free_full_ns0_hosts(struct full_ns0_hosts *_hosts) {
  freeNs0HostsType(_hosts);
  free(_hosts);
}

/**
 * Reads a Hosts element from XML. The element to be read is "hosts", and
 * it is assumed that the reader is pointing to that element.
 *
 * @param reader The XML reader.
 * @return The Hosts, or NULL in case of error.
 */
struct full_ns0_hosts *xmlTextReaderReadNs0HostsElement(xmlTextReaderPtr reader) {
  struct full_ns0_hosts *_hosts = NULL;

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "hosts", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Attempting to read root element {}hosts.\n");
#endif
    _hosts = xmlTextReaderReadNs0HostsType(reader);
  }
#if DEBUG_ENUNCIATE
  if (_hosts == NULL) {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      printf("attempt to read {}hosts failed. current element: {}%s\n",  xmlTextReaderConstLocalName(reader));
    }
    else {
      printf("attempt to read {}hosts failed. current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
    }
  }
#endif

  return _hosts;
}

/**
 * Writes a Hosts to XML under element name "hosts".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _hosts The Hosts to write.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0HostsElement(xmlTextWriterPtr writer, struct full_ns0_hosts *_hosts) {
  return xmlTextWriterWriteNs0HostsElementNS(writer, _hosts, 0);
}

/**
 * Writes a Hosts to XML under element name "hosts".
 *
 * @param writer The XML writer.
 * @param _hosts The Hosts to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0HostsElementNS(xmlTextWriterPtr writer, struct full_ns0_hosts *_hosts, int writeNamespaces) {
  int totalBytes = 0;
  int status;

  status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "hosts", NULL);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write start element {}hosts. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

#if DEBUG_ENUNCIATE > 1
  printf("writing type {}hosts for root element {}hosts...\n");
#endif
  status = xmlTextWriterWriteNs0HostsType(writer, _hosts);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write type for start element {}hosts. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  status = xmlTextWriterEndElement(writer);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to end element {}hosts. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  return totalBytes;
}

/**
 * Frees the children of a Hosts.
 *
 * @param _hosts The Hosts whose children are to be free.
 */
static void freeNs0HostsElement(struct full_ns0_hosts *_hosts) {
  freeNs0HostsType(_hosts);
}

/**
 * Reads a Hosts from XML. The reader is assumed to be at the start element.
 *
 * @return the Hosts, or NULL in case of error.
 */
static struct full_ns0_hosts *xmlTextReaderReadNs0HostsType(xmlTextReaderPtr reader) {
  int status, depth;
  void *_child_accessor;
  struct full_ns0_hosts *_hosts = calloc(1, sizeof(struct full_ns0_hosts));



  if (xmlTextReaderIsEmptyElement(reader) == 0) {
    depth = xmlTextReaderDepth(reader);//track the depth.
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);

    while (xmlTextReaderDepth(reader) > depth) {
      if (status < 1) {
        //panic: XML read error.
#if DEBUG_ENUNCIATE
        printf("Failure to advance to next child element.\n");
#endif
        freeNs0HostsType(_hosts);
        free(_hosts);
        return NULL;
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "host", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}host of type {}hostNodeConnector.\n");
#endif
        _child_accessor = xmlTextReaderReadNs0HostNodeConnectorType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}host of type {}hostNodeConnector.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0HostsType(_hosts);
          free(_hosts);
          return NULL;
        }

        _hosts->hostNodeConnector = realloc(_hosts->hostNodeConnector, (_hosts->_sizeof_hostNodeConnector + 1) * sizeof(struct full_ns0_hostNodeConnector));
        memcpy(&(_hosts->hostNodeConnector[_hosts->_sizeof_hostNodeConnector++]), _child_accessor, sizeof(struct full_ns0_hostNodeConnector));
        free(_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else {
#if DEBUG_ENUNCIATE > 1
        if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
          printf("unknown child element {}%s for type {}hosts.  Skipping...\n",  xmlTextReaderConstLocalName(reader));
        }
        else {
          printf("unknown child element {%s}%s for type {}hosts. Skipping...\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
        }
#endif
        status = xmlTextReaderSkipElement(reader);
      }
    }
  }

  return _hosts;
}

/**
 * Writes a Hosts to XML.
 *
 * @param writer The XML writer.
 * @param _hosts The Hosts to write.
 * @return The total bytes written, or -1 on error;
 */
static int xmlTextWriterWriteNs0HostsType(xmlTextWriterPtr writer, struct full_ns0_hosts *_hosts) {
  int status, totalBytes = 0, i;
  xmlChar *binaryData;
  for (i = 0; i < _hosts->_sizeof_hostNodeConnector; i++) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "host", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}host. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {}hostNodeConnector for element {}host...\n");
#endif
    status = xmlTextWriterWriteNs0HostNodeConnectorType(writer, &(_hosts->hostNodeConnector[i]));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {}hostNodeConnector for element {}host. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}host. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }

  return totalBytes;
}

/**
 * Frees the elements of a Hosts.
 *
 * @param _hosts The Hosts to free.
 */
static void freeNs0HostsType(struct full_ns0_hosts *_hosts) {
  int i;
  if (_hosts->hostNodeConnector != NULL) {
    for (i = 0; i < _hosts->_sizeof_hostNodeConnector; i++) {
#if DEBUG_ENUNCIATE > 1
      printf("Freeing accessor hostNodeConnector[%i] of type full_ns0_hosts...\n", i);
#endif
      freeNs0HostNodeConnectorType(&(_hosts->hostNodeConnector[i]));
    }
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor hostNodeConnector of type full_ns0_hosts...\n");
#endif
    free(_hosts->hostNodeConnector);
  }
}
#endif /* DEF_full_ns0_hosts_M */
#ifndef DEF_full_ns0_host_M
#define DEF_full_ns0_host_M

/**
 * Reads a Host element from XML. The element to be read is "host", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The Host, or NULL in case of error.
 */
struct full_ns0_host *xml_read_full_ns0_host(xmlTextReaderPtr reader) {
  int status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
  return xmlTextReaderReadNs0HostElement(reader);
}

/**
 * Writes a Host to XML under element name "host".
 *
 * @param writer The XML writer.
 * @param _host The Host to write.
 * @return 1 if successful, 0 otherwise.
 */
int xml_write_full_ns0_host(xmlTextWriterPtr writer, struct full_ns0_host *_host) {
  return xmlTextWriterWriteNs0HostElementNS(writer, _host, 1);
}

/**
 * Frees a Host.
 *
 * @param _host The Host to free.
 */
void free_full_ns0_host(struct full_ns0_host *_host) {
  freeNs0HostType(_host);
  free(_host);
}

/**
 * Reads a Host element from XML. The element to be read is "host", and
 * it is assumed that the reader is pointing to that element.
 *
 * @param reader The XML reader.
 * @return The Host, or NULL in case of error.
 */
struct full_ns0_host *xmlTextReaderReadNs0HostElement(xmlTextReaderPtr reader) {
  struct full_ns0_host *_host = NULL;

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "host", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Attempting to read root element {}host.\n");
#endif
    _host = xmlTextReaderReadNs0HostType(reader);
  }
#if DEBUG_ENUNCIATE
  if (_host == NULL) {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      printf("attempt to read {}host failed. current element: {}%s\n",  xmlTextReaderConstLocalName(reader));
    }
    else {
      printf("attempt to read {}host failed. current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
    }
  }
#endif

  return _host;
}

/**
 * Writes a Host to XML under element name "host".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _host The Host to write.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0HostElement(xmlTextWriterPtr writer, struct full_ns0_host *_host) {
  return xmlTextWriterWriteNs0HostElementNS(writer, _host, 0);
}

/**
 * Writes a Host to XML under element name "host".
 *
 * @param writer The XML writer.
 * @param _host The Host to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0HostElementNS(xmlTextWriterPtr writer, struct full_ns0_host *_host, int writeNamespaces) {
  int totalBytes = 0;
  int status;

  status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "host", NULL);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write start element {}host. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

#if DEBUG_ENUNCIATE > 1
  printf("writing type {}host for root element {}host...\n");
#endif
  status = xmlTextWriterWriteNs0HostType(writer, _host);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write type for start element {}host. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  status = xmlTextWriterEndElement(writer);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to end element {}host. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  return totalBytes;
}

/**
 * Frees the children of a Host.
 *
 * @param _host The Host whose children are to be free.
 */
static void freeNs0HostElement(struct full_ns0_host *_host) {
  freeNs0HostType(_host);
}

/**
 * Reads a Host from XML. The reader is assumed to be at the start element.
 *
 * @return the Host, or NULL in case of error.
 */
static struct full_ns0_host *xmlTextReaderReadNs0HostType(xmlTextReaderPtr reader) {
  int status, depth;
  void *_child_accessor;
  struct full_ns0_host *_host = calloc(1, sizeof(struct full_ns0_host));



  if (xmlTextReaderIsEmptyElement(reader) == 0) {
    depth = xmlTextReaderDepth(reader);//track the depth.
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);

    while (xmlTextReaderDepth(reader) > depth) {
      if (status < 1) {
        //panic: XML read error.
#if DEBUG_ENUNCIATE
        printf("Failure to advance to next child element.\n");
#endif
        freeNs0HostType(_host);
        free(_host);
        return NULL;
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "networkAddress", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}networkAddress of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}networkAddress of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0HostType(_host);
          free(_host);
          return NULL;
        }

        _host->networkAddressAsString = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "dataLayerAddress", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}dataLayerAddress of type {}dataLinkAddress.\n");
#endif
        _child_accessor = xmlTextReaderReadNs0DataLinkAddressType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}dataLayerAddress of type {}dataLinkAddress.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0HostType(_host);
          free(_host);
          return NULL;
        }

        _host->dataLayerAddress = ((struct full_ns0_dataLinkAddress*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else {
#if DEBUG_ENUNCIATE > 1
        if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
          printf("unknown child element {}%s for type {}host.  Skipping...\n",  xmlTextReaderConstLocalName(reader));
        }
        else {
          printf("unknown child element {%s}%s for type {}host. Skipping...\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
        }
#endif
        status = xmlTextReaderSkipElement(reader);
      }
    }
  }

  return _host;
}

/**
 * Writes a Host to XML.
 *
 * @param writer The XML writer.
 * @param _host The Host to write.
 * @return The total bytes written, or -1 on error;
 */
static int xmlTextWriterWriteNs0HostType(xmlTextWriterPtr writer, struct full_ns0_host *_host) {
  int status, totalBytes = 0, i;
  xmlChar *binaryData;
  if (_host->networkAddressAsString != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "networkAddress", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}networkAddress. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}networkAddress...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_host->networkAddressAsString));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}networkAddress. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}networkAddress. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_host->dataLayerAddress != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "dataLayerAddress", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}dataLayerAddress. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {}dataLinkAddress for element {}dataLayerAddress...\n");
#endif
    status = xmlTextWriterWriteNs0DataLinkAddressType(writer, (_host->dataLayerAddress));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {}dataLinkAddress for element {}dataLayerAddress. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}dataLayerAddress. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }

  return totalBytes;
}

/**
 * Frees the elements of a Host.
 *
 * @param _host The Host to free.
 */
static void freeNs0HostType(struct full_ns0_host *_host) {
  int i;
  if (_host->networkAddressAsString != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor networkAddressAsString of type full_ns0_host...\n");
#endif
    freeXsStringType(_host->networkAddressAsString);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor networkAddressAsString of type full_ns0_host...\n");
#endif
    free(_host->networkAddressAsString);
  }
  if (_host->dataLayerAddress != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor dataLayerAddress of type full_ns0_host...\n");
#endif
    freeNs0DataLinkAddressType(_host->dataLayerAddress);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor dataLayerAddress of type full_ns0_host...\n");
#endif
    free(_host->dataLayerAddress);
  }
}
#endif /* DEF_full_ns0_host_M */
#ifndef DEF_full_ns0_node_M
#define DEF_full_ns0_node_M

/**
 * Reads a Node element from XML. The element to be read is "node", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The Node, or NULL in case of error.
 */
struct full_ns0_node *xml_read_full_ns0_node(xmlTextReaderPtr reader) {
  int status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
  return xmlTextReaderReadNs0NodeElement(reader);
}

/**
 * Writes a Node to XML under element name "node".
 *
 * @param writer The XML writer.
 * @param _node The Node to write.
 * @return 1 if successful, 0 otherwise.
 */
int xml_write_full_ns0_node(xmlTextWriterPtr writer, struct full_ns0_node *_node) {
  return xmlTextWriterWriteNs0NodeElementNS(writer, _node, 1);
}

/**
 * Frees a Node.
 *
 * @param _node The Node to free.
 */
void free_full_ns0_node(struct full_ns0_node *_node) {
  freeNs0NodeType(_node);
  free(_node);
}

/**
 * Reads a Node element from XML. The element to be read is "node", and
 * it is assumed that the reader is pointing to that element.
 *
 * @param reader The XML reader.
 * @return The Node, or NULL in case of error.
 */
struct full_ns0_node *xmlTextReaderReadNs0NodeElement(xmlTextReaderPtr reader) {
  struct full_ns0_node *_node = NULL;

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "node", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Attempting to read root element {}node.\n");
#endif
    _node = xmlTextReaderReadNs0NodeType(reader);
  }
#if DEBUG_ENUNCIATE
  if (_node == NULL) {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      printf("attempt to read {}node failed. current element: {}%s\n",  xmlTextReaderConstLocalName(reader));
    }
    else {
      printf("attempt to read {}node failed. current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
    }
  }
#endif

  return _node;
}

/**
 * Writes a Node to XML under element name "node".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _node The Node to write.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0NodeElement(xmlTextWriterPtr writer, struct full_ns0_node *_node) {
  return xmlTextWriterWriteNs0NodeElementNS(writer, _node, 0);
}

/**
 * Writes a Node to XML under element name "node".
 *
 * @param writer The XML writer.
 * @param _node The Node to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0NodeElementNS(xmlTextWriterPtr writer, struct full_ns0_node *_node, int writeNamespaces) {
  int totalBytes = 0;
  int status;

  status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "node", NULL);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write start element {}node. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

#if DEBUG_ENUNCIATE > 1
  printf("writing type {}node for root element {}node...\n");
#endif
  status = xmlTextWriterWriteNs0NodeType(writer, _node);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write type for start element {}node. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  status = xmlTextWriterEndElement(writer);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to end element {}node. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  return totalBytes;
}

/**
 * Frees the children of a Node.
 *
 * @param _node The Node whose children are to be free.
 */
static void freeNs0NodeElement(struct full_ns0_node *_node) {
  freeNs0NodeType(_node);
}

/**
 * Reads a Node from XML. The reader is assumed to be at the start element.
 *
 * @return the Node, or NULL in case of error.
 */
static struct full_ns0_node *xmlTextReaderReadNs0NodeType(xmlTextReaderPtr reader) {
  int status, depth;
  void *_child_accessor;
  struct full_ns0_node *_node = calloc(1, sizeof(struct full_ns0_node));

  if (xmlTextReaderHasAttributes(reader)) {
    while (xmlTextReaderMoveToNextAttribute(reader)) {
      if ((xmlStrcmp(BAD_CAST "id", xmlTextReaderConstLocalName(reader)) == 0) && (xmlTextReaderConstNamespaceUri(reader) == NULL)) {
#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read type {http://www.w3.org/2001/XMLSchema}string from attribute {}id...\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
          //panic: unable to return the attribute value for some reason.
#if DEBUG_ENUNCIATE
          printf("Failed to read attribute {}id of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          freeNs0NodeType(_node);
          free(_node);
          return NULL;
        }
        _node->nodeIDString = ((xmlChar*)_child_accessor);
        continue;
      }
      if ((xmlStrcmp(BAD_CAST "type", xmlTextReaderConstLocalName(reader)) == 0) && (xmlTextReaderConstNamespaceUri(reader) == NULL)) {
#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read type {http://www.w3.org/2001/XMLSchema}string from attribute {}type...\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
          //panic: unable to return the attribute value for some reason.
#if DEBUG_ENUNCIATE
          printf("Failed to read attribute {}type of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          freeNs0NodeType(_node);
          free(_node);
          return NULL;
        }
        _node->type = ((xmlChar*)_child_accessor);
        continue;
      }
    }

    status = xmlTextReaderMoveToElement(reader);
    if (status < 1) {
      //panic: unable to return to the element node.
#if DEBUG_ENUNCIATE
      printf("Unable to return to element node from attributes.\n");
#endif
      freeNs0NodeType(_node);
      free(_node);
      return NULL;
    }
  }



  return _node;
}

/**
 * Writes a Node to XML.
 *
 * @param writer The XML writer.
 * @param _node The Node to write.
 * @return The total bytes written, or -1 on error;
 */
static int xmlTextWriterWriteNs0NodeType(xmlTextWriterPtr writer, struct full_ns0_node *_node) {
  int status, totalBytes = 0, i;
  xmlChar *binaryData;

  if (_node->nodeIDString != NULL) {
    status = xmlTextWriterStartAttributeNS(writer, NULL, BAD_CAST "id", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start attribute {}id. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for attribute {}id...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_node->nodeIDString));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for attribute {}id. status: %i", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndAttribute(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end attribute {}id. status: %i", status);
#endif
      return status;
    }
    totalBytes += status;
  }

  if (_node->type != NULL) {
    status = xmlTextWriterStartAttributeNS(writer, NULL, BAD_CAST "type", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start attribute {}type. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for attribute {}type...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_node->type));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for attribute {}type. status: %i", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndAttribute(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end attribute {}type. status: %i", status);
#endif
      return status;
    }
    totalBytes += status;
  }

  return totalBytes;
}

/**
 * Frees the elements of a Node.
 *
 * @param _node The Node to free.
 */
static void freeNs0NodeType(struct full_ns0_node *_node) {
  int i;
  if (_node->nodeIDString != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor nodeIDString of type full_ns0_node...\n");
#endif
    freeXsStringType(_node->nodeIDString);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor nodeIDString of type full_ns0_node...\n");
#endif
    free(_node->nodeIDString);
  }
  if (_node->type != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor type of type full_ns0_node...\n");
#endif
    freeXsStringType(_node->type);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor type of type full_ns0_node...\n");
#endif
    free(_node->type);
  }
}
#endif /* DEF_full_ns0_node_M */
#ifndef DEF_full_ns0_nodeConnector_M
#define DEF_full_ns0_nodeConnector_M

/**
 * Reads a NodeConnector element from XML. The element to be read is "nodeConnector", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The NodeConnector, or NULL in case of error.
 */
struct full_ns0_nodeConnector *xml_read_full_ns0_nodeConnector(xmlTextReaderPtr reader) {
  int status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
  return xmlTextReaderReadNs0NodeConnectorElement(reader);
}

/**
 * Writes a NodeConnector to XML under element name "nodeConnector".
 *
 * @param writer The XML writer.
 * @param _nodeConnector The NodeConnector to write.
 * @return 1 if successful, 0 otherwise.
 */
int xml_write_full_ns0_nodeConnector(xmlTextWriterPtr writer, struct full_ns0_nodeConnector *_nodeConnector) {
  return xmlTextWriterWriteNs0NodeConnectorElementNS(writer, _nodeConnector, 1);
}

/**
 * Frees a NodeConnector.
 *
 * @param _nodeConnector The NodeConnector to free.
 */
void free_full_ns0_nodeConnector(struct full_ns0_nodeConnector *_nodeConnector) {
  freeNs0NodeConnectorType(_nodeConnector);
  free(_nodeConnector);
}

/**
 * Reads a NodeConnector element from XML. The element to be read is "nodeConnector", and
 * it is assumed that the reader is pointing to that element.
 *
 * @param reader The XML reader.
 * @return The NodeConnector, or NULL in case of error.
 */
struct full_ns0_nodeConnector *xmlTextReaderReadNs0NodeConnectorElement(xmlTextReaderPtr reader) {
  struct full_ns0_nodeConnector *_nodeConnector = NULL;

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "nodeConnector", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Attempting to read root element {}nodeConnector.\n");
#endif
    _nodeConnector = xmlTextReaderReadNs0NodeConnectorType(reader);
  }
#if DEBUG_ENUNCIATE
  if (_nodeConnector == NULL) {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      printf("attempt to read {}nodeConnector failed. current element: {}%s\n",  xmlTextReaderConstLocalName(reader));
    }
    else {
      printf("attempt to read {}nodeConnector failed. current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
    }
  }
#endif

  return _nodeConnector;
}

/**
 * Writes a NodeConnector to XML under element name "nodeConnector".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _nodeConnector The NodeConnector to write.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0NodeConnectorElement(xmlTextWriterPtr writer, struct full_ns0_nodeConnector *_nodeConnector) {
  return xmlTextWriterWriteNs0NodeConnectorElementNS(writer, _nodeConnector, 0);
}

/**
 * Writes a NodeConnector to XML under element name "nodeConnector".
 *
 * @param writer The XML writer.
 * @param _nodeConnector The NodeConnector to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0NodeConnectorElementNS(xmlTextWriterPtr writer, struct full_ns0_nodeConnector *_nodeConnector, int writeNamespaces) {
  int totalBytes = 0;
  int status;

  status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "nodeConnector", NULL);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write start element {}nodeConnector. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

#if DEBUG_ENUNCIATE > 1
  printf("writing type {}nodeConnector for root element {}nodeConnector...\n");
#endif
  status = xmlTextWriterWriteNs0NodeConnectorType(writer, _nodeConnector);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write type for start element {}nodeConnector. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  status = xmlTextWriterEndElement(writer);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to end element {}nodeConnector. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  return totalBytes;
}

/**
 * Frees the children of a NodeConnector.
 *
 * @param _nodeConnector The NodeConnector whose children are to be free.
 */
static void freeNs0NodeConnectorElement(struct full_ns0_nodeConnector *_nodeConnector) {
  freeNs0NodeConnectorType(_nodeConnector);
}

/**
 * Reads a NodeConnector from XML. The reader is assumed to be at the start element.
 *
 * @return the NodeConnector, or NULL in case of error.
 */
static struct full_ns0_nodeConnector *xmlTextReaderReadNs0NodeConnectorType(xmlTextReaderPtr reader) {
  int status, depth;
  void *_child_accessor;
  struct full_ns0_nodeConnector *_nodeConnector = calloc(1, sizeof(struct full_ns0_nodeConnector));

  if (xmlTextReaderHasAttributes(reader)) {
    while (xmlTextReaderMoveToNextAttribute(reader)) {
      if ((xmlStrcmp(BAD_CAST "id", xmlTextReaderConstLocalName(reader)) == 0) && (xmlTextReaderConstNamespaceUri(reader) == NULL)) {
#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read type {http://www.w3.org/2001/XMLSchema}string from attribute {}id...\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
          //panic: unable to return the attribute value for some reason.
#if DEBUG_ENUNCIATE
          printf("Failed to read attribute {}id of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          freeNs0NodeConnectorType(_nodeConnector);
          free(_nodeConnector);
          return NULL;
        }
        _nodeConnector->nodeConnectorIDString = ((xmlChar*)_child_accessor);
        continue;
      }
      if ((xmlStrcmp(BAD_CAST "type", xmlTextReaderConstLocalName(reader)) == 0) && (xmlTextReaderConstNamespaceUri(reader) == NULL)) {
#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read type {http://www.w3.org/2001/XMLSchema}string from attribute {}type...\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
          //panic: unable to return the attribute value for some reason.
#if DEBUG_ENUNCIATE
          printf("Failed to read attribute {}type of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          freeNs0NodeConnectorType(_nodeConnector);
          free(_nodeConnector);
          return NULL;
        }
        _nodeConnector->type = ((xmlChar*)_child_accessor);
        continue;
      }
    }

    status = xmlTextReaderMoveToElement(reader);
    if (status < 1) {
      //panic: unable to return to the element node.
#if DEBUG_ENUNCIATE
      printf("Unable to return to element node from attributes.\n");
#endif
      freeNs0NodeConnectorType(_nodeConnector);
      free(_nodeConnector);
      return NULL;
    }
  }


  if (xmlTextReaderIsEmptyElement(reader) == 0) {
    depth = xmlTextReaderDepth(reader);//track the depth.
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);

    while (xmlTextReaderDepth(reader) > depth) {
      if (status < 1) {
        //panic: XML read error.
#if DEBUG_ENUNCIATE
        printf("Failure to advance to next child element.\n");
#endif
        freeNs0NodeConnectorType(_nodeConnector);
        free(_nodeConnector);
        return NULL;
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "node", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}node of type {}node.\n");
#endif
        _child_accessor = xmlTextReaderReadNs0NodeType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}node of type {}node.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0NodeConnectorType(_nodeConnector);
          free(_nodeConnector);
          return NULL;
        }

        _nodeConnector->nodeConnectorNode = ((struct full_ns0_node*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else {
#if DEBUG_ENUNCIATE > 1
        if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
          printf("unknown child element {}%s for type {}nodeConnector.  Skipping...\n",  xmlTextReaderConstLocalName(reader));
        }
        else {
          printf("unknown child element {%s}%s for type {}nodeConnector. Skipping...\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
        }
#endif
        status = xmlTextReaderSkipElement(reader);
      }
    }
  }

  return _nodeConnector;
}

/**
 * Writes a NodeConnector to XML.
 *
 * @param writer The XML writer.
 * @param _nodeConnector The NodeConnector to write.
 * @return The total bytes written, or -1 on error;
 */
static int xmlTextWriterWriteNs0NodeConnectorType(xmlTextWriterPtr writer, struct full_ns0_nodeConnector *_nodeConnector) {
  int status, totalBytes = 0, i;
  xmlChar *binaryData;

  if (_nodeConnector->nodeConnectorIDString != NULL) {
    status = xmlTextWriterStartAttributeNS(writer, NULL, BAD_CAST "id", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start attribute {}id. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for attribute {}id...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_nodeConnector->nodeConnectorIDString));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for attribute {}id. status: %i", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndAttribute(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end attribute {}id. status: %i", status);
#endif
      return status;
    }
    totalBytes += status;
  }

  if (_nodeConnector->type != NULL) {
    status = xmlTextWriterStartAttributeNS(writer, NULL, BAD_CAST "type", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start attribute {}type. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for attribute {}type...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_nodeConnector->type));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for attribute {}type. status: %i", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndAttribute(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end attribute {}type. status: %i", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_nodeConnector->nodeConnectorNode != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "node", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}node. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {}node for element {}node...\n");
#endif
    status = xmlTextWriterWriteNs0NodeType(writer, (_nodeConnector->nodeConnectorNode));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {}node for element {}node. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}node. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }

  return totalBytes;
}

/**
 * Frees the elements of a NodeConnector.
 *
 * @param _nodeConnector The NodeConnector to free.
 */
static void freeNs0NodeConnectorType(struct full_ns0_nodeConnector *_nodeConnector) {
  int i;
  if (_nodeConnector->nodeConnectorIDString != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor nodeConnectorIDString of type full_ns0_nodeConnector...\n");
#endif
    freeXsStringType(_nodeConnector->nodeConnectorIDString);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor nodeConnectorIDString of type full_ns0_nodeConnector...\n");
#endif
    free(_nodeConnector->nodeConnectorIDString);
  }
  if (_nodeConnector->type != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor type of type full_ns0_nodeConnector...\n");
#endif
    freeXsStringType(_nodeConnector->type);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor type of type full_ns0_nodeConnector...\n");
#endif
    free(_nodeConnector->type);
  }
  if (_nodeConnector->nodeConnectorNode != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor nodeConnectorNode of type full_ns0_nodeConnector...\n");
#endif
    freeNs0NodeType(_nodeConnector->nodeConnectorNode);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor nodeConnectorNode of type full_ns0_nodeConnector...\n");
#endif
    free(_nodeConnector->nodeConnectorNode);
  }
}
#endif /* DEF_full_ns0_nodeConnector_M */
#ifndef DEF_full_ns0_ethernetAddress_M
#define DEF_full_ns0_ethernetAddress_M

/**
 * Reads a EthernetAddress element from XML. The element to be read is "ethernetAddress", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The EthernetAddress, or NULL in case of error.
 */
struct full_ns0_ethernetAddress *xml_read_full_ns0_ethernetAddress(xmlTextReaderPtr reader) {
  int status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
  return xmlTextReaderReadNs0EthernetAddressElement(reader);
}

/**
 * Writes a EthernetAddress to XML under element name "ethernetAddress".
 *
 * @param writer The XML writer.
 * @param _ethernetAddress The EthernetAddress to write.
 * @return 1 if successful, 0 otherwise.
 */
int xml_write_full_ns0_ethernetAddress(xmlTextWriterPtr writer, struct full_ns0_ethernetAddress *_ethernetAddress) {
  return xmlTextWriterWriteNs0EthernetAddressElementNS(writer, _ethernetAddress, 1);
}

/**
 * Frees a EthernetAddress.
 *
 * @param _ethernetAddress The EthernetAddress to free.
 */
void free_full_ns0_ethernetAddress(struct full_ns0_ethernetAddress *_ethernetAddress) {
  freeNs0EthernetAddressType(_ethernetAddress);
  free(_ethernetAddress);
}

/**
 * Reads a EthernetAddress element from XML. The element to be read is "ethernetAddress", and
 * it is assumed that the reader is pointing to that element.
 *
 * @param reader The XML reader.
 * @return The EthernetAddress, or NULL in case of error.
 */
struct full_ns0_ethernetAddress *xmlTextReaderReadNs0EthernetAddressElement(xmlTextReaderPtr reader) {
  struct full_ns0_ethernetAddress *_ethernetAddress = NULL;

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "ethernetAddress", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Attempting to read root element {}ethernetAddress.\n");
#endif
    _ethernetAddress = xmlTextReaderReadNs0EthernetAddressType(reader);
  }
#if DEBUG_ENUNCIATE
  if (_ethernetAddress == NULL) {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      printf("attempt to read {}ethernetAddress failed. current element: {}%s\n",  xmlTextReaderConstLocalName(reader));
    }
    else {
      printf("attempt to read {}ethernetAddress failed. current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
    }
  }
#endif

  return _ethernetAddress;
}

/**
 * Writes a EthernetAddress to XML under element name "ethernetAddress".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _ethernetAddress The EthernetAddress to write.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0EthernetAddressElement(xmlTextWriterPtr writer, struct full_ns0_ethernetAddress *_ethernetAddress) {
  return xmlTextWriterWriteNs0EthernetAddressElementNS(writer, _ethernetAddress, 0);
}

/**
 * Writes a EthernetAddress to XML under element name "ethernetAddress".
 *
 * @param writer The XML writer.
 * @param _ethernetAddress The EthernetAddress to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0EthernetAddressElementNS(xmlTextWriterPtr writer, struct full_ns0_ethernetAddress *_ethernetAddress, int writeNamespaces) {
  int totalBytes = 0;
  int status;

  status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "ethernetAddress", NULL);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write start element {}ethernetAddress. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

#if DEBUG_ENUNCIATE > 1
  printf("writing type {}ethernetAddress for root element {}ethernetAddress...\n");
#endif
  status = xmlTextWriterWriteNs0EthernetAddressType(writer, _ethernetAddress);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write type for start element {}ethernetAddress. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  status = xmlTextWriterEndElement(writer);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to end element {}ethernetAddress. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  return totalBytes;
}

/**
 * Frees the children of a EthernetAddress.
 *
 * @param _ethernetAddress The EthernetAddress whose children are to be free.
 */
static void freeNs0EthernetAddressElement(struct full_ns0_ethernetAddress *_ethernetAddress) {
  freeNs0EthernetAddressType(_ethernetAddress);
}

/**
 * Reads a EthernetAddress from XML. The reader is assumed to be at the start element.
 *
 * @return the EthernetAddress, or NULL in case of error.
 */
static struct full_ns0_ethernetAddress *xmlTextReaderReadNs0EthernetAddressType(xmlTextReaderPtr reader) {
  int status, depth;
  void *_child_accessor;
  struct full_ns0_ethernetAddress *_ethernetAddress = calloc(1, sizeof(struct full_ns0_ethernetAddress));



  if (xmlTextReaderIsEmptyElement(reader) == 0) {
    depth = xmlTextReaderDepth(reader);//track the depth.
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);

    while (xmlTextReaderDepth(reader) > depth) {
      if (status < 1) {
        //panic: XML read error.
#if DEBUG_ENUNCIATE
        printf("Failure to advance to next child element.\n");
#endif
        freeNs0EthernetAddressType(_ethernetAddress);
        free(_ethernetAddress);
        return NULL;
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "macAddress", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}macAddress of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}macAddress of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0EthernetAddressType(_ethernetAddress);
          free(_ethernetAddress);
          return NULL;
        }

        _ethernetAddress->macAddress = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else {
#if DEBUG_ENUNCIATE > 1
        if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
          printf("unknown child element {}%s for type {}ethernetAddress.  Skipping...\n",  xmlTextReaderConstLocalName(reader));
        }
        else {
          printf("unknown child element {%s}%s for type {}ethernetAddress. Skipping...\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
        }
#endif
        status = xmlTextReaderSkipElement(reader);
      }
    }
  }

  return _ethernetAddress;
}

/**
 * Writes a EthernetAddress to XML.
 *
 * @param writer The XML writer.
 * @param _ethernetAddress The EthernetAddress to write.
 * @return The total bytes written, or -1 on error;
 */
static int xmlTextWriterWriteNs0EthernetAddressType(xmlTextWriterPtr writer, struct full_ns0_ethernetAddress *_ethernetAddress) {
  int status, totalBytes = 0, i;
  xmlChar *binaryData;
  if (_ethernetAddress->macAddress != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "macAddress", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}macAddress. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}macAddress...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_ethernetAddress->macAddress));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}macAddress. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}macAddress. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }

  return totalBytes;
}

/**
 * Frees the elements of a EthernetAddress.
 *
 * @param _ethernetAddress The EthernetAddress to free.
 */
static void freeNs0EthernetAddressType(struct full_ns0_ethernetAddress *_ethernetAddress) {
  int i;
  if (_ethernetAddress->macAddress != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor macAddress of type full_ns0_ethernetAddress...\n");
#endif
    freeXsStringType(_ethernetAddress->macAddress);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor macAddress of type full_ns0_ethernetAddress...\n");
#endif
    free(_ethernetAddress->macAddress);
  }
}
#endif /* DEF_full_ns0_ethernetAddress_M */
