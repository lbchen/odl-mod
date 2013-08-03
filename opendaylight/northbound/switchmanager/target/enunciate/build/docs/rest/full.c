#include <enunciate-common.c>
#ifndef DEF_full_ns0_actions_H
#define DEF_full_ns0_actions_H

/**
 * (no documentation provided)
 */
struct full_ns0_actions {


  /**
   * (no documentation provided)
   */
  int actionsValue;
};

/**
 * Reads a Actions element from XML. The element to be read is "actions", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The Actions, or NULL in case of error.
 */
struct full_ns0_actions *xml_read_full_ns0_actions(xmlTextReaderPtr reader);

/**
 * Writes a Actions to XML under element name "actions".
 *
 * @param writer The XML writer.
 * @param _actions The Actions to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
int xml_write_full_ns0_actions(xmlTextWriterPtr writer, struct full_ns0_actions *_actions);

/**
 * Frees a Actions.
 *
 * @param _actions The Actions to free.
 */
void free_full_ns0_actions(struct full_ns0_actions *_actions);

/**
 * Reads a Actions element from XML. The element to be read is "actions", and
 * it is assumed that the reader is already pointing to the element.
 *
 * @param reader The XML reader.
 * @return The Actions, or NULL in case of error.
 */
struct full_ns0_actions *xmlTextReaderReadNs0ActionsElement(xmlTextReaderPtr reader);

/**
 * Writes a Actions to XML under element name "actions".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _actions The Actions to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0ActionsElement(xmlTextWriterPtr writer, struct full_ns0_actions *_actions);

/**
 * Writes a Actions to XML under element name "actions".
 *
 * @param writer The XML writer.
 * @param _actions The Actions to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0ActionsElementNS(xmlTextWriterPtr writer, struct full_ns0_actions *_actions, int writeNamespaces);

/**
 * Frees the children of a Actions.
 *
 * @param _actions The Actions whose children are to be free.
 */
static void freeNs0ActionsElement(struct full_ns0_actions *_actions);

/**
 * Reads a Actions from XML. The reader is assumed to be at the start element.
 *
 * @param reader The XML reader.
 * @return The Actions, or NULL in case of error.
 */
static struct full_ns0_actions *xmlTextReaderReadNs0ActionsType(xmlTextReaderPtr reader);

/**
 * Writes a Actions to XML.
 *
 * @param writer The XML writer.
 * @param _actions The Actions to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0ActionsType(xmlTextWriterPtr writer, struct full_ns0_actions *_actions);

/**
 * Frees the elements of a Actions.
 *
 * @param _actions The Actions to free.
 */
static void freeNs0ActionsType(struct full_ns0_actions *_actions);

#endif /* DEF_full_ns0_actions_H */
#ifndef DEF_full_ns0_advertisedBandwidth_H
#define DEF_full_ns0_advertisedBandwidth_H

/**
 * (no documentation provided)
 */
struct full_ns0_advertisedBandwidth {


  /**
   * (no documentation provided)
   */
  long bandwidthValue;
};

/**
 * Reads a AdvertisedBandwidth element from XML. The element to be read is "advertisedBandwidth", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The AdvertisedBandwidth, or NULL in case of error.
 */
struct full_ns0_advertisedBandwidth *xml_read_full_ns0_advertisedBandwidth(xmlTextReaderPtr reader);

/**
 * Writes a AdvertisedBandwidth to XML under element name "advertisedBandwidth".
 *
 * @param writer The XML writer.
 * @param _advertisedBandwidth The AdvertisedBandwidth to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
int xml_write_full_ns0_advertisedBandwidth(xmlTextWriterPtr writer, struct full_ns0_advertisedBandwidth *_advertisedBandwidth);

/**
 * Frees a AdvertisedBandwidth.
 *
 * @param _advertisedBandwidth The AdvertisedBandwidth to free.
 */
void free_full_ns0_advertisedBandwidth(struct full_ns0_advertisedBandwidth *_advertisedBandwidth);

/**
 * Reads a AdvertisedBandwidth element from XML. The element to be read is "advertisedBandwidth", and
 * it is assumed that the reader is already pointing to the element.
 *
 * @param reader The XML reader.
 * @return The AdvertisedBandwidth, or NULL in case of error.
 */
struct full_ns0_advertisedBandwidth *xmlTextReaderReadNs0AdvertisedBandwidthElement(xmlTextReaderPtr reader);

/**
 * Writes a AdvertisedBandwidth to XML under element name "advertisedBandwidth".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _advertisedBandwidth The AdvertisedBandwidth to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0AdvertisedBandwidthElement(xmlTextWriterPtr writer, struct full_ns0_advertisedBandwidth *_advertisedBandwidth);

/**
 * Writes a AdvertisedBandwidth to XML under element name "advertisedBandwidth".
 *
 * @param writer The XML writer.
 * @param _advertisedBandwidth The AdvertisedBandwidth to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0AdvertisedBandwidthElementNS(xmlTextWriterPtr writer, struct full_ns0_advertisedBandwidth *_advertisedBandwidth, int writeNamespaces);

/**
 * Frees the children of a AdvertisedBandwidth.
 *
 * @param _advertisedBandwidth The AdvertisedBandwidth whose children are to be free.
 */
static void freeNs0AdvertisedBandwidthElement(struct full_ns0_advertisedBandwidth *_advertisedBandwidth);

/**
 * Reads a AdvertisedBandwidth from XML. The reader is assumed to be at the start element.
 *
 * @param reader The XML reader.
 * @return The AdvertisedBandwidth, or NULL in case of error.
 */
static struct full_ns0_advertisedBandwidth *xmlTextReaderReadNs0AdvertisedBandwidthType(xmlTextReaderPtr reader);

/**
 * Writes a AdvertisedBandwidth to XML.
 *
 * @param writer The XML writer.
 * @param _advertisedBandwidth The AdvertisedBandwidth to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0AdvertisedBandwidthType(xmlTextWriterPtr writer, struct full_ns0_advertisedBandwidth *_advertisedBandwidth);

/**
 * Frees the elements of a AdvertisedBandwidth.
 *
 * @param _advertisedBandwidth The AdvertisedBandwidth to free.
 */
static void freeNs0AdvertisedBandwidthType(struct full_ns0_advertisedBandwidth *_advertisedBandwidth);

#endif /* DEF_full_ns0_advertisedBandwidth_H */
#ifndef DEF_full_ns0_bandwidth_H
#define DEF_full_ns0_bandwidth_H

/**
 * (no documentation provided)
 */
struct full_ns0_bandwidth {


  /**
   * (no documentation provided)
   */
  long bandwidthValue;
};

/**
 * Reads a Bandwidth element from XML. The element to be read is "bandwidth", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The Bandwidth, or NULL in case of error.
 */
struct full_ns0_bandwidth *xml_read_full_ns0_bandwidth(xmlTextReaderPtr reader);

/**
 * Writes a Bandwidth to XML under element name "bandwidth".
 *
 * @param writer The XML writer.
 * @param _bandwidth The Bandwidth to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
int xml_write_full_ns0_bandwidth(xmlTextWriterPtr writer, struct full_ns0_bandwidth *_bandwidth);

/**
 * Frees a Bandwidth.
 *
 * @param _bandwidth The Bandwidth to free.
 */
void free_full_ns0_bandwidth(struct full_ns0_bandwidth *_bandwidth);

/**
 * Reads a Bandwidth element from XML. The element to be read is "bandwidth", and
 * it is assumed that the reader is already pointing to the element.
 *
 * @param reader The XML reader.
 * @return The Bandwidth, or NULL in case of error.
 */
struct full_ns0_bandwidth *xmlTextReaderReadNs0BandwidthElement(xmlTextReaderPtr reader);

/**
 * Writes a Bandwidth to XML under element name "bandwidth".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _bandwidth The Bandwidth to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0BandwidthElement(xmlTextWriterPtr writer, struct full_ns0_bandwidth *_bandwidth);

/**
 * Writes a Bandwidth to XML under element name "bandwidth".
 *
 * @param writer The XML writer.
 * @param _bandwidth The Bandwidth to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0BandwidthElementNS(xmlTextWriterPtr writer, struct full_ns0_bandwidth *_bandwidth, int writeNamespaces);

/**
 * Frees the children of a Bandwidth.
 *
 * @param _bandwidth The Bandwidth whose children are to be free.
 */
static void freeNs0BandwidthElement(struct full_ns0_bandwidth *_bandwidth);

/**
 * Reads a Bandwidth from XML. The reader is assumed to be at the start element.
 *
 * @param reader The XML reader.
 * @return The Bandwidth, or NULL in case of error.
 */
static struct full_ns0_bandwidth *xmlTextReaderReadNs0BandwidthType(xmlTextReaderPtr reader);

/**
 * Writes a Bandwidth to XML.
 *
 * @param writer The XML writer.
 * @param _bandwidth The Bandwidth to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0BandwidthType(xmlTextWriterPtr writer, struct full_ns0_bandwidth *_bandwidth);

/**
 * Frees the elements of a Bandwidth.
 *
 * @param _bandwidth The Bandwidth to free.
 */
static void freeNs0BandwidthType(struct full_ns0_bandwidth *_bandwidth);

#endif /* DEF_full_ns0_bandwidth_H */
#ifndef DEF_full_ns0_buffers_H
#define DEF_full_ns0_buffers_H

/**
 * (no documentation provided)
 */
struct full_ns0_buffers {


  /**
   * (no documentation provided)
   */
  int buffersValue;
};

/**
 * Reads a Buffers element from XML. The element to be read is "buffers", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The Buffers, or NULL in case of error.
 */
struct full_ns0_buffers *xml_read_full_ns0_buffers(xmlTextReaderPtr reader);

/**
 * Writes a Buffers to XML under element name "buffers".
 *
 * @param writer The XML writer.
 * @param _buffers The Buffers to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
int xml_write_full_ns0_buffers(xmlTextWriterPtr writer, struct full_ns0_buffers *_buffers);

/**
 * Frees a Buffers.
 *
 * @param _buffers The Buffers to free.
 */
void free_full_ns0_buffers(struct full_ns0_buffers *_buffers);

/**
 * Reads a Buffers element from XML. The element to be read is "buffers", and
 * it is assumed that the reader is already pointing to the element.
 *
 * @param reader The XML reader.
 * @return The Buffers, or NULL in case of error.
 */
struct full_ns0_buffers *xmlTextReaderReadNs0BuffersElement(xmlTextReaderPtr reader);

/**
 * Writes a Buffers to XML under element name "buffers".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _buffers The Buffers to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0BuffersElement(xmlTextWriterPtr writer, struct full_ns0_buffers *_buffers);

/**
 * Writes a Buffers to XML under element name "buffers".
 *
 * @param writer The XML writer.
 * @param _buffers The Buffers to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0BuffersElementNS(xmlTextWriterPtr writer, struct full_ns0_buffers *_buffers, int writeNamespaces);

/**
 * Frees the children of a Buffers.
 *
 * @param _buffers The Buffers whose children are to be free.
 */
static void freeNs0BuffersElement(struct full_ns0_buffers *_buffers);

/**
 * Reads a Buffers from XML. The reader is assumed to be at the start element.
 *
 * @param reader The XML reader.
 * @return The Buffers, or NULL in case of error.
 */
static struct full_ns0_buffers *xmlTextReaderReadNs0BuffersType(xmlTextReaderPtr reader);

/**
 * Writes a Buffers to XML.
 *
 * @param writer The XML writer.
 * @param _buffers The Buffers to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0BuffersType(xmlTextWriterPtr writer, struct full_ns0_buffers *_buffers);

/**
 * Frees the elements of a Buffers.
 *
 * @param _buffers The Buffers to free.
 */
static void freeNs0BuffersType(struct full_ns0_buffers *_buffers);

#endif /* DEF_full_ns0_buffers_H */
#ifndef DEF_full_ns0_capabilities_H
#define DEF_full_ns0_capabilities_H

/**
 * (no documentation provided)
 */
struct full_ns0_capabilities {


  /**
   * (no documentation provided)
   */
  int capabilitiesValue;
};

/**
 * Reads a Capabilities element from XML. The element to be read is "capabilities", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The Capabilities, or NULL in case of error.
 */
struct full_ns0_capabilities *xml_read_full_ns0_capabilities(xmlTextReaderPtr reader);

/**
 * Writes a Capabilities to XML under element name "capabilities".
 *
 * @param writer The XML writer.
 * @param _capabilities The Capabilities to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
int xml_write_full_ns0_capabilities(xmlTextWriterPtr writer, struct full_ns0_capabilities *_capabilities);

/**
 * Frees a Capabilities.
 *
 * @param _capabilities The Capabilities to free.
 */
void free_full_ns0_capabilities(struct full_ns0_capabilities *_capabilities);

/**
 * Reads a Capabilities element from XML. The element to be read is "capabilities", and
 * it is assumed that the reader is already pointing to the element.
 *
 * @param reader The XML reader.
 * @return The Capabilities, or NULL in case of error.
 */
struct full_ns0_capabilities *xmlTextReaderReadNs0CapabilitiesElement(xmlTextReaderPtr reader);

/**
 * Writes a Capabilities to XML under element name "capabilities".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _capabilities The Capabilities to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0CapabilitiesElement(xmlTextWriterPtr writer, struct full_ns0_capabilities *_capabilities);

/**
 * Writes a Capabilities to XML under element name "capabilities".
 *
 * @param writer The XML writer.
 * @param _capabilities The Capabilities to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0CapabilitiesElementNS(xmlTextWriterPtr writer, struct full_ns0_capabilities *_capabilities, int writeNamespaces);

/**
 * Frees the children of a Capabilities.
 *
 * @param _capabilities The Capabilities whose children are to be free.
 */
static void freeNs0CapabilitiesElement(struct full_ns0_capabilities *_capabilities);

/**
 * Reads a Capabilities from XML. The reader is assumed to be at the start element.
 *
 * @param reader The XML reader.
 * @return The Capabilities, or NULL in case of error.
 */
static struct full_ns0_capabilities *xmlTextReaderReadNs0CapabilitiesType(xmlTextReaderPtr reader);

/**
 * Writes a Capabilities to XML.
 *
 * @param writer The XML writer.
 * @param _capabilities The Capabilities to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0CapabilitiesType(xmlTextWriterPtr writer, struct full_ns0_capabilities *_capabilities);

/**
 * Frees the elements of a Capabilities.
 *
 * @param _capabilities The Capabilities to free.
 */
static void freeNs0CapabilitiesType(struct full_ns0_capabilities *_capabilities);

#endif /* DEF_full_ns0_capabilities_H */
#ifndef DEF_full_ns0_config_H
#define DEF_full_ns0_config_H

/**
 * (no documentation provided)
 */
struct full_ns0_config {


  /**
   * (no documentation provided)
   */
  short configValue;
};

/**
 * Reads a Config element from XML. The element to be read is "config", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The Config, or NULL in case of error.
 */
struct full_ns0_config *xml_read_full_ns0_config(xmlTextReaderPtr reader);

/**
 * Writes a Config to XML under element name "config".
 *
 * @param writer The XML writer.
 * @param _config The Config to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
int xml_write_full_ns0_config(xmlTextWriterPtr writer, struct full_ns0_config *_config);

/**
 * Frees a Config.
 *
 * @param _config The Config to free.
 */
void free_full_ns0_config(struct full_ns0_config *_config);

/**
 * Reads a Config element from XML. The element to be read is "config", and
 * it is assumed that the reader is already pointing to the element.
 *
 * @param reader The XML reader.
 * @return The Config, or NULL in case of error.
 */
struct full_ns0_config *xmlTextReaderReadNs0ConfigElement(xmlTextReaderPtr reader);

/**
 * Writes a Config to XML under element name "config".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _config The Config to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0ConfigElement(xmlTextWriterPtr writer, struct full_ns0_config *_config);

/**
 * Writes a Config to XML under element name "config".
 *
 * @param writer The XML writer.
 * @param _config The Config to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0ConfigElementNS(xmlTextWriterPtr writer, struct full_ns0_config *_config, int writeNamespaces);

/**
 * Frees the children of a Config.
 *
 * @param _config The Config whose children are to be free.
 */
static void freeNs0ConfigElement(struct full_ns0_config *_config);

/**
 * Reads a Config from XML. The reader is assumed to be at the start element.
 *
 * @param reader The XML reader.
 * @return The Config, or NULL in case of error.
 */
static struct full_ns0_config *xmlTextReaderReadNs0ConfigType(xmlTextReaderPtr reader);

/**
 * Writes a Config to XML.
 *
 * @param writer The XML writer.
 * @param _config The Config to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0ConfigType(xmlTextWriterPtr writer, struct full_ns0_config *_config);

/**
 * Frees the elements of a Config.
 *
 * @param _config The Config to free.
 */
static void freeNs0ConfigType(struct full_ns0_config *_config);

#endif /* DEF_full_ns0_config_H */
#ifndef DEF_full_ns0_latency_H
#define DEF_full_ns0_latency_H

/**
 * (no documentation provided)
 */
struct full_ns0_latency {

};

/**
 * Reads a Latency element from XML. The element to be read is "latency", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The Latency, or NULL in case of error.
 */
struct full_ns0_latency *xml_read_full_ns0_latency(xmlTextReaderPtr reader);

/**
 * Writes a Latency to XML under element name "latency".
 *
 * @param writer The XML writer.
 * @param _latency The Latency to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
int xml_write_full_ns0_latency(xmlTextWriterPtr writer, struct full_ns0_latency *_latency);

/**
 * Frees a Latency.
 *
 * @param _latency The Latency to free.
 */
void free_full_ns0_latency(struct full_ns0_latency *_latency);

/**
 * Reads a Latency element from XML. The element to be read is "latency", and
 * it is assumed that the reader is already pointing to the element.
 *
 * @param reader The XML reader.
 * @return The Latency, or NULL in case of error.
 */
struct full_ns0_latency *xmlTextReaderReadNs0LatencyElement(xmlTextReaderPtr reader);

/**
 * Writes a Latency to XML under element name "latency".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _latency The Latency to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0LatencyElement(xmlTextWriterPtr writer, struct full_ns0_latency *_latency);

/**
 * Writes a Latency to XML under element name "latency".
 *
 * @param writer The XML writer.
 * @param _latency The Latency to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0LatencyElementNS(xmlTextWriterPtr writer, struct full_ns0_latency *_latency, int writeNamespaces);

/**
 * Frees the children of a Latency.
 *
 * @param _latency The Latency whose children are to be free.
 */
static void freeNs0LatencyElement(struct full_ns0_latency *_latency);

/**
 * Reads a Latency from XML. The reader is assumed to be at the start element.
 *
 * @param reader The XML reader.
 * @return The Latency, or NULL in case of error.
 */
static struct full_ns0_latency *xmlTextReaderReadNs0LatencyType(xmlTextReaderPtr reader);

/**
 * Writes a Latency to XML.
 *
 * @param writer The XML writer.
 * @param _latency The Latency to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0LatencyType(xmlTextWriterPtr writer, struct full_ns0_latency *_latency);

/**
 * Frees the elements of a Latency.
 *
 * @param _latency The Latency to free.
 */
static void freeNs0LatencyType(struct full_ns0_latency *_latency);

#endif /* DEF_full_ns0_latency_H */
#ifndef DEF_full_ns0_macAddress_H
#define DEF_full_ns0_macAddress_H

/**
 * (no documentation provided)
 */
struct full_ns0_macAddress {


  /**
   * (no documentation provided)
   */
  unsigned char *address;

  /**
   * Size of the address data.
   */
  int _sizeof_address;
};

/**
 * Reads a MacAddress element from XML. The element to be read is "macAddress", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The MacAddress, or NULL in case of error.
 */
struct full_ns0_macAddress *xml_read_full_ns0_macAddress(xmlTextReaderPtr reader);

/**
 * Writes a MacAddress to XML under element name "macAddress".
 *
 * @param writer The XML writer.
 * @param _macAddress The MacAddress to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
int xml_write_full_ns0_macAddress(xmlTextWriterPtr writer, struct full_ns0_macAddress *_macAddress);

/**
 * Frees a MacAddress.
 *
 * @param _macAddress The MacAddress to free.
 */
void free_full_ns0_macAddress(struct full_ns0_macAddress *_macAddress);

/**
 * Reads a MacAddress element from XML. The element to be read is "macAddress", and
 * it is assumed that the reader is already pointing to the element.
 *
 * @param reader The XML reader.
 * @return The MacAddress, or NULL in case of error.
 */
struct full_ns0_macAddress *xmlTextReaderReadNs0MacAddressElement(xmlTextReaderPtr reader);

/**
 * Writes a MacAddress to XML under element name "macAddress".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _macAddress The MacAddress to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0MacAddressElement(xmlTextWriterPtr writer, struct full_ns0_macAddress *_macAddress);

/**
 * Writes a MacAddress to XML under element name "macAddress".
 *
 * @param writer The XML writer.
 * @param _macAddress The MacAddress to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0MacAddressElementNS(xmlTextWriterPtr writer, struct full_ns0_macAddress *_macAddress, int writeNamespaces);

/**
 * Frees the children of a MacAddress.
 *
 * @param _macAddress The MacAddress whose children are to be free.
 */
static void freeNs0MacAddressElement(struct full_ns0_macAddress *_macAddress);

/**
 * Reads a MacAddress from XML. The reader is assumed to be at the start element.
 *
 * @param reader The XML reader.
 * @return The MacAddress, or NULL in case of error.
 */
static struct full_ns0_macAddress *xmlTextReaderReadNs0MacAddressType(xmlTextReaderPtr reader);

/**
 * Writes a MacAddress to XML.
 *
 * @param writer The XML writer.
 * @param _macAddress The MacAddress to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0MacAddressType(xmlTextWriterPtr writer, struct full_ns0_macAddress *_macAddress);

/**
 * Frees the elements of a MacAddress.
 *
 * @param _macAddress The MacAddress to free.
 */
static void freeNs0MacAddressType(struct full_ns0_macAddress *_macAddress);

#endif /* DEF_full_ns0_macAddress_H */
#ifndef DEF_full_ns0_name_H
#define DEF_full_ns0_name_H

/**
 * (no documentation provided)
 */
struct full_ns0_name {


  /**
   * (no documentation provided)
   */
  xmlChar *nameValue;
};

/**
 * Reads a Name element from XML. The element to be read is "name", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The Name, or NULL in case of error.
 */
struct full_ns0_name *xml_read_full_ns0_name(xmlTextReaderPtr reader);

/**
 * Writes a Name to XML under element name "name".
 *
 * @param writer The XML writer.
 * @param _name The Name to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
int xml_write_full_ns0_name(xmlTextWriterPtr writer, struct full_ns0_name *_name);

/**
 * Frees a Name.
 *
 * @param _name The Name to free.
 */
void free_full_ns0_name(struct full_ns0_name *_name);

/**
 * Reads a Name element from XML. The element to be read is "name", and
 * it is assumed that the reader is already pointing to the element.
 *
 * @param reader The XML reader.
 * @return The Name, or NULL in case of error.
 */
struct full_ns0_name *xmlTextReaderReadNs0NameElement(xmlTextReaderPtr reader);

/**
 * Writes a Name to XML under element name "name".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _name The Name to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0NameElement(xmlTextWriterPtr writer, struct full_ns0_name *_name);

/**
 * Writes a Name to XML under element name "name".
 *
 * @param writer The XML writer.
 * @param _name The Name to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0NameElementNS(xmlTextWriterPtr writer, struct full_ns0_name *_name, int writeNamespaces);

/**
 * Frees the children of a Name.
 *
 * @param _name The Name whose children are to be free.
 */
static void freeNs0NameElement(struct full_ns0_name *_name);

/**
 * Reads a Name from XML. The reader is assumed to be at the start element.
 *
 * @param reader The XML reader.
 * @return The Name, or NULL in case of error.
 */
static struct full_ns0_name *xmlTextReaderReadNs0NameType(xmlTextReaderPtr reader);

/**
 * Writes a Name to XML.
 *
 * @param writer The XML writer.
 * @param _name The Name to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0NameType(xmlTextWriterPtr writer, struct full_ns0_name *_name);

/**
 * Frees the elements of a Name.
 *
 * @param _name The Name to free.
 */
static void freeNs0NameType(struct full_ns0_name *_name);

#endif /* DEF_full_ns0_name_H */
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
#ifndef DEF_full_ns0_peerBandwidth_H
#define DEF_full_ns0_peerBandwidth_H

/**
 * (no documentation provided)
 */
struct full_ns0_peerBandwidth {


  /**
   * (no documentation provided)
   */
  long bandwidthValue;
};

/**
 * Reads a PeerBandwidth element from XML. The element to be read is "peerBandwidth", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The PeerBandwidth, or NULL in case of error.
 */
struct full_ns0_peerBandwidth *xml_read_full_ns0_peerBandwidth(xmlTextReaderPtr reader);

/**
 * Writes a PeerBandwidth to XML under element name "peerBandwidth".
 *
 * @param writer The XML writer.
 * @param _peerBandwidth The PeerBandwidth to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
int xml_write_full_ns0_peerBandwidth(xmlTextWriterPtr writer, struct full_ns0_peerBandwidth *_peerBandwidth);

/**
 * Frees a PeerBandwidth.
 *
 * @param _peerBandwidth The PeerBandwidth to free.
 */
void free_full_ns0_peerBandwidth(struct full_ns0_peerBandwidth *_peerBandwidth);

/**
 * Reads a PeerBandwidth element from XML. The element to be read is "peerBandwidth", and
 * it is assumed that the reader is already pointing to the element.
 *
 * @param reader The XML reader.
 * @return The PeerBandwidth, or NULL in case of error.
 */
struct full_ns0_peerBandwidth *xmlTextReaderReadNs0PeerBandwidthElement(xmlTextReaderPtr reader);

/**
 * Writes a PeerBandwidth to XML under element name "peerBandwidth".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _peerBandwidth The PeerBandwidth to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0PeerBandwidthElement(xmlTextWriterPtr writer, struct full_ns0_peerBandwidth *_peerBandwidth);

/**
 * Writes a PeerBandwidth to XML under element name "peerBandwidth".
 *
 * @param writer The XML writer.
 * @param _peerBandwidth The PeerBandwidth to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0PeerBandwidthElementNS(xmlTextWriterPtr writer, struct full_ns0_peerBandwidth *_peerBandwidth, int writeNamespaces);

/**
 * Frees the children of a PeerBandwidth.
 *
 * @param _peerBandwidth The PeerBandwidth whose children are to be free.
 */
static void freeNs0PeerBandwidthElement(struct full_ns0_peerBandwidth *_peerBandwidth);

/**
 * Reads a PeerBandwidth from XML. The reader is assumed to be at the start element.
 *
 * @param reader The XML reader.
 * @return The PeerBandwidth, or NULL in case of error.
 */
static struct full_ns0_peerBandwidth *xmlTextReaderReadNs0PeerBandwidthType(xmlTextReaderPtr reader);

/**
 * Writes a PeerBandwidth to XML.
 *
 * @param writer The XML writer.
 * @param _peerBandwidth The PeerBandwidth to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0PeerBandwidthType(xmlTextWriterPtr writer, struct full_ns0_peerBandwidth *_peerBandwidth);

/**
 * Frees the elements of a PeerBandwidth.
 *
 * @param _peerBandwidth The PeerBandwidth to free.
 */
static void freeNs0PeerBandwidthType(struct full_ns0_peerBandwidth *_peerBandwidth);

#endif /* DEF_full_ns0_peerBandwidth_H */
#ifndef DEF_full_ns0_state_H
#define DEF_full_ns0_state_H

/**
 * (no documentation provided)
 */
struct full_ns0_state {


  /**
   * (no documentation provided)
   */
  short stateValue;
};

/**
 * Reads a State element from XML. The element to be read is "state", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The State, or NULL in case of error.
 */
struct full_ns0_state *xml_read_full_ns0_state(xmlTextReaderPtr reader);

/**
 * Writes a State to XML under element name "state".
 *
 * @param writer The XML writer.
 * @param _state The State to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
int xml_write_full_ns0_state(xmlTextWriterPtr writer, struct full_ns0_state *_state);

/**
 * Frees a State.
 *
 * @param _state The State to free.
 */
void free_full_ns0_state(struct full_ns0_state *_state);

/**
 * Reads a State element from XML. The element to be read is "state", and
 * it is assumed that the reader is already pointing to the element.
 *
 * @param reader The XML reader.
 * @return The State, or NULL in case of error.
 */
struct full_ns0_state *xmlTextReaderReadNs0StateElement(xmlTextReaderPtr reader);

/**
 * Writes a State to XML under element name "state".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _state The State to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0StateElement(xmlTextWriterPtr writer, struct full_ns0_state *_state);

/**
 * Writes a State to XML under element name "state".
 *
 * @param writer The XML writer.
 * @param _state The State to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0StateElementNS(xmlTextWriterPtr writer, struct full_ns0_state *_state, int writeNamespaces);

/**
 * Frees the children of a State.
 *
 * @param _state The State whose children are to be free.
 */
static void freeNs0StateElement(struct full_ns0_state *_state);

/**
 * Reads a State from XML. The reader is assumed to be at the start element.
 *
 * @param reader The XML reader.
 * @return The State, or NULL in case of error.
 */
static struct full_ns0_state *xmlTextReaderReadNs0StateType(xmlTextReaderPtr reader);

/**
 * Writes a State to XML.
 *
 * @param writer The XML writer.
 * @param _state The State to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0StateType(xmlTextWriterPtr writer, struct full_ns0_state *_state);

/**
 * Frees the elements of a State.
 *
 * @param _state The State to free.
 */
static void freeNs0StateType(struct full_ns0_state *_state);

#endif /* DEF_full_ns0_state_H */
#ifndef DEF_full_ns0_supportedBandwidth_H
#define DEF_full_ns0_supportedBandwidth_H

/**
 * (no documentation provided)
 */
struct full_ns0_supportedBandwidth {


  /**
   * (no documentation provided)
   */
  long bandwidthValue;
};

/**
 * Reads a SupportedBandwidth element from XML. The element to be read is "supportedBandwidth", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The SupportedBandwidth, or NULL in case of error.
 */
struct full_ns0_supportedBandwidth *xml_read_full_ns0_supportedBandwidth(xmlTextReaderPtr reader);

/**
 * Writes a SupportedBandwidth to XML under element name "supportedBandwidth".
 *
 * @param writer The XML writer.
 * @param _supportedBandwidth The SupportedBandwidth to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
int xml_write_full_ns0_supportedBandwidth(xmlTextWriterPtr writer, struct full_ns0_supportedBandwidth *_supportedBandwidth);

/**
 * Frees a SupportedBandwidth.
 *
 * @param _supportedBandwidth The SupportedBandwidth to free.
 */
void free_full_ns0_supportedBandwidth(struct full_ns0_supportedBandwidth *_supportedBandwidth);

/**
 * Reads a SupportedBandwidth element from XML. The element to be read is "supportedBandwidth", and
 * it is assumed that the reader is already pointing to the element.
 *
 * @param reader The XML reader.
 * @return The SupportedBandwidth, or NULL in case of error.
 */
struct full_ns0_supportedBandwidth *xmlTextReaderReadNs0SupportedBandwidthElement(xmlTextReaderPtr reader);

/**
 * Writes a SupportedBandwidth to XML under element name "supportedBandwidth".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _supportedBandwidth The SupportedBandwidth to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0SupportedBandwidthElement(xmlTextWriterPtr writer, struct full_ns0_supportedBandwidth *_supportedBandwidth);

/**
 * Writes a SupportedBandwidth to XML under element name "supportedBandwidth".
 *
 * @param writer The XML writer.
 * @param _supportedBandwidth The SupportedBandwidth to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0SupportedBandwidthElementNS(xmlTextWriterPtr writer, struct full_ns0_supportedBandwidth *_supportedBandwidth, int writeNamespaces);

/**
 * Frees the children of a SupportedBandwidth.
 *
 * @param _supportedBandwidth The SupportedBandwidth whose children are to be free.
 */
static void freeNs0SupportedBandwidthElement(struct full_ns0_supportedBandwidth *_supportedBandwidth);

/**
 * Reads a SupportedBandwidth from XML. The reader is assumed to be at the start element.
 *
 * @param reader The XML reader.
 * @return The SupportedBandwidth, or NULL in case of error.
 */
static struct full_ns0_supportedBandwidth *xmlTextReaderReadNs0SupportedBandwidthType(xmlTextReaderPtr reader);

/**
 * Writes a SupportedBandwidth to XML.
 *
 * @param writer The XML writer.
 * @param _supportedBandwidth The SupportedBandwidth to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0SupportedBandwidthType(xmlTextWriterPtr writer, struct full_ns0_supportedBandwidth *_supportedBandwidth);

/**
 * Frees the elements of a SupportedBandwidth.
 *
 * @param _supportedBandwidth The SupportedBandwidth to free.
 */
static void freeNs0SupportedBandwidthType(struct full_ns0_supportedBandwidth *_supportedBandwidth);

#endif /* DEF_full_ns0_supportedBandwidth_H */
#ifndef DEF_full_ns0_tables_H
#define DEF_full_ns0_tables_H

/**
 * (no documentation provided)
 */
struct full_ns0_tables {


  /**
   * (no documentation provided)
   */
  unsigned char tablesValue;
};

/**
 * Reads a Tables element from XML. The element to be read is "tables", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The Tables, or NULL in case of error.
 */
struct full_ns0_tables *xml_read_full_ns0_tables(xmlTextReaderPtr reader);

/**
 * Writes a Tables to XML under element name "tables".
 *
 * @param writer The XML writer.
 * @param _tables The Tables to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
int xml_write_full_ns0_tables(xmlTextWriterPtr writer, struct full_ns0_tables *_tables);

/**
 * Frees a Tables.
 *
 * @param _tables The Tables to free.
 */
void free_full_ns0_tables(struct full_ns0_tables *_tables);

/**
 * Reads a Tables element from XML. The element to be read is "tables", and
 * it is assumed that the reader is already pointing to the element.
 *
 * @param reader The XML reader.
 * @return The Tables, or NULL in case of error.
 */
struct full_ns0_tables *xmlTextReaderReadNs0TablesElement(xmlTextReaderPtr reader);

/**
 * Writes a Tables to XML under element name "tables".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _tables The Tables to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0TablesElement(xmlTextWriterPtr writer, struct full_ns0_tables *_tables);

/**
 * Writes a Tables to XML under element name "tables".
 *
 * @param writer The XML writer.
 * @param _tables The Tables to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0TablesElementNS(xmlTextWriterPtr writer, struct full_ns0_tables *_tables, int writeNamespaces);

/**
 * Frees the children of a Tables.
 *
 * @param _tables The Tables whose children are to be free.
 */
static void freeNs0TablesElement(struct full_ns0_tables *_tables);

/**
 * Reads a Tables from XML. The reader is assumed to be at the start element.
 *
 * @param reader The XML reader.
 * @return The Tables, or NULL in case of error.
 */
static struct full_ns0_tables *xmlTextReaderReadNs0TablesType(xmlTextReaderPtr reader);

/**
 * Writes a Tables to XML.
 *
 * @param writer The XML writer.
 * @param _tables The Tables to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0TablesType(xmlTextWriterPtr writer, struct full_ns0_tables *_tables);

/**
 * Frees the elements of a Tables.
 *
 * @param _tables The Tables to free.
 */
static void freeNs0TablesType(struct full_ns0_tables *_tables);

#endif /* DEF_full_ns0_tables_H */
#ifndef DEF_full_ns0_tier_H
#define DEF_full_ns0_tier_H

/**
 * (no documentation provided)
 */
struct full_ns0_tier {


  /**
   * (no documentation provided)
   */
  int tierValue;
};

/**
 * Reads a Tier element from XML. The element to be read is "tier", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The Tier, or NULL in case of error.
 */
struct full_ns0_tier *xml_read_full_ns0_tier(xmlTextReaderPtr reader);

/**
 * Writes a Tier to XML under element name "tier".
 *
 * @param writer The XML writer.
 * @param _tier The Tier to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
int xml_write_full_ns0_tier(xmlTextWriterPtr writer, struct full_ns0_tier *_tier);

/**
 * Frees a Tier.
 *
 * @param _tier The Tier to free.
 */
void free_full_ns0_tier(struct full_ns0_tier *_tier);

/**
 * Reads a Tier element from XML. The element to be read is "tier", and
 * it is assumed that the reader is already pointing to the element.
 *
 * @param reader The XML reader.
 * @return The Tier, or NULL in case of error.
 */
struct full_ns0_tier *xmlTextReaderReadNs0TierElement(xmlTextReaderPtr reader);

/**
 * Writes a Tier to XML under element name "tier".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _tier The Tier to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0TierElement(xmlTextWriterPtr writer, struct full_ns0_tier *_tier);

/**
 * Writes a Tier to XML under element name "tier".
 *
 * @param writer The XML writer.
 * @param _tier The Tier to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0TierElementNS(xmlTextWriterPtr writer, struct full_ns0_tier *_tier, int writeNamespaces);

/**
 * Frees the children of a Tier.
 *
 * @param _tier The Tier whose children are to be free.
 */
static void freeNs0TierElement(struct full_ns0_tier *_tier);

/**
 * Reads a Tier from XML. The reader is assumed to be at the start element.
 *
 * @param reader The XML reader.
 * @return The Tier, or NULL in case of error.
 */
static struct full_ns0_tier *xmlTextReaderReadNs0TierType(xmlTextReaderPtr reader);

/**
 * Writes a Tier to XML.
 *
 * @param writer The XML writer.
 * @param _tier The Tier to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0TierType(xmlTextWriterPtr writer, struct full_ns0_tier *_tier);

/**
 * Frees the elements of a Tier.
 *
 * @param _tier The Tier to free.
 */
static void freeNs0TierType(struct full_ns0_tier *_tier);

#endif /* DEF_full_ns0_tier_H */
#ifndef DEF_full_ns0_timeStamp_H
#define DEF_full_ns0_timeStamp_H

/**
 * (no documentation provided)
 */
struct full_ns0_timeStamp {


  /**
   * (no documentation provided)
   */
  long timestamp;

  /**
   * (no documentation provided)
   */
  xmlChar *timestampName;
};

/**
 * Reads a TimeStamp element from XML. The element to be read is "timeStamp", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The TimeStamp, or NULL in case of error.
 */
struct full_ns0_timeStamp *xml_read_full_ns0_timeStamp(xmlTextReaderPtr reader);

/**
 * Writes a TimeStamp to XML under element name "timeStamp".
 *
 * @param writer The XML writer.
 * @param _timeStamp The TimeStamp to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
int xml_write_full_ns0_timeStamp(xmlTextWriterPtr writer, struct full_ns0_timeStamp *_timeStamp);

/**
 * Frees a TimeStamp.
 *
 * @param _timeStamp The TimeStamp to free.
 */
void free_full_ns0_timeStamp(struct full_ns0_timeStamp *_timeStamp);

/**
 * Reads a TimeStamp element from XML. The element to be read is "timeStamp", and
 * it is assumed that the reader is already pointing to the element.
 *
 * @param reader The XML reader.
 * @return The TimeStamp, or NULL in case of error.
 */
struct full_ns0_timeStamp *xmlTextReaderReadNs0TimeStampElement(xmlTextReaderPtr reader);

/**
 * Writes a TimeStamp to XML under element name "timeStamp".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _timeStamp The TimeStamp to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0TimeStampElement(xmlTextWriterPtr writer, struct full_ns0_timeStamp *_timeStamp);

/**
 * Writes a TimeStamp to XML under element name "timeStamp".
 *
 * @param writer The XML writer.
 * @param _timeStamp The TimeStamp to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0TimeStampElementNS(xmlTextWriterPtr writer, struct full_ns0_timeStamp *_timeStamp, int writeNamespaces);

/**
 * Frees the children of a TimeStamp.
 *
 * @param _timeStamp The TimeStamp whose children are to be free.
 */
static void freeNs0TimeStampElement(struct full_ns0_timeStamp *_timeStamp);

/**
 * Reads a TimeStamp from XML. The reader is assumed to be at the start element.
 *
 * @param reader The XML reader.
 * @return The TimeStamp, or NULL in case of error.
 */
static struct full_ns0_timeStamp *xmlTextReaderReadNs0TimeStampType(xmlTextReaderPtr reader);

/**
 * Writes a TimeStamp to XML.
 *
 * @param writer The XML writer.
 * @param _timeStamp The TimeStamp to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0TimeStampType(xmlTextWriterPtr writer, struct full_ns0_timeStamp *_timeStamp);

/**
 * Frees the elements of a TimeStamp.
 *
 * @param _timeStamp The TimeStamp to free.
 */
static void freeNs0TimeStampType(struct full_ns0_timeStamp *_timeStamp);

#endif /* DEF_full_ns0_timeStamp_H */
#ifndef DEF_full_ns0_nodeConnectorProperties_H
#define DEF_full_ns0_nodeConnectorProperties_H

/**
 *  The class describes set of properties attached to a node connector

 */
struct full_ns0_nodeConnectorProperties {


  /**
   * (no documentation provided)
   */
  struct full_ns0_nodeConnector *nodeconnector;

  /**
   * (no documentation provided)
   *
   * (Partial list.)
   */
  struct full_ns0_property *actions_properties;

  /**
   * Size of the properties array.
   */
  int _sizeof_actions_properties;

  /**
   * (no documentation provided)
   *
   * (Partial list.)
   */
  struct full_ns0_property *advertisedBandwidth_properties;

  /**
   * Size of the properties array.
   */
  int _sizeof_advertisedBandwidth_properties;

  /**
   * (no documentation provided)
   *
   * (Partial list.)
   */
  struct full_ns0_property *bandwidth_properties;

  /**
   * Size of the properties array.
   */
  int _sizeof_bandwidth_properties;

  /**
   * (no documentation provided)
   *
   * (Partial list.)
   */
  struct full_ns0_property *buffers_properties;

  /**
   * Size of the properties array.
   */
  int _sizeof_buffers_properties;

  /**
   * (no documentation provided)
   *
   * (Partial list.)
   */
  struct full_ns0_property *capabilities_properties;

  /**
   * Size of the properties array.
   */
  int _sizeof_capabilities_properties;

  /**
   * (no documentation provided)
   *
   * (Partial list.)
   */
  struct full_ns0_property *config_properties;

  /**
   * Size of the properties array.
   */
  int _sizeof_config_properties;

  /**
   * (no documentation provided)
   *
   * (Partial list.)
   */
  struct full_ns0_property *latency_properties;

  /**
   * Size of the properties array.
   */
  int _sizeof_latency_properties;

  /**
   * (no documentation provided)
   *
   * (Partial list.)
   */
  struct full_ns0_property *macAddress_properties;

  /**
   * Size of the properties array.
   */
  int _sizeof_macAddress_properties;

  /**
   * (no documentation provided)
   *
   * (Partial list.)
   */
  struct full_ns0_property *name_properties;

  /**
   * Size of the properties array.
   */
  int _sizeof_name_properties;

  /**
   * (no documentation provided)
   *
   * (Partial list.)
   */
  struct full_ns0_property *peerBandwidth_properties;

  /**
   * Size of the properties array.
   */
  int _sizeof_peerBandwidth_properties;

  /**
   * (no documentation provided)
   *
   * (Partial list.)
   */
  struct full_ns0_property *property_properties;

  /**
   * Size of the properties array.
   */
  int _sizeof_property_properties;

  /**
   * (no documentation provided)
   *
   * (Partial list.)
   */
  struct full_ns0_property *state_properties;

  /**
   * Size of the properties array.
   */
  int _sizeof_state_properties;

  /**
   * (no documentation provided)
   *
   * (Partial list.)
   */
  struct full_ns0_property *supportedBandwidth_properties;

  /**
   * Size of the properties array.
   */
  int _sizeof_supportedBandwidth_properties;

  /**
   * (no documentation provided)
   *
   * (Partial list.)
   */
  struct full_ns0_property *tables_properties;

  /**
   * Size of the properties array.
   */
  int _sizeof_tables_properties;

  /**
   * (no documentation provided)
   *
   * (Partial list.)
   */
  struct full_ns0_property *tier_properties;

  /**
   * Size of the properties array.
   */
  int _sizeof_tier_properties;

  /**
   * (no documentation provided)
   *
   * (Partial list.)
   */
  struct full_ns0_property *timeStamp_properties;

  /**
   * Size of the properties array.
   */
  int _sizeof_timeStamp_properties;
};

/**
 * Reads a NodeConnectorProperties element from XML. The element to be read is "nodeConnectorProperties", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The NodeConnectorProperties, or NULL in case of error.
 */
struct full_ns0_nodeConnectorProperties *xml_read_full_ns0_nodeConnectorProperties(xmlTextReaderPtr reader);

/**
 * Writes a NodeConnectorProperties to XML under element name "nodeConnectorProperties".
 *
 * @param writer The XML writer.
 * @param _nodeConnectorProperties The NodeConnectorProperties to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
int xml_write_full_ns0_nodeConnectorProperties(xmlTextWriterPtr writer, struct full_ns0_nodeConnectorProperties *_nodeConnectorProperties);

/**
 * Frees a NodeConnectorProperties.
 *
 * @param _nodeConnectorProperties The NodeConnectorProperties to free.
 */
void free_full_ns0_nodeConnectorProperties(struct full_ns0_nodeConnectorProperties *_nodeConnectorProperties);

/**
 * Reads a NodeConnectorProperties element from XML. The element to be read is "nodeConnectorProperties", and
 * it is assumed that the reader is already pointing to the element.
 *
 * @param reader The XML reader.
 * @return The NodeConnectorProperties, or NULL in case of error.
 */
struct full_ns0_nodeConnectorProperties *xmlTextReaderReadNs0NodeConnectorPropertiesElement(xmlTextReaderPtr reader);

/**
 * Writes a NodeConnectorProperties to XML under element name "nodeConnectorProperties".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _nodeConnectorProperties The NodeConnectorProperties to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0NodeConnectorPropertiesElement(xmlTextWriterPtr writer, struct full_ns0_nodeConnectorProperties *_nodeConnectorProperties);

/**
 * Writes a NodeConnectorProperties to XML under element name "nodeConnectorProperties".
 *
 * @param writer The XML writer.
 * @param _nodeConnectorProperties The NodeConnectorProperties to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0NodeConnectorPropertiesElementNS(xmlTextWriterPtr writer, struct full_ns0_nodeConnectorProperties *_nodeConnectorProperties, int writeNamespaces);

/**
 * Frees the children of a NodeConnectorProperties.
 *
 * @param _nodeConnectorProperties The NodeConnectorProperties whose children are to be free.
 */
static void freeNs0NodeConnectorPropertiesElement(struct full_ns0_nodeConnectorProperties *_nodeConnectorProperties);

/**
 * Reads a NodeConnectorProperties from XML. The reader is assumed to be at the start element.
 *
 * @param reader The XML reader.
 * @return The NodeConnectorProperties, or NULL in case of error.
 */
static struct full_ns0_nodeConnectorProperties *xmlTextReaderReadNs0NodeConnectorPropertiesType(xmlTextReaderPtr reader);

/**
 * Writes a NodeConnectorProperties to XML.
 *
 * @param writer The XML writer.
 * @param _nodeConnectorProperties The NodeConnectorProperties to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0NodeConnectorPropertiesType(xmlTextWriterPtr writer, struct full_ns0_nodeConnectorProperties *_nodeConnectorProperties);

/**
 * Frees the elements of a NodeConnectorProperties.
 *
 * @param _nodeConnectorProperties The NodeConnectorProperties to free.
 */
static void freeNs0NodeConnectorPropertiesType(struct full_ns0_nodeConnectorProperties *_nodeConnectorProperties);

#endif /* DEF_full_ns0_nodeConnectorProperties_H */
#ifndef DEF_full_ns0_nodeConnectors_H
#define DEF_full_ns0_nodeConnectors_H

/**
 * (no documentation provided)
 */
struct full_ns0_nodeConnectors {


  /**
   * (no documentation provided)
   */
  struct full_ns0_nodeConnectorProperties *nodeConnectorProperties;

  /**
   * Size of the nodeConnectorProperties array.
   */
  int _sizeof_nodeConnectorProperties;
};

/**
 * Reads a NodeConnectors element from XML. The element to be read is "nodeConnectors", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The NodeConnectors, or NULL in case of error.
 */
struct full_ns0_nodeConnectors *xml_read_full_ns0_nodeConnectors(xmlTextReaderPtr reader);

/**
 * Writes a NodeConnectors to XML under element name "nodeConnectors".
 *
 * @param writer The XML writer.
 * @param _nodeConnectors The NodeConnectors to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
int xml_write_full_ns0_nodeConnectors(xmlTextWriterPtr writer, struct full_ns0_nodeConnectors *_nodeConnectors);

/**
 * Frees a NodeConnectors.
 *
 * @param _nodeConnectors The NodeConnectors to free.
 */
void free_full_ns0_nodeConnectors(struct full_ns0_nodeConnectors *_nodeConnectors);

/**
 * Reads a NodeConnectors element from XML. The element to be read is "nodeConnectors", and
 * it is assumed that the reader is already pointing to the element.
 *
 * @param reader The XML reader.
 * @return The NodeConnectors, or NULL in case of error.
 */
struct full_ns0_nodeConnectors *xmlTextReaderReadNs0NodeConnectorsElement(xmlTextReaderPtr reader);

/**
 * Writes a NodeConnectors to XML under element name "nodeConnectors".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _nodeConnectors The NodeConnectors to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0NodeConnectorsElement(xmlTextWriterPtr writer, struct full_ns0_nodeConnectors *_nodeConnectors);

/**
 * Writes a NodeConnectors to XML under element name "nodeConnectors".
 *
 * @param writer The XML writer.
 * @param _nodeConnectors The NodeConnectors to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0NodeConnectorsElementNS(xmlTextWriterPtr writer, struct full_ns0_nodeConnectors *_nodeConnectors, int writeNamespaces);

/**
 * Frees the children of a NodeConnectors.
 *
 * @param _nodeConnectors The NodeConnectors whose children are to be free.
 */
static void freeNs0NodeConnectorsElement(struct full_ns0_nodeConnectors *_nodeConnectors);

/**
 * Reads a NodeConnectors from XML. The reader is assumed to be at the start element.
 *
 * @param reader The XML reader.
 * @return The NodeConnectors, or NULL in case of error.
 */
static struct full_ns0_nodeConnectors *xmlTextReaderReadNs0NodeConnectorsType(xmlTextReaderPtr reader);

/**
 * Writes a NodeConnectors to XML.
 *
 * @param writer The XML writer.
 * @param _nodeConnectors The NodeConnectors to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0NodeConnectorsType(xmlTextWriterPtr writer, struct full_ns0_nodeConnectors *_nodeConnectors);

/**
 * Frees the elements of a NodeConnectors.
 *
 * @param _nodeConnectors The NodeConnectors to free.
 */
static void freeNs0NodeConnectorsType(struct full_ns0_nodeConnectors *_nodeConnectors);

#endif /* DEF_full_ns0_nodeConnectors_H */
#ifndef DEF_full_ns0_nodeProperties_H
#define DEF_full_ns0_nodeProperties_H

/**
 *  The class describes set of properties attached to a node

 */
struct full_ns0_nodeProperties {


  /**
   * (no documentation provided)
   */
  struct full_ns0_node *node;

  /**
   * (no documentation provided)
   *
   * (Partial list.)
   */
  struct full_ns0_property *actions_properties;

  /**
   * Size of the properties array.
   */
  int _sizeof_actions_properties;

  /**
   * (no documentation provided)
   *
   * (Partial list.)
   */
  struct full_ns0_property *advertisedBandwidth_properties;

  /**
   * Size of the properties array.
   */
  int _sizeof_advertisedBandwidth_properties;

  /**
   * (no documentation provided)
   *
   * (Partial list.)
   */
  struct full_ns0_property *bandwidth_properties;

  /**
   * Size of the properties array.
   */
  int _sizeof_bandwidth_properties;

  /**
   * (no documentation provided)
   *
   * (Partial list.)
   */
  struct full_ns0_property *buffers_properties;

  /**
   * Size of the properties array.
   */
  int _sizeof_buffers_properties;

  /**
   * (no documentation provided)
   *
   * (Partial list.)
   */
  struct full_ns0_property *capabilities_properties;

  /**
   * Size of the properties array.
   */
  int _sizeof_capabilities_properties;

  /**
   * (no documentation provided)
   *
   * (Partial list.)
   */
  struct full_ns0_property *config_properties;

  /**
   * Size of the properties array.
   */
  int _sizeof_config_properties;

  /**
   * (no documentation provided)
   *
   * (Partial list.)
   */
  struct full_ns0_property *latency_properties;

  /**
   * Size of the properties array.
   */
  int _sizeof_latency_properties;

  /**
   * (no documentation provided)
   *
   * (Partial list.)
   */
  struct full_ns0_property *macAddress_properties;

  /**
   * Size of the properties array.
   */
  int _sizeof_macAddress_properties;

  /**
   * (no documentation provided)
   *
   * (Partial list.)
   */
  struct full_ns0_property *name_properties;

  /**
   * Size of the properties array.
   */
  int _sizeof_name_properties;

  /**
   * (no documentation provided)
   *
   * (Partial list.)
   */
  struct full_ns0_property *peerBandwidth_properties;

  /**
   * Size of the properties array.
   */
  int _sizeof_peerBandwidth_properties;

  /**
   * (no documentation provided)
   *
   * (Partial list.)
   */
  struct full_ns0_property *property_properties;

  /**
   * Size of the properties array.
   */
  int _sizeof_property_properties;

  /**
   * (no documentation provided)
   *
   * (Partial list.)
   */
  struct full_ns0_property *state_properties;

  /**
   * Size of the properties array.
   */
  int _sizeof_state_properties;

  /**
   * (no documentation provided)
   *
   * (Partial list.)
   */
  struct full_ns0_property *supportedBandwidth_properties;

  /**
   * Size of the properties array.
   */
  int _sizeof_supportedBandwidth_properties;

  /**
   * (no documentation provided)
   *
   * (Partial list.)
   */
  struct full_ns0_property *tables_properties;

  /**
   * Size of the properties array.
   */
  int _sizeof_tables_properties;

  /**
   * (no documentation provided)
   *
   * (Partial list.)
   */
  struct full_ns0_property *tier_properties;

  /**
   * Size of the properties array.
   */
  int _sizeof_tier_properties;

  /**
   * (no documentation provided)
   *
   * (Partial list.)
   */
  struct full_ns0_property *timeStamp_properties;

  /**
   * Size of the properties array.
   */
  int _sizeof_timeStamp_properties;
};

/**
 * Reads a NodeProperties element from XML. The element to be read is "nodeProperties", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The NodeProperties, or NULL in case of error.
 */
struct full_ns0_nodeProperties *xml_read_full_ns0_nodeProperties(xmlTextReaderPtr reader);

/**
 * Writes a NodeProperties to XML under element name "nodeProperties".
 *
 * @param writer The XML writer.
 * @param _nodeProperties The NodeProperties to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
int xml_write_full_ns0_nodeProperties(xmlTextWriterPtr writer, struct full_ns0_nodeProperties *_nodeProperties);

/**
 * Frees a NodeProperties.
 *
 * @param _nodeProperties The NodeProperties to free.
 */
void free_full_ns0_nodeProperties(struct full_ns0_nodeProperties *_nodeProperties);

/**
 * Reads a NodeProperties element from XML. The element to be read is "nodeProperties", and
 * it is assumed that the reader is already pointing to the element.
 *
 * @param reader The XML reader.
 * @return The NodeProperties, or NULL in case of error.
 */
struct full_ns0_nodeProperties *xmlTextReaderReadNs0NodePropertiesElement(xmlTextReaderPtr reader);

/**
 * Writes a NodeProperties to XML under element name "nodeProperties".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _nodeProperties The NodeProperties to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0NodePropertiesElement(xmlTextWriterPtr writer, struct full_ns0_nodeProperties *_nodeProperties);

/**
 * Writes a NodeProperties to XML under element name "nodeProperties".
 *
 * @param writer The XML writer.
 * @param _nodeProperties The NodeProperties to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0NodePropertiesElementNS(xmlTextWriterPtr writer, struct full_ns0_nodeProperties *_nodeProperties, int writeNamespaces);

/**
 * Frees the children of a NodeProperties.
 *
 * @param _nodeProperties The NodeProperties whose children are to be free.
 */
static void freeNs0NodePropertiesElement(struct full_ns0_nodeProperties *_nodeProperties);

/**
 * Reads a NodeProperties from XML. The reader is assumed to be at the start element.
 *
 * @param reader The XML reader.
 * @return The NodeProperties, or NULL in case of error.
 */
static struct full_ns0_nodeProperties *xmlTextReaderReadNs0NodePropertiesType(xmlTextReaderPtr reader);

/**
 * Writes a NodeProperties to XML.
 *
 * @param writer The XML writer.
 * @param _nodeProperties The NodeProperties to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0NodePropertiesType(xmlTextWriterPtr writer, struct full_ns0_nodeProperties *_nodeProperties);

/**
 * Frees the elements of a NodeProperties.
 *
 * @param _nodeProperties The NodeProperties to free.
 */
static void freeNs0NodePropertiesType(struct full_ns0_nodeProperties *_nodeProperties);

#endif /* DEF_full_ns0_nodeProperties_H */
#ifndef DEF_full_ns0_nodes_H
#define DEF_full_ns0_nodes_H

/**
 * (no documentation provided)
 */
struct full_ns0_nodes {


  /**
   * (no documentation provided)
   */
  struct full_ns0_nodeProperties *nodeProperties;

  /**
   * Size of the nodeProperties array.
   */
  int _sizeof_nodeProperties;
};

/**
 * Reads a Nodes element from XML. The element to be read is "nodes", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The Nodes, or NULL in case of error.
 */
struct full_ns0_nodes *xml_read_full_ns0_nodes(xmlTextReaderPtr reader);

/**
 * Writes a Nodes to XML under element name "nodes".
 *
 * @param writer The XML writer.
 * @param _nodes The Nodes to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
int xml_write_full_ns0_nodes(xmlTextWriterPtr writer, struct full_ns0_nodes *_nodes);

/**
 * Frees a Nodes.
 *
 * @param _nodes The Nodes to free.
 */
void free_full_ns0_nodes(struct full_ns0_nodes *_nodes);

/**
 * Reads a Nodes element from XML. The element to be read is "nodes", and
 * it is assumed that the reader is already pointing to the element.
 *
 * @param reader The XML reader.
 * @return The Nodes, or NULL in case of error.
 */
struct full_ns0_nodes *xmlTextReaderReadNs0NodesElement(xmlTextReaderPtr reader);

/**
 * Writes a Nodes to XML under element name "nodes".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _nodes The Nodes to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0NodesElement(xmlTextWriterPtr writer, struct full_ns0_nodes *_nodes);

/**
 * Writes a Nodes to XML under element name "nodes".
 *
 * @param writer The XML writer.
 * @param _nodes The Nodes to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0NodesElementNS(xmlTextWriterPtr writer, struct full_ns0_nodes *_nodes, int writeNamespaces);

/**
 * Frees the children of a Nodes.
 *
 * @param _nodes The Nodes whose children are to be free.
 */
static void freeNs0NodesElement(struct full_ns0_nodes *_nodes);

/**
 * Reads a Nodes from XML. The reader is assumed to be at the start element.
 *
 * @param reader The XML reader.
 * @return The Nodes, or NULL in case of error.
 */
static struct full_ns0_nodes *xmlTextReaderReadNs0NodesType(xmlTextReaderPtr reader);

/**
 * Writes a Nodes to XML.
 *
 * @param writer The XML writer.
 * @param _nodes The Nodes to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0NodesType(xmlTextWriterPtr writer, struct full_ns0_nodes *_nodes);

/**
 * Frees the elements of a Nodes.
 *
 * @param _nodes The Nodes to free.
 */
static void freeNs0NodesType(struct full_ns0_nodes *_nodes);

#endif /* DEF_full_ns0_nodes_H */
#ifndef DEF_full_ns0_actions_M
#define DEF_full_ns0_actions_M

/**
 * Reads a Actions element from XML. The element to be read is "actions", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The Actions, or NULL in case of error.
 */
struct full_ns0_actions *xml_read_full_ns0_actions(xmlTextReaderPtr reader) {
  int status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
  return xmlTextReaderReadNs0ActionsElement(reader);
}

/**
 * Writes a Actions to XML under element name "actions".
 *
 * @param writer The XML writer.
 * @param _actions The Actions to write.
 * @return 1 if successful, 0 otherwise.
 */
int xml_write_full_ns0_actions(xmlTextWriterPtr writer, struct full_ns0_actions *_actions) {
  return xmlTextWriterWriteNs0ActionsElementNS(writer, _actions, 1);
}

/**
 * Frees a Actions.
 *
 * @param _actions The Actions to free.
 */
void free_full_ns0_actions(struct full_ns0_actions *_actions) {
  freeNs0ActionsType(_actions);
  free(_actions);
}

/**
 * Reads a Actions element from XML. The element to be read is "actions", and
 * it is assumed that the reader is pointing to that element.
 *
 * @param reader The XML reader.
 * @return The Actions, or NULL in case of error.
 */
struct full_ns0_actions *xmlTextReaderReadNs0ActionsElement(xmlTextReaderPtr reader) {
  struct full_ns0_actions *_actions = NULL;

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "actions", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Attempting to read root element {}actions.\n");
#endif
    _actions = xmlTextReaderReadNs0ActionsType(reader);
  }
#if DEBUG_ENUNCIATE
  if (_actions == NULL) {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      printf("attempt to read {}actions failed. current element: {}%s\n",  xmlTextReaderConstLocalName(reader));
    }
    else {
      printf("attempt to read {}actions failed. current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
    }
  }
#endif

  return _actions;
}

/**
 * Writes a Actions to XML under element name "actions".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _actions The Actions to write.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0ActionsElement(xmlTextWriterPtr writer, struct full_ns0_actions *_actions) {
  return xmlTextWriterWriteNs0ActionsElementNS(writer, _actions, 0);
}

/**
 * Writes a Actions to XML under element name "actions".
 *
 * @param writer The XML writer.
 * @param _actions The Actions to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0ActionsElementNS(xmlTextWriterPtr writer, struct full_ns0_actions *_actions, int writeNamespaces) {
  int totalBytes = 0;
  int status;

  status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "actions", NULL);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write start element {}actions. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

#if DEBUG_ENUNCIATE > 1
  printf("writing type {}actions for root element {}actions...\n");
#endif
  status = xmlTextWriterWriteNs0ActionsType(writer, _actions);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write type for start element {}actions. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  status = xmlTextWriterEndElement(writer);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to end element {}actions. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  return totalBytes;
}

/**
 * Frees the children of a Actions.
 *
 * @param _actions The Actions whose children are to be free.
 */
static void freeNs0ActionsElement(struct full_ns0_actions *_actions) {
  freeNs0ActionsType(_actions);
}

/**
 * Reads a Actions from XML. The reader is assumed to be at the start element.
 *
 * @return the Actions, or NULL in case of error.
 */
static struct full_ns0_actions *xmlTextReaderReadNs0ActionsType(xmlTextReaderPtr reader) {
  int status, depth;
  void *_child_accessor;
  struct full_ns0_actions *_actions = calloc(1, sizeof(struct full_ns0_actions));



  if (xmlTextReaderIsEmptyElement(reader) == 0) {
    depth = xmlTextReaderDepth(reader);//track the depth.
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);

    while (xmlTextReaderDepth(reader) > depth) {
      if (status < 1) {
        //panic: XML read error.
#if DEBUG_ENUNCIATE
        printf("Failure to advance to next child element.\n");
#endif
        freeNs0ActionsType(_actions);
        free(_actions);
        return NULL;
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "actionsValue", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}actionsValue of type {http://www.w3.org/2001/XMLSchema}int.\n");
#endif
        _child_accessor = xmlTextReaderReadXsIntType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}actionsValue of type {http://www.w3.org/2001/XMLSchema}int.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0ActionsType(_actions);
          free(_actions);
          return NULL;
        }

        _actions->actionsValue = *((int*)_child_accessor);
        free(_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else {
#if DEBUG_ENUNCIATE > 1
        if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
          printf("unknown child element {}%s for type {}actions.  Skipping...\n",  xmlTextReaderConstLocalName(reader));
        }
        else {
          printf("unknown child element {%s}%s for type {}actions. Skipping...\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
        }
#endif
        status = xmlTextReaderSkipElement(reader);
      }
    }
  }

  return _actions;
}

/**
 * Writes a Actions to XML.
 *
 * @param writer The XML writer.
 * @param _actions The Actions to write.
 * @return The total bytes written, or -1 on error;
 */
static int xmlTextWriterWriteNs0ActionsType(xmlTextWriterPtr writer, struct full_ns0_actions *_actions) {
  int status, totalBytes = 0, i;
  xmlChar *binaryData;
  if (1) { //always write the primitive element.
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "actionsValue", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}actionsValue. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}int for element {}actionsValue...\n");
#endif
    status = xmlTextWriterWriteXsIntType(writer, &(_actions->actionsValue));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}int for element {}actionsValue. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}actionsValue. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }

  return totalBytes;
}

/**
 * Frees the elements of a Actions.
 *
 * @param _actions The Actions to free.
 */
static void freeNs0ActionsType(struct full_ns0_actions *_actions) {
  int i;
}
#endif /* DEF_full_ns0_actions_M */
#ifndef DEF_full_ns0_advertisedBandwidth_M
#define DEF_full_ns0_advertisedBandwidth_M

/**
 * Reads a AdvertisedBandwidth element from XML. The element to be read is "advertisedBandwidth", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The AdvertisedBandwidth, or NULL in case of error.
 */
struct full_ns0_advertisedBandwidth *xml_read_full_ns0_advertisedBandwidth(xmlTextReaderPtr reader) {
  int status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
  return xmlTextReaderReadNs0AdvertisedBandwidthElement(reader);
}

/**
 * Writes a AdvertisedBandwidth to XML under element name "advertisedBandwidth".
 *
 * @param writer The XML writer.
 * @param _advertisedBandwidth The AdvertisedBandwidth to write.
 * @return 1 if successful, 0 otherwise.
 */
int xml_write_full_ns0_advertisedBandwidth(xmlTextWriterPtr writer, struct full_ns0_advertisedBandwidth *_advertisedBandwidth) {
  return xmlTextWriterWriteNs0AdvertisedBandwidthElementNS(writer, _advertisedBandwidth, 1);
}

/**
 * Frees a AdvertisedBandwidth.
 *
 * @param _advertisedBandwidth The AdvertisedBandwidth to free.
 */
void free_full_ns0_advertisedBandwidth(struct full_ns0_advertisedBandwidth *_advertisedBandwidth) {
  freeNs0AdvertisedBandwidthType(_advertisedBandwidth);
  free(_advertisedBandwidth);
}

/**
 * Reads a AdvertisedBandwidth element from XML. The element to be read is "advertisedBandwidth", and
 * it is assumed that the reader is pointing to that element.
 *
 * @param reader The XML reader.
 * @return The AdvertisedBandwidth, or NULL in case of error.
 */
struct full_ns0_advertisedBandwidth *xmlTextReaderReadNs0AdvertisedBandwidthElement(xmlTextReaderPtr reader) {
  struct full_ns0_advertisedBandwidth *_advertisedBandwidth = NULL;

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "advertisedBandwidth", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Attempting to read root element {}advertisedBandwidth.\n");
#endif
    _advertisedBandwidth = xmlTextReaderReadNs0AdvertisedBandwidthType(reader);
  }
#if DEBUG_ENUNCIATE
  if (_advertisedBandwidth == NULL) {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      printf("attempt to read {}advertisedBandwidth failed. current element: {}%s\n",  xmlTextReaderConstLocalName(reader));
    }
    else {
      printf("attempt to read {}advertisedBandwidth failed. current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
    }
  }
#endif

  return _advertisedBandwidth;
}

/**
 * Writes a AdvertisedBandwidth to XML under element name "advertisedBandwidth".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _advertisedBandwidth The AdvertisedBandwidth to write.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0AdvertisedBandwidthElement(xmlTextWriterPtr writer, struct full_ns0_advertisedBandwidth *_advertisedBandwidth) {
  return xmlTextWriterWriteNs0AdvertisedBandwidthElementNS(writer, _advertisedBandwidth, 0);
}

/**
 * Writes a AdvertisedBandwidth to XML under element name "advertisedBandwidth".
 *
 * @param writer The XML writer.
 * @param _advertisedBandwidth The AdvertisedBandwidth to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0AdvertisedBandwidthElementNS(xmlTextWriterPtr writer, struct full_ns0_advertisedBandwidth *_advertisedBandwidth, int writeNamespaces) {
  int totalBytes = 0;
  int status;

  status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "advertisedBandwidth", NULL);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write start element {}advertisedBandwidth. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

#if DEBUG_ENUNCIATE > 1
  printf("writing type {}advertisedBandwidth for root element {}advertisedBandwidth...\n");
#endif
  status = xmlTextWriterWriteNs0AdvertisedBandwidthType(writer, _advertisedBandwidth);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write type for start element {}advertisedBandwidth. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  status = xmlTextWriterEndElement(writer);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to end element {}advertisedBandwidth. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  return totalBytes;
}

/**
 * Frees the children of a AdvertisedBandwidth.
 *
 * @param _advertisedBandwidth The AdvertisedBandwidth whose children are to be free.
 */
static void freeNs0AdvertisedBandwidthElement(struct full_ns0_advertisedBandwidth *_advertisedBandwidth) {
  freeNs0AdvertisedBandwidthType(_advertisedBandwidth);
}

/**
 * Reads a AdvertisedBandwidth from XML. The reader is assumed to be at the start element.
 *
 * @return the AdvertisedBandwidth, or NULL in case of error.
 */
static struct full_ns0_advertisedBandwidth *xmlTextReaderReadNs0AdvertisedBandwidthType(xmlTextReaderPtr reader) {
  int status, depth;
  void *_child_accessor;
  struct full_ns0_advertisedBandwidth *_advertisedBandwidth = calloc(1, sizeof(struct full_ns0_advertisedBandwidth));



  if (xmlTextReaderIsEmptyElement(reader) == 0) {
    depth = xmlTextReaderDepth(reader);//track the depth.
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);

    while (xmlTextReaderDepth(reader) > depth) {
      if (status < 1) {
        //panic: XML read error.
#if DEBUG_ENUNCIATE
        printf("Failure to advance to next child element.\n");
#endif
        freeNs0AdvertisedBandwidthType(_advertisedBandwidth);
        free(_advertisedBandwidth);
        return NULL;
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "bandwidthValue", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}bandwidthValue of type {http://www.w3.org/2001/XMLSchema}long.\n");
#endif
        _child_accessor = xmlTextReaderReadXsLongType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}bandwidthValue of type {http://www.w3.org/2001/XMLSchema}long.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0AdvertisedBandwidthType(_advertisedBandwidth);
          free(_advertisedBandwidth);
          return NULL;
        }

        _advertisedBandwidth->bandwidthValue = *((long*)_child_accessor);
        free(_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else {
#if DEBUG_ENUNCIATE > 1
        if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
          printf("unknown child element {}%s for type {}advertisedBandwidth.  Skipping...\n",  xmlTextReaderConstLocalName(reader));
        }
        else {
          printf("unknown child element {%s}%s for type {}advertisedBandwidth. Skipping...\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
        }
#endif
        status = xmlTextReaderSkipElement(reader);
      }
    }
  }

  return _advertisedBandwidth;
}

/**
 * Writes a AdvertisedBandwidth to XML.
 *
 * @param writer The XML writer.
 * @param _advertisedBandwidth The AdvertisedBandwidth to write.
 * @return The total bytes written, or -1 on error;
 */
static int xmlTextWriterWriteNs0AdvertisedBandwidthType(xmlTextWriterPtr writer, struct full_ns0_advertisedBandwidth *_advertisedBandwidth) {
  int status, totalBytes = 0, i;
  xmlChar *binaryData;
  if (1) { //always write the primitive element.
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "bandwidthValue", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}bandwidthValue. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}long for element {}bandwidthValue...\n");
#endif
    status = xmlTextWriterWriteXsLongType(writer, &(_advertisedBandwidth->bandwidthValue));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}long for element {}bandwidthValue. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}bandwidthValue. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }

  return totalBytes;
}

/**
 * Frees the elements of a AdvertisedBandwidth.
 *
 * @param _advertisedBandwidth The AdvertisedBandwidth to free.
 */
static void freeNs0AdvertisedBandwidthType(struct full_ns0_advertisedBandwidth *_advertisedBandwidth) {
  int i;
}
#endif /* DEF_full_ns0_advertisedBandwidth_M */
#ifndef DEF_full_ns0_bandwidth_M
#define DEF_full_ns0_bandwidth_M

/**
 * Reads a Bandwidth element from XML. The element to be read is "bandwidth", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The Bandwidth, or NULL in case of error.
 */
struct full_ns0_bandwidth *xml_read_full_ns0_bandwidth(xmlTextReaderPtr reader) {
  int status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
  return xmlTextReaderReadNs0BandwidthElement(reader);
}

/**
 * Writes a Bandwidth to XML under element name "bandwidth".
 *
 * @param writer The XML writer.
 * @param _bandwidth The Bandwidth to write.
 * @return 1 if successful, 0 otherwise.
 */
int xml_write_full_ns0_bandwidth(xmlTextWriterPtr writer, struct full_ns0_bandwidth *_bandwidth) {
  return xmlTextWriterWriteNs0BandwidthElementNS(writer, _bandwidth, 1);
}

/**
 * Frees a Bandwidth.
 *
 * @param _bandwidth The Bandwidth to free.
 */
void free_full_ns0_bandwidth(struct full_ns0_bandwidth *_bandwidth) {
  freeNs0BandwidthType(_bandwidth);
  free(_bandwidth);
}

/**
 * Reads a Bandwidth element from XML. The element to be read is "bandwidth", and
 * it is assumed that the reader is pointing to that element.
 *
 * @param reader The XML reader.
 * @return The Bandwidth, or NULL in case of error.
 */
struct full_ns0_bandwidth *xmlTextReaderReadNs0BandwidthElement(xmlTextReaderPtr reader) {
  struct full_ns0_bandwidth *_bandwidth = NULL;

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "bandwidth", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Attempting to read root element {}bandwidth.\n");
#endif
    _bandwidth = xmlTextReaderReadNs0BandwidthType(reader);
  }
#if DEBUG_ENUNCIATE
  if (_bandwidth == NULL) {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      printf("attempt to read {}bandwidth failed. current element: {}%s\n",  xmlTextReaderConstLocalName(reader));
    }
    else {
      printf("attempt to read {}bandwidth failed. current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
    }
  }
#endif

  return _bandwidth;
}

/**
 * Writes a Bandwidth to XML under element name "bandwidth".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _bandwidth The Bandwidth to write.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0BandwidthElement(xmlTextWriterPtr writer, struct full_ns0_bandwidth *_bandwidth) {
  return xmlTextWriterWriteNs0BandwidthElementNS(writer, _bandwidth, 0);
}

/**
 * Writes a Bandwidth to XML under element name "bandwidth".
 *
 * @param writer The XML writer.
 * @param _bandwidth The Bandwidth to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0BandwidthElementNS(xmlTextWriterPtr writer, struct full_ns0_bandwidth *_bandwidth, int writeNamespaces) {
  int totalBytes = 0;
  int status;

  status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "bandwidth", NULL);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write start element {}bandwidth. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

#if DEBUG_ENUNCIATE > 1
  printf("writing type {}bandwidth for root element {}bandwidth...\n");
#endif
  status = xmlTextWriterWriteNs0BandwidthType(writer, _bandwidth);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write type for start element {}bandwidth. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  status = xmlTextWriterEndElement(writer);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to end element {}bandwidth. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  return totalBytes;
}

/**
 * Frees the children of a Bandwidth.
 *
 * @param _bandwidth The Bandwidth whose children are to be free.
 */
static void freeNs0BandwidthElement(struct full_ns0_bandwidth *_bandwidth) {
  freeNs0BandwidthType(_bandwidth);
}

/**
 * Reads a Bandwidth from XML. The reader is assumed to be at the start element.
 *
 * @return the Bandwidth, or NULL in case of error.
 */
static struct full_ns0_bandwidth *xmlTextReaderReadNs0BandwidthType(xmlTextReaderPtr reader) {
  int status, depth;
  void *_child_accessor;
  struct full_ns0_bandwidth *_bandwidth = calloc(1, sizeof(struct full_ns0_bandwidth));



  if (xmlTextReaderIsEmptyElement(reader) == 0) {
    depth = xmlTextReaderDepth(reader);//track the depth.
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);

    while (xmlTextReaderDepth(reader) > depth) {
      if (status < 1) {
        //panic: XML read error.
#if DEBUG_ENUNCIATE
        printf("Failure to advance to next child element.\n");
#endif
        freeNs0BandwidthType(_bandwidth);
        free(_bandwidth);
        return NULL;
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "bandwidthValue", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}bandwidthValue of type {http://www.w3.org/2001/XMLSchema}long.\n");
#endif
        _child_accessor = xmlTextReaderReadXsLongType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}bandwidthValue of type {http://www.w3.org/2001/XMLSchema}long.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0BandwidthType(_bandwidth);
          free(_bandwidth);
          return NULL;
        }

        _bandwidth->bandwidthValue = *((long*)_child_accessor);
        free(_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else {
#if DEBUG_ENUNCIATE > 1
        if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
          printf("unknown child element {}%s for type {}bandwidth.  Skipping...\n",  xmlTextReaderConstLocalName(reader));
        }
        else {
          printf("unknown child element {%s}%s for type {}bandwidth. Skipping...\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
        }
#endif
        status = xmlTextReaderSkipElement(reader);
      }
    }
  }

  return _bandwidth;
}

/**
 * Writes a Bandwidth to XML.
 *
 * @param writer The XML writer.
 * @param _bandwidth The Bandwidth to write.
 * @return The total bytes written, or -1 on error;
 */
static int xmlTextWriterWriteNs0BandwidthType(xmlTextWriterPtr writer, struct full_ns0_bandwidth *_bandwidth) {
  int status, totalBytes = 0, i;
  xmlChar *binaryData;
  if (1) { //always write the primitive element.
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "bandwidthValue", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}bandwidthValue. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}long for element {}bandwidthValue...\n");
#endif
    status = xmlTextWriterWriteXsLongType(writer, &(_bandwidth->bandwidthValue));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}long for element {}bandwidthValue. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}bandwidthValue. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }

  return totalBytes;
}

/**
 * Frees the elements of a Bandwidth.
 *
 * @param _bandwidth The Bandwidth to free.
 */
static void freeNs0BandwidthType(struct full_ns0_bandwidth *_bandwidth) {
  int i;
}
#endif /* DEF_full_ns0_bandwidth_M */
#ifndef DEF_full_ns0_buffers_M
#define DEF_full_ns0_buffers_M

/**
 * Reads a Buffers element from XML. The element to be read is "buffers", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The Buffers, or NULL in case of error.
 */
struct full_ns0_buffers *xml_read_full_ns0_buffers(xmlTextReaderPtr reader) {
  int status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
  return xmlTextReaderReadNs0BuffersElement(reader);
}

/**
 * Writes a Buffers to XML under element name "buffers".
 *
 * @param writer The XML writer.
 * @param _buffers The Buffers to write.
 * @return 1 if successful, 0 otherwise.
 */
int xml_write_full_ns0_buffers(xmlTextWriterPtr writer, struct full_ns0_buffers *_buffers) {
  return xmlTextWriterWriteNs0BuffersElementNS(writer, _buffers, 1);
}

/**
 * Frees a Buffers.
 *
 * @param _buffers The Buffers to free.
 */
void free_full_ns0_buffers(struct full_ns0_buffers *_buffers) {
  freeNs0BuffersType(_buffers);
  free(_buffers);
}

/**
 * Reads a Buffers element from XML. The element to be read is "buffers", and
 * it is assumed that the reader is pointing to that element.
 *
 * @param reader The XML reader.
 * @return The Buffers, or NULL in case of error.
 */
struct full_ns0_buffers *xmlTextReaderReadNs0BuffersElement(xmlTextReaderPtr reader) {
  struct full_ns0_buffers *_buffers = NULL;

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "buffers", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Attempting to read root element {}buffers.\n");
#endif
    _buffers = xmlTextReaderReadNs0BuffersType(reader);
  }
#if DEBUG_ENUNCIATE
  if (_buffers == NULL) {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      printf("attempt to read {}buffers failed. current element: {}%s\n",  xmlTextReaderConstLocalName(reader));
    }
    else {
      printf("attempt to read {}buffers failed. current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
    }
  }
#endif

  return _buffers;
}

/**
 * Writes a Buffers to XML under element name "buffers".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _buffers The Buffers to write.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0BuffersElement(xmlTextWriterPtr writer, struct full_ns0_buffers *_buffers) {
  return xmlTextWriterWriteNs0BuffersElementNS(writer, _buffers, 0);
}

/**
 * Writes a Buffers to XML under element name "buffers".
 *
 * @param writer The XML writer.
 * @param _buffers The Buffers to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0BuffersElementNS(xmlTextWriterPtr writer, struct full_ns0_buffers *_buffers, int writeNamespaces) {
  int totalBytes = 0;
  int status;

  status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "buffers", NULL);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write start element {}buffers. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

#if DEBUG_ENUNCIATE > 1
  printf("writing type {}buffers for root element {}buffers...\n");
#endif
  status = xmlTextWriterWriteNs0BuffersType(writer, _buffers);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write type for start element {}buffers. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  status = xmlTextWriterEndElement(writer);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to end element {}buffers. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  return totalBytes;
}

/**
 * Frees the children of a Buffers.
 *
 * @param _buffers The Buffers whose children are to be free.
 */
static void freeNs0BuffersElement(struct full_ns0_buffers *_buffers) {
  freeNs0BuffersType(_buffers);
}

/**
 * Reads a Buffers from XML. The reader is assumed to be at the start element.
 *
 * @return the Buffers, or NULL in case of error.
 */
static struct full_ns0_buffers *xmlTextReaderReadNs0BuffersType(xmlTextReaderPtr reader) {
  int status, depth;
  void *_child_accessor;
  struct full_ns0_buffers *_buffers = calloc(1, sizeof(struct full_ns0_buffers));



  if (xmlTextReaderIsEmptyElement(reader) == 0) {
    depth = xmlTextReaderDepth(reader);//track the depth.
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);

    while (xmlTextReaderDepth(reader) > depth) {
      if (status < 1) {
        //panic: XML read error.
#if DEBUG_ENUNCIATE
        printf("Failure to advance to next child element.\n");
#endif
        freeNs0BuffersType(_buffers);
        free(_buffers);
        return NULL;
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "buffersValue", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}buffersValue of type {http://www.w3.org/2001/XMLSchema}int.\n");
#endif
        _child_accessor = xmlTextReaderReadXsIntType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}buffersValue of type {http://www.w3.org/2001/XMLSchema}int.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0BuffersType(_buffers);
          free(_buffers);
          return NULL;
        }

        _buffers->buffersValue = *((int*)_child_accessor);
        free(_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else {
#if DEBUG_ENUNCIATE > 1
        if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
          printf("unknown child element {}%s for type {}buffers.  Skipping...\n",  xmlTextReaderConstLocalName(reader));
        }
        else {
          printf("unknown child element {%s}%s for type {}buffers. Skipping...\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
        }
#endif
        status = xmlTextReaderSkipElement(reader);
      }
    }
  }

  return _buffers;
}

/**
 * Writes a Buffers to XML.
 *
 * @param writer The XML writer.
 * @param _buffers The Buffers to write.
 * @return The total bytes written, or -1 on error;
 */
static int xmlTextWriterWriteNs0BuffersType(xmlTextWriterPtr writer, struct full_ns0_buffers *_buffers) {
  int status, totalBytes = 0, i;
  xmlChar *binaryData;
  if (1) { //always write the primitive element.
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "buffersValue", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}buffersValue. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}int for element {}buffersValue...\n");
#endif
    status = xmlTextWriterWriteXsIntType(writer, &(_buffers->buffersValue));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}int for element {}buffersValue. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}buffersValue. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }

  return totalBytes;
}

/**
 * Frees the elements of a Buffers.
 *
 * @param _buffers The Buffers to free.
 */
static void freeNs0BuffersType(struct full_ns0_buffers *_buffers) {
  int i;
}
#endif /* DEF_full_ns0_buffers_M */
#ifndef DEF_full_ns0_capabilities_M
#define DEF_full_ns0_capabilities_M

/**
 * Reads a Capabilities element from XML. The element to be read is "capabilities", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The Capabilities, or NULL in case of error.
 */
struct full_ns0_capabilities *xml_read_full_ns0_capabilities(xmlTextReaderPtr reader) {
  int status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
  return xmlTextReaderReadNs0CapabilitiesElement(reader);
}

/**
 * Writes a Capabilities to XML under element name "capabilities".
 *
 * @param writer The XML writer.
 * @param _capabilities The Capabilities to write.
 * @return 1 if successful, 0 otherwise.
 */
int xml_write_full_ns0_capabilities(xmlTextWriterPtr writer, struct full_ns0_capabilities *_capabilities) {
  return xmlTextWriterWriteNs0CapabilitiesElementNS(writer, _capabilities, 1);
}

/**
 * Frees a Capabilities.
 *
 * @param _capabilities The Capabilities to free.
 */
void free_full_ns0_capabilities(struct full_ns0_capabilities *_capabilities) {
  freeNs0CapabilitiesType(_capabilities);
  free(_capabilities);
}

/**
 * Reads a Capabilities element from XML. The element to be read is "capabilities", and
 * it is assumed that the reader is pointing to that element.
 *
 * @param reader The XML reader.
 * @return The Capabilities, or NULL in case of error.
 */
struct full_ns0_capabilities *xmlTextReaderReadNs0CapabilitiesElement(xmlTextReaderPtr reader) {
  struct full_ns0_capabilities *_capabilities = NULL;

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "capabilities", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Attempting to read root element {}capabilities.\n");
#endif
    _capabilities = xmlTextReaderReadNs0CapabilitiesType(reader);
  }
#if DEBUG_ENUNCIATE
  if (_capabilities == NULL) {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      printf("attempt to read {}capabilities failed. current element: {}%s\n",  xmlTextReaderConstLocalName(reader));
    }
    else {
      printf("attempt to read {}capabilities failed. current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
    }
  }
#endif

  return _capabilities;
}

/**
 * Writes a Capabilities to XML under element name "capabilities".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _capabilities The Capabilities to write.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0CapabilitiesElement(xmlTextWriterPtr writer, struct full_ns0_capabilities *_capabilities) {
  return xmlTextWriterWriteNs0CapabilitiesElementNS(writer, _capabilities, 0);
}

/**
 * Writes a Capabilities to XML under element name "capabilities".
 *
 * @param writer The XML writer.
 * @param _capabilities The Capabilities to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0CapabilitiesElementNS(xmlTextWriterPtr writer, struct full_ns0_capabilities *_capabilities, int writeNamespaces) {
  int totalBytes = 0;
  int status;

  status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "capabilities", NULL);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write start element {}capabilities. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

#if DEBUG_ENUNCIATE > 1
  printf("writing type {}capabilities for root element {}capabilities...\n");
#endif
  status = xmlTextWriterWriteNs0CapabilitiesType(writer, _capabilities);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write type for start element {}capabilities. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  status = xmlTextWriterEndElement(writer);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to end element {}capabilities. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  return totalBytes;
}

/**
 * Frees the children of a Capabilities.
 *
 * @param _capabilities The Capabilities whose children are to be free.
 */
static void freeNs0CapabilitiesElement(struct full_ns0_capabilities *_capabilities) {
  freeNs0CapabilitiesType(_capabilities);
}

/**
 * Reads a Capabilities from XML. The reader is assumed to be at the start element.
 *
 * @return the Capabilities, or NULL in case of error.
 */
static struct full_ns0_capabilities *xmlTextReaderReadNs0CapabilitiesType(xmlTextReaderPtr reader) {
  int status, depth;
  void *_child_accessor;
  struct full_ns0_capabilities *_capabilities = calloc(1, sizeof(struct full_ns0_capabilities));



  if (xmlTextReaderIsEmptyElement(reader) == 0) {
    depth = xmlTextReaderDepth(reader);//track the depth.
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);

    while (xmlTextReaderDepth(reader) > depth) {
      if (status < 1) {
        //panic: XML read error.
#if DEBUG_ENUNCIATE
        printf("Failure to advance to next child element.\n");
#endif
        freeNs0CapabilitiesType(_capabilities);
        free(_capabilities);
        return NULL;
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "capabilitiesValue", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}capabilitiesValue of type {http://www.w3.org/2001/XMLSchema}int.\n");
#endif
        _child_accessor = xmlTextReaderReadXsIntType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}capabilitiesValue of type {http://www.w3.org/2001/XMLSchema}int.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0CapabilitiesType(_capabilities);
          free(_capabilities);
          return NULL;
        }

        _capabilities->capabilitiesValue = *((int*)_child_accessor);
        free(_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else {
#if DEBUG_ENUNCIATE > 1
        if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
          printf("unknown child element {}%s for type {}capabilities.  Skipping...\n",  xmlTextReaderConstLocalName(reader));
        }
        else {
          printf("unknown child element {%s}%s for type {}capabilities. Skipping...\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
        }
#endif
        status = xmlTextReaderSkipElement(reader);
      }
    }
  }

  return _capabilities;
}

/**
 * Writes a Capabilities to XML.
 *
 * @param writer The XML writer.
 * @param _capabilities The Capabilities to write.
 * @return The total bytes written, or -1 on error;
 */
static int xmlTextWriterWriteNs0CapabilitiesType(xmlTextWriterPtr writer, struct full_ns0_capabilities *_capabilities) {
  int status, totalBytes = 0, i;
  xmlChar *binaryData;
  if (1) { //always write the primitive element.
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "capabilitiesValue", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}capabilitiesValue. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}int for element {}capabilitiesValue...\n");
#endif
    status = xmlTextWriterWriteXsIntType(writer, &(_capabilities->capabilitiesValue));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}int for element {}capabilitiesValue. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}capabilitiesValue. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }

  return totalBytes;
}

/**
 * Frees the elements of a Capabilities.
 *
 * @param _capabilities The Capabilities to free.
 */
static void freeNs0CapabilitiesType(struct full_ns0_capabilities *_capabilities) {
  int i;
}
#endif /* DEF_full_ns0_capabilities_M */
#ifndef DEF_full_ns0_config_M
#define DEF_full_ns0_config_M

/**
 * Reads a Config element from XML. The element to be read is "config", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The Config, or NULL in case of error.
 */
struct full_ns0_config *xml_read_full_ns0_config(xmlTextReaderPtr reader) {
  int status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
  return xmlTextReaderReadNs0ConfigElement(reader);
}

/**
 * Writes a Config to XML under element name "config".
 *
 * @param writer The XML writer.
 * @param _config The Config to write.
 * @return 1 if successful, 0 otherwise.
 */
int xml_write_full_ns0_config(xmlTextWriterPtr writer, struct full_ns0_config *_config) {
  return xmlTextWriterWriteNs0ConfigElementNS(writer, _config, 1);
}

/**
 * Frees a Config.
 *
 * @param _config The Config to free.
 */
void free_full_ns0_config(struct full_ns0_config *_config) {
  freeNs0ConfigType(_config);
  free(_config);
}

/**
 * Reads a Config element from XML. The element to be read is "config", and
 * it is assumed that the reader is pointing to that element.
 *
 * @param reader The XML reader.
 * @return The Config, or NULL in case of error.
 */
struct full_ns0_config *xmlTextReaderReadNs0ConfigElement(xmlTextReaderPtr reader) {
  struct full_ns0_config *_config = NULL;

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "config", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Attempting to read root element {}config.\n");
#endif
    _config = xmlTextReaderReadNs0ConfigType(reader);
  }
#if DEBUG_ENUNCIATE
  if (_config == NULL) {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      printf("attempt to read {}config failed. current element: {}%s\n",  xmlTextReaderConstLocalName(reader));
    }
    else {
      printf("attempt to read {}config failed. current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
    }
  }
#endif

  return _config;
}

/**
 * Writes a Config to XML under element name "config".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _config The Config to write.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0ConfigElement(xmlTextWriterPtr writer, struct full_ns0_config *_config) {
  return xmlTextWriterWriteNs0ConfigElementNS(writer, _config, 0);
}

/**
 * Writes a Config to XML under element name "config".
 *
 * @param writer The XML writer.
 * @param _config The Config to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0ConfigElementNS(xmlTextWriterPtr writer, struct full_ns0_config *_config, int writeNamespaces) {
  int totalBytes = 0;
  int status;

  status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "config", NULL);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write start element {}config. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

#if DEBUG_ENUNCIATE > 1
  printf("writing type {}config for root element {}config...\n");
#endif
  status = xmlTextWriterWriteNs0ConfigType(writer, _config);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write type for start element {}config. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  status = xmlTextWriterEndElement(writer);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to end element {}config. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  return totalBytes;
}

/**
 * Frees the children of a Config.
 *
 * @param _config The Config whose children are to be free.
 */
static void freeNs0ConfigElement(struct full_ns0_config *_config) {
  freeNs0ConfigType(_config);
}

/**
 * Reads a Config from XML. The reader is assumed to be at the start element.
 *
 * @return the Config, or NULL in case of error.
 */
static struct full_ns0_config *xmlTextReaderReadNs0ConfigType(xmlTextReaderPtr reader) {
  int status, depth;
  void *_child_accessor;
  struct full_ns0_config *_config = calloc(1, sizeof(struct full_ns0_config));



  if (xmlTextReaderIsEmptyElement(reader) == 0) {
    depth = xmlTextReaderDepth(reader);//track the depth.
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);

    while (xmlTextReaderDepth(reader) > depth) {
      if (status < 1) {
        //panic: XML read error.
#if DEBUG_ENUNCIATE
        printf("Failure to advance to next child element.\n");
#endif
        freeNs0ConfigType(_config);
        free(_config);
        return NULL;
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "configValue", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}configValue of type {http://www.w3.org/2001/XMLSchema}short.\n");
#endif
        _child_accessor = xmlTextReaderReadXsShortType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}configValue of type {http://www.w3.org/2001/XMLSchema}short.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0ConfigType(_config);
          free(_config);
          return NULL;
        }

        _config->configValue = *((short*)_child_accessor);
        free(_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else {
#if DEBUG_ENUNCIATE > 1
        if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
          printf("unknown child element {}%s for type {}config.  Skipping...\n",  xmlTextReaderConstLocalName(reader));
        }
        else {
          printf("unknown child element {%s}%s for type {}config. Skipping...\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
        }
#endif
        status = xmlTextReaderSkipElement(reader);
      }
    }
  }

  return _config;
}

/**
 * Writes a Config to XML.
 *
 * @param writer The XML writer.
 * @param _config The Config to write.
 * @return The total bytes written, or -1 on error;
 */
static int xmlTextWriterWriteNs0ConfigType(xmlTextWriterPtr writer, struct full_ns0_config *_config) {
  int status, totalBytes = 0, i;
  xmlChar *binaryData;
  if (1) { //always write the primitive element.
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "configValue", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}configValue. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}short for element {}configValue...\n");
#endif
    status = xmlTextWriterWriteXsShortType(writer, &(_config->configValue));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}short for element {}configValue. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}configValue. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }

  return totalBytes;
}

/**
 * Frees the elements of a Config.
 *
 * @param _config The Config to free.
 */
static void freeNs0ConfigType(struct full_ns0_config *_config) {
  int i;
}
#endif /* DEF_full_ns0_config_M */
#ifndef DEF_full_ns0_latency_M
#define DEF_full_ns0_latency_M

/**
 * Reads a Latency element from XML. The element to be read is "latency", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The Latency, or NULL in case of error.
 */
struct full_ns0_latency *xml_read_full_ns0_latency(xmlTextReaderPtr reader) {
  int status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
  return xmlTextReaderReadNs0LatencyElement(reader);
}

/**
 * Writes a Latency to XML under element name "latency".
 *
 * @param writer The XML writer.
 * @param _latency The Latency to write.
 * @return 1 if successful, 0 otherwise.
 */
int xml_write_full_ns0_latency(xmlTextWriterPtr writer, struct full_ns0_latency *_latency) {
  return xmlTextWriterWriteNs0LatencyElementNS(writer, _latency, 1);
}

/**
 * Frees a Latency.
 *
 * @param _latency The Latency to free.
 */
void free_full_ns0_latency(struct full_ns0_latency *_latency) {
  freeNs0LatencyType(_latency);
  free(_latency);
}

/**
 * Reads a Latency element from XML. The element to be read is "latency", and
 * it is assumed that the reader is pointing to that element.
 *
 * @param reader The XML reader.
 * @return The Latency, or NULL in case of error.
 */
struct full_ns0_latency *xmlTextReaderReadNs0LatencyElement(xmlTextReaderPtr reader) {
  struct full_ns0_latency *_latency = NULL;

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "latency", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Attempting to read root element {}latency.\n");
#endif
    _latency = xmlTextReaderReadNs0LatencyType(reader);
  }
#if DEBUG_ENUNCIATE
  if (_latency == NULL) {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      printf("attempt to read {}latency failed. current element: {}%s\n",  xmlTextReaderConstLocalName(reader));
    }
    else {
      printf("attempt to read {}latency failed. current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
    }
  }
#endif

  return _latency;
}

/**
 * Writes a Latency to XML under element name "latency".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _latency The Latency to write.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0LatencyElement(xmlTextWriterPtr writer, struct full_ns0_latency *_latency) {
  return xmlTextWriterWriteNs0LatencyElementNS(writer, _latency, 0);
}

/**
 * Writes a Latency to XML under element name "latency".
 *
 * @param writer The XML writer.
 * @param _latency The Latency to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0LatencyElementNS(xmlTextWriterPtr writer, struct full_ns0_latency *_latency, int writeNamespaces) {
  int totalBytes = 0;
  int status;

  status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "latency", NULL);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write start element {}latency. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

#if DEBUG_ENUNCIATE > 1
  printf("writing type {}latency for root element {}latency...\n");
#endif
  status = xmlTextWriterWriteNs0LatencyType(writer, _latency);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write type for start element {}latency. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  status = xmlTextWriterEndElement(writer);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to end element {}latency. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  return totalBytes;
}

/**
 * Frees the children of a Latency.
 *
 * @param _latency The Latency whose children are to be free.
 */
static void freeNs0LatencyElement(struct full_ns0_latency *_latency) {
  freeNs0LatencyType(_latency);
}

/**
 * Reads a Latency from XML. The reader is assumed to be at the start element.
 *
 * @return the Latency, or NULL in case of error.
 */
static struct full_ns0_latency *xmlTextReaderReadNs0LatencyType(xmlTextReaderPtr reader) {
  int status, depth;
  void *_child_accessor;
  struct full_ns0_latency *_latency = calloc(1, sizeof(struct full_ns0_latency));




  return _latency;
}

/**
 * Writes a Latency to XML.
 *
 * @param writer The XML writer.
 * @param _latency The Latency to write.
 * @return The total bytes written, or -1 on error;
 */
static int xmlTextWriterWriteNs0LatencyType(xmlTextWriterPtr writer, struct full_ns0_latency *_latency) {
  int status, totalBytes = 0, i;
  xmlChar *binaryData;

  return totalBytes;
}

/**
 * Frees the elements of a Latency.
 *
 * @param _latency The Latency to free.
 */
static void freeNs0LatencyType(struct full_ns0_latency *_latency) {
  int i;
}
#endif /* DEF_full_ns0_latency_M */
#ifndef DEF_full_ns0_macAddress_M
#define DEF_full_ns0_macAddress_M

/**
 * Reads a MacAddress element from XML. The element to be read is "macAddress", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The MacAddress, or NULL in case of error.
 */
struct full_ns0_macAddress *xml_read_full_ns0_macAddress(xmlTextReaderPtr reader) {
  int status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
  return xmlTextReaderReadNs0MacAddressElement(reader);
}

/**
 * Writes a MacAddress to XML under element name "macAddress".
 *
 * @param writer The XML writer.
 * @param _macAddress The MacAddress to write.
 * @return 1 if successful, 0 otherwise.
 */
int xml_write_full_ns0_macAddress(xmlTextWriterPtr writer, struct full_ns0_macAddress *_macAddress) {
  return xmlTextWriterWriteNs0MacAddressElementNS(writer, _macAddress, 1);
}

/**
 * Frees a MacAddress.
 *
 * @param _macAddress The MacAddress to free.
 */
void free_full_ns0_macAddress(struct full_ns0_macAddress *_macAddress) {
  freeNs0MacAddressType(_macAddress);
  free(_macAddress);
}

/**
 * Reads a MacAddress element from XML. The element to be read is "macAddress", and
 * it is assumed that the reader is pointing to that element.
 *
 * @param reader The XML reader.
 * @return The MacAddress, or NULL in case of error.
 */
struct full_ns0_macAddress *xmlTextReaderReadNs0MacAddressElement(xmlTextReaderPtr reader) {
  struct full_ns0_macAddress *_macAddress = NULL;

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "macAddress", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Attempting to read root element {}macAddress.\n");
#endif
    _macAddress = xmlTextReaderReadNs0MacAddressType(reader);
  }
#if DEBUG_ENUNCIATE
  if (_macAddress == NULL) {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      printf("attempt to read {}macAddress failed. current element: {}%s\n",  xmlTextReaderConstLocalName(reader));
    }
    else {
      printf("attempt to read {}macAddress failed. current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
    }
  }
#endif

  return _macAddress;
}

/**
 * Writes a MacAddress to XML under element name "macAddress".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _macAddress The MacAddress to write.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0MacAddressElement(xmlTextWriterPtr writer, struct full_ns0_macAddress *_macAddress) {
  return xmlTextWriterWriteNs0MacAddressElementNS(writer, _macAddress, 0);
}

/**
 * Writes a MacAddress to XML under element name "macAddress".
 *
 * @param writer The XML writer.
 * @param _macAddress The MacAddress to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0MacAddressElementNS(xmlTextWriterPtr writer, struct full_ns0_macAddress *_macAddress, int writeNamespaces) {
  int totalBytes = 0;
  int status;

  status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "macAddress", NULL);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write start element {}macAddress. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

#if DEBUG_ENUNCIATE > 1
  printf("writing type {}macAddress for root element {}macAddress...\n");
#endif
  status = xmlTextWriterWriteNs0MacAddressType(writer, _macAddress);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write type for start element {}macAddress. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  status = xmlTextWriterEndElement(writer);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to end element {}macAddress. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  return totalBytes;
}

/**
 * Frees the children of a MacAddress.
 *
 * @param _macAddress The MacAddress whose children are to be free.
 */
static void freeNs0MacAddressElement(struct full_ns0_macAddress *_macAddress) {
  freeNs0MacAddressType(_macAddress);
}

/**
 * Reads a MacAddress from XML. The reader is assumed to be at the start element.
 *
 * @return the MacAddress, or NULL in case of error.
 */
static struct full_ns0_macAddress *xmlTextReaderReadNs0MacAddressType(xmlTextReaderPtr reader) {
  int status, depth;
  void *_child_accessor;
  struct full_ns0_macAddress *_macAddress = calloc(1, sizeof(struct full_ns0_macAddress));



  if (xmlTextReaderIsEmptyElement(reader) == 0) {
    depth = xmlTextReaderDepth(reader);//track the depth.
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);

    while (xmlTextReaderDepth(reader) > depth) {
      if (status < 1) {
        //panic: XML read error.
#if DEBUG_ENUNCIATE
        printf("Failure to advance to next child element.\n");
#endif
        freeNs0MacAddressType(_macAddress);
        free(_macAddress);
        return NULL;
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "macAddress", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read binary data of choice {}macAddress.\n");
#endif
        _child_accessor = xmlTextReaderReadEntireNodeValue(reader);
        _macAddress->address = _decode_base64((xmlChar *) _child_accessor, &(_macAddress->_sizeof_address));
        free(_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else {
#if DEBUG_ENUNCIATE > 1
        if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
          printf("unknown child element {}%s for type {}macAddress.  Skipping...\n",  xmlTextReaderConstLocalName(reader));
        }
        else {
          printf("unknown child element {%s}%s for type {}macAddress. Skipping...\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
        }
#endif
        status = xmlTextReaderSkipElement(reader);
      }
    }
  }

  return _macAddress;
}

/**
 * Writes a MacAddress to XML.
 *
 * @param writer The XML writer.
 * @param _macAddress The MacAddress to write.
 * @return The total bytes written, or -1 on error;
 */
static int xmlTextWriterWriteNs0MacAddressType(xmlTextWriterPtr writer, struct full_ns0_macAddress *_macAddress) {
  int status, totalBytes = 0, i;
  xmlChar *binaryData;
  if (_macAddress->address != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "macAddress", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}macAddress. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

#if DEBUG_ENUNCIATE > 1
    printf("writing binary data for element {}macAddress...\n");
#endif
    binaryData = _encode_base64(_macAddress->address, _macAddress->_sizeof_address);
    status = xmlTextWriterWriteString(writer, binaryData);
    free(binaryData);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write binary data for element {}macAddress. status: %i\n", status);
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
 * Frees the elements of a MacAddress.
 *
 * @param _macAddress The MacAddress to free.
 */
static void freeNs0MacAddressType(struct full_ns0_macAddress *_macAddress) {
  int i;
  if (_macAddress->address != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor address of type full_ns0_macAddress...\n");
#endif
    free(_macAddress->address);
  }
}
#endif /* DEF_full_ns0_macAddress_M */
#ifndef DEF_full_ns0_name_M
#define DEF_full_ns0_name_M

/**
 * Reads a Name element from XML. The element to be read is "name", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The Name, or NULL in case of error.
 */
struct full_ns0_name *xml_read_full_ns0_name(xmlTextReaderPtr reader) {
  int status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
  return xmlTextReaderReadNs0NameElement(reader);
}

/**
 * Writes a Name to XML under element name "name".
 *
 * @param writer The XML writer.
 * @param _name The Name to write.
 * @return 1 if successful, 0 otherwise.
 */
int xml_write_full_ns0_name(xmlTextWriterPtr writer, struct full_ns0_name *_name) {
  return xmlTextWriterWriteNs0NameElementNS(writer, _name, 1);
}

/**
 * Frees a Name.
 *
 * @param _name The Name to free.
 */
void free_full_ns0_name(struct full_ns0_name *_name) {
  freeNs0NameType(_name);
  free(_name);
}

/**
 * Reads a Name element from XML. The element to be read is "name", and
 * it is assumed that the reader is pointing to that element.
 *
 * @param reader The XML reader.
 * @return The Name, or NULL in case of error.
 */
struct full_ns0_name *xmlTextReaderReadNs0NameElement(xmlTextReaderPtr reader) {
  struct full_ns0_name *_name = NULL;

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "name", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Attempting to read root element {}name.\n");
#endif
    _name = xmlTextReaderReadNs0NameType(reader);
  }
#if DEBUG_ENUNCIATE
  if (_name == NULL) {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      printf("attempt to read {}name failed. current element: {}%s\n",  xmlTextReaderConstLocalName(reader));
    }
    else {
      printf("attempt to read {}name failed. current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
    }
  }
#endif

  return _name;
}

/**
 * Writes a Name to XML under element name "name".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _name The Name to write.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0NameElement(xmlTextWriterPtr writer, struct full_ns0_name *_name) {
  return xmlTextWriterWriteNs0NameElementNS(writer, _name, 0);
}

/**
 * Writes a Name to XML under element name "name".
 *
 * @param writer The XML writer.
 * @param _name The Name to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0NameElementNS(xmlTextWriterPtr writer, struct full_ns0_name *_name, int writeNamespaces) {
  int totalBytes = 0;
  int status;

  status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "name", NULL);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write start element {}name. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

#if DEBUG_ENUNCIATE > 1
  printf("writing type {}name for root element {}name...\n");
#endif
  status = xmlTextWriterWriteNs0NameType(writer, _name);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write type for start element {}name. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  status = xmlTextWriterEndElement(writer);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to end element {}name. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  return totalBytes;
}

/**
 * Frees the children of a Name.
 *
 * @param _name The Name whose children are to be free.
 */
static void freeNs0NameElement(struct full_ns0_name *_name) {
  freeNs0NameType(_name);
}

/**
 * Reads a Name from XML. The reader is assumed to be at the start element.
 *
 * @return the Name, or NULL in case of error.
 */
static struct full_ns0_name *xmlTextReaderReadNs0NameType(xmlTextReaderPtr reader) {
  int status, depth;
  void *_child_accessor;
  struct full_ns0_name *_name = calloc(1, sizeof(struct full_ns0_name));



  if (xmlTextReaderIsEmptyElement(reader) == 0) {
    depth = xmlTextReaderDepth(reader);//track the depth.
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);

    while (xmlTextReaderDepth(reader) > depth) {
      if (status < 1) {
        //panic: XML read error.
#if DEBUG_ENUNCIATE
        printf("Failure to advance to next child element.\n");
#endif
        freeNs0NameType(_name);
        free(_name);
        return NULL;
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "nameValue", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}nameValue of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}nameValue of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0NameType(_name);
          free(_name);
          return NULL;
        }

        _name->nameValue = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else {
#if DEBUG_ENUNCIATE > 1
        if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
          printf("unknown child element {}%s for type {}name.  Skipping...\n",  xmlTextReaderConstLocalName(reader));
        }
        else {
          printf("unknown child element {%s}%s for type {}name. Skipping...\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
        }
#endif
        status = xmlTextReaderSkipElement(reader);
      }
    }
  }

  return _name;
}

/**
 * Writes a Name to XML.
 *
 * @param writer The XML writer.
 * @param _name The Name to write.
 * @return The total bytes written, or -1 on error;
 */
static int xmlTextWriterWriteNs0NameType(xmlTextWriterPtr writer, struct full_ns0_name *_name) {
  int status, totalBytes = 0, i;
  xmlChar *binaryData;
  if (_name->nameValue != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "nameValue", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}nameValue. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}nameValue...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_name->nameValue));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}nameValue. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}nameValue. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }

  return totalBytes;
}

/**
 * Frees the elements of a Name.
 *
 * @param _name The Name to free.
 */
static void freeNs0NameType(struct full_ns0_name *_name) {
  int i;
  if (_name->nameValue != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor nameValue of type full_ns0_name...\n");
#endif
    freeXsStringType(_name->nameValue);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor nameValue of type full_ns0_name...\n");
#endif
    free(_name->nameValue);
  }
}
#endif /* DEF_full_ns0_name_M */
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
#ifndef DEF_full_ns0_peerBandwidth_M
#define DEF_full_ns0_peerBandwidth_M

/**
 * Reads a PeerBandwidth element from XML. The element to be read is "peerBandwidth", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The PeerBandwidth, or NULL in case of error.
 */
struct full_ns0_peerBandwidth *xml_read_full_ns0_peerBandwidth(xmlTextReaderPtr reader) {
  int status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
  return xmlTextReaderReadNs0PeerBandwidthElement(reader);
}

/**
 * Writes a PeerBandwidth to XML under element name "peerBandwidth".
 *
 * @param writer The XML writer.
 * @param _peerBandwidth The PeerBandwidth to write.
 * @return 1 if successful, 0 otherwise.
 */
int xml_write_full_ns0_peerBandwidth(xmlTextWriterPtr writer, struct full_ns0_peerBandwidth *_peerBandwidth) {
  return xmlTextWriterWriteNs0PeerBandwidthElementNS(writer, _peerBandwidth, 1);
}

/**
 * Frees a PeerBandwidth.
 *
 * @param _peerBandwidth The PeerBandwidth to free.
 */
void free_full_ns0_peerBandwidth(struct full_ns0_peerBandwidth *_peerBandwidth) {
  freeNs0PeerBandwidthType(_peerBandwidth);
  free(_peerBandwidth);
}

/**
 * Reads a PeerBandwidth element from XML. The element to be read is "peerBandwidth", and
 * it is assumed that the reader is pointing to that element.
 *
 * @param reader The XML reader.
 * @return The PeerBandwidth, or NULL in case of error.
 */
struct full_ns0_peerBandwidth *xmlTextReaderReadNs0PeerBandwidthElement(xmlTextReaderPtr reader) {
  struct full_ns0_peerBandwidth *_peerBandwidth = NULL;

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "peerBandwidth", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Attempting to read root element {}peerBandwidth.\n");
#endif
    _peerBandwidth = xmlTextReaderReadNs0PeerBandwidthType(reader);
  }
#if DEBUG_ENUNCIATE
  if (_peerBandwidth == NULL) {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      printf("attempt to read {}peerBandwidth failed. current element: {}%s\n",  xmlTextReaderConstLocalName(reader));
    }
    else {
      printf("attempt to read {}peerBandwidth failed. current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
    }
  }
#endif

  return _peerBandwidth;
}

/**
 * Writes a PeerBandwidth to XML under element name "peerBandwidth".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _peerBandwidth The PeerBandwidth to write.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0PeerBandwidthElement(xmlTextWriterPtr writer, struct full_ns0_peerBandwidth *_peerBandwidth) {
  return xmlTextWriterWriteNs0PeerBandwidthElementNS(writer, _peerBandwidth, 0);
}

/**
 * Writes a PeerBandwidth to XML under element name "peerBandwidth".
 *
 * @param writer The XML writer.
 * @param _peerBandwidth The PeerBandwidth to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0PeerBandwidthElementNS(xmlTextWriterPtr writer, struct full_ns0_peerBandwidth *_peerBandwidth, int writeNamespaces) {
  int totalBytes = 0;
  int status;

  status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "peerBandwidth", NULL);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write start element {}peerBandwidth. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

#if DEBUG_ENUNCIATE > 1
  printf("writing type {}peerBandwidth for root element {}peerBandwidth...\n");
#endif
  status = xmlTextWriterWriteNs0PeerBandwidthType(writer, _peerBandwidth);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write type for start element {}peerBandwidth. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  status = xmlTextWriterEndElement(writer);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to end element {}peerBandwidth. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  return totalBytes;
}

/**
 * Frees the children of a PeerBandwidth.
 *
 * @param _peerBandwidth The PeerBandwidth whose children are to be free.
 */
static void freeNs0PeerBandwidthElement(struct full_ns0_peerBandwidth *_peerBandwidth) {
  freeNs0PeerBandwidthType(_peerBandwidth);
}

/**
 * Reads a PeerBandwidth from XML. The reader is assumed to be at the start element.
 *
 * @return the PeerBandwidth, or NULL in case of error.
 */
static struct full_ns0_peerBandwidth *xmlTextReaderReadNs0PeerBandwidthType(xmlTextReaderPtr reader) {
  int status, depth;
  void *_child_accessor;
  struct full_ns0_peerBandwidth *_peerBandwidth = calloc(1, sizeof(struct full_ns0_peerBandwidth));



  if (xmlTextReaderIsEmptyElement(reader) == 0) {
    depth = xmlTextReaderDepth(reader);//track the depth.
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);

    while (xmlTextReaderDepth(reader) > depth) {
      if (status < 1) {
        //panic: XML read error.
#if DEBUG_ENUNCIATE
        printf("Failure to advance to next child element.\n");
#endif
        freeNs0PeerBandwidthType(_peerBandwidth);
        free(_peerBandwidth);
        return NULL;
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "bandwidthValue", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}bandwidthValue of type {http://www.w3.org/2001/XMLSchema}long.\n");
#endif
        _child_accessor = xmlTextReaderReadXsLongType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}bandwidthValue of type {http://www.w3.org/2001/XMLSchema}long.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0PeerBandwidthType(_peerBandwidth);
          free(_peerBandwidth);
          return NULL;
        }

        _peerBandwidth->bandwidthValue = *((long*)_child_accessor);
        free(_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else {
#if DEBUG_ENUNCIATE > 1
        if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
          printf("unknown child element {}%s for type {}peerBandwidth.  Skipping...\n",  xmlTextReaderConstLocalName(reader));
        }
        else {
          printf("unknown child element {%s}%s for type {}peerBandwidth. Skipping...\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
        }
#endif
        status = xmlTextReaderSkipElement(reader);
      }
    }
  }

  return _peerBandwidth;
}

/**
 * Writes a PeerBandwidth to XML.
 *
 * @param writer The XML writer.
 * @param _peerBandwidth The PeerBandwidth to write.
 * @return The total bytes written, or -1 on error;
 */
static int xmlTextWriterWriteNs0PeerBandwidthType(xmlTextWriterPtr writer, struct full_ns0_peerBandwidth *_peerBandwidth) {
  int status, totalBytes = 0, i;
  xmlChar *binaryData;
  if (1) { //always write the primitive element.
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "bandwidthValue", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}bandwidthValue. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}long for element {}bandwidthValue...\n");
#endif
    status = xmlTextWriterWriteXsLongType(writer, &(_peerBandwidth->bandwidthValue));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}long for element {}bandwidthValue. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}bandwidthValue. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }

  return totalBytes;
}

/**
 * Frees the elements of a PeerBandwidth.
 *
 * @param _peerBandwidth The PeerBandwidth to free.
 */
static void freeNs0PeerBandwidthType(struct full_ns0_peerBandwidth *_peerBandwidth) {
  int i;
}
#endif /* DEF_full_ns0_peerBandwidth_M */
#ifndef DEF_full_ns0_state_M
#define DEF_full_ns0_state_M

/**
 * Reads a State element from XML. The element to be read is "state", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The State, or NULL in case of error.
 */
struct full_ns0_state *xml_read_full_ns0_state(xmlTextReaderPtr reader) {
  int status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
  return xmlTextReaderReadNs0StateElement(reader);
}

/**
 * Writes a State to XML under element name "state".
 *
 * @param writer The XML writer.
 * @param _state The State to write.
 * @return 1 if successful, 0 otherwise.
 */
int xml_write_full_ns0_state(xmlTextWriterPtr writer, struct full_ns0_state *_state) {
  return xmlTextWriterWriteNs0StateElementNS(writer, _state, 1);
}

/**
 * Frees a State.
 *
 * @param _state The State to free.
 */
void free_full_ns0_state(struct full_ns0_state *_state) {
  freeNs0StateType(_state);
  free(_state);
}

/**
 * Reads a State element from XML. The element to be read is "state", and
 * it is assumed that the reader is pointing to that element.
 *
 * @param reader The XML reader.
 * @return The State, or NULL in case of error.
 */
struct full_ns0_state *xmlTextReaderReadNs0StateElement(xmlTextReaderPtr reader) {
  struct full_ns0_state *_state = NULL;

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "state", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Attempting to read root element {}state.\n");
#endif
    _state = xmlTextReaderReadNs0StateType(reader);
  }
#if DEBUG_ENUNCIATE
  if (_state == NULL) {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      printf("attempt to read {}state failed. current element: {}%s\n",  xmlTextReaderConstLocalName(reader));
    }
    else {
      printf("attempt to read {}state failed. current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
    }
  }
#endif

  return _state;
}

/**
 * Writes a State to XML under element name "state".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _state The State to write.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0StateElement(xmlTextWriterPtr writer, struct full_ns0_state *_state) {
  return xmlTextWriterWriteNs0StateElementNS(writer, _state, 0);
}

/**
 * Writes a State to XML under element name "state".
 *
 * @param writer The XML writer.
 * @param _state The State to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0StateElementNS(xmlTextWriterPtr writer, struct full_ns0_state *_state, int writeNamespaces) {
  int totalBytes = 0;
  int status;

  status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "state", NULL);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write start element {}state. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

#if DEBUG_ENUNCIATE > 1
  printf("writing type {}state for root element {}state...\n");
#endif
  status = xmlTextWriterWriteNs0StateType(writer, _state);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write type for start element {}state. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  status = xmlTextWriterEndElement(writer);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to end element {}state. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  return totalBytes;
}

/**
 * Frees the children of a State.
 *
 * @param _state The State whose children are to be free.
 */
static void freeNs0StateElement(struct full_ns0_state *_state) {
  freeNs0StateType(_state);
}

/**
 * Reads a State from XML. The reader is assumed to be at the start element.
 *
 * @return the State, or NULL in case of error.
 */
static struct full_ns0_state *xmlTextReaderReadNs0StateType(xmlTextReaderPtr reader) {
  int status, depth;
  void *_child_accessor;
  struct full_ns0_state *_state = calloc(1, sizeof(struct full_ns0_state));



  if (xmlTextReaderIsEmptyElement(reader) == 0) {
    depth = xmlTextReaderDepth(reader);//track the depth.
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);

    while (xmlTextReaderDepth(reader) > depth) {
      if (status < 1) {
        //panic: XML read error.
#if DEBUG_ENUNCIATE
        printf("Failure to advance to next child element.\n");
#endif
        freeNs0StateType(_state);
        free(_state);
        return NULL;
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "stateValue", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}stateValue of type {http://www.w3.org/2001/XMLSchema}short.\n");
#endif
        _child_accessor = xmlTextReaderReadXsShortType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}stateValue of type {http://www.w3.org/2001/XMLSchema}short.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0StateType(_state);
          free(_state);
          return NULL;
        }

        _state->stateValue = *((short*)_child_accessor);
        free(_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else {
#if DEBUG_ENUNCIATE > 1
        if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
          printf("unknown child element {}%s for type {}state.  Skipping...\n",  xmlTextReaderConstLocalName(reader));
        }
        else {
          printf("unknown child element {%s}%s for type {}state. Skipping...\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
        }
#endif
        status = xmlTextReaderSkipElement(reader);
      }
    }
  }

  return _state;
}

/**
 * Writes a State to XML.
 *
 * @param writer The XML writer.
 * @param _state The State to write.
 * @return The total bytes written, or -1 on error;
 */
static int xmlTextWriterWriteNs0StateType(xmlTextWriterPtr writer, struct full_ns0_state *_state) {
  int status, totalBytes = 0, i;
  xmlChar *binaryData;
  if (1) { //always write the primitive element.
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "stateValue", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}stateValue. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}short for element {}stateValue...\n");
#endif
    status = xmlTextWriterWriteXsShortType(writer, &(_state->stateValue));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}short for element {}stateValue. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}stateValue. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }

  return totalBytes;
}

/**
 * Frees the elements of a State.
 *
 * @param _state The State to free.
 */
static void freeNs0StateType(struct full_ns0_state *_state) {
  int i;
}
#endif /* DEF_full_ns0_state_M */
#ifndef DEF_full_ns0_supportedBandwidth_M
#define DEF_full_ns0_supportedBandwidth_M

/**
 * Reads a SupportedBandwidth element from XML. The element to be read is "supportedBandwidth", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The SupportedBandwidth, or NULL in case of error.
 */
struct full_ns0_supportedBandwidth *xml_read_full_ns0_supportedBandwidth(xmlTextReaderPtr reader) {
  int status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
  return xmlTextReaderReadNs0SupportedBandwidthElement(reader);
}

/**
 * Writes a SupportedBandwidth to XML under element name "supportedBandwidth".
 *
 * @param writer The XML writer.
 * @param _supportedBandwidth The SupportedBandwidth to write.
 * @return 1 if successful, 0 otherwise.
 */
int xml_write_full_ns0_supportedBandwidth(xmlTextWriterPtr writer, struct full_ns0_supportedBandwidth *_supportedBandwidth) {
  return xmlTextWriterWriteNs0SupportedBandwidthElementNS(writer, _supportedBandwidth, 1);
}

/**
 * Frees a SupportedBandwidth.
 *
 * @param _supportedBandwidth The SupportedBandwidth to free.
 */
void free_full_ns0_supportedBandwidth(struct full_ns0_supportedBandwidth *_supportedBandwidth) {
  freeNs0SupportedBandwidthType(_supportedBandwidth);
  free(_supportedBandwidth);
}

/**
 * Reads a SupportedBandwidth element from XML. The element to be read is "supportedBandwidth", and
 * it is assumed that the reader is pointing to that element.
 *
 * @param reader The XML reader.
 * @return The SupportedBandwidth, or NULL in case of error.
 */
struct full_ns0_supportedBandwidth *xmlTextReaderReadNs0SupportedBandwidthElement(xmlTextReaderPtr reader) {
  struct full_ns0_supportedBandwidth *_supportedBandwidth = NULL;

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "supportedBandwidth", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Attempting to read root element {}supportedBandwidth.\n");
#endif
    _supportedBandwidth = xmlTextReaderReadNs0SupportedBandwidthType(reader);
  }
#if DEBUG_ENUNCIATE
  if (_supportedBandwidth == NULL) {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      printf("attempt to read {}supportedBandwidth failed. current element: {}%s\n",  xmlTextReaderConstLocalName(reader));
    }
    else {
      printf("attempt to read {}supportedBandwidth failed. current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
    }
  }
#endif

  return _supportedBandwidth;
}

/**
 * Writes a SupportedBandwidth to XML under element name "supportedBandwidth".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _supportedBandwidth The SupportedBandwidth to write.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0SupportedBandwidthElement(xmlTextWriterPtr writer, struct full_ns0_supportedBandwidth *_supportedBandwidth) {
  return xmlTextWriterWriteNs0SupportedBandwidthElementNS(writer, _supportedBandwidth, 0);
}

/**
 * Writes a SupportedBandwidth to XML under element name "supportedBandwidth".
 *
 * @param writer The XML writer.
 * @param _supportedBandwidth The SupportedBandwidth to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0SupportedBandwidthElementNS(xmlTextWriterPtr writer, struct full_ns0_supportedBandwidth *_supportedBandwidth, int writeNamespaces) {
  int totalBytes = 0;
  int status;

  status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "supportedBandwidth", NULL);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write start element {}supportedBandwidth. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

#if DEBUG_ENUNCIATE > 1
  printf("writing type {}supportedBandwidth for root element {}supportedBandwidth...\n");
#endif
  status = xmlTextWriterWriteNs0SupportedBandwidthType(writer, _supportedBandwidth);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write type for start element {}supportedBandwidth. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  status = xmlTextWriterEndElement(writer);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to end element {}supportedBandwidth. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  return totalBytes;
}

/**
 * Frees the children of a SupportedBandwidth.
 *
 * @param _supportedBandwidth The SupportedBandwidth whose children are to be free.
 */
static void freeNs0SupportedBandwidthElement(struct full_ns0_supportedBandwidth *_supportedBandwidth) {
  freeNs0SupportedBandwidthType(_supportedBandwidth);
}

/**
 * Reads a SupportedBandwidth from XML. The reader is assumed to be at the start element.
 *
 * @return the SupportedBandwidth, or NULL in case of error.
 */
static struct full_ns0_supportedBandwidth *xmlTextReaderReadNs0SupportedBandwidthType(xmlTextReaderPtr reader) {
  int status, depth;
  void *_child_accessor;
  struct full_ns0_supportedBandwidth *_supportedBandwidth = calloc(1, sizeof(struct full_ns0_supportedBandwidth));



  if (xmlTextReaderIsEmptyElement(reader) == 0) {
    depth = xmlTextReaderDepth(reader);//track the depth.
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);

    while (xmlTextReaderDepth(reader) > depth) {
      if (status < 1) {
        //panic: XML read error.
#if DEBUG_ENUNCIATE
        printf("Failure to advance to next child element.\n");
#endif
        freeNs0SupportedBandwidthType(_supportedBandwidth);
        free(_supportedBandwidth);
        return NULL;
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "bandwidthValue", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}bandwidthValue of type {http://www.w3.org/2001/XMLSchema}long.\n");
#endif
        _child_accessor = xmlTextReaderReadXsLongType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}bandwidthValue of type {http://www.w3.org/2001/XMLSchema}long.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0SupportedBandwidthType(_supportedBandwidth);
          free(_supportedBandwidth);
          return NULL;
        }

        _supportedBandwidth->bandwidthValue = *((long*)_child_accessor);
        free(_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else {
#if DEBUG_ENUNCIATE > 1
        if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
          printf("unknown child element {}%s for type {}supportedBandwidth.  Skipping...\n",  xmlTextReaderConstLocalName(reader));
        }
        else {
          printf("unknown child element {%s}%s for type {}supportedBandwidth. Skipping...\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
        }
#endif
        status = xmlTextReaderSkipElement(reader);
      }
    }
  }

  return _supportedBandwidth;
}

/**
 * Writes a SupportedBandwidth to XML.
 *
 * @param writer The XML writer.
 * @param _supportedBandwidth The SupportedBandwidth to write.
 * @return The total bytes written, or -1 on error;
 */
static int xmlTextWriterWriteNs0SupportedBandwidthType(xmlTextWriterPtr writer, struct full_ns0_supportedBandwidth *_supportedBandwidth) {
  int status, totalBytes = 0, i;
  xmlChar *binaryData;
  if (1) { //always write the primitive element.
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "bandwidthValue", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}bandwidthValue. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}long for element {}bandwidthValue...\n");
#endif
    status = xmlTextWriterWriteXsLongType(writer, &(_supportedBandwidth->bandwidthValue));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}long for element {}bandwidthValue. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}bandwidthValue. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }

  return totalBytes;
}

/**
 * Frees the elements of a SupportedBandwidth.
 *
 * @param _supportedBandwidth The SupportedBandwidth to free.
 */
static void freeNs0SupportedBandwidthType(struct full_ns0_supportedBandwidth *_supportedBandwidth) {
  int i;
}
#endif /* DEF_full_ns0_supportedBandwidth_M */
#ifndef DEF_full_ns0_tables_M
#define DEF_full_ns0_tables_M

/**
 * Reads a Tables element from XML. The element to be read is "tables", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The Tables, or NULL in case of error.
 */
struct full_ns0_tables *xml_read_full_ns0_tables(xmlTextReaderPtr reader) {
  int status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
  return xmlTextReaderReadNs0TablesElement(reader);
}

/**
 * Writes a Tables to XML under element name "tables".
 *
 * @param writer The XML writer.
 * @param _tables The Tables to write.
 * @return 1 if successful, 0 otherwise.
 */
int xml_write_full_ns0_tables(xmlTextWriterPtr writer, struct full_ns0_tables *_tables) {
  return xmlTextWriterWriteNs0TablesElementNS(writer, _tables, 1);
}

/**
 * Frees a Tables.
 *
 * @param _tables The Tables to free.
 */
void free_full_ns0_tables(struct full_ns0_tables *_tables) {
  freeNs0TablesType(_tables);
  free(_tables);
}

/**
 * Reads a Tables element from XML. The element to be read is "tables", and
 * it is assumed that the reader is pointing to that element.
 *
 * @param reader The XML reader.
 * @return The Tables, or NULL in case of error.
 */
struct full_ns0_tables *xmlTextReaderReadNs0TablesElement(xmlTextReaderPtr reader) {
  struct full_ns0_tables *_tables = NULL;

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "tables", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Attempting to read root element {}tables.\n");
#endif
    _tables = xmlTextReaderReadNs0TablesType(reader);
  }
#if DEBUG_ENUNCIATE
  if (_tables == NULL) {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      printf("attempt to read {}tables failed. current element: {}%s\n",  xmlTextReaderConstLocalName(reader));
    }
    else {
      printf("attempt to read {}tables failed. current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
    }
  }
#endif

  return _tables;
}

/**
 * Writes a Tables to XML under element name "tables".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _tables The Tables to write.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0TablesElement(xmlTextWriterPtr writer, struct full_ns0_tables *_tables) {
  return xmlTextWriterWriteNs0TablesElementNS(writer, _tables, 0);
}

/**
 * Writes a Tables to XML under element name "tables".
 *
 * @param writer The XML writer.
 * @param _tables The Tables to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0TablesElementNS(xmlTextWriterPtr writer, struct full_ns0_tables *_tables, int writeNamespaces) {
  int totalBytes = 0;
  int status;

  status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "tables", NULL);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write start element {}tables. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

#if DEBUG_ENUNCIATE > 1
  printf("writing type {}tables for root element {}tables...\n");
#endif
  status = xmlTextWriterWriteNs0TablesType(writer, _tables);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write type for start element {}tables. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  status = xmlTextWriterEndElement(writer);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to end element {}tables. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  return totalBytes;
}

/**
 * Frees the children of a Tables.
 *
 * @param _tables The Tables whose children are to be free.
 */
static void freeNs0TablesElement(struct full_ns0_tables *_tables) {
  freeNs0TablesType(_tables);
}

/**
 * Reads a Tables from XML. The reader is assumed to be at the start element.
 *
 * @return the Tables, or NULL in case of error.
 */
static struct full_ns0_tables *xmlTextReaderReadNs0TablesType(xmlTextReaderPtr reader) {
  int status, depth;
  void *_child_accessor;
  struct full_ns0_tables *_tables = calloc(1, sizeof(struct full_ns0_tables));



  if (xmlTextReaderIsEmptyElement(reader) == 0) {
    depth = xmlTextReaderDepth(reader);//track the depth.
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);

    while (xmlTextReaderDepth(reader) > depth) {
      if (status < 1) {
        //panic: XML read error.
#if DEBUG_ENUNCIATE
        printf("Failure to advance to next child element.\n");
#endif
        freeNs0TablesType(_tables);
        free(_tables);
        return NULL;
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "tablesValue", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}tablesValue of type {http://www.w3.org/2001/XMLSchema}byte.\n");
#endif
        _child_accessor = xmlTextReaderReadXsByteType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}tablesValue of type {http://www.w3.org/2001/XMLSchema}byte.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TablesType(_tables);
          free(_tables);
          return NULL;
        }

        _tables->tablesValue = *((unsigned char*)_child_accessor);
        free(_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else {
#if DEBUG_ENUNCIATE > 1
        if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
          printf("unknown child element {}%s for type {}tables.  Skipping...\n",  xmlTextReaderConstLocalName(reader));
        }
        else {
          printf("unknown child element {%s}%s for type {}tables. Skipping...\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
        }
#endif
        status = xmlTextReaderSkipElement(reader);
      }
    }
  }

  return _tables;
}

/**
 * Writes a Tables to XML.
 *
 * @param writer The XML writer.
 * @param _tables The Tables to write.
 * @return The total bytes written, or -1 on error;
 */
static int xmlTextWriterWriteNs0TablesType(xmlTextWriterPtr writer, struct full_ns0_tables *_tables) {
  int status, totalBytes = 0, i;
  xmlChar *binaryData;
  if (1) { //always write the primitive element.
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "tablesValue", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}tablesValue. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}byte for element {}tablesValue...\n");
#endif
    status = xmlTextWriterWriteXsByteType(writer, &(_tables->tablesValue));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}byte for element {}tablesValue. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}tablesValue. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }

  return totalBytes;
}

/**
 * Frees the elements of a Tables.
 *
 * @param _tables The Tables to free.
 */
static void freeNs0TablesType(struct full_ns0_tables *_tables) {
  int i;
}
#endif /* DEF_full_ns0_tables_M */
#ifndef DEF_full_ns0_tier_M
#define DEF_full_ns0_tier_M

/**
 * Reads a Tier element from XML. The element to be read is "tier", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The Tier, or NULL in case of error.
 */
struct full_ns0_tier *xml_read_full_ns0_tier(xmlTextReaderPtr reader) {
  int status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
  return xmlTextReaderReadNs0TierElement(reader);
}

/**
 * Writes a Tier to XML under element name "tier".
 *
 * @param writer The XML writer.
 * @param _tier The Tier to write.
 * @return 1 if successful, 0 otherwise.
 */
int xml_write_full_ns0_tier(xmlTextWriterPtr writer, struct full_ns0_tier *_tier) {
  return xmlTextWriterWriteNs0TierElementNS(writer, _tier, 1);
}

/**
 * Frees a Tier.
 *
 * @param _tier The Tier to free.
 */
void free_full_ns0_tier(struct full_ns0_tier *_tier) {
  freeNs0TierType(_tier);
  free(_tier);
}

/**
 * Reads a Tier element from XML. The element to be read is "tier", and
 * it is assumed that the reader is pointing to that element.
 *
 * @param reader The XML reader.
 * @return The Tier, or NULL in case of error.
 */
struct full_ns0_tier *xmlTextReaderReadNs0TierElement(xmlTextReaderPtr reader) {
  struct full_ns0_tier *_tier = NULL;

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "tier", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Attempting to read root element {}tier.\n");
#endif
    _tier = xmlTextReaderReadNs0TierType(reader);
  }
#if DEBUG_ENUNCIATE
  if (_tier == NULL) {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      printf("attempt to read {}tier failed. current element: {}%s\n",  xmlTextReaderConstLocalName(reader));
    }
    else {
      printf("attempt to read {}tier failed. current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
    }
  }
#endif

  return _tier;
}

/**
 * Writes a Tier to XML under element name "tier".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _tier The Tier to write.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0TierElement(xmlTextWriterPtr writer, struct full_ns0_tier *_tier) {
  return xmlTextWriterWriteNs0TierElementNS(writer, _tier, 0);
}

/**
 * Writes a Tier to XML under element name "tier".
 *
 * @param writer The XML writer.
 * @param _tier The Tier to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0TierElementNS(xmlTextWriterPtr writer, struct full_ns0_tier *_tier, int writeNamespaces) {
  int totalBytes = 0;
  int status;

  status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "tier", NULL);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write start element {}tier. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

#if DEBUG_ENUNCIATE > 1
  printf("writing type {}tier for root element {}tier...\n");
#endif
  status = xmlTextWriterWriteNs0TierType(writer, _tier);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write type for start element {}tier. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  status = xmlTextWriterEndElement(writer);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to end element {}tier. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  return totalBytes;
}

/**
 * Frees the children of a Tier.
 *
 * @param _tier The Tier whose children are to be free.
 */
static void freeNs0TierElement(struct full_ns0_tier *_tier) {
  freeNs0TierType(_tier);
}

/**
 * Reads a Tier from XML. The reader is assumed to be at the start element.
 *
 * @return the Tier, or NULL in case of error.
 */
static struct full_ns0_tier *xmlTextReaderReadNs0TierType(xmlTextReaderPtr reader) {
  int status, depth;
  void *_child_accessor;
  struct full_ns0_tier *_tier = calloc(1, sizeof(struct full_ns0_tier));



  if (xmlTextReaderIsEmptyElement(reader) == 0) {
    depth = xmlTextReaderDepth(reader);//track the depth.
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);

    while (xmlTextReaderDepth(reader) > depth) {
      if (status < 1) {
        //panic: XML read error.
#if DEBUG_ENUNCIATE
        printf("Failure to advance to next child element.\n");
#endif
        freeNs0TierType(_tier);
        free(_tier);
        return NULL;
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "tierValue", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}tierValue of type {http://www.w3.org/2001/XMLSchema}int.\n");
#endif
        _child_accessor = xmlTextReaderReadXsIntType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}tierValue of type {http://www.w3.org/2001/XMLSchema}int.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TierType(_tier);
          free(_tier);
          return NULL;
        }

        _tier->tierValue = *((int*)_child_accessor);
        free(_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else {
#if DEBUG_ENUNCIATE > 1
        if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
          printf("unknown child element {}%s for type {}tier.  Skipping...\n",  xmlTextReaderConstLocalName(reader));
        }
        else {
          printf("unknown child element {%s}%s for type {}tier. Skipping...\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
        }
#endif
        status = xmlTextReaderSkipElement(reader);
      }
    }
  }

  return _tier;
}

/**
 * Writes a Tier to XML.
 *
 * @param writer The XML writer.
 * @param _tier The Tier to write.
 * @return The total bytes written, or -1 on error;
 */
static int xmlTextWriterWriteNs0TierType(xmlTextWriterPtr writer, struct full_ns0_tier *_tier) {
  int status, totalBytes = 0, i;
  xmlChar *binaryData;
  if (1) { //always write the primitive element.
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "tierValue", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}tierValue. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}int for element {}tierValue...\n");
#endif
    status = xmlTextWriterWriteXsIntType(writer, &(_tier->tierValue));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}int for element {}tierValue. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}tierValue. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }

  return totalBytes;
}

/**
 * Frees the elements of a Tier.
 *
 * @param _tier The Tier to free.
 */
static void freeNs0TierType(struct full_ns0_tier *_tier) {
  int i;
}
#endif /* DEF_full_ns0_tier_M */
#ifndef DEF_full_ns0_timeStamp_M
#define DEF_full_ns0_timeStamp_M

/**
 * Reads a TimeStamp element from XML. The element to be read is "timeStamp", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The TimeStamp, or NULL in case of error.
 */
struct full_ns0_timeStamp *xml_read_full_ns0_timeStamp(xmlTextReaderPtr reader) {
  int status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
  return xmlTextReaderReadNs0TimeStampElement(reader);
}

/**
 * Writes a TimeStamp to XML under element name "timeStamp".
 *
 * @param writer The XML writer.
 * @param _timeStamp The TimeStamp to write.
 * @return 1 if successful, 0 otherwise.
 */
int xml_write_full_ns0_timeStamp(xmlTextWriterPtr writer, struct full_ns0_timeStamp *_timeStamp) {
  return xmlTextWriterWriteNs0TimeStampElementNS(writer, _timeStamp, 1);
}

/**
 * Frees a TimeStamp.
 *
 * @param _timeStamp The TimeStamp to free.
 */
void free_full_ns0_timeStamp(struct full_ns0_timeStamp *_timeStamp) {
  freeNs0TimeStampType(_timeStamp);
  free(_timeStamp);
}

/**
 * Reads a TimeStamp element from XML. The element to be read is "timeStamp", and
 * it is assumed that the reader is pointing to that element.
 *
 * @param reader The XML reader.
 * @return The TimeStamp, or NULL in case of error.
 */
struct full_ns0_timeStamp *xmlTextReaderReadNs0TimeStampElement(xmlTextReaderPtr reader) {
  struct full_ns0_timeStamp *_timeStamp = NULL;

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "timeStamp", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Attempting to read root element {}timeStamp.\n");
#endif
    _timeStamp = xmlTextReaderReadNs0TimeStampType(reader);
  }
#if DEBUG_ENUNCIATE
  if (_timeStamp == NULL) {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      printf("attempt to read {}timeStamp failed. current element: {}%s\n",  xmlTextReaderConstLocalName(reader));
    }
    else {
      printf("attempt to read {}timeStamp failed. current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
    }
  }
#endif

  return _timeStamp;
}

/**
 * Writes a TimeStamp to XML under element name "timeStamp".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _timeStamp The TimeStamp to write.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0TimeStampElement(xmlTextWriterPtr writer, struct full_ns0_timeStamp *_timeStamp) {
  return xmlTextWriterWriteNs0TimeStampElementNS(writer, _timeStamp, 0);
}

/**
 * Writes a TimeStamp to XML under element name "timeStamp".
 *
 * @param writer The XML writer.
 * @param _timeStamp The TimeStamp to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0TimeStampElementNS(xmlTextWriterPtr writer, struct full_ns0_timeStamp *_timeStamp, int writeNamespaces) {
  int totalBytes = 0;
  int status;

  status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "timeStamp", NULL);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write start element {}timeStamp. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

#if DEBUG_ENUNCIATE > 1
  printf("writing type {}timeStamp for root element {}timeStamp...\n");
#endif
  status = xmlTextWriterWriteNs0TimeStampType(writer, _timeStamp);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write type for start element {}timeStamp. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  status = xmlTextWriterEndElement(writer);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to end element {}timeStamp. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  return totalBytes;
}

/**
 * Frees the children of a TimeStamp.
 *
 * @param _timeStamp The TimeStamp whose children are to be free.
 */
static void freeNs0TimeStampElement(struct full_ns0_timeStamp *_timeStamp) {
  freeNs0TimeStampType(_timeStamp);
}

/**
 * Reads a TimeStamp from XML. The reader is assumed to be at the start element.
 *
 * @return the TimeStamp, or NULL in case of error.
 */
static struct full_ns0_timeStamp *xmlTextReaderReadNs0TimeStampType(xmlTextReaderPtr reader) {
  int status, depth;
  void *_child_accessor;
  struct full_ns0_timeStamp *_timeStamp = calloc(1, sizeof(struct full_ns0_timeStamp));



  if (xmlTextReaderIsEmptyElement(reader) == 0) {
    depth = xmlTextReaderDepth(reader);//track the depth.
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);

    while (xmlTextReaderDepth(reader) > depth) {
      if (status < 1) {
        //panic: XML read error.
#if DEBUG_ENUNCIATE
        printf("Failure to advance to next child element.\n");
#endif
        freeNs0TimeStampType(_timeStamp);
        free(_timeStamp);
        return NULL;
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "timestamp", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}timestamp of type {http://www.w3.org/2001/XMLSchema}long.\n");
#endif
        _child_accessor = xmlTextReaderReadXsLongType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}timestamp of type {http://www.w3.org/2001/XMLSchema}long.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TimeStampType(_timeStamp);
          free(_timeStamp);
          return NULL;
        }

        _timeStamp->timestamp = *((long*)_child_accessor);
        free(_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "timestampName", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}timestampName of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}timestampName of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TimeStampType(_timeStamp);
          free(_timeStamp);
          return NULL;
        }

        _timeStamp->timestampName = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else {
#if DEBUG_ENUNCIATE > 1
        if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
          printf("unknown child element {}%s for type {}timeStamp.  Skipping...\n",  xmlTextReaderConstLocalName(reader));
        }
        else {
          printf("unknown child element {%s}%s for type {}timeStamp. Skipping...\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
        }
#endif
        status = xmlTextReaderSkipElement(reader);
      }
    }
  }

  return _timeStamp;
}

/**
 * Writes a TimeStamp to XML.
 *
 * @param writer The XML writer.
 * @param _timeStamp The TimeStamp to write.
 * @return The total bytes written, or -1 on error;
 */
static int xmlTextWriterWriteNs0TimeStampType(xmlTextWriterPtr writer, struct full_ns0_timeStamp *_timeStamp) {
  int status, totalBytes = 0, i;
  xmlChar *binaryData;
  if (1) { //always write the primitive element.
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "timestamp", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}timestamp. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}long for element {}timestamp...\n");
#endif
    status = xmlTextWriterWriteXsLongType(writer, &(_timeStamp->timestamp));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}long for element {}timestamp. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}timestamp. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_timeStamp->timestampName != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "timestampName", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}timestampName. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}timestampName...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_timeStamp->timestampName));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}timestampName. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}timestampName. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }

  return totalBytes;
}

/**
 * Frees the elements of a TimeStamp.
 *
 * @param _timeStamp The TimeStamp to free.
 */
static void freeNs0TimeStampType(struct full_ns0_timeStamp *_timeStamp) {
  int i;
  if (_timeStamp->timestampName != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor timestampName of type full_ns0_timeStamp...\n");
#endif
    freeXsStringType(_timeStamp->timestampName);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor timestampName of type full_ns0_timeStamp...\n");
#endif
    free(_timeStamp->timestampName);
  }
}
#endif /* DEF_full_ns0_timeStamp_M */
#ifndef DEF_full_ns0_nodeConnectorProperties_M
#define DEF_full_ns0_nodeConnectorProperties_M

/**
 * Reads a NodeConnectorProperties element from XML. The element to be read is "nodeConnectorProperties", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The NodeConnectorProperties, or NULL in case of error.
 */
struct full_ns0_nodeConnectorProperties *xml_read_full_ns0_nodeConnectorProperties(xmlTextReaderPtr reader) {
  int status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
  return xmlTextReaderReadNs0NodeConnectorPropertiesElement(reader);
}

/**
 * Writes a NodeConnectorProperties to XML under element name "nodeConnectorProperties".
 *
 * @param writer The XML writer.
 * @param _nodeConnectorProperties The NodeConnectorProperties to write.
 * @return 1 if successful, 0 otherwise.
 */
int xml_write_full_ns0_nodeConnectorProperties(xmlTextWriterPtr writer, struct full_ns0_nodeConnectorProperties *_nodeConnectorProperties) {
  return xmlTextWriterWriteNs0NodeConnectorPropertiesElementNS(writer, _nodeConnectorProperties, 1);
}

/**
 * Frees a NodeConnectorProperties.
 *
 * @param _nodeConnectorProperties The NodeConnectorProperties to free.
 */
void free_full_ns0_nodeConnectorProperties(struct full_ns0_nodeConnectorProperties *_nodeConnectorProperties) {
  freeNs0NodeConnectorPropertiesType(_nodeConnectorProperties);
  free(_nodeConnectorProperties);
}

/**
 * Reads a NodeConnectorProperties element from XML. The element to be read is "nodeConnectorProperties", and
 * it is assumed that the reader is pointing to that element.
 *
 * @param reader The XML reader.
 * @return The NodeConnectorProperties, or NULL in case of error.
 */
struct full_ns0_nodeConnectorProperties *xmlTextReaderReadNs0NodeConnectorPropertiesElement(xmlTextReaderPtr reader) {
  struct full_ns0_nodeConnectorProperties *_nodeConnectorProperties = NULL;

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "nodeConnectorProperties", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Attempting to read root element {}nodeConnectorProperties.\n");
#endif
    _nodeConnectorProperties = xmlTextReaderReadNs0NodeConnectorPropertiesType(reader);
  }
#if DEBUG_ENUNCIATE
  if (_nodeConnectorProperties == NULL) {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      printf("attempt to read {}nodeConnectorProperties failed. current element: {}%s\n",  xmlTextReaderConstLocalName(reader));
    }
    else {
      printf("attempt to read {}nodeConnectorProperties failed. current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
    }
  }
#endif

  return _nodeConnectorProperties;
}

/**
 * Writes a NodeConnectorProperties to XML under element name "nodeConnectorProperties".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _nodeConnectorProperties The NodeConnectorProperties to write.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0NodeConnectorPropertiesElement(xmlTextWriterPtr writer, struct full_ns0_nodeConnectorProperties *_nodeConnectorProperties) {
  return xmlTextWriterWriteNs0NodeConnectorPropertiesElementNS(writer, _nodeConnectorProperties, 0);
}

/**
 * Writes a NodeConnectorProperties to XML under element name "nodeConnectorProperties".
 *
 * @param writer The XML writer.
 * @param _nodeConnectorProperties The NodeConnectorProperties to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0NodeConnectorPropertiesElementNS(xmlTextWriterPtr writer, struct full_ns0_nodeConnectorProperties *_nodeConnectorProperties, int writeNamespaces) {
  int totalBytes = 0;
  int status;

  status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "nodeConnectorProperties", NULL);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write start element {}nodeConnectorProperties. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

#if DEBUG_ENUNCIATE > 1
  printf("writing type {}nodeConnectorProperties for root element {}nodeConnectorProperties...\n");
#endif
  status = xmlTextWriterWriteNs0NodeConnectorPropertiesType(writer, _nodeConnectorProperties);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write type for start element {}nodeConnectorProperties. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  status = xmlTextWriterEndElement(writer);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to end element {}nodeConnectorProperties. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  return totalBytes;
}

/**
 * Frees the children of a NodeConnectorProperties.
 *
 * @param _nodeConnectorProperties The NodeConnectorProperties whose children are to be free.
 */
static void freeNs0NodeConnectorPropertiesElement(struct full_ns0_nodeConnectorProperties *_nodeConnectorProperties) {
  freeNs0NodeConnectorPropertiesType(_nodeConnectorProperties);
}

/**
 * Reads a NodeConnectorProperties from XML. The reader is assumed to be at the start element.
 *
 * @return the NodeConnectorProperties, or NULL in case of error.
 */
static struct full_ns0_nodeConnectorProperties *xmlTextReaderReadNs0NodeConnectorPropertiesType(xmlTextReaderPtr reader) {
  int status, depth;
  void *_child_accessor;
  struct full_ns0_nodeConnectorProperties *_nodeConnectorProperties = calloc(1, sizeof(struct full_ns0_nodeConnectorProperties));



  if (xmlTextReaderIsEmptyElement(reader) == 0) {
    depth = xmlTextReaderDepth(reader);//track the depth.
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);

    while (xmlTextReaderDepth(reader) > depth) {
      if (status < 1) {
        //panic: XML read error.
#if DEBUG_ENUNCIATE
        printf("Failure to advance to next child element.\n");
#endif
        freeNs0NodeConnectorPropertiesType(_nodeConnectorProperties);
        free(_nodeConnectorProperties);
        return NULL;
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "nodeconnector", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}nodeconnector of type {}nodeConnector.\n");
#endif
        _child_accessor = xmlTextReaderReadNs0NodeConnectorType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}nodeconnector of type {}nodeConnector.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0NodeConnectorPropertiesType(_nodeConnectorProperties);
          free(_nodeConnectorProperties);
          return NULL;
        }

        _nodeConnectorProperties->nodeconnector = ((struct full_ns0_nodeConnector*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "properties", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

        if (xmlTextReaderIsEmptyElement(reader) == 0) {
#if DEBUG_ENUNCIATE > 1
          printf("Unwrapping wrapper element {}properties...\n");
#endif
          //start wrapper element "{}properties"
          status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
          while (xmlTextReaderDepth(reader) > (depth + 1)) {
            if (status < 1) {
              //panic: XML read error.
#if DEBUG_ENUNCIATE
              printf("Failure to advance to next child element.\n");
#endif
              freeNs0NodeConnectorPropertiesType(_nodeConnectorProperties);
              free(_nodeConnectorProperties);
              return NULL;
            }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "actions", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}actions of element {}actions.\n");
#endif
        _child_accessor = xmlTextReaderReadNs0ActionsElement(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}actions of element {}actions.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0NodeConnectorPropertiesType(_nodeConnectorProperties);
          free(_nodeConnectorProperties);
          return NULL;
        }

        _nodeConnectorProperties->actions_properties = realloc(_nodeConnectorProperties->actions_properties, (_nodeConnectorProperties->_sizeof_actions_properties + 1) * sizeof(struct full_ns0_property));
        memcpy(&(_nodeConnectorProperties->actions_properties[_nodeConnectorProperties->_sizeof_actions_properties++]), _child_accessor, sizeof(struct full_ns0_property));
        free(_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "advertisedBandwidth", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}advertisedBandwidth of element {}advertisedBandwidth.\n");
#endif
        _child_accessor = xmlTextReaderReadNs0AdvertisedBandwidthElement(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}advertisedBandwidth of element {}advertisedBandwidth.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0NodeConnectorPropertiesType(_nodeConnectorProperties);
          free(_nodeConnectorProperties);
          return NULL;
        }

        _nodeConnectorProperties->advertisedBandwidth_properties = realloc(_nodeConnectorProperties->advertisedBandwidth_properties, (_nodeConnectorProperties->_sizeof_advertisedBandwidth_properties + 1) * sizeof(struct full_ns0_property));
        memcpy(&(_nodeConnectorProperties->advertisedBandwidth_properties[_nodeConnectorProperties->_sizeof_advertisedBandwidth_properties++]), _child_accessor, sizeof(struct full_ns0_property));
        free(_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "bandwidth", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}bandwidth of element {}bandwidth.\n");
#endif
        _child_accessor = xmlTextReaderReadNs0BandwidthElement(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}bandwidth of element {}bandwidth.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0NodeConnectorPropertiesType(_nodeConnectorProperties);
          free(_nodeConnectorProperties);
          return NULL;
        }

        _nodeConnectorProperties->bandwidth_properties = realloc(_nodeConnectorProperties->bandwidth_properties, (_nodeConnectorProperties->_sizeof_bandwidth_properties + 1) * sizeof(struct full_ns0_property));
        memcpy(&(_nodeConnectorProperties->bandwidth_properties[_nodeConnectorProperties->_sizeof_bandwidth_properties++]), _child_accessor, sizeof(struct full_ns0_property));
        free(_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "buffers", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}buffers of element {}buffers.\n");
#endif
        _child_accessor = xmlTextReaderReadNs0BuffersElement(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}buffers of element {}buffers.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0NodeConnectorPropertiesType(_nodeConnectorProperties);
          free(_nodeConnectorProperties);
          return NULL;
        }

        _nodeConnectorProperties->buffers_properties = realloc(_nodeConnectorProperties->buffers_properties, (_nodeConnectorProperties->_sizeof_buffers_properties + 1) * sizeof(struct full_ns0_property));
        memcpy(&(_nodeConnectorProperties->buffers_properties[_nodeConnectorProperties->_sizeof_buffers_properties++]), _child_accessor, sizeof(struct full_ns0_property));
        free(_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "capabilities", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}capabilities of element {}capabilities.\n");
#endif
        _child_accessor = xmlTextReaderReadNs0CapabilitiesElement(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}capabilities of element {}capabilities.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0NodeConnectorPropertiesType(_nodeConnectorProperties);
          free(_nodeConnectorProperties);
          return NULL;
        }

        _nodeConnectorProperties->capabilities_properties = realloc(_nodeConnectorProperties->capabilities_properties, (_nodeConnectorProperties->_sizeof_capabilities_properties + 1) * sizeof(struct full_ns0_property));
        memcpy(&(_nodeConnectorProperties->capabilities_properties[_nodeConnectorProperties->_sizeof_capabilities_properties++]), _child_accessor, sizeof(struct full_ns0_property));
        free(_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "config", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}config of element {}config.\n");
#endif
        _child_accessor = xmlTextReaderReadNs0ConfigElement(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}config of element {}config.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0NodeConnectorPropertiesType(_nodeConnectorProperties);
          free(_nodeConnectorProperties);
          return NULL;
        }

        _nodeConnectorProperties->config_properties = realloc(_nodeConnectorProperties->config_properties, (_nodeConnectorProperties->_sizeof_config_properties + 1) * sizeof(struct full_ns0_property));
        memcpy(&(_nodeConnectorProperties->config_properties[_nodeConnectorProperties->_sizeof_config_properties++]), _child_accessor, sizeof(struct full_ns0_property));
        free(_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "latency", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}latency of element {}latency.\n");
#endif
        _child_accessor = xmlTextReaderReadNs0LatencyElement(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}latency of element {}latency.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0NodeConnectorPropertiesType(_nodeConnectorProperties);
          free(_nodeConnectorProperties);
          return NULL;
        }

        _nodeConnectorProperties->latency_properties = realloc(_nodeConnectorProperties->latency_properties, (_nodeConnectorProperties->_sizeof_latency_properties + 1) * sizeof(struct full_ns0_property));
        memcpy(&(_nodeConnectorProperties->latency_properties[_nodeConnectorProperties->_sizeof_latency_properties++]), _child_accessor, sizeof(struct full_ns0_property));
        free(_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "macAddress", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}macAddress of element {}macAddress.\n");
#endif
        _child_accessor = xmlTextReaderReadNs0MacAddressElement(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}macAddress of element {}macAddress.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0NodeConnectorPropertiesType(_nodeConnectorProperties);
          free(_nodeConnectorProperties);
          return NULL;
        }

        _nodeConnectorProperties->macAddress_properties = realloc(_nodeConnectorProperties->macAddress_properties, (_nodeConnectorProperties->_sizeof_macAddress_properties + 1) * sizeof(struct full_ns0_property));
        memcpy(&(_nodeConnectorProperties->macAddress_properties[_nodeConnectorProperties->_sizeof_macAddress_properties++]), _child_accessor, sizeof(struct full_ns0_property));
        free(_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "name", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}name of element {}name.\n");
#endif
        _child_accessor = xmlTextReaderReadNs0NameElement(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}name of element {}name.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0NodeConnectorPropertiesType(_nodeConnectorProperties);
          free(_nodeConnectorProperties);
          return NULL;
        }

        _nodeConnectorProperties->name_properties = realloc(_nodeConnectorProperties->name_properties, (_nodeConnectorProperties->_sizeof_name_properties + 1) * sizeof(struct full_ns0_property));
        memcpy(&(_nodeConnectorProperties->name_properties[_nodeConnectorProperties->_sizeof_name_properties++]), _child_accessor, sizeof(struct full_ns0_property));
        free(_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "peerBandwidth", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}peerBandwidth of element {}peerBandwidth.\n");
#endif
        _child_accessor = xmlTextReaderReadNs0PeerBandwidthElement(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}peerBandwidth of element {}peerBandwidth.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0NodeConnectorPropertiesType(_nodeConnectorProperties);
          free(_nodeConnectorProperties);
          return NULL;
        }

        _nodeConnectorProperties->peerBandwidth_properties = realloc(_nodeConnectorProperties->peerBandwidth_properties, (_nodeConnectorProperties->_sizeof_peerBandwidth_properties + 1) * sizeof(struct full_ns0_property));
        memcpy(&(_nodeConnectorProperties->peerBandwidth_properties[_nodeConnectorProperties->_sizeof_peerBandwidth_properties++]), _child_accessor, sizeof(struct full_ns0_property));
        free(_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "property", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}property of element {}property.\n");
#endif
        _child_accessor = xmlTextReaderReadNs0PropertyElement(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}property of element {}property.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0NodeConnectorPropertiesType(_nodeConnectorProperties);
          free(_nodeConnectorProperties);
          return NULL;
        }

        _nodeConnectorProperties->property_properties = realloc(_nodeConnectorProperties->property_properties, (_nodeConnectorProperties->_sizeof_property_properties + 1) * sizeof(struct full_ns0_property));
        memcpy(&(_nodeConnectorProperties->property_properties[_nodeConnectorProperties->_sizeof_property_properties++]), _child_accessor, sizeof(struct full_ns0_property));
        free(_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "state", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}state of element {}state.\n");
#endif
        _child_accessor = xmlTextReaderReadNs0StateElement(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}state of element {}state.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0NodeConnectorPropertiesType(_nodeConnectorProperties);
          free(_nodeConnectorProperties);
          return NULL;
        }

        _nodeConnectorProperties->state_properties = realloc(_nodeConnectorProperties->state_properties, (_nodeConnectorProperties->_sizeof_state_properties + 1) * sizeof(struct full_ns0_property));
        memcpy(&(_nodeConnectorProperties->state_properties[_nodeConnectorProperties->_sizeof_state_properties++]), _child_accessor, sizeof(struct full_ns0_property));
        free(_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "supportedBandwidth", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}supportedBandwidth of element {}supportedBandwidth.\n");
#endif
        _child_accessor = xmlTextReaderReadNs0SupportedBandwidthElement(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}supportedBandwidth of element {}supportedBandwidth.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0NodeConnectorPropertiesType(_nodeConnectorProperties);
          free(_nodeConnectorProperties);
          return NULL;
        }

        _nodeConnectorProperties->supportedBandwidth_properties = realloc(_nodeConnectorProperties->supportedBandwidth_properties, (_nodeConnectorProperties->_sizeof_supportedBandwidth_properties + 1) * sizeof(struct full_ns0_property));
        memcpy(&(_nodeConnectorProperties->supportedBandwidth_properties[_nodeConnectorProperties->_sizeof_supportedBandwidth_properties++]), _child_accessor, sizeof(struct full_ns0_property));
        free(_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "tables", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}tables of element {}tables.\n");
#endif
        _child_accessor = xmlTextReaderReadNs0TablesElement(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}tables of element {}tables.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0NodeConnectorPropertiesType(_nodeConnectorProperties);
          free(_nodeConnectorProperties);
          return NULL;
        }

        _nodeConnectorProperties->tables_properties = realloc(_nodeConnectorProperties->tables_properties, (_nodeConnectorProperties->_sizeof_tables_properties + 1) * sizeof(struct full_ns0_property));
        memcpy(&(_nodeConnectorProperties->tables_properties[_nodeConnectorProperties->_sizeof_tables_properties++]), _child_accessor, sizeof(struct full_ns0_property));
        free(_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "tier", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}tier of element {}tier.\n");
#endif
        _child_accessor = xmlTextReaderReadNs0TierElement(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}tier of element {}tier.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0NodeConnectorPropertiesType(_nodeConnectorProperties);
          free(_nodeConnectorProperties);
          return NULL;
        }

        _nodeConnectorProperties->tier_properties = realloc(_nodeConnectorProperties->tier_properties, (_nodeConnectorProperties->_sizeof_tier_properties + 1) * sizeof(struct full_ns0_property));
        memcpy(&(_nodeConnectorProperties->tier_properties[_nodeConnectorProperties->_sizeof_tier_properties++]), _child_accessor, sizeof(struct full_ns0_property));
        free(_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "timeStamp", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}timeStamp of element {}timeStamp.\n");
#endif
        _child_accessor = xmlTextReaderReadNs0TimeStampElement(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}timeStamp of element {}timeStamp.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0NodeConnectorPropertiesType(_nodeConnectorProperties);
          free(_nodeConnectorProperties);
          return NULL;
        }

        _nodeConnectorProperties->timeStamp_properties = realloc(_nodeConnectorProperties->timeStamp_properties, (_nodeConnectorProperties->_sizeof_timeStamp_properties + 1) * sizeof(struct full_ns0_property));
        memcpy(&(_nodeConnectorProperties->timeStamp_properties[_nodeConnectorProperties->_sizeof_timeStamp_properties++]), _child_accessor, sizeof(struct full_ns0_property));
        free(_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
          } // end "while in wrapper element" loop
        } //end "if empty element" clause

        if (status < 1) {
          //panic: XML read error.
#if DEBUG_ENUNCIATE
          printf("Failed to advance to end wrapper element {}properties.\n");
#endif
          freeNs0NodeConnectorPropertiesType(_nodeConnectorProperties);
          free(_nodeConnectorProperties);
          return NULL;
        }
        else {
          //end wrapper element "{}properties"
          status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
        }
      } // end "if wrapper element" clause
      else {
#if DEBUG_ENUNCIATE > 1
        if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
          printf("unknown child element {}%s for type {}nodeConnectorProperties.  Skipping...\n",  xmlTextReaderConstLocalName(reader));
        }
        else {
          printf("unknown child element {%s}%s for type {}nodeConnectorProperties. Skipping...\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
        }
#endif
        status = xmlTextReaderSkipElement(reader);
      }
    }
  }

  return _nodeConnectorProperties;
}

/**
 * Writes a NodeConnectorProperties to XML.
 *
 * @param writer The XML writer.
 * @param _nodeConnectorProperties The NodeConnectorProperties to write.
 * @return The total bytes written, or -1 on error;
 */
static int xmlTextWriterWriteNs0NodeConnectorPropertiesType(xmlTextWriterPtr writer, struct full_ns0_nodeConnectorProperties *_nodeConnectorProperties) {
  int status, totalBytes = 0, i;
  xmlChar *binaryData;
  if (_nodeConnectorProperties->nodeconnector != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "nodeconnector", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}nodeconnector. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {}nodeConnector for element {}nodeconnector...\n");
#endif
    status = xmlTextWriterWriteNs0NodeConnectorType(writer, (_nodeConnectorProperties->nodeconnector));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {}nodeConnector for element {}nodeconnector. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}nodeconnector. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }

  if ((_nodeConnectorProperties->actions_properties != NULL) || (_nodeConnectorProperties->advertisedBandwidth_properties != NULL) || (_nodeConnectorProperties->bandwidth_properties != NULL) || (_nodeConnectorProperties->buffers_properties != NULL) || (_nodeConnectorProperties->capabilities_properties != NULL) || (_nodeConnectorProperties->config_properties != NULL) || (_nodeConnectorProperties->latency_properties != NULL) || (_nodeConnectorProperties->macAddress_properties != NULL) || (_nodeConnectorProperties->name_properties != NULL) || (_nodeConnectorProperties->peerBandwidth_properties != NULL) || (_nodeConnectorProperties->property_properties != NULL) || (_nodeConnectorProperties->state_properties != NULL) || (_nodeConnectorProperties->supportedBandwidth_properties != NULL) || (_nodeConnectorProperties->tables_properties != NULL) || (_nodeConnectorProperties->tier_properties != NULL) || (_nodeConnectorProperties->timeStamp_properties != NULL)) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "properties", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}properties. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  for (i = 0; i < _nodeConnectorProperties->_sizeof_actions_properties; i++) {
#if DEBUG_ENUNCIATE > 1
    printf("writing element {}actions...\n");
#endif
    status = xmlTextWriterWriteNs0ActionsElementNS(writer, &(_nodeConnectorProperties->actions_properties[i]), 0);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write element {}actions. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  for (i = 0; i < _nodeConnectorProperties->_sizeof_advertisedBandwidth_properties; i++) {
#if DEBUG_ENUNCIATE > 1
    printf("writing element {}advertisedBandwidth...\n");
#endif
    status = xmlTextWriterWriteNs0AdvertisedBandwidthElementNS(writer, &(_nodeConnectorProperties->advertisedBandwidth_properties[i]), 0);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write element {}advertisedBandwidth. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  for (i = 0; i < _nodeConnectorProperties->_sizeof_bandwidth_properties; i++) {
#if DEBUG_ENUNCIATE > 1
    printf("writing element {}bandwidth...\n");
#endif
    status = xmlTextWriterWriteNs0BandwidthElementNS(writer, &(_nodeConnectorProperties->bandwidth_properties[i]), 0);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write element {}bandwidth. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  for (i = 0; i < _nodeConnectorProperties->_sizeof_buffers_properties; i++) {
#if DEBUG_ENUNCIATE > 1
    printf("writing element {}buffers...\n");
#endif
    status = xmlTextWriterWriteNs0BuffersElementNS(writer, &(_nodeConnectorProperties->buffers_properties[i]), 0);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write element {}buffers. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  for (i = 0; i < _nodeConnectorProperties->_sizeof_capabilities_properties; i++) {
#if DEBUG_ENUNCIATE > 1
    printf("writing element {}capabilities...\n");
#endif
    status = xmlTextWriterWriteNs0CapabilitiesElementNS(writer, &(_nodeConnectorProperties->capabilities_properties[i]), 0);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write element {}capabilities. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  for (i = 0; i < _nodeConnectorProperties->_sizeof_config_properties; i++) {
#if DEBUG_ENUNCIATE > 1
    printf("writing element {}config...\n");
#endif
    status = xmlTextWriterWriteNs0ConfigElementNS(writer, &(_nodeConnectorProperties->config_properties[i]), 0);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write element {}config. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  for (i = 0; i < _nodeConnectorProperties->_sizeof_latency_properties; i++) {
#if DEBUG_ENUNCIATE > 1
    printf("writing element {}latency...\n");
#endif
    status = xmlTextWriterWriteNs0LatencyElementNS(writer, &(_nodeConnectorProperties->latency_properties[i]), 0);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write element {}latency. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  for (i = 0; i < _nodeConnectorProperties->_sizeof_macAddress_properties; i++) {
#if DEBUG_ENUNCIATE > 1
    printf("writing element {}macAddress...\n");
#endif
    status = xmlTextWriterWriteNs0MacAddressElementNS(writer, &(_nodeConnectorProperties->macAddress_properties[i]), 0);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write element {}macAddress. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  for (i = 0; i < _nodeConnectorProperties->_sizeof_name_properties; i++) {
#if DEBUG_ENUNCIATE > 1
    printf("writing element {}name...\n");
#endif
    status = xmlTextWriterWriteNs0NameElementNS(writer, &(_nodeConnectorProperties->name_properties[i]), 0);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write element {}name. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  for (i = 0; i < _nodeConnectorProperties->_sizeof_peerBandwidth_properties; i++) {
#if DEBUG_ENUNCIATE > 1
    printf("writing element {}peerBandwidth...\n");
#endif
    status = xmlTextWriterWriteNs0PeerBandwidthElementNS(writer, &(_nodeConnectorProperties->peerBandwidth_properties[i]), 0);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write element {}peerBandwidth. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  for (i = 0; i < _nodeConnectorProperties->_sizeof_property_properties; i++) {
#if DEBUG_ENUNCIATE > 1
    printf("writing element {}property...\n");
#endif
    status = xmlTextWriterWriteNs0PropertyElementNS(writer, &(_nodeConnectorProperties->property_properties[i]), 0);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write element {}property. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  for (i = 0; i < _nodeConnectorProperties->_sizeof_state_properties; i++) {
#if DEBUG_ENUNCIATE > 1
    printf("writing element {}state...\n");
#endif
    status = xmlTextWriterWriteNs0StateElementNS(writer, &(_nodeConnectorProperties->state_properties[i]), 0);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write element {}state. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  for (i = 0; i < _nodeConnectorProperties->_sizeof_supportedBandwidth_properties; i++) {
#if DEBUG_ENUNCIATE > 1
    printf("writing element {}supportedBandwidth...\n");
#endif
    status = xmlTextWriterWriteNs0SupportedBandwidthElementNS(writer, &(_nodeConnectorProperties->supportedBandwidth_properties[i]), 0);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write element {}supportedBandwidth. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  for (i = 0; i < _nodeConnectorProperties->_sizeof_tables_properties; i++) {
#if DEBUG_ENUNCIATE > 1
    printf("writing element {}tables...\n");
#endif
    status = xmlTextWriterWriteNs0TablesElementNS(writer, &(_nodeConnectorProperties->tables_properties[i]), 0);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write element {}tables. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  for (i = 0; i < _nodeConnectorProperties->_sizeof_tier_properties; i++) {
#if DEBUG_ENUNCIATE > 1
    printf("writing element {}tier...\n");
#endif
    status = xmlTextWriterWriteNs0TierElementNS(writer, &(_nodeConnectorProperties->tier_properties[i]), 0);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write element {}tier. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  for (i = 0; i < _nodeConnectorProperties->_sizeof_timeStamp_properties; i++) {
#if DEBUG_ENUNCIATE > 1
    printf("writing element {}timeStamp...\n");
#endif
    status = xmlTextWriterWriteNs0TimeStampElementNS(writer, &(_nodeConnectorProperties->timeStamp_properties[i]), 0);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write element {}timeStamp. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }

  if ((_nodeConnectorProperties->actions_properties != NULL) || (_nodeConnectorProperties->advertisedBandwidth_properties != NULL) || (_nodeConnectorProperties->bandwidth_properties != NULL) || (_nodeConnectorProperties->buffers_properties != NULL) || (_nodeConnectorProperties->capabilities_properties != NULL) || (_nodeConnectorProperties->config_properties != NULL) || (_nodeConnectorProperties->latency_properties != NULL) || (_nodeConnectorProperties->macAddress_properties != NULL) || (_nodeConnectorProperties->name_properties != NULL) || (_nodeConnectorProperties->peerBandwidth_properties != NULL) || (_nodeConnectorProperties->property_properties != NULL) || (_nodeConnectorProperties->state_properties != NULL) || (_nodeConnectorProperties->supportedBandwidth_properties != NULL) || (_nodeConnectorProperties->tables_properties != NULL) || (_nodeConnectorProperties->tier_properties != NULL) || (_nodeConnectorProperties->timeStamp_properties != NULL)) {
    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}properties. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }

  return totalBytes;
}

/**
 * Frees the elements of a NodeConnectorProperties.
 *
 * @param _nodeConnectorProperties The NodeConnectorProperties to free.
 */
static void freeNs0NodeConnectorPropertiesType(struct full_ns0_nodeConnectorProperties *_nodeConnectorProperties) {
  int i;
  if (_nodeConnectorProperties->nodeconnector != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor nodeconnector of type full_ns0_nodeConnectorProperties...\n");
#endif
    freeNs0NodeConnectorType(_nodeConnectorProperties->nodeconnector);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor nodeconnector of type full_ns0_nodeConnectorProperties...\n");
#endif
    free(_nodeConnectorProperties->nodeconnector);
  }
  if (_nodeConnectorProperties->actions_properties != NULL) {
    for (i = 0; i < _nodeConnectorProperties->_sizeof_actions_properties; i++) {
#if DEBUG_ENUNCIATE > 1
      printf("Freeing accessor actions_properties[%i] of type full_ns0_nodeConnectorProperties...\n", i);
#endif
      freeNs0ActionsElement(&(_nodeConnectorProperties->actions_properties[i]));
    }
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor actions_properties of type full_ns0_nodeConnectorProperties...\n");
#endif
    free(_nodeConnectorProperties->actions_properties);
  }
  if (_nodeConnectorProperties->advertisedBandwidth_properties != NULL) {
    for (i = 0; i < _nodeConnectorProperties->_sizeof_advertisedBandwidth_properties; i++) {
#if DEBUG_ENUNCIATE > 1
      printf("Freeing accessor advertisedBandwidth_properties[%i] of type full_ns0_nodeConnectorProperties...\n", i);
#endif
      freeNs0AdvertisedBandwidthElement(&(_nodeConnectorProperties->advertisedBandwidth_properties[i]));
    }
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor advertisedBandwidth_properties of type full_ns0_nodeConnectorProperties...\n");
#endif
    free(_nodeConnectorProperties->advertisedBandwidth_properties);
  }
  if (_nodeConnectorProperties->bandwidth_properties != NULL) {
    for (i = 0; i < _nodeConnectorProperties->_sizeof_bandwidth_properties; i++) {
#if DEBUG_ENUNCIATE > 1
      printf("Freeing accessor bandwidth_properties[%i] of type full_ns0_nodeConnectorProperties...\n", i);
#endif
      freeNs0BandwidthElement(&(_nodeConnectorProperties->bandwidth_properties[i]));
    }
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor bandwidth_properties of type full_ns0_nodeConnectorProperties...\n");
#endif
    free(_nodeConnectorProperties->bandwidth_properties);
  }
  if (_nodeConnectorProperties->buffers_properties != NULL) {
    for (i = 0; i < _nodeConnectorProperties->_sizeof_buffers_properties; i++) {
#if DEBUG_ENUNCIATE > 1
      printf("Freeing accessor buffers_properties[%i] of type full_ns0_nodeConnectorProperties...\n", i);
#endif
      freeNs0BuffersElement(&(_nodeConnectorProperties->buffers_properties[i]));
    }
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor buffers_properties of type full_ns0_nodeConnectorProperties...\n");
#endif
    free(_nodeConnectorProperties->buffers_properties);
  }
  if (_nodeConnectorProperties->capabilities_properties != NULL) {
    for (i = 0; i < _nodeConnectorProperties->_sizeof_capabilities_properties; i++) {
#if DEBUG_ENUNCIATE > 1
      printf("Freeing accessor capabilities_properties[%i] of type full_ns0_nodeConnectorProperties...\n", i);
#endif
      freeNs0CapabilitiesElement(&(_nodeConnectorProperties->capabilities_properties[i]));
    }
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor capabilities_properties of type full_ns0_nodeConnectorProperties...\n");
#endif
    free(_nodeConnectorProperties->capabilities_properties);
  }
  if (_nodeConnectorProperties->config_properties != NULL) {
    for (i = 0; i < _nodeConnectorProperties->_sizeof_config_properties; i++) {
#if DEBUG_ENUNCIATE > 1
      printf("Freeing accessor config_properties[%i] of type full_ns0_nodeConnectorProperties...\n", i);
#endif
      freeNs0ConfigElement(&(_nodeConnectorProperties->config_properties[i]));
    }
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor config_properties of type full_ns0_nodeConnectorProperties...\n");
#endif
    free(_nodeConnectorProperties->config_properties);
  }
  if (_nodeConnectorProperties->latency_properties != NULL) {
    for (i = 0; i < _nodeConnectorProperties->_sizeof_latency_properties; i++) {
#if DEBUG_ENUNCIATE > 1
      printf("Freeing accessor latency_properties[%i] of type full_ns0_nodeConnectorProperties...\n", i);
#endif
      freeNs0LatencyElement(&(_nodeConnectorProperties->latency_properties[i]));
    }
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor latency_properties of type full_ns0_nodeConnectorProperties...\n");
#endif
    free(_nodeConnectorProperties->latency_properties);
  }
  if (_nodeConnectorProperties->macAddress_properties != NULL) {
    for (i = 0; i < _nodeConnectorProperties->_sizeof_macAddress_properties; i++) {
#if DEBUG_ENUNCIATE > 1
      printf("Freeing accessor macAddress_properties[%i] of type full_ns0_nodeConnectorProperties...\n", i);
#endif
      freeNs0MacAddressElement(&(_nodeConnectorProperties->macAddress_properties[i]));
    }
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor macAddress_properties of type full_ns0_nodeConnectorProperties...\n");
#endif
    free(_nodeConnectorProperties->macAddress_properties);
  }
  if (_nodeConnectorProperties->name_properties != NULL) {
    for (i = 0; i < _nodeConnectorProperties->_sizeof_name_properties; i++) {
#if DEBUG_ENUNCIATE > 1
      printf("Freeing accessor name_properties[%i] of type full_ns0_nodeConnectorProperties...\n", i);
#endif
      freeNs0NameElement(&(_nodeConnectorProperties->name_properties[i]));
    }
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor name_properties of type full_ns0_nodeConnectorProperties...\n");
#endif
    free(_nodeConnectorProperties->name_properties);
  }
  if (_nodeConnectorProperties->peerBandwidth_properties != NULL) {
    for (i = 0; i < _nodeConnectorProperties->_sizeof_peerBandwidth_properties; i++) {
#if DEBUG_ENUNCIATE > 1
      printf("Freeing accessor peerBandwidth_properties[%i] of type full_ns0_nodeConnectorProperties...\n", i);
#endif
      freeNs0PeerBandwidthElement(&(_nodeConnectorProperties->peerBandwidth_properties[i]));
    }
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor peerBandwidth_properties of type full_ns0_nodeConnectorProperties...\n");
#endif
    free(_nodeConnectorProperties->peerBandwidth_properties);
  }
  if (_nodeConnectorProperties->property_properties != NULL) {
    for (i = 0; i < _nodeConnectorProperties->_sizeof_property_properties; i++) {
#if DEBUG_ENUNCIATE > 1
      printf("Freeing accessor property_properties[%i] of type full_ns0_nodeConnectorProperties...\n", i);
#endif
      freeNs0PropertyElement(&(_nodeConnectorProperties->property_properties[i]));
    }
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor property_properties of type full_ns0_nodeConnectorProperties...\n");
#endif
    free(_nodeConnectorProperties->property_properties);
  }
  if (_nodeConnectorProperties->state_properties != NULL) {
    for (i = 0; i < _nodeConnectorProperties->_sizeof_state_properties; i++) {
#if DEBUG_ENUNCIATE > 1
      printf("Freeing accessor state_properties[%i] of type full_ns0_nodeConnectorProperties...\n", i);
#endif
      freeNs0StateElement(&(_nodeConnectorProperties->state_properties[i]));
    }
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor state_properties of type full_ns0_nodeConnectorProperties...\n");
#endif
    free(_nodeConnectorProperties->state_properties);
  }
  if (_nodeConnectorProperties->supportedBandwidth_properties != NULL) {
    for (i = 0; i < _nodeConnectorProperties->_sizeof_supportedBandwidth_properties; i++) {
#if DEBUG_ENUNCIATE > 1
      printf("Freeing accessor supportedBandwidth_properties[%i] of type full_ns0_nodeConnectorProperties...\n", i);
#endif
      freeNs0SupportedBandwidthElement(&(_nodeConnectorProperties->supportedBandwidth_properties[i]));
    }
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor supportedBandwidth_properties of type full_ns0_nodeConnectorProperties...\n");
#endif
    free(_nodeConnectorProperties->supportedBandwidth_properties);
  }
  if (_nodeConnectorProperties->tables_properties != NULL) {
    for (i = 0; i < _nodeConnectorProperties->_sizeof_tables_properties; i++) {
#if DEBUG_ENUNCIATE > 1
      printf("Freeing accessor tables_properties[%i] of type full_ns0_nodeConnectorProperties...\n", i);
#endif
      freeNs0TablesElement(&(_nodeConnectorProperties->tables_properties[i]));
    }
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor tables_properties of type full_ns0_nodeConnectorProperties...\n");
#endif
    free(_nodeConnectorProperties->tables_properties);
  }
  if (_nodeConnectorProperties->tier_properties != NULL) {
    for (i = 0; i < _nodeConnectorProperties->_sizeof_tier_properties; i++) {
#if DEBUG_ENUNCIATE > 1
      printf("Freeing accessor tier_properties[%i] of type full_ns0_nodeConnectorProperties...\n", i);
#endif
      freeNs0TierElement(&(_nodeConnectorProperties->tier_properties[i]));
    }
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor tier_properties of type full_ns0_nodeConnectorProperties...\n");
#endif
    free(_nodeConnectorProperties->tier_properties);
  }
  if (_nodeConnectorProperties->timeStamp_properties != NULL) {
    for (i = 0; i < _nodeConnectorProperties->_sizeof_timeStamp_properties; i++) {
#if DEBUG_ENUNCIATE > 1
      printf("Freeing accessor timeStamp_properties[%i] of type full_ns0_nodeConnectorProperties...\n", i);
#endif
      freeNs0TimeStampElement(&(_nodeConnectorProperties->timeStamp_properties[i]));
    }
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor timeStamp_properties of type full_ns0_nodeConnectorProperties...\n");
#endif
    free(_nodeConnectorProperties->timeStamp_properties);
  }
}
#endif /* DEF_full_ns0_nodeConnectorProperties_M */
#ifndef DEF_full_ns0_nodeConnectors_M
#define DEF_full_ns0_nodeConnectors_M

/**
 * Reads a NodeConnectors element from XML. The element to be read is "nodeConnectors", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The NodeConnectors, or NULL in case of error.
 */
struct full_ns0_nodeConnectors *xml_read_full_ns0_nodeConnectors(xmlTextReaderPtr reader) {
  int status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
  return xmlTextReaderReadNs0NodeConnectorsElement(reader);
}

/**
 * Writes a NodeConnectors to XML under element name "nodeConnectors".
 *
 * @param writer The XML writer.
 * @param _nodeConnectors The NodeConnectors to write.
 * @return 1 if successful, 0 otherwise.
 */
int xml_write_full_ns0_nodeConnectors(xmlTextWriterPtr writer, struct full_ns0_nodeConnectors *_nodeConnectors) {
  return xmlTextWriterWriteNs0NodeConnectorsElementNS(writer, _nodeConnectors, 1);
}

/**
 * Frees a NodeConnectors.
 *
 * @param _nodeConnectors The NodeConnectors to free.
 */
void free_full_ns0_nodeConnectors(struct full_ns0_nodeConnectors *_nodeConnectors) {
  freeNs0NodeConnectorsType(_nodeConnectors);
  free(_nodeConnectors);
}

/**
 * Reads a NodeConnectors element from XML. The element to be read is "nodeConnectors", and
 * it is assumed that the reader is pointing to that element.
 *
 * @param reader The XML reader.
 * @return The NodeConnectors, or NULL in case of error.
 */
struct full_ns0_nodeConnectors *xmlTextReaderReadNs0NodeConnectorsElement(xmlTextReaderPtr reader) {
  struct full_ns0_nodeConnectors *_nodeConnectors = NULL;

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "nodeConnectors", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Attempting to read root element {}nodeConnectors.\n");
#endif
    _nodeConnectors = xmlTextReaderReadNs0NodeConnectorsType(reader);
  }
#if DEBUG_ENUNCIATE
  if (_nodeConnectors == NULL) {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      printf("attempt to read {}nodeConnectors failed. current element: {}%s\n",  xmlTextReaderConstLocalName(reader));
    }
    else {
      printf("attempt to read {}nodeConnectors failed. current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
    }
  }
#endif

  return _nodeConnectors;
}

/**
 * Writes a NodeConnectors to XML under element name "nodeConnectors".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _nodeConnectors The NodeConnectors to write.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0NodeConnectorsElement(xmlTextWriterPtr writer, struct full_ns0_nodeConnectors *_nodeConnectors) {
  return xmlTextWriterWriteNs0NodeConnectorsElementNS(writer, _nodeConnectors, 0);
}

/**
 * Writes a NodeConnectors to XML under element name "nodeConnectors".
 *
 * @param writer The XML writer.
 * @param _nodeConnectors The NodeConnectors to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0NodeConnectorsElementNS(xmlTextWriterPtr writer, struct full_ns0_nodeConnectors *_nodeConnectors, int writeNamespaces) {
  int totalBytes = 0;
  int status;

  status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "nodeConnectors", NULL);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write start element {}nodeConnectors. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

#if DEBUG_ENUNCIATE > 1
  printf("writing type {}nodeConnectors for root element {}nodeConnectors...\n");
#endif
  status = xmlTextWriterWriteNs0NodeConnectorsType(writer, _nodeConnectors);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write type for start element {}nodeConnectors. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  status = xmlTextWriterEndElement(writer);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to end element {}nodeConnectors. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  return totalBytes;
}

/**
 * Frees the children of a NodeConnectors.
 *
 * @param _nodeConnectors The NodeConnectors whose children are to be free.
 */
static void freeNs0NodeConnectorsElement(struct full_ns0_nodeConnectors *_nodeConnectors) {
  freeNs0NodeConnectorsType(_nodeConnectors);
}

/**
 * Reads a NodeConnectors from XML. The reader is assumed to be at the start element.
 *
 * @return the NodeConnectors, or NULL in case of error.
 */
static struct full_ns0_nodeConnectors *xmlTextReaderReadNs0NodeConnectorsType(xmlTextReaderPtr reader) {
  int status, depth;
  void *_child_accessor;
  struct full_ns0_nodeConnectors *_nodeConnectors = calloc(1, sizeof(struct full_ns0_nodeConnectors));



  if (xmlTextReaderIsEmptyElement(reader) == 0) {
    depth = xmlTextReaderDepth(reader);//track the depth.
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);

    while (xmlTextReaderDepth(reader) > depth) {
      if (status < 1) {
        //panic: XML read error.
#if DEBUG_ENUNCIATE
        printf("Failure to advance to next child element.\n");
#endif
        freeNs0NodeConnectorsType(_nodeConnectors);
        free(_nodeConnectors);
        return NULL;
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "nodeConnectorProperties", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}nodeConnectorProperties of type {}nodeConnectorProperties.\n");
#endif
        _child_accessor = xmlTextReaderReadNs0NodeConnectorPropertiesType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}nodeConnectorProperties of type {}nodeConnectorProperties.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0NodeConnectorsType(_nodeConnectors);
          free(_nodeConnectors);
          return NULL;
        }

        _nodeConnectors->nodeConnectorProperties = realloc(_nodeConnectors->nodeConnectorProperties, (_nodeConnectors->_sizeof_nodeConnectorProperties + 1) * sizeof(struct full_ns0_nodeConnectorProperties));
        memcpy(&(_nodeConnectors->nodeConnectorProperties[_nodeConnectors->_sizeof_nodeConnectorProperties++]), _child_accessor, sizeof(struct full_ns0_nodeConnectorProperties));
        free(_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else {
#if DEBUG_ENUNCIATE > 1
        if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
          printf("unknown child element {}%s for type {}nodeConnectors.  Skipping...\n",  xmlTextReaderConstLocalName(reader));
        }
        else {
          printf("unknown child element {%s}%s for type {}nodeConnectors. Skipping...\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
        }
#endif
        status = xmlTextReaderSkipElement(reader);
      }
    }
  }

  return _nodeConnectors;
}

/**
 * Writes a NodeConnectors to XML.
 *
 * @param writer The XML writer.
 * @param _nodeConnectors The NodeConnectors to write.
 * @return The total bytes written, or -1 on error;
 */
static int xmlTextWriterWriteNs0NodeConnectorsType(xmlTextWriterPtr writer, struct full_ns0_nodeConnectors *_nodeConnectors) {
  int status, totalBytes = 0, i;
  xmlChar *binaryData;
  for (i = 0; i < _nodeConnectors->_sizeof_nodeConnectorProperties; i++) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "nodeConnectorProperties", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}nodeConnectorProperties. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {}nodeConnectorProperties for element {}nodeConnectorProperties...\n");
#endif
    status = xmlTextWriterWriteNs0NodeConnectorPropertiesType(writer, &(_nodeConnectors->nodeConnectorProperties[i]));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {}nodeConnectorProperties for element {}nodeConnectorProperties. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}nodeConnectorProperties. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }

  return totalBytes;
}

/**
 * Frees the elements of a NodeConnectors.
 *
 * @param _nodeConnectors The NodeConnectors to free.
 */
static void freeNs0NodeConnectorsType(struct full_ns0_nodeConnectors *_nodeConnectors) {
  int i;
  if (_nodeConnectors->nodeConnectorProperties != NULL) {
    for (i = 0; i < _nodeConnectors->_sizeof_nodeConnectorProperties; i++) {
#if DEBUG_ENUNCIATE > 1
      printf("Freeing accessor nodeConnectorProperties[%i] of type full_ns0_nodeConnectors...\n", i);
#endif
      freeNs0NodeConnectorPropertiesType(&(_nodeConnectors->nodeConnectorProperties[i]));
    }
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor nodeConnectorProperties of type full_ns0_nodeConnectors...\n");
#endif
    free(_nodeConnectors->nodeConnectorProperties);
  }
}
#endif /* DEF_full_ns0_nodeConnectors_M */
#ifndef DEF_full_ns0_nodeProperties_M
#define DEF_full_ns0_nodeProperties_M

/**
 * Reads a NodeProperties element from XML. The element to be read is "nodeProperties", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The NodeProperties, or NULL in case of error.
 */
struct full_ns0_nodeProperties *xml_read_full_ns0_nodeProperties(xmlTextReaderPtr reader) {
  int status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
  return xmlTextReaderReadNs0NodePropertiesElement(reader);
}

/**
 * Writes a NodeProperties to XML under element name "nodeProperties".
 *
 * @param writer The XML writer.
 * @param _nodeProperties The NodeProperties to write.
 * @return 1 if successful, 0 otherwise.
 */
int xml_write_full_ns0_nodeProperties(xmlTextWriterPtr writer, struct full_ns0_nodeProperties *_nodeProperties) {
  return xmlTextWriterWriteNs0NodePropertiesElementNS(writer, _nodeProperties, 1);
}

/**
 * Frees a NodeProperties.
 *
 * @param _nodeProperties The NodeProperties to free.
 */
void free_full_ns0_nodeProperties(struct full_ns0_nodeProperties *_nodeProperties) {
  freeNs0NodePropertiesType(_nodeProperties);
  free(_nodeProperties);
}

/**
 * Reads a NodeProperties element from XML. The element to be read is "nodeProperties", and
 * it is assumed that the reader is pointing to that element.
 *
 * @param reader The XML reader.
 * @return The NodeProperties, or NULL in case of error.
 */
struct full_ns0_nodeProperties *xmlTextReaderReadNs0NodePropertiesElement(xmlTextReaderPtr reader) {
  struct full_ns0_nodeProperties *_nodeProperties = NULL;

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "nodeProperties", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Attempting to read root element {}nodeProperties.\n");
#endif
    _nodeProperties = xmlTextReaderReadNs0NodePropertiesType(reader);
  }
#if DEBUG_ENUNCIATE
  if (_nodeProperties == NULL) {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      printf("attempt to read {}nodeProperties failed. current element: {}%s\n",  xmlTextReaderConstLocalName(reader));
    }
    else {
      printf("attempt to read {}nodeProperties failed. current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
    }
  }
#endif

  return _nodeProperties;
}

/**
 * Writes a NodeProperties to XML under element name "nodeProperties".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _nodeProperties The NodeProperties to write.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0NodePropertiesElement(xmlTextWriterPtr writer, struct full_ns0_nodeProperties *_nodeProperties) {
  return xmlTextWriterWriteNs0NodePropertiesElementNS(writer, _nodeProperties, 0);
}

/**
 * Writes a NodeProperties to XML under element name "nodeProperties".
 *
 * @param writer The XML writer.
 * @param _nodeProperties The NodeProperties to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0NodePropertiesElementNS(xmlTextWriterPtr writer, struct full_ns0_nodeProperties *_nodeProperties, int writeNamespaces) {
  int totalBytes = 0;
  int status;

  status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "nodeProperties", NULL);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write start element {}nodeProperties. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

#if DEBUG_ENUNCIATE > 1
  printf("writing type {}nodeProperties for root element {}nodeProperties...\n");
#endif
  status = xmlTextWriterWriteNs0NodePropertiesType(writer, _nodeProperties);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write type for start element {}nodeProperties. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  status = xmlTextWriterEndElement(writer);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to end element {}nodeProperties. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  return totalBytes;
}

/**
 * Frees the children of a NodeProperties.
 *
 * @param _nodeProperties The NodeProperties whose children are to be free.
 */
static void freeNs0NodePropertiesElement(struct full_ns0_nodeProperties *_nodeProperties) {
  freeNs0NodePropertiesType(_nodeProperties);
}

/**
 * Reads a NodeProperties from XML. The reader is assumed to be at the start element.
 *
 * @return the NodeProperties, or NULL in case of error.
 */
static struct full_ns0_nodeProperties *xmlTextReaderReadNs0NodePropertiesType(xmlTextReaderPtr reader) {
  int status, depth;
  void *_child_accessor;
  struct full_ns0_nodeProperties *_nodeProperties = calloc(1, sizeof(struct full_ns0_nodeProperties));



  if (xmlTextReaderIsEmptyElement(reader) == 0) {
    depth = xmlTextReaderDepth(reader);//track the depth.
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);

    while (xmlTextReaderDepth(reader) > depth) {
      if (status < 1) {
        //panic: XML read error.
#if DEBUG_ENUNCIATE
        printf("Failure to advance to next child element.\n");
#endif
        freeNs0NodePropertiesType(_nodeProperties);
        free(_nodeProperties);
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
          freeNs0NodePropertiesType(_nodeProperties);
          free(_nodeProperties);
          return NULL;
        }

        _nodeProperties->node = ((struct full_ns0_node*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "properties", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

        if (xmlTextReaderIsEmptyElement(reader) == 0) {
#if DEBUG_ENUNCIATE > 1
          printf("Unwrapping wrapper element {}properties...\n");
#endif
          //start wrapper element "{}properties"
          status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
          while (xmlTextReaderDepth(reader) > (depth + 1)) {
            if (status < 1) {
              //panic: XML read error.
#if DEBUG_ENUNCIATE
              printf("Failure to advance to next child element.\n");
#endif
              freeNs0NodePropertiesType(_nodeProperties);
              free(_nodeProperties);
              return NULL;
            }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "actions", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}actions of element {}actions.\n");
#endif
        _child_accessor = xmlTextReaderReadNs0ActionsElement(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}actions of element {}actions.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0NodePropertiesType(_nodeProperties);
          free(_nodeProperties);
          return NULL;
        }

        _nodeProperties->actions_properties = realloc(_nodeProperties->actions_properties, (_nodeProperties->_sizeof_actions_properties + 1) * sizeof(struct full_ns0_property));
        memcpy(&(_nodeProperties->actions_properties[_nodeProperties->_sizeof_actions_properties++]), _child_accessor, sizeof(struct full_ns0_property));
        free(_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "advertisedBandwidth", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}advertisedBandwidth of element {}advertisedBandwidth.\n");
#endif
        _child_accessor = xmlTextReaderReadNs0AdvertisedBandwidthElement(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}advertisedBandwidth of element {}advertisedBandwidth.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0NodePropertiesType(_nodeProperties);
          free(_nodeProperties);
          return NULL;
        }

        _nodeProperties->advertisedBandwidth_properties = realloc(_nodeProperties->advertisedBandwidth_properties, (_nodeProperties->_sizeof_advertisedBandwidth_properties + 1) * sizeof(struct full_ns0_property));
        memcpy(&(_nodeProperties->advertisedBandwidth_properties[_nodeProperties->_sizeof_advertisedBandwidth_properties++]), _child_accessor, sizeof(struct full_ns0_property));
        free(_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "bandwidth", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}bandwidth of element {}bandwidth.\n");
#endif
        _child_accessor = xmlTextReaderReadNs0BandwidthElement(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}bandwidth of element {}bandwidth.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0NodePropertiesType(_nodeProperties);
          free(_nodeProperties);
          return NULL;
        }

        _nodeProperties->bandwidth_properties = realloc(_nodeProperties->bandwidth_properties, (_nodeProperties->_sizeof_bandwidth_properties + 1) * sizeof(struct full_ns0_property));
        memcpy(&(_nodeProperties->bandwidth_properties[_nodeProperties->_sizeof_bandwidth_properties++]), _child_accessor, sizeof(struct full_ns0_property));
        free(_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "buffers", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}buffers of element {}buffers.\n");
#endif
        _child_accessor = xmlTextReaderReadNs0BuffersElement(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}buffers of element {}buffers.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0NodePropertiesType(_nodeProperties);
          free(_nodeProperties);
          return NULL;
        }

        _nodeProperties->buffers_properties = realloc(_nodeProperties->buffers_properties, (_nodeProperties->_sizeof_buffers_properties + 1) * sizeof(struct full_ns0_property));
        memcpy(&(_nodeProperties->buffers_properties[_nodeProperties->_sizeof_buffers_properties++]), _child_accessor, sizeof(struct full_ns0_property));
        free(_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "capabilities", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}capabilities of element {}capabilities.\n");
#endif
        _child_accessor = xmlTextReaderReadNs0CapabilitiesElement(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}capabilities of element {}capabilities.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0NodePropertiesType(_nodeProperties);
          free(_nodeProperties);
          return NULL;
        }

        _nodeProperties->capabilities_properties = realloc(_nodeProperties->capabilities_properties, (_nodeProperties->_sizeof_capabilities_properties + 1) * sizeof(struct full_ns0_property));
        memcpy(&(_nodeProperties->capabilities_properties[_nodeProperties->_sizeof_capabilities_properties++]), _child_accessor, sizeof(struct full_ns0_property));
        free(_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "config", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}config of element {}config.\n");
#endif
        _child_accessor = xmlTextReaderReadNs0ConfigElement(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}config of element {}config.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0NodePropertiesType(_nodeProperties);
          free(_nodeProperties);
          return NULL;
        }

        _nodeProperties->config_properties = realloc(_nodeProperties->config_properties, (_nodeProperties->_sizeof_config_properties + 1) * sizeof(struct full_ns0_property));
        memcpy(&(_nodeProperties->config_properties[_nodeProperties->_sizeof_config_properties++]), _child_accessor, sizeof(struct full_ns0_property));
        free(_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "latency", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}latency of element {}latency.\n");
#endif
        _child_accessor = xmlTextReaderReadNs0LatencyElement(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}latency of element {}latency.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0NodePropertiesType(_nodeProperties);
          free(_nodeProperties);
          return NULL;
        }

        _nodeProperties->latency_properties = realloc(_nodeProperties->latency_properties, (_nodeProperties->_sizeof_latency_properties + 1) * sizeof(struct full_ns0_property));
        memcpy(&(_nodeProperties->latency_properties[_nodeProperties->_sizeof_latency_properties++]), _child_accessor, sizeof(struct full_ns0_property));
        free(_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "macAddress", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}macAddress of element {}macAddress.\n");
#endif
        _child_accessor = xmlTextReaderReadNs0MacAddressElement(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}macAddress of element {}macAddress.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0NodePropertiesType(_nodeProperties);
          free(_nodeProperties);
          return NULL;
        }

        _nodeProperties->macAddress_properties = realloc(_nodeProperties->macAddress_properties, (_nodeProperties->_sizeof_macAddress_properties + 1) * sizeof(struct full_ns0_property));
        memcpy(&(_nodeProperties->macAddress_properties[_nodeProperties->_sizeof_macAddress_properties++]), _child_accessor, sizeof(struct full_ns0_property));
        free(_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "name", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}name of element {}name.\n");
#endif
        _child_accessor = xmlTextReaderReadNs0NameElement(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}name of element {}name.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0NodePropertiesType(_nodeProperties);
          free(_nodeProperties);
          return NULL;
        }

        _nodeProperties->name_properties = realloc(_nodeProperties->name_properties, (_nodeProperties->_sizeof_name_properties + 1) * sizeof(struct full_ns0_property));
        memcpy(&(_nodeProperties->name_properties[_nodeProperties->_sizeof_name_properties++]), _child_accessor, sizeof(struct full_ns0_property));
        free(_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "peerBandwidth", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}peerBandwidth of element {}peerBandwidth.\n");
#endif
        _child_accessor = xmlTextReaderReadNs0PeerBandwidthElement(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}peerBandwidth of element {}peerBandwidth.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0NodePropertiesType(_nodeProperties);
          free(_nodeProperties);
          return NULL;
        }

        _nodeProperties->peerBandwidth_properties = realloc(_nodeProperties->peerBandwidth_properties, (_nodeProperties->_sizeof_peerBandwidth_properties + 1) * sizeof(struct full_ns0_property));
        memcpy(&(_nodeProperties->peerBandwidth_properties[_nodeProperties->_sizeof_peerBandwidth_properties++]), _child_accessor, sizeof(struct full_ns0_property));
        free(_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "property", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}property of element {}property.\n");
#endif
        _child_accessor = xmlTextReaderReadNs0PropertyElement(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}property of element {}property.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0NodePropertiesType(_nodeProperties);
          free(_nodeProperties);
          return NULL;
        }

        _nodeProperties->property_properties = realloc(_nodeProperties->property_properties, (_nodeProperties->_sizeof_property_properties + 1) * sizeof(struct full_ns0_property));
        memcpy(&(_nodeProperties->property_properties[_nodeProperties->_sizeof_property_properties++]), _child_accessor, sizeof(struct full_ns0_property));
        free(_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "state", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}state of element {}state.\n");
#endif
        _child_accessor = xmlTextReaderReadNs0StateElement(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}state of element {}state.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0NodePropertiesType(_nodeProperties);
          free(_nodeProperties);
          return NULL;
        }

        _nodeProperties->state_properties = realloc(_nodeProperties->state_properties, (_nodeProperties->_sizeof_state_properties + 1) * sizeof(struct full_ns0_property));
        memcpy(&(_nodeProperties->state_properties[_nodeProperties->_sizeof_state_properties++]), _child_accessor, sizeof(struct full_ns0_property));
        free(_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "supportedBandwidth", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}supportedBandwidth of element {}supportedBandwidth.\n");
#endif
        _child_accessor = xmlTextReaderReadNs0SupportedBandwidthElement(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}supportedBandwidth of element {}supportedBandwidth.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0NodePropertiesType(_nodeProperties);
          free(_nodeProperties);
          return NULL;
        }

        _nodeProperties->supportedBandwidth_properties = realloc(_nodeProperties->supportedBandwidth_properties, (_nodeProperties->_sizeof_supportedBandwidth_properties + 1) * sizeof(struct full_ns0_property));
        memcpy(&(_nodeProperties->supportedBandwidth_properties[_nodeProperties->_sizeof_supportedBandwidth_properties++]), _child_accessor, sizeof(struct full_ns0_property));
        free(_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "tables", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}tables of element {}tables.\n");
#endif
        _child_accessor = xmlTextReaderReadNs0TablesElement(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}tables of element {}tables.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0NodePropertiesType(_nodeProperties);
          free(_nodeProperties);
          return NULL;
        }

        _nodeProperties->tables_properties = realloc(_nodeProperties->tables_properties, (_nodeProperties->_sizeof_tables_properties + 1) * sizeof(struct full_ns0_property));
        memcpy(&(_nodeProperties->tables_properties[_nodeProperties->_sizeof_tables_properties++]), _child_accessor, sizeof(struct full_ns0_property));
        free(_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "tier", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}tier of element {}tier.\n");
#endif
        _child_accessor = xmlTextReaderReadNs0TierElement(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}tier of element {}tier.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0NodePropertiesType(_nodeProperties);
          free(_nodeProperties);
          return NULL;
        }

        _nodeProperties->tier_properties = realloc(_nodeProperties->tier_properties, (_nodeProperties->_sizeof_tier_properties + 1) * sizeof(struct full_ns0_property));
        memcpy(&(_nodeProperties->tier_properties[_nodeProperties->_sizeof_tier_properties++]), _child_accessor, sizeof(struct full_ns0_property));
        free(_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "timeStamp", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}timeStamp of element {}timeStamp.\n");
#endif
        _child_accessor = xmlTextReaderReadNs0TimeStampElement(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}timeStamp of element {}timeStamp.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0NodePropertiesType(_nodeProperties);
          free(_nodeProperties);
          return NULL;
        }

        _nodeProperties->timeStamp_properties = realloc(_nodeProperties->timeStamp_properties, (_nodeProperties->_sizeof_timeStamp_properties + 1) * sizeof(struct full_ns0_property));
        memcpy(&(_nodeProperties->timeStamp_properties[_nodeProperties->_sizeof_timeStamp_properties++]), _child_accessor, sizeof(struct full_ns0_property));
        free(_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
          } // end "while in wrapper element" loop
        } //end "if empty element" clause

        if (status < 1) {
          //panic: XML read error.
#if DEBUG_ENUNCIATE
          printf("Failed to advance to end wrapper element {}properties.\n");
#endif
          freeNs0NodePropertiesType(_nodeProperties);
          free(_nodeProperties);
          return NULL;
        }
        else {
          //end wrapper element "{}properties"
          status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
        }
      } // end "if wrapper element" clause
      else {
#if DEBUG_ENUNCIATE > 1
        if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
          printf("unknown child element {}%s for type {}nodeProperties.  Skipping...\n",  xmlTextReaderConstLocalName(reader));
        }
        else {
          printf("unknown child element {%s}%s for type {}nodeProperties. Skipping...\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
        }
#endif
        status = xmlTextReaderSkipElement(reader);
      }
    }
  }

  return _nodeProperties;
}

/**
 * Writes a NodeProperties to XML.
 *
 * @param writer The XML writer.
 * @param _nodeProperties The NodeProperties to write.
 * @return The total bytes written, or -1 on error;
 */
static int xmlTextWriterWriteNs0NodePropertiesType(xmlTextWriterPtr writer, struct full_ns0_nodeProperties *_nodeProperties) {
  int status, totalBytes = 0, i;
  xmlChar *binaryData;
  if (_nodeProperties->node != NULL) {
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
    status = xmlTextWriterWriteNs0NodeType(writer, (_nodeProperties->node));
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

  if ((_nodeProperties->actions_properties != NULL) || (_nodeProperties->advertisedBandwidth_properties != NULL) || (_nodeProperties->bandwidth_properties != NULL) || (_nodeProperties->buffers_properties != NULL) || (_nodeProperties->capabilities_properties != NULL) || (_nodeProperties->config_properties != NULL) || (_nodeProperties->latency_properties != NULL) || (_nodeProperties->macAddress_properties != NULL) || (_nodeProperties->name_properties != NULL) || (_nodeProperties->peerBandwidth_properties != NULL) || (_nodeProperties->property_properties != NULL) || (_nodeProperties->state_properties != NULL) || (_nodeProperties->supportedBandwidth_properties != NULL) || (_nodeProperties->tables_properties != NULL) || (_nodeProperties->tier_properties != NULL) || (_nodeProperties->timeStamp_properties != NULL)) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "properties", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}properties. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  for (i = 0; i < _nodeProperties->_sizeof_actions_properties; i++) {
#if DEBUG_ENUNCIATE > 1
    printf("writing element {}actions...\n");
#endif
    status = xmlTextWriterWriteNs0ActionsElementNS(writer, &(_nodeProperties->actions_properties[i]), 0);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write element {}actions. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  for (i = 0; i < _nodeProperties->_sizeof_advertisedBandwidth_properties; i++) {
#if DEBUG_ENUNCIATE > 1
    printf("writing element {}advertisedBandwidth...\n");
#endif
    status = xmlTextWriterWriteNs0AdvertisedBandwidthElementNS(writer, &(_nodeProperties->advertisedBandwidth_properties[i]), 0);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write element {}advertisedBandwidth. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  for (i = 0; i < _nodeProperties->_sizeof_bandwidth_properties; i++) {
#if DEBUG_ENUNCIATE > 1
    printf("writing element {}bandwidth...\n");
#endif
    status = xmlTextWriterWriteNs0BandwidthElementNS(writer, &(_nodeProperties->bandwidth_properties[i]), 0);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write element {}bandwidth. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  for (i = 0; i < _nodeProperties->_sizeof_buffers_properties; i++) {
#if DEBUG_ENUNCIATE > 1
    printf("writing element {}buffers...\n");
#endif
    status = xmlTextWriterWriteNs0BuffersElementNS(writer, &(_nodeProperties->buffers_properties[i]), 0);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write element {}buffers. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  for (i = 0; i < _nodeProperties->_sizeof_capabilities_properties; i++) {
#if DEBUG_ENUNCIATE > 1
    printf("writing element {}capabilities...\n");
#endif
    status = xmlTextWriterWriteNs0CapabilitiesElementNS(writer, &(_nodeProperties->capabilities_properties[i]), 0);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write element {}capabilities. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  for (i = 0; i < _nodeProperties->_sizeof_config_properties; i++) {
#if DEBUG_ENUNCIATE > 1
    printf("writing element {}config...\n");
#endif
    status = xmlTextWriterWriteNs0ConfigElementNS(writer, &(_nodeProperties->config_properties[i]), 0);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write element {}config. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  for (i = 0; i < _nodeProperties->_sizeof_latency_properties; i++) {
#if DEBUG_ENUNCIATE > 1
    printf("writing element {}latency...\n");
#endif
    status = xmlTextWriterWriteNs0LatencyElementNS(writer, &(_nodeProperties->latency_properties[i]), 0);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write element {}latency. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  for (i = 0; i < _nodeProperties->_sizeof_macAddress_properties; i++) {
#if DEBUG_ENUNCIATE > 1
    printf("writing element {}macAddress...\n");
#endif
    status = xmlTextWriterWriteNs0MacAddressElementNS(writer, &(_nodeProperties->macAddress_properties[i]), 0);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write element {}macAddress. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  for (i = 0; i < _nodeProperties->_sizeof_name_properties; i++) {
#if DEBUG_ENUNCIATE > 1
    printf("writing element {}name...\n");
#endif
    status = xmlTextWriterWriteNs0NameElementNS(writer, &(_nodeProperties->name_properties[i]), 0);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write element {}name. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  for (i = 0; i < _nodeProperties->_sizeof_peerBandwidth_properties; i++) {
#if DEBUG_ENUNCIATE > 1
    printf("writing element {}peerBandwidth...\n");
#endif
    status = xmlTextWriterWriteNs0PeerBandwidthElementNS(writer, &(_nodeProperties->peerBandwidth_properties[i]), 0);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write element {}peerBandwidth. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  for (i = 0; i < _nodeProperties->_sizeof_property_properties; i++) {
#if DEBUG_ENUNCIATE > 1
    printf("writing element {}property...\n");
#endif
    status = xmlTextWriterWriteNs0PropertyElementNS(writer, &(_nodeProperties->property_properties[i]), 0);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write element {}property. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  for (i = 0; i < _nodeProperties->_sizeof_state_properties; i++) {
#if DEBUG_ENUNCIATE > 1
    printf("writing element {}state...\n");
#endif
    status = xmlTextWriterWriteNs0StateElementNS(writer, &(_nodeProperties->state_properties[i]), 0);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write element {}state. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  for (i = 0; i < _nodeProperties->_sizeof_supportedBandwidth_properties; i++) {
#if DEBUG_ENUNCIATE > 1
    printf("writing element {}supportedBandwidth...\n");
#endif
    status = xmlTextWriterWriteNs0SupportedBandwidthElementNS(writer, &(_nodeProperties->supportedBandwidth_properties[i]), 0);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write element {}supportedBandwidth. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  for (i = 0; i < _nodeProperties->_sizeof_tables_properties; i++) {
#if DEBUG_ENUNCIATE > 1
    printf("writing element {}tables...\n");
#endif
    status = xmlTextWriterWriteNs0TablesElementNS(writer, &(_nodeProperties->tables_properties[i]), 0);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write element {}tables. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  for (i = 0; i < _nodeProperties->_sizeof_tier_properties; i++) {
#if DEBUG_ENUNCIATE > 1
    printf("writing element {}tier...\n");
#endif
    status = xmlTextWriterWriteNs0TierElementNS(writer, &(_nodeProperties->tier_properties[i]), 0);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write element {}tier. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  for (i = 0; i < _nodeProperties->_sizeof_timeStamp_properties; i++) {
#if DEBUG_ENUNCIATE > 1
    printf("writing element {}timeStamp...\n");
#endif
    status = xmlTextWriterWriteNs0TimeStampElementNS(writer, &(_nodeProperties->timeStamp_properties[i]), 0);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write element {}timeStamp. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }

  if ((_nodeProperties->actions_properties != NULL) || (_nodeProperties->advertisedBandwidth_properties != NULL) || (_nodeProperties->bandwidth_properties != NULL) || (_nodeProperties->buffers_properties != NULL) || (_nodeProperties->capabilities_properties != NULL) || (_nodeProperties->config_properties != NULL) || (_nodeProperties->latency_properties != NULL) || (_nodeProperties->macAddress_properties != NULL) || (_nodeProperties->name_properties != NULL) || (_nodeProperties->peerBandwidth_properties != NULL) || (_nodeProperties->property_properties != NULL) || (_nodeProperties->state_properties != NULL) || (_nodeProperties->supportedBandwidth_properties != NULL) || (_nodeProperties->tables_properties != NULL) || (_nodeProperties->tier_properties != NULL) || (_nodeProperties->timeStamp_properties != NULL)) {
    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}properties. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }

  return totalBytes;
}

/**
 * Frees the elements of a NodeProperties.
 *
 * @param _nodeProperties The NodeProperties to free.
 */
static void freeNs0NodePropertiesType(struct full_ns0_nodeProperties *_nodeProperties) {
  int i;
  if (_nodeProperties->node != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor node of type full_ns0_nodeProperties...\n");
#endif
    freeNs0NodeType(_nodeProperties->node);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor node of type full_ns0_nodeProperties...\n");
#endif
    free(_nodeProperties->node);
  }
  if (_nodeProperties->actions_properties != NULL) {
    for (i = 0; i < _nodeProperties->_sizeof_actions_properties; i++) {
#if DEBUG_ENUNCIATE > 1
      printf("Freeing accessor actions_properties[%i] of type full_ns0_nodeProperties...\n", i);
#endif
      freeNs0ActionsElement(&(_nodeProperties->actions_properties[i]));
    }
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor actions_properties of type full_ns0_nodeProperties...\n");
#endif
    free(_nodeProperties->actions_properties);
  }
  if (_nodeProperties->advertisedBandwidth_properties != NULL) {
    for (i = 0; i < _nodeProperties->_sizeof_advertisedBandwidth_properties; i++) {
#if DEBUG_ENUNCIATE > 1
      printf("Freeing accessor advertisedBandwidth_properties[%i] of type full_ns0_nodeProperties...\n", i);
#endif
      freeNs0AdvertisedBandwidthElement(&(_nodeProperties->advertisedBandwidth_properties[i]));
    }
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor advertisedBandwidth_properties of type full_ns0_nodeProperties...\n");
#endif
    free(_nodeProperties->advertisedBandwidth_properties);
  }
  if (_nodeProperties->bandwidth_properties != NULL) {
    for (i = 0; i < _nodeProperties->_sizeof_bandwidth_properties; i++) {
#if DEBUG_ENUNCIATE > 1
      printf("Freeing accessor bandwidth_properties[%i] of type full_ns0_nodeProperties...\n", i);
#endif
      freeNs0BandwidthElement(&(_nodeProperties->bandwidth_properties[i]));
    }
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor bandwidth_properties of type full_ns0_nodeProperties...\n");
#endif
    free(_nodeProperties->bandwidth_properties);
  }
  if (_nodeProperties->buffers_properties != NULL) {
    for (i = 0; i < _nodeProperties->_sizeof_buffers_properties; i++) {
#if DEBUG_ENUNCIATE > 1
      printf("Freeing accessor buffers_properties[%i] of type full_ns0_nodeProperties...\n", i);
#endif
      freeNs0BuffersElement(&(_nodeProperties->buffers_properties[i]));
    }
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor buffers_properties of type full_ns0_nodeProperties...\n");
#endif
    free(_nodeProperties->buffers_properties);
  }
  if (_nodeProperties->capabilities_properties != NULL) {
    for (i = 0; i < _nodeProperties->_sizeof_capabilities_properties; i++) {
#if DEBUG_ENUNCIATE > 1
      printf("Freeing accessor capabilities_properties[%i] of type full_ns0_nodeProperties...\n", i);
#endif
      freeNs0CapabilitiesElement(&(_nodeProperties->capabilities_properties[i]));
    }
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor capabilities_properties of type full_ns0_nodeProperties...\n");
#endif
    free(_nodeProperties->capabilities_properties);
  }
  if (_nodeProperties->config_properties != NULL) {
    for (i = 0; i < _nodeProperties->_sizeof_config_properties; i++) {
#if DEBUG_ENUNCIATE > 1
      printf("Freeing accessor config_properties[%i] of type full_ns0_nodeProperties...\n", i);
#endif
      freeNs0ConfigElement(&(_nodeProperties->config_properties[i]));
    }
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor config_properties of type full_ns0_nodeProperties...\n");
#endif
    free(_nodeProperties->config_properties);
  }
  if (_nodeProperties->latency_properties != NULL) {
    for (i = 0; i < _nodeProperties->_sizeof_latency_properties; i++) {
#if DEBUG_ENUNCIATE > 1
      printf("Freeing accessor latency_properties[%i] of type full_ns0_nodeProperties...\n", i);
#endif
      freeNs0LatencyElement(&(_nodeProperties->latency_properties[i]));
    }
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor latency_properties of type full_ns0_nodeProperties...\n");
#endif
    free(_nodeProperties->latency_properties);
  }
  if (_nodeProperties->macAddress_properties != NULL) {
    for (i = 0; i < _nodeProperties->_sizeof_macAddress_properties; i++) {
#if DEBUG_ENUNCIATE > 1
      printf("Freeing accessor macAddress_properties[%i] of type full_ns0_nodeProperties...\n", i);
#endif
      freeNs0MacAddressElement(&(_nodeProperties->macAddress_properties[i]));
    }
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor macAddress_properties of type full_ns0_nodeProperties...\n");
#endif
    free(_nodeProperties->macAddress_properties);
  }
  if (_nodeProperties->name_properties != NULL) {
    for (i = 0; i < _nodeProperties->_sizeof_name_properties; i++) {
#if DEBUG_ENUNCIATE > 1
      printf("Freeing accessor name_properties[%i] of type full_ns0_nodeProperties...\n", i);
#endif
      freeNs0NameElement(&(_nodeProperties->name_properties[i]));
    }
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor name_properties of type full_ns0_nodeProperties...\n");
#endif
    free(_nodeProperties->name_properties);
  }
  if (_nodeProperties->peerBandwidth_properties != NULL) {
    for (i = 0; i < _nodeProperties->_sizeof_peerBandwidth_properties; i++) {
#if DEBUG_ENUNCIATE > 1
      printf("Freeing accessor peerBandwidth_properties[%i] of type full_ns0_nodeProperties...\n", i);
#endif
      freeNs0PeerBandwidthElement(&(_nodeProperties->peerBandwidth_properties[i]));
    }
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor peerBandwidth_properties of type full_ns0_nodeProperties...\n");
#endif
    free(_nodeProperties->peerBandwidth_properties);
  }
  if (_nodeProperties->property_properties != NULL) {
    for (i = 0; i < _nodeProperties->_sizeof_property_properties; i++) {
#if DEBUG_ENUNCIATE > 1
      printf("Freeing accessor property_properties[%i] of type full_ns0_nodeProperties...\n", i);
#endif
      freeNs0PropertyElement(&(_nodeProperties->property_properties[i]));
    }
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor property_properties of type full_ns0_nodeProperties...\n");
#endif
    free(_nodeProperties->property_properties);
  }
  if (_nodeProperties->state_properties != NULL) {
    for (i = 0; i < _nodeProperties->_sizeof_state_properties; i++) {
#if DEBUG_ENUNCIATE > 1
      printf("Freeing accessor state_properties[%i] of type full_ns0_nodeProperties...\n", i);
#endif
      freeNs0StateElement(&(_nodeProperties->state_properties[i]));
    }
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor state_properties of type full_ns0_nodeProperties...\n");
#endif
    free(_nodeProperties->state_properties);
  }
  if (_nodeProperties->supportedBandwidth_properties != NULL) {
    for (i = 0; i < _nodeProperties->_sizeof_supportedBandwidth_properties; i++) {
#if DEBUG_ENUNCIATE > 1
      printf("Freeing accessor supportedBandwidth_properties[%i] of type full_ns0_nodeProperties...\n", i);
#endif
      freeNs0SupportedBandwidthElement(&(_nodeProperties->supportedBandwidth_properties[i]));
    }
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor supportedBandwidth_properties of type full_ns0_nodeProperties...\n");
#endif
    free(_nodeProperties->supportedBandwidth_properties);
  }
  if (_nodeProperties->tables_properties != NULL) {
    for (i = 0; i < _nodeProperties->_sizeof_tables_properties; i++) {
#if DEBUG_ENUNCIATE > 1
      printf("Freeing accessor tables_properties[%i] of type full_ns0_nodeProperties...\n", i);
#endif
      freeNs0TablesElement(&(_nodeProperties->tables_properties[i]));
    }
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor tables_properties of type full_ns0_nodeProperties...\n");
#endif
    free(_nodeProperties->tables_properties);
  }
  if (_nodeProperties->tier_properties != NULL) {
    for (i = 0; i < _nodeProperties->_sizeof_tier_properties; i++) {
#if DEBUG_ENUNCIATE > 1
      printf("Freeing accessor tier_properties[%i] of type full_ns0_nodeProperties...\n", i);
#endif
      freeNs0TierElement(&(_nodeProperties->tier_properties[i]));
    }
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor tier_properties of type full_ns0_nodeProperties...\n");
#endif
    free(_nodeProperties->tier_properties);
  }
  if (_nodeProperties->timeStamp_properties != NULL) {
    for (i = 0; i < _nodeProperties->_sizeof_timeStamp_properties; i++) {
#if DEBUG_ENUNCIATE > 1
      printf("Freeing accessor timeStamp_properties[%i] of type full_ns0_nodeProperties...\n", i);
#endif
      freeNs0TimeStampElement(&(_nodeProperties->timeStamp_properties[i]));
    }
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor timeStamp_properties of type full_ns0_nodeProperties...\n");
#endif
    free(_nodeProperties->timeStamp_properties);
  }
}
#endif /* DEF_full_ns0_nodeProperties_M */
#ifndef DEF_full_ns0_nodes_M
#define DEF_full_ns0_nodes_M

/**
 * Reads a Nodes element from XML. The element to be read is "nodes", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The Nodes, or NULL in case of error.
 */
struct full_ns0_nodes *xml_read_full_ns0_nodes(xmlTextReaderPtr reader) {
  int status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
  return xmlTextReaderReadNs0NodesElement(reader);
}

/**
 * Writes a Nodes to XML under element name "nodes".
 *
 * @param writer The XML writer.
 * @param _nodes The Nodes to write.
 * @return 1 if successful, 0 otherwise.
 */
int xml_write_full_ns0_nodes(xmlTextWriterPtr writer, struct full_ns0_nodes *_nodes) {
  return xmlTextWriterWriteNs0NodesElementNS(writer, _nodes, 1);
}

/**
 * Frees a Nodes.
 *
 * @param _nodes The Nodes to free.
 */
void free_full_ns0_nodes(struct full_ns0_nodes *_nodes) {
  freeNs0NodesType(_nodes);
  free(_nodes);
}

/**
 * Reads a Nodes element from XML. The element to be read is "nodes", and
 * it is assumed that the reader is pointing to that element.
 *
 * @param reader The XML reader.
 * @return The Nodes, or NULL in case of error.
 */
struct full_ns0_nodes *xmlTextReaderReadNs0NodesElement(xmlTextReaderPtr reader) {
  struct full_ns0_nodes *_nodes = NULL;

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "nodes", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Attempting to read root element {}nodes.\n");
#endif
    _nodes = xmlTextReaderReadNs0NodesType(reader);
  }
#if DEBUG_ENUNCIATE
  if (_nodes == NULL) {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      printf("attempt to read {}nodes failed. current element: {}%s\n",  xmlTextReaderConstLocalName(reader));
    }
    else {
      printf("attempt to read {}nodes failed. current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
    }
  }
#endif

  return _nodes;
}

/**
 * Writes a Nodes to XML under element name "nodes".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _nodes The Nodes to write.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0NodesElement(xmlTextWriterPtr writer, struct full_ns0_nodes *_nodes) {
  return xmlTextWriterWriteNs0NodesElementNS(writer, _nodes, 0);
}

/**
 * Writes a Nodes to XML under element name "nodes".
 *
 * @param writer The XML writer.
 * @param _nodes The Nodes to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0NodesElementNS(xmlTextWriterPtr writer, struct full_ns0_nodes *_nodes, int writeNamespaces) {
  int totalBytes = 0;
  int status;

  status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "nodes", NULL);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write start element {}nodes. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

#if DEBUG_ENUNCIATE > 1
  printf("writing type {}nodes for root element {}nodes...\n");
#endif
  status = xmlTextWriterWriteNs0NodesType(writer, _nodes);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write type for start element {}nodes. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  status = xmlTextWriterEndElement(writer);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to end element {}nodes. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  return totalBytes;
}

/**
 * Frees the children of a Nodes.
 *
 * @param _nodes The Nodes whose children are to be free.
 */
static void freeNs0NodesElement(struct full_ns0_nodes *_nodes) {
  freeNs0NodesType(_nodes);
}

/**
 * Reads a Nodes from XML. The reader is assumed to be at the start element.
 *
 * @return the Nodes, or NULL in case of error.
 */
static struct full_ns0_nodes *xmlTextReaderReadNs0NodesType(xmlTextReaderPtr reader) {
  int status, depth;
  void *_child_accessor;
  struct full_ns0_nodes *_nodes = calloc(1, sizeof(struct full_ns0_nodes));



  if (xmlTextReaderIsEmptyElement(reader) == 0) {
    depth = xmlTextReaderDepth(reader);//track the depth.
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);

    while (xmlTextReaderDepth(reader) > depth) {
      if (status < 1) {
        //panic: XML read error.
#if DEBUG_ENUNCIATE
        printf("Failure to advance to next child element.\n");
#endif
        freeNs0NodesType(_nodes);
        free(_nodes);
        return NULL;
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "nodeProperties", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}nodeProperties of type {}nodeProperties.\n");
#endif
        _child_accessor = xmlTextReaderReadNs0NodePropertiesType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}nodeProperties of type {}nodeProperties.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0NodesType(_nodes);
          free(_nodes);
          return NULL;
        }

        _nodes->nodeProperties = realloc(_nodes->nodeProperties, (_nodes->_sizeof_nodeProperties + 1) * sizeof(struct full_ns0_nodeProperties));
        memcpy(&(_nodes->nodeProperties[_nodes->_sizeof_nodeProperties++]), _child_accessor, sizeof(struct full_ns0_nodeProperties));
        free(_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else {
#if DEBUG_ENUNCIATE > 1
        if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
          printf("unknown child element {}%s for type {}nodes.  Skipping...\n",  xmlTextReaderConstLocalName(reader));
        }
        else {
          printf("unknown child element {%s}%s for type {}nodes. Skipping...\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
        }
#endif
        status = xmlTextReaderSkipElement(reader);
      }
    }
  }

  return _nodes;
}

/**
 * Writes a Nodes to XML.
 *
 * @param writer The XML writer.
 * @param _nodes The Nodes to write.
 * @return The total bytes written, or -1 on error;
 */
static int xmlTextWriterWriteNs0NodesType(xmlTextWriterPtr writer, struct full_ns0_nodes *_nodes) {
  int status, totalBytes = 0, i;
  xmlChar *binaryData;
  for (i = 0; i < _nodes->_sizeof_nodeProperties; i++) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "nodeProperties", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}nodeProperties. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {}nodeProperties for element {}nodeProperties...\n");
#endif
    status = xmlTextWriterWriteNs0NodePropertiesType(writer, &(_nodes->nodeProperties[i]));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {}nodeProperties for element {}nodeProperties. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}nodeProperties. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }

  return totalBytes;
}

/**
 * Frees the elements of a Nodes.
 *
 * @param _nodes The Nodes to free.
 */
static void freeNs0NodesType(struct full_ns0_nodes *_nodes) {
  int i;
  if (_nodes->nodeProperties != NULL) {
    for (i = 0; i < _nodes->_sizeof_nodeProperties; i++) {
#if DEBUG_ENUNCIATE > 1
      printf("Freeing accessor nodeProperties[%i] of type full_ns0_nodes...\n", i);
#endif
      freeNs0NodePropertiesType(&(_nodes->nodeProperties[i]));
    }
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor nodeProperties of type full_ns0_nodes...\n");
#endif
    free(_nodes->nodeProperties);
  }
}
#endif /* DEF_full_ns0_nodes_M */
