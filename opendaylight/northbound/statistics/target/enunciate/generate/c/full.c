#include <enunciate-common.c>
#ifndef DEF_full_ns0_controller_H
#define DEF_full_ns0_controller_H

/**
 * (no documentation provided)
 */
struct full_ns0_controller {

};

/**
 * Reads a Controller element from XML. The element to be read is "controller", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The Controller, or NULL in case of error.
 */
struct full_ns0_controller *xml_read_full_ns0_controller(xmlTextReaderPtr reader);

/**
 * Writes a Controller to XML under element name "controller".
 *
 * @param writer The XML writer.
 * @param _controller The Controller to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
int xml_write_full_ns0_controller(xmlTextWriterPtr writer, struct full_ns0_controller *_controller);

/**
 * Frees a Controller.
 *
 * @param _controller The Controller to free.
 */
void free_full_ns0_controller(struct full_ns0_controller *_controller);

/**
 * Reads a Controller element from XML. The element to be read is "controller", and
 * it is assumed that the reader is already pointing to the element.
 *
 * @param reader The XML reader.
 * @return The Controller, or NULL in case of error.
 */
struct full_ns0_controller *xmlTextReaderReadNs0ControllerElement(xmlTextReaderPtr reader);

/**
 * Writes a Controller to XML under element name "controller".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _controller The Controller to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0ControllerElement(xmlTextWriterPtr writer, struct full_ns0_controller *_controller);

/**
 * Writes a Controller to XML under element name "controller".
 *
 * @param writer The XML writer.
 * @param _controller The Controller to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0ControllerElementNS(xmlTextWriterPtr writer, struct full_ns0_controller *_controller, int writeNamespaces);

/**
 * Frees the children of a Controller.
 *
 * @param _controller The Controller whose children are to be free.
 */
static void freeNs0ControllerElement(struct full_ns0_controller *_controller);

/**
 * Reads a Controller from XML. The reader is assumed to be at the start element.
 *
 * @param reader The XML reader.
 * @return The Controller, or NULL in case of error.
 */
static struct full_ns0_controller *xmlTextReaderReadNs0ControllerType(xmlTextReaderPtr reader);

/**
 * Writes a Controller to XML.
 *
 * @param writer The XML writer.
 * @param _controller The Controller to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0ControllerType(xmlTextWriterPtr writer, struct full_ns0_controller *_controller);

/**
 * Frees the elements of a Controller.
 *
 * @param _controller The Controller to free.
 */
static void freeNs0ControllerType(struct full_ns0_controller *_controller);

#endif /* DEF_full_ns0_controller_H */
#ifndef DEF_full_ns0_drop_H
#define DEF_full_ns0_drop_H

/**
 * (no documentation provided)
 */
struct full_ns0_drop {

};

/**
 * Reads a Drop element from XML. The element to be read is "drop", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The Drop, or NULL in case of error.
 */
struct full_ns0_drop *xml_read_full_ns0_drop(xmlTextReaderPtr reader);

/**
 * Writes a Drop to XML under element name "drop".
 *
 * @param writer The XML writer.
 * @param _drop The Drop to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
int xml_write_full_ns0_drop(xmlTextWriterPtr writer, struct full_ns0_drop *_drop);

/**
 * Frees a Drop.
 *
 * @param _drop The Drop to free.
 */
void free_full_ns0_drop(struct full_ns0_drop *_drop);

/**
 * Reads a Drop element from XML. The element to be read is "drop", and
 * it is assumed that the reader is already pointing to the element.
 *
 * @param reader The XML reader.
 * @return The Drop, or NULL in case of error.
 */
struct full_ns0_drop *xmlTextReaderReadNs0DropElement(xmlTextReaderPtr reader);

/**
 * Writes a Drop to XML under element name "drop".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _drop The Drop to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0DropElement(xmlTextWriterPtr writer, struct full_ns0_drop *_drop);

/**
 * Writes a Drop to XML under element name "drop".
 *
 * @param writer The XML writer.
 * @param _drop The Drop to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0DropElementNS(xmlTextWriterPtr writer, struct full_ns0_drop *_drop, int writeNamespaces);

/**
 * Frees the children of a Drop.
 *
 * @param _drop The Drop whose children are to be free.
 */
static void freeNs0DropElement(struct full_ns0_drop *_drop);

/**
 * Reads a Drop from XML. The reader is assumed to be at the start element.
 *
 * @param reader The XML reader.
 * @return The Drop, or NULL in case of error.
 */
static struct full_ns0_drop *xmlTextReaderReadNs0DropType(xmlTextReaderPtr reader);

/**
 * Writes a Drop to XML.
 *
 * @param writer The XML writer.
 * @param _drop The Drop to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0DropType(xmlTextWriterPtr writer, struct full_ns0_drop *_drop);

/**
 * Frees the elements of a Drop.
 *
 * @param _drop The Drop to free.
 */
static void freeNs0DropType(struct full_ns0_drop *_drop);

#endif /* DEF_full_ns0_drop_H */
#ifndef DEF_full_ns0_flood_H
#define DEF_full_ns0_flood_H

/**
 * (no documentation provided)
 */
struct full_ns0_flood {

};

/**
 * Reads a Flood element from XML. The element to be read is "flood", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The Flood, or NULL in case of error.
 */
struct full_ns0_flood *xml_read_full_ns0_flood(xmlTextReaderPtr reader);

/**
 * Writes a Flood to XML under element name "flood".
 *
 * @param writer The XML writer.
 * @param _flood The Flood to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
int xml_write_full_ns0_flood(xmlTextWriterPtr writer, struct full_ns0_flood *_flood);

/**
 * Frees a Flood.
 *
 * @param _flood The Flood to free.
 */
void free_full_ns0_flood(struct full_ns0_flood *_flood);

/**
 * Reads a Flood element from XML. The element to be read is "flood", and
 * it is assumed that the reader is already pointing to the element.
 *
 * @param reader The XML reader.
 * @return The Flood, or NULL in case of error.
 */
struct full_ns0_flood *xmlTextReaderReadNs0FloodElement(xmlTextReaderPtr reader);

/**
 * Writes a Flood to XML under element name "flood".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _flood The Flood to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0FloodElement(xmlTextWriterPtr writer, struct full_ns0_flood *_flood);

/**
 * Writes a Flood to XML under element name "flood".
 *
 * @param writer The XML writer.
 * @param _flood The Flood to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0FloodElementNS(xmlTextWriterPtr writer, struct full_ns0_flood *_flood, int writeNamespaces);

/**
 * Frees the children of a Flood.
 *
 * @param _flood The Flood whose children are to be free.
 */
static void freeNs0FloodElement(struct full_ns0_flood *_flood);

/**
 * Reads a Flood from XML. The reader is assumed to be at the start element.
 *
 * @param reader The XML reader.
 * @return The Flood, or NULL in case of error.
 */
static struct full_ns0_flood *xmlTextReaderReadNs0FloodType(xmlTextReaderPtr reader);

/**
 * Writes a Flood to XML.
 *
 * @param writer The XML writer.
 * @param _flood The Flood to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0FloodType(xmlTextWriterPtr writer, struct full_ns0_flood *_flood);

/**
 * Frees the elements of a Flood.
 *
 * @param _flood The Flood to free.
 */
static void freeNs0FloodType(struct full_ns0_flood *_flood);

#endif /* DEF_full_ns0_flood_H */
#ifndef DEF_full_ns0_floodAll_H
#define DEF_full_ns0_floodAll_H

/**
 * (no documentation provided)
 */
struct full_ns0_floodAll {

};

/**
 * Reads a FloodAll element from XML. The element to be read is "floodAll", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The FloodAll, or NULL in case of error.
 */
struct full_ns0_floodAll *xml_read_full_ns0_floodAll(xmlTextReaderPtr reader);

/**
 * Writes a FloodAll to XML under element name "floodAll".
 *
 * @param writer The XML writer.
 * @param _floodAll The FloodAll to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
int xml_write_full_ns0_floodAll(xmlTextWriterPtr writer, struct full_ns0_floodAll *_floodAll);

/**
 * Frees a FloodAll.
 *
 * @param _floodAll The FloodAll to free.
 */
void free_full_ns0_floodAll(struct full_ns0_floodAll *_floodAll);

/**
 * Reads a FloodAll element from XML. The element to be read is "floodAll", and
 * it is assumed that the reader is already pointing to the element.
 *
 * @param reader The XML reader.
 * @return The FloodAll, or NULL in case of error.
 */
struct full_ns0_floodAll *xmlTextReaderReadNs0FloodAllElement(xmlTextReaderPtr reader);

/**
 * Writes a FloodAll to XML under element name "floodAll".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _floodAll The FloodAll to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0FloodAllElement(xmlTextWriterPtr writer, struct full_ns0_floodAll *_floodAll);

/**
 * Writes a FloodAll to XML under element name "floodAll".
 *
 * @param writer The XML writer.
 * @param _floodAll The FloodAll to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0FloodAllElementNS(xmlTextWriterPtr writer, struct full_ns0_floodAll *_floodAll, int writeNamespaces);

/**
 * Frees the children of a FloodAll.
 *
 * @param _floodAll The FloodAll whose children are to be free.
 */
static void freeNs0FloodAllElement(struct full_ns0_floodAll *_floodAll);

/**
 * Reads a FloodAll from XML. The reader is assumed to be at the start element.
 *
 * @param reader The XML reader.
 * @return The FloodAll, or NULL in case of error.
 */
static struct full_ns0_floodAll *xmlTextReaderReadNs0FloodAllType(xmlTextReaderPtr reader);

/**
 * Writes a FloodAll to XML.
 *
 * @param writer The XML writer.
 * @param _floodAll The FloodAll to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0FloodAllType(xmlTextWriterPtr writer, struct full_ns0_floodAll *_floodAll);

/**
 * Frees the elements of a FloodAll.
 *
 * @param _floodAll The FloodAll to free.
 */
static void freeNs0FloodAllType(struct full_ns0_floodAll *_floodAll);

#endif /* DEF_full_ns0_floodAll_H */
#ifndef DEF_full_ns0_hwPath_H
#define DEF_full_ns0_hwPath_H

/**
 * (no documentation provided)
 */
struct full_ns0_hwPath {

};

/**
 * Reads a HwPath element from XML. The element to be read is "hwPath", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The HwPath, or NULL in case of error.
 */
struct full_ns0_hwPath *xml_read_full_ns0_hwPath(xmlTextReaderPtr reader);

/**
 * Writes a HwPath to XML under element name "hwPath".
 *
 * @param writer The XML writer.
 * @param _hwPath The HwPath to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
int xml_write_full_ns0_hwPath(xmlTextWriterPtr writer, struct full_ns0_hwPath *_hwPath);

/**
 * Frees a HwPath.
 *
 * @param _hwPath The HwPath to free.
 */
void free_full_ns0_hwPath(struct full_ns0_hwPath *_hwPath);

/**
 * Reads a HwPath element from XML. The element to be read is "hwPath", and
 * it is assumed that the reader is already pointing to the element.
 *
 * @param reader The XML reader.
 * @return The HwPath, or NULL in case of error.
 */
struct full_ns0_hwPath *xmlTextReaderReadNs0HwPathElement(xmlTextReaderPtr reader);

/**
 * Writes a HwPath to XML under element name "hwPath".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _hwPath The HwPath to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0HwPathElement(xmlTextWriterPtr writer, struct full_ns0_hwPath *_hwPath);

/**
 * Writes a HwPath to XML under element name "hwPath".
 *
 * @param writer The XML writer.
 * @param _hwPath The HwPath to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0HwPathElementNS(xmlTextWriterPtr writer, struct full_ns0_hwPath *_hwPath, int writeNamespaces);

/**
 * Frees the children of a HwPath.
 *
 * @param _hwPath The HwPath whose children are to be free.
 */
static void freeNs0HwPathElement(struct full_ns0_hwPath *_hwPath);

/**
 * Reads a HwPath from XML. The reader is assumed to be at the start element.
 *
 * @param reader The XML reader.
 * @return The HwPath, or NULL in case of error.
 */
static struct full_ns0_hwPath *xmlTextReaderReadNs0HwPathType(xmlTextReaderPtr reader);

/**
 * Writes a HwPath to XML.
 *
 * @param writer The XML writer.
 * @param _hwPath The HwPath to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0HwPathType(xmlTextWriterPtr writer, struct full_ns0_hwPath *_hwPath);

/**
 * Frees the elements of a HwPath.
 *
 * @param _hwPath The HwPath to free.
 */
static void freeNs0HwPathType(struct full_ns0_hwPath *_hwPath);

#endif /* DEF_full_ns0_hwPath_H */
#ifndef DEF_full_ns0_loopback_H
#define DEF_full_ns0_loopback_H

/**
 * (no documentation provided)
 */
struct full_ns0_loopback {

};

/**
 * Reads a Loopback element from XML. The element to be read is "loopback", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The Loopback, or NULL in case of error.
 */
struct full_ns0_loopback *xml_read_full_ns0_loopback(xmlTextReaderPtr reader);

/**
 * Writes a Loopback to XML under element name "loopback".
 *
 * @param writer The XML writer.
 * @param _loopback The Loopback to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
int xml_write_full_ns0_loopback(xmlTextWriterPtr writer, struct full_ns0_loopback *_loopback);

/**
 * Frees a Loopback.
 *
 * @param _loopback The Loopback to free.
 */
void free_full_ns0_loopback(struct full_ns0_loopback *_loopback);

/**
 * Reads a Loopback element from XML. The element to be read is "loopback", and
 * it is assumed that the reader is already pointing to the element.
 *
 * @param reader The XML reader.
 * @return The Loopback, or NULL in case of error.
 */
struct full_ns0_loopback *xmlTextReaderReadNs0LoopbackElement(xmlTextReaderPtr reader);

/**
 * Writes a Loopback to XML under element name "loopback".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _loopback The Loopback to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0LoopbackElement(xmlTextWriterPtr writer, struct full_ns0_loopback *_loopback);

/**
 * Writes a Loopback to XML under element name "loopback".
 *
 * @param writer The XML writer.
 * @param _loopback The Loopback to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0LoopbackElementNS(xmlTextWriterPtr writer, struct full_ns0_loopback *_loopback, int writeNamespaces);

/**
 * Frees the children of a Loopback.
 *
 * @param _loopback The Loopback whose children are to be free.
 */
static void freeNs0LoopbackElement(struct full_ns0_loopback *_loopback);

/**
 * Reads a Loopback from XML. The reader is assumed to be at the start element.
 *
 * @param reader The XML reader.
 * @return The Loopback, or NULL in case of error.
 */
static struct full_ns0_loopback *xmlTextReaderReadNs0LoopbackType(xmlTextReaderPtr reader);

/**
 * Writes a Loopback to XML.
 *
 * @param writer The XML writer.
 * @param _loopback The Loopback to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0LoopbackType(xmlTextWriterPtr writer, struct full_ns0_loopback *_loopback);

/**
 * Frees the elements of a Loopback.
 *
 * @param _loopback The Loopback to free.
 */
static void freeNs0LoopbackType(struct full_ns0_loopback *_loopback);

#endif /* DEF_full_ns0_loopback_H */
#ifndef DEF_full_ns0_output_H
#define DEF_full_ns0_output_H

/**
 * (no documentation provided)
 */
struct full_ns0_output {


  /**
   * (no documentation provided)
   */
  struct full_ns0_nodeConnector *port;
};

/**
 * Reads a Output element from XML. The element to be read is "output", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The Output, or NULL in case of error.
 */
struct full_ns0_output *xml_read_full_ns0_output(xmlTextReaderPtr reader);

/**
 * Writes a Output to XML under element name "output".
 *
 * @param writer The XML writer.
 * @param _output The Output to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
int xml_write_full_ns0_output(xmlTextWriterPtr writer, struct full_ns0_output *_output);

/**
 * Frees a Output.
 *
 * @param _output The Output to free.
 */
void free_full_ns0_output(struct full_ns0_output *_output);

/**
 * Reads a Output element from XML. The element to be read is "output", and
 * it is assumed that the reader is already pointing to the element.
 *
 * @param reader The XML reader.
 * @return The Output, or NULL in case of error.
 */
struct full_ns0_output *xmlTextReaderReadNs0OutputElement(xmlTextReaderPtr reader);

/**
 * Writes a Output to XML under element name "output".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _output The Output to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0OutputElement(xmlTextWriterPtr writer, struct full_ns0_output *_output);

/**
 * Writes a Output to XML under element name "output".
 *
 * @param writer The XML writer.
 * @param _output The Output to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0OutputElementNS(xmlTextWriterPtr writer, struct full_ns0_output *_output, int writeNamespaces);

/**
 * Frees the children of a Output.
 *
 * @param _output The Output whose children are to be free.
 */
static void freeNs0OutputElement(struct full_ns0_output *_output);

/**
 * Reads a Output from XML. The reader is assumed to be at the start element.
 *
 * @param reader The XML reader.
 * @return The Output, or NULL in case of error.
 */
static struct full_ns0_output *xmlTextReaderReadNs0OutputType(xmlTextReaderPtr reader);

/**
 * Writes a Output to XML.
 *
 * @param writer The XML writer.
 * @param _output The Output to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0OutputType(xmlTextWriterPtr writer, struct full_ns0_output *_output);

/**
 * Frees the elements of a Output.
 *
 * @param _output The Output to free.
 */
static void freeNs0OutputType(struct full_ns0_output *_output);

#endif /* DEF_full_ns0_output_H */
#ifndef DEF_full_ns0_popVlan_H
#define DEF_full_ns0_popVlan_H

/**
 * (no documentation provided)
 */
struct full_ns0_popVlan {

};

/**
 * Reads a PopVlan element from XML. The element to be read is "popVlan", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The PopVlan, or NULL in case of error.
 */
struct full_ns0_popVlan *xml_read_full_ns0_popVlan(xmlTextReaderPtr reader);

/**
 * Writes a PopVlan to XML under element name "popVlan".
 *
 * @param writer The XML writer.
 * @param _popVlan The PopVlan to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
int xml_write_full_ns0_popVlan(xmlTextWriterPtr writer, struct full_ns0_popVlan *_popVlan);

/**
 * Frees a PopVlan.
 *
 * @param _popVlan The PopVlan to free.
 */
void free_full_ns0_popVlan(struct full_ns0_popVlan *_popVlan);

/**
 * Reads a PopVlan element from XML. The element to be read is "popVlan", and
 * it is assumed that the reader is already pointing to the element.
 *
 * @param reader The XML reader.
 * @return The PopVlan, or NULL in case of error.
 */
struct full_ns0_popVlan *xmlTextReaderReadNs0PopVlanElement(xmlTextReaderPtr reader);

/**
 * Writes a PopVlan to XML under element name "popVlan".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _popVlan The PopVlan to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0PopVlanElement(xmlTextWriterPtr writer, struct full_ns0_popVlan *_popVlan);

/**
 * Writes a PopVlan to XML under element name "popVlan".
 *
 * @param writer The XML writer.
 * @param _popVlan The PopVlan to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0PopVlanElementNS(xmlTextWriterPtr writer, struct full_ns0_popVlan *_popVlan, int writeNamespaces);

/**
 * Frees the children of a PopVlan.
 *
 * @param _popVlan The PopVlan whose children are to be free.
 */
static void freeNs0PopVlanElement(struct full_ns0_popVlan *_popVlan);

/**
 * Reads a PopVlan from XML. The reader is assumed to be at the start element.
 *
 * @param reader The XML reader.
 * @return The PopVlan, or NULL in case of error.
 */
static struct full_ns0_popVlan *xmlTextReaderReadNs0PopVlanType(xmlTextReaderPtr reader);

/**
 * Writes a PopVlan to XML.
 *
 * @param writer The XML writer.
 * @param _popVlan The PopVlan to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0PopVlanType(xmlTextWriterPtr writer, struct full_ns0_popVlan *_popVlan);

/**
 * Frees the elements of a PopVlan.
 *
 * @param _popVlan The PopVlan to free.
 */
static void freeNs0PopVlanType(struct full_ns0_popVlan *_popVlan);

#endif /* DEF_full_ns0_popVlan_H */
#ifndef DEF_full_ns0_pushVlan_H
#define DEF_full_ns0_pushVlan_H

/**
 * (no documentation provided)
 */
struct full_ns0_pushVlan {


  /**
   * (no documentation provided)
   */
  int header;
};

/**
 * Reads a PushVlan element from XML. The element to be read is "pushVlan", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The PushVlan, or NULL in case of error.
 */
struct full_ns0_pushVlan *xml_read_full_ns0_pushVlan(xmlTextReaderPtr reader);

/**
 * Writes a PushVlan to XML under element name "pushVlan".
 *
 * @param writer The XML writer.
 * @param _pushVlan The PushVlan to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
int xml_write_full_ns0_pushVlan(xmlTextWriterPtr writer, struct full_ns0_pushVlan *_pushVlan);

/**
 * Frees a PushVlan.
 *
 * @param _pushVlan The PushVlan to free.
 */
void free_full_ns0_pushVlan(struct full_ns0_pushVlan *_pushVlan);

/**
 * Reads a PushVlan element from XML. The element to be read is "pushVlan", and
 * it is assumed that the reader is already pointing to the element.
 *
 * @param reader The XML reader.
 * @return The PushVlan, or NULL in case of error.
 */
struct full_ns0_pushVlan *xmlTextReaderReadNs0PushVlanElement(xmlTextReaderPtr reader);

/**
 * Writes a PushVlan to XML under element name "pushVlan".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _pushVlan The PushVlan to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0PushVlanElement(xmlTextWriterPtr writer, struct full_ns0_pushVlan *_pushVlan);

/**
 * Writes a PushVlan to XML under element name "pushVlan".
 *
 * @param writer The XML writer.
 * @param _pushVlan The PushVlan to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0PushVlanElementNS(xmlTextWriterPtr writer, struct full_ns0_pushVlan *_pushVlan, int writeNamespaces);

/**
 * Frees the children of a PushVlan.
 *
 * @param _pushVlan The PushVlan whose children are to be free.
 */
static void freeNs0PushVlanElement(struct full_ns0_pushVlan *_pushVlan);

/**
 * Reads a PushVlan from XML. The reader is assumed to be at the start element.
 *
 * @param reader The XML reader.
 * @return The PushVlan, or NULL in case of error.
 */
static struct full_ns0_pushVlan *xmlTextReaderReadNs0PushVlanType(xmlTextReaderPtr reader);

/**
 * Writes a PushVlan to XML.
 *
 * @param writer The XML writer.
 * @param _pushVlan The PushVlan to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0PushVlanType(xmlTextWriterPtr writer, struct full_ns0_pushVlan *_pushVlan);

/**
 * Frees the elements of a PushVlan.
 *
 * @param _pushVlan The PushVlan to free.
 */
static void freeNs0PushVlanType(struct full_ns0_pushVlan *_pushVlan);

#endif /* DEF_full_ns0_pushVlan_H */
#ifndef DEF_full_ns0_setDlDst_H
#define DEF_full_ns0_setDlDst_H

/**
 * (no documentation provided)
 */
struct full_ns0_setDlDst {


  /**
   * (no documentation provided)
   */
  xmlChar *dlAddressString;
};

/**
 * Reads a SetDlDst element from XML. The element to be read is "setDlDst", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The SetDlDst, or NULL in case of error.
 */
struct full_ns0_setDlDst *xml_read_full_ns0_setDlDst(xmlTextReaderPtr reader);

/**
 * Writes a SetDlDst to XML under element name "setDlDst".
 *
 * @param writer The XML writer.
 * @param _setDlDst The SetDlDst to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
int xml_write_full_ns0_setDlDst(xmlTextWriterPtr writer, struct full_ns0_setDlDst *_setDlDst);

/**
 * Frees a SetDlDst.
 *
 * @param _setDlDst The SetDlDst to free.
 */
void free_full_ns0_setDlDst(struct full_ns0_setDlDst *_setDlDst);

/**
 * Reads a SetDlDst element from XML. The element to be read is "setDlDst", and
 * it is assumed that the reader is already pointing to the element.
 *
 * @param reader The XML reader.
 * @return The SetDlDst, or NULL in case of error.
 */
struct full_ns0_setDlDst *xmlTextReaderReadNs0SetDlDstElement(xmlTextReaderPtr reader);

/**
 * Writes a SetDlDst to XML under element name "setDlDst".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _setDlDst The SetDlDst to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0SetDlDstElement(xmlTextWriterPtr writer, struct full_ns0_setDlDst *_setDlDst);

/**
 * Writes a SetDlDst to XML under element name "setDlDst".
 *
 * @param writer The XML writer.
 * @param _setDlDst The SetDlDst to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0SetDlDstElementNS(xmlTextWriterPtr writer, struct full_ns0_setDlDst *_setDlDst, int writeNamespaces);

/**
 * Frees the children of a SetDlDst.
 *
 * @param _setDlDst The SetDlDst whose children are to be free.
 */
static void freeNs0SetDlDstElement(struct full_ns0_setDlDst *_setDlDst);

/**
 * Reads a SetDlDst from XML. The reader is assumed to be at the start element.
 *
 * @param reader The XML reader.
 * @return The SetDlDst, or NULL in case of error.
 */
static struct full_ns0_setDlDst *xmlTextReaderReadNs0SetDlDstType(xmlTextReaderPtr reader);

/**
 * Writes a SetDlDst to XML.
 *
 * @param writer The XML writer.
 * @param _setDlDst The SetDlDst to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0SetDlDstType(xmlTextWriterPtr writer, struct full_ns0_setDlDst *_setDlDst);

/**
 * Frees the elements of a SetDlDst.
 *
 * @param _setDlDst The SetDlDst to free.
 */
static void freeNs0SetDlDstType(struct full_ns0_setDlDst *_setDlDst);

#endif /* DEF_full_ns0_setDlDst_H */
#ifndef DEF_full_ns0_setDlSrc_H
#define DEF_full_ns0_setDlSrc_H

/**
 * (no documentation provided)
 */
struct full_ns0_setDlSrc {


  /**
   * (no documentation provided)
   */
  xmlChar *dlAddressString;
};

/**
 * Reads a SetDlSrc element from XML. The element to be read is "setDlSrc", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The SetDlSrc, or NULL in case of error.
 */
struct full_ns0_setDlSrc *xml_read_full_ns0_setDlSrc(xmlTextReaderPtr reader);

/**
 * Writes a SetDlSrc to XML under element name "setDlSrc".
 *
 * @param writer The XML writer.
 * @param _setDlSrc The SetDlSrc to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
int xml_write_full_ns0_setDlSrc(xmlTextWriterPtr writer, struct full_ns0_setDlSrc *_setDlSrc);

/**
 * Frees a SetDlSrc.
 *
 * @param _setDlSrc The SetDlSrc to free.
 */
void free_full_ns0_setDlSrc(struct full_ns0_setDlSrc *_setDlSrc);

/**
 * Reads a SetDlSrc element from XML. The element to be read is "setDlSrc", and
 * it is assumed that the reader is already pointing to the element.
 *
 * @param reader The XML reader.
 * @return The SetDlSrc, or NULL in case of error.
 */
struct full_ns0_setDlSrc *xmlTextReaderReadNs0SetDlSrcElement(xmlTextReaderPtr reader);

/**
 * Writes a SetDlSrc to XML under element name "setDlSrc".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _setDlSrc The SetDlSrc to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0SetDlSrcElement(xmlTextWriterPtr writer, struct full_ns0_setDlSrc *_setDlSrc);

/**
 * Writes a SetDlSrc to XML under element name "setDlSrc".
 *
 * @param writer The XML writer.
 * @param _setDlSrc The SetDlSrc to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0SetDlSrcElementNS(xmlTextWriterPtr writer, struct full_ns0_setDlSrc *_setDlSrc, int writeNamespaces);

/**
 * Frees the children of a SetDlSrc.
 *
 * @param _setDlSrc The SetDlSrc whose children are to be free.
 */
static void freeNs0SetDlSrcElement(struct full_ns0_setDlSrc *_setDlSrc);

/**
 * Reads a SetDlSrc from XML. The reader is assumed to be at the start element.
 *
 * @param reader The XML reader.
 * @return The SetDlSrc, or NULL in case of error.
 */
static struct full_ns0_setDlSrc *xmlTextReaderReadNs0SetDlSrcType(xmlTextReaderPtr reader);

/**
 * Writes a SetDlSrc to XML.
 *
 * @param writer The XML writer.
 * @param _setDlSrc The SetDlSrc to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0SetDlSrcType(xmlTextWriterPtr writer, struct full_ns0_setDlSrc *_setDlSrc);

/**
 * Frees the elements of a SetDlSrc.
 *
 * @param _setDlSrc The SetDlSrc to free.
 */
static void freeNs0SetDlSrcType(struct full_ns0_setDlSrc *_setDlSrc);

#endif /* DEF_full_ns0_setDlSrc_H */
#ifndef DEF_full_ns0_setDlType_H
#define DEF_full_ns0_setDlType_H

/**
 * (no documentation provided)
 */
struct full_ns0_setDlType {


  /**
   * (no documentation provided)
   */
  int dlType;
};

/**
 * Reads a SetDlType element from XML. The element to be read is "setDlType", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The SetDlType, or NULL in case of error.
 */
struct full_ns0_setDlType *xml_read_full_ns0_setDlType(xmlTextReaderPtr reader);

/**
 * Writes a SetDlType to XML under element name "setDlType".
 *
 * @param writer The XML writer.
 * @param _setDlType The SetDlType to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
int xml_write_full_ns0_setDlType(xmlTextWriterPtr writer, struct full_ns0_setDlType *_setDlType);

/**
 * Frees a SetDlType.
 *
 * @param _setDlType The SetDlType to free.
 */
void free_full_ns0_setDlType(struct full_ns0_setDlType *_setDlType);

/**
 * Reads a SetDlType element from XML. The element to be read is "setDlType", and
 * it is assumed that the reader is already pointing to the element.
 *
 * @param reader The XML reader.
 * @return The SetDlType, or NULL in case of error.
 */
struct full_ns0_setDlType *xmlTextReaderReadNs0SetDlTypeElement(xmlTextReaderPtr reader);

/**
 * Writes a SetDlType to XML under element name "setDlType".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _setDlType The SetDlType to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0SetDlTypeElement(xmlTextWriterPtr writer, struct full_ns0_setDlType *_setDlType);

/**
 * Writes a SetDlType to XML under element name "setDlType".
 *
 * @param writer The XML writer.
 * @param _setDlType The SetDlType to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0SetDlTypeElementNS(xmlTextWriterPtr writer, struct full_ns0_setDlType *_setDlType, int writeNamespaces);

/**
 * Frees the children of a SetDlType.
 *
 * @param _setDlType The SetDlType whose children are to be free.
 */
static void freeNs0SetDlTypeElement(struct full_ns0_setDlType *_setDlType);

/**
 * Reads a SetDlType from XML. The reader is assumed to be at the start element.
 *
 * @param reader The XML reader.
 * @return The SetDlType, or NULL in case of error.
 */
static struct full_ns0_setDlType *xmlTextReaderReadNs0SetDlTypeType(xmlTextReaderPtr reader);

/**
 * Writes a SetDlType to XML.
 *
 * @param writer The XML writer.
 * @param _setDlType The SetDlType to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0SetDlTypeType(xmlTextWriterPtr writer, struct full_ns0_setDlType *_setDlType);

/**
 * Frees the elements of a SetDlType.
 *
 * @param _setDlType The SetDlType to free.
 */
static void freeNs0SetDlTypeType(struct full_ns0_setDlType *_setDlType);

#endif /* DEF_full_ns0_setDlType_H */
#ifndef DEF_full_ns0_setNwDst_H
#define DEF_full_ns0_setNwDst_H

/**
 * (no documentation provided)
 */
struct full_ns0_setNwDst {


  /**
   * (no documentation provided)
   */
  xmlChar *addressAsString;
};

/**
 * Reads a SetNwDst element from XML. The element to be read is "setNwDst", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The SetNwDst, or NULL in case of error.
 */
struct full_ns0_setNwDst *xml_read_full_ns0_setNwDst(xmlTextReaderPtr reader);

/**
 * Writes a SetNwDst to XML under element name "setNwDst".
 *
 * @param writer The XML writer.
 * @param _setNwDst The SetNwDst to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
int xml_write_full_ns0_setNwDst(xmlTextWriterPtr writer, struct full_ns0_setNwDst *_setNwDst);

/**
 * Frees a SetNwDst.
 *
 * @param _setNwDst The SetNwDst to free.
 */
void free_full_ns0_setNwDst(struct full_ns0_setNwDst *_setNwDst);

/**
 * Reads a SetNwDst element from XML. The element to be read is "setNwDst", and
 * it is assumed that the reader is already pointing to the element.
 *
 * @param reader The XML reader.
 * @return The SetNwDst, or NULL in case of error.
 */
struct full_ns0_setNwDst *xmlTextReaderReadNs0SetNwDstElement(xmlTextReaderPtr reader);

/**
 * Writes a SetNwDst to XML under element name "setNwDst".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _setNwDst The SetNwDst to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0SetNwDstElement(xmlTextWriterPtr writer, struct full_ns0_setNwDst *_setNwDst);

/**
 * Writes a SetNwDst to XML under element name "setNwDst".
 *
 * @param writer The XML writer.
 * @param _setNwDst The SetNwDst to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0SetNwDstElementNS(xmlTextWriterPtr writer, struct full_ns0_setNwDst *_setNwDst, int writeNamespaces);

/**
 * Frees the children of a SetNwDst.
 *
 * @param _setNwDst The SetNwDst whose children are to be free.
 */
static void freeNs0SetNwDstElement(struct full_ns0_setNwDst *_setNwDst);

/**
 * Reads a SetNwDst from XML. The reader is assumed to be at the start element.
 *
 * @param reader The XML reader.
 * @return The SetNwDst, or NULL in case of error.
 */
static struct full_ns0_setNwDst *xmlTextReaderReadNs0SetNwDstType(xmlTextReaderPtr reader);

/**
 * Writes a SetNwDst to XML.
 *
 * @param writer The XML writer.
 * @param _setNwDst The SetNwDst to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0SetNwDstType(xmlTextWriterPtr writer, struct full_ns0_setNwDst *_setNwDst);

/**
 * Frees the elements of a SetNwDst.
 *
 * @param _setNwDst The SetNwDst to free.
 */
static void freeNs0SetNwDstType(struct full_ns0_setNwDst *_setNwDst);

#endif /* DEF_full_ns0_setNwDst_H */
#ifndef DEF_full_ns0_setNwSrc_H
#define DEF_full_ns0_setNwSrc_H

/**
 * (no documentation provided)
 */
struct full_ns0_setNwSrc {


  /**
   * (no documentation provided)
   */
  xmlChar *addressAsString;
};

/**
 * Reads a SetNwSrc element from XML. The element to be read is "setNwSrc", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The SetNwSrc, or NULL in case of error.
 */
struct full_ns0_setNwSrc *xml_read_full_ns0_setNwSrc(xmlTextReaderPtr reader);

/**
 * Writes a SetNwSrc to XML under element name "setNwSrc".
 *
 * @param writer The XML writer.
 * @param _setNwSrc The SetNwSrc to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
int xml_write_full_ns0_setNwSrc(xmlTextWriterPtr writer, struct full_ns0_setNwSrc *_setNwSrc);

/**
 * Frees a SetNwSrc.
 *
 * @param _setNwSrc The SetNwSrc to free.
 */
void free_full_ns0_setNwSrc(struct full_ns0_setNwSrc *_setNwSrc);

/**
 * Reads a SetNwSrc element from XML. The element to be read is "setNwSrc", and
 * it is assumed that the reader is already pointing to the element.
 *
 * @param reader The XML reader.
 * @return The SetNwSrc, or NULL in case of error.
 */
struct full_ns0_setNwSrc *xmlTextReaderReadNs0SetNwSrcElement(xmlTextReaderPtr reader);

/**
 * Writes a SetNwSrc to XML under element name "setNwSrc".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _setNwSrc The SetNwSrc to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0SetNwSrcElement(xmlTextWriterPtr writer, struct full_ns0_setNwSrc *_setNwSrc);

/**
 * Writes a SetNwSrc to XML under element name "setNwSrc".
 *
 * @param writer The XML writer.
 * @param _setNwSrc The SetNwSrc to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0SetNwSrcElementNS(xmlTextWriterPtr writer, struct full_ns0_setNwSrc *_setNwSrc, int writeNamespaces);

/**
 * Frees the children of a SetNwSrc.
 *
 * @param _setNwSrc The SetNwSrc whose children are to be free.
 */
static void freeNs0SetNwSrcElement(struct full_ns0_setNwSrc *_setNwSrc);

/**
 * Reads a SetNwSrc from XML. The reader is assumed to be at the start element.
 *
 * @param reader The XML reader.
 * @return The SetNwSrc, or NULL in case of error.
 */
static struct full_ns0_setNwSrc *xmlTextReaderReadNs0SetNwSrcType(xmlTextReaderPtr reader);

/**
 * Writes a SetNwSrc to XML.
 *
 * @param writer The XML writer.
 * @param _setNwSrc The SetNwSrc to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0SetNwSrcType(xmlTextWriterPtr writer, struct full_ns0_setNwSrc *_setNwSrc);

/**
 * Frees the elements of a SetNwSrc.
 *
 * @param _setNwSrc The SetNwSrc to free.
 */
static void freeNs0SetNwSrcType(struct full_ns0_setNwSrc *_setNwSrc);

#endif /* DEF_full_ns0_setNwSrc_H */
#ifndef DEF_full_ns0_setNwTos_H
#define DEF_full_ns0_setNwTos_H

/**
 * (no documentation provided)
 */
struct full_ns0_setNwTos {


  /**
   * (no documentation provided)
   */
  int tos;
};

/**
 * Reads a SetNwTos element from XML. The element to be read is "setNwTos", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The SetNwTos, or NULL in case of error.
 */
struct full_ns0_setNwTos *xml_read_full_ns0_setNwTos(xmlTextReaderPtr reader);

/**
 * Writes a SetNwTos to XML under element name "setNwTos".
 *
 * @param writer The XML writer.
 * @param _setNwTos The SetNwTos to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
int xml_write_full_ns0_setNwTos(xmlTextWriterPtr writer, struct full_ns0_setNwTos *_setNwTos);

/**
 * Frees a SetNwTos.
 *
 * @param _setNwTos The SetNwTos to free.
 */
void free_full_ns0_setNwTos(struct full_ns0_setNwTos *_setNwTos);

/**
 * Reads a SetNwTos element from XML. The element to be read is "setNwTos", and
 * it is assumed that the reader is already pointing to the element.
 *
 * @param reader The XML reader.
 * @return The SetNwTos, or NULL in case of error.
 */
struct full_ns0_setNwTos *xmlTextReaderReadNs0SetNwTosElement(xmlTextReaderPtr reader);

/**
 * Writes a SetNwTos to XML under element name "setNwTos".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _setNwTos The SetNwTos to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0SetNwTosElement(xmlTextWriterPtr writer, struct full_ns0_setNwTos *_setNwTos);

/**
 * Writes a SetNwTos to XML under element name "setNwTos".
 *
 * @param writer The XML writer.
 * @param _setNwTos The SetNwTos to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0SetNwTosElementNS(xmlTextWriterPtr writer, struct full_ns0_setNwTos *_setNwTos, int writeNamespaces);

/**
 * Frees the children of a SetNwTos.
 *
 * @param _setNwTos The SetNwTos whose children are to be free.
 */
static void freeNs0SetNwTosElement(struct full_ns0_setNwTos *_setNwTos);

/**
 * Reads a SetNwTos from XML. The reader is assumed to be at the start element.
 *
 * @param reader The XML reader.
 * @return The SetNwTos, or NULL in case of error.
 */
static struct full_ns0_setNwTos *xmlTextReaderReadNs0SetNwTosType(xmlTextReaderPtr reader);

/**
 * Writes a SetNwTos to XML.
 *
 * @param writer The XML writer.
 * @param _setNwTos The SetNwTos to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0SetNwTosType(xmlTextWriterPtr writer, struct full_ns0_setNwTos *_setNwTos);

/**
 * Frees the elements of a SetNwTos.
 *
 * @param _setNwTos The SetNwTos to free.
 */
static void freeNs0SetNwTosType(struct full_ns0_setNwTos *_setNwTos);

#endif /* DEF_full_ns0_setNwTos_H */
#ifndef DEF_full_ns0_setTpDst_H
#define DEF_full_ns0_setTpDst_H

/**
 * (no documentation provided)
 */
struct full_ns0_setTpDst {


  /**
   * (no documentation provided)
   */
  int port;
};

/**
 * Reads a SetTpDst element from XML. The element to be read is "setTpDst", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The SetTpDst, or NULL in case of error.
 */
struct full_ns0_setTpDst *xml_read_full_ns0_setTpDst(xmlTextReaderPtr reader);

/**
 * Writes a SetTpDst to XML under element name "setTpDst".
 *
 * @param writer The XML writer.
 * @param _setTpDst The SetTpDst to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
int xml_write_full_ns0_setTpDst(xmlTextWriterPtr writer, struct full_ns0_setTpDst *_setTpDst);

/**
 * Frees a SetTpDst.
 *
 * @param _setTpDst The SetTpDst to free.
 */
void free_full_ns0_setTpDst(struct full_ns0_setTpDst *_setTpDst);

/**
 * Reads a SetTpDst element from XML. The element to be read is "setTpDst", and
 * it is assumed that the reader is already pointing to the element.
 *
 * @param reader The XML reader.
 * @return The SetTpDst, or NULL in case of error.
 */
struct full_ns0_setTpDst *xmlTextReaderReadNs0SetTpDstElement(xmlTextReaderPtr reader);

/**
 * Writes a SetTpDst to XML under element name "setTpDst".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _setTpDst The SetTpDst to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0SetTpDstElement(xmlTextWriterPtr writer, struct full_ns0_setTpDst *_setTpDst);

/**
 * Writes a SetTpDst to XML under element name "setTpDst".
 *
 * @param writer The XML writer.
 * @param _setTpDst The SetTpDst to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0SetTpDstElementNS(xmlTextWriterPtr writer, struct full_ns0_setTpDst *_setTpDst, int writeNamespaces);

/**
 * Frees the children of a SetTpDst.
 *
 * @param _setTpDst The SetTpDst whose children are to be free.
 */
static void freeNs0SetTpDstElement(struct full_ns0_setTpDst *_setTpDst);

/**
 * Reads a SetTpDst from XML. The reader is assumed to be at the start element.
 *
 * @param reader The XML reader.
 * @return The SetTpDst, or NULL in case of error.
 */
static struct full_ns0_setTpDst *xmlTextReaderReadNs0SetTpDstType(xmlTextReaderPtr reader);

/**
 * Writes a SetTpDst to XML.
 *
 * @param writer The XML writer.
 * @param _setTpDst The SetTpDst to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0SetTpDstType(xmlTextWriterPtr writer, struct full_ns0_setTpDst *_setTpDst);

/**
 * Frees the elements of a SetTpDst.
 *
 * @param _setTpDst The SetTpDst to free.
 */
static void freeNs0SetTpDstType(struct full_ns0_setTpDst *_setTpDst);

#endif /* DEF_full_ns0_setTpDst_H */
#ifndef DEF_full_ns0_setTpSrc_H
#define DEF_full_ns0_setTpSrc_H

/**
 * (no documentation provided)
 */
struct full_ns0_setTpSrc {


  /**
   * (no documentation provided)
   */
  int port;
};

/**
 * Reads a SetTpSrc element from XML. The element to be read is "setTpSrc", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The SetTpSrc, or NULL in case of error.
 */
struct full_ns0_setTpSrc *xml_read_full_ns0_setTpSrc(xmlTextReaderPtr reader);

/**
 * Writes a SetTpSrc to XML under element name "setTpSrc".
 *
 * @param writer The XML writer.
 * @param _setTpSrc The SetTpSrc to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
int xml_write_full_ns0_setTpSrc(xmlTextWriterPtr writer, struct full_ns0_setTpSrc *_setTpSrc);

/**
 * Frees a SetTpSrc.
 *
 * @param _setTpSrc The SetTpSrc to free.
 */
void free_full_ns0_setTpSrc(struct full_ns0_setTpSrc *_setTpSrc);

/**
 * Reads a SetTpSrc element from XML. The element to be read is "setTpSrc", and
 * it is assumed that the reader is already pointing to the element.
 *
 * @param reader The XML reader.
 * @return The SetTpSrc, or NULL in case of error.
 */
struct full_ns0_setTpSrc *xmlTextReaderReadNs0SetTpSrcElement(xmlTextReaderPtr reader);

/**
 * Writes a SetTpSrc to XML under element name "setTpSrc".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _setTpSrc The SetTpSrc to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0SetTpSrcElement(xmlTextWriterPtr writer, struct full_ns0_setTpSrc *_setTpSrc);

/**
 * Writes a SetTpSrc to XML under element name "setTpSrc".
 *
 * @param writer The XML writer.
 * @param _setTpSrc The SetTpSrc to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0SetTpSrcElementNS(xmlTextWriterPtr writer, struct full_ns0_setTpSrc *_setTpSrc, int writeNamespaces);

/**
 * Frees the children of a SetTpSrc.
 *
 * @param _setTpSrc The SetTpSrc whose children are to be free.
 */
static void freeNs0SetTpSrcElement(struct full_ns0_setTpSrc *_setTpSrc);

/**
 * Reads a SetTpSrc from XML. The reader is assumed to be at the start element.
 *
 * @param reader The XML reader.
 * @return The SetTpSrc, or NULL in case of error.
 */
static struct full_ns0_setTpSrc *xmlTextReaderReadNs0SetTpSrcType(xmlTextReaderPtr reader);

/**
 * Writes a SetTpSrc to XML.
 *
 * @param writer The XML writer.
 * @param _setTpSrc The SetTpSrc to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0SetTpSrcType(xmlTextWriterPtr writer, struct full_ns0_setTpSrc *_setTpSrc);

/**
 * Frees the elements of a SetTpSrc.
 *
 * @param _setTpSrc The SetTpSrc to free.
 */
static void freeNs0SetTpSrcType(struct full_ns0_setTpSrc *_setTpSrc);

#endif /* DEF_full_ns0_setTpSrc_H */
#ifndef DEF_full_ns0_setVlanCfi_H
#define DEF_full_ns0_setVlanCfi_H

/**
 * (no documentation provided)
 */
struct full_ns0_setVlanCfi {


  /**
   * (no documentation provided)
   */
  int cfi;
};

/**
 * Reads a SetVlanCfi element from XML. The element to be read is "setVlanCfi", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The SetVlanCfi, or NULL in case of error.
 */
struct full_ns0_setVlanCfi *xml_read_full_ns0_setVlanCfi(xmlTextReaderPtr reader);

/**
 * Writes a SetVlanCfi to XML under element name "setVlanCfi".
 *
 * @param writer The XML writer.
 * @param _setVlanCfi The SetVlanCfi to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
int xml_write_full_ns0_setVlanCfi(xmlTextWriterPtr writer, struct full_ns0_setVlanCfi *_setVlanCfi);

/**
 * Frees a SetVlanCfi.
 *
 * @param _setVlanCfi The SetVlanCfi to free.
 */
void free_full_ns0_setVlanCfi(struct full_ns0_setVlanCfi *_setVlanCfi);

/**
 * Reads a SetVlanCfi element from XML. The element to be read is "setVlanCfi", and
 * it is assumed that the reader is already pointing to the element.
 *
 * @param reader The XML reader.
 * @return The SetVlanCfi, or NULL in case of error.
 */
struct full_ns0_setVlanCfi *xmlTextReaderReadNs0SetVlanCfiElement(xmlTextReaderPtr reader);

/**
 * Writes a SetVlanCfi to XML under element name "setVlanCfi".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _setVlanCfi The SetVlanCfi to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0SetVlanCfiElement(xmlTextWriterPtr writer, struct full_ns0_setVlanCfi *_setVlanCfi);

/**
 * Writes a SetVlanCfi to XML under element name "setVlanCfi".
 *
 * @param writer The XML writer.
 * @param _setVlanCfi The SetVlanCfi to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0SetVlanCfiElementNS(xmlTextWriterPtr writer, struct full_ns0_setVlanCfi *_setVlanCfi, int writeNamespaces);

/**
 * Frees the children of a SetVlanCfi.
 *
 * @param _setVlanCfi The SetVlanCfi whose children are to be free.
 */
static void freeNs0SetVlanCfiElement(struct full_ns0_setVlanCfi *_setVlanCfi);

/**
 * Reads a SetVlanCfi from XML. The reader is assumed to be at the start element.
 *
 * @param reader The XML reader.
 * @return The SetVlanCfi, or NULL in case of error.
 */
static struct full_ns0_setVlanCfi *xmlTextReaderReadNs0SetVlanCfiType(xmlTextReaderPtr reader);

/**
 * Writes a SetVlanCfi to XML.
 *
 * @param writer The XML writer.
 * @param _setVlanCfi The SetVlanCfi to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0SetVlanCfiType(xmlTextWriterPtr writer, struct full_ns0_setVlanCfi *_setVlanCfi);

/**
 * Frees the elements of a SetVlanCfi.
 *
 * @param _setVlanCfi The SetVlanCfi to free.
 */
static void freeNs0SetVlanCfiType(struct full_ns0_setVlanCfi *_setVlanCfi);

#endif /* DEF_full_ns0_setVlanCfi_H */
#ifndef DEF_full_ns0_setVlanId_H
#define DEF_full_ns0_setVlanId_H

/**
 * (no documentation provided)
 */
struct full_ns0_setVlanId {


  /**
   * (no documentation provided)
   */
  int vlanId;
};

/**
 * Reads a SetVlanId element from XML. The element to be read is "setVlanId", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The SetVlanId, or NULL in case of error.
 */
struct full_ns0_setVlanId *xml_read_full_ns0_setVlanId(xmlTextReaderPtr reader);

/**
 * Writes a SetVlanId to XML under element name "setVlanId".
 *
 * @param writer The XML writer.
 * @param _setVlanId The SetVlanId to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
int xml_write_full_ns0_setVlanId(xmlTextWriterPtr writer, struct full_ns0_setVlanId *_setVlanId);

/**
 * Frees a SetVlanId.
 *
 * @param _setVlanId The SetVlanId to free.
 */
void free_full_ns0_setVlanId(struct full_ns0_setVlanId *_setVlanId);

/**
 * Reads a SetVlanId element from XML. The element to be read is "setVlanId", and
 * it is assumed that the reader is already pointing to the element.
 *
 * @param reader The XML reader.
 * @return The SetVlanId, or NULL in case of error.
 */
struct full_ns0_setVlanId *xmlTextReaderReadNs0SetVlanIdElement(xmlTextReaderPtr reader);

/**
 * Writes a SetVlanId to XML under element name "setVlanId".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _setVlanId The SetVlanId to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0SetVlanIdElement(xmlTextWriterPtr writer, struct full_ns0_setVlanId *_setVlanId);

/**
 * Writes a SetVlanId to XML under element name "setVlanId".
 *
 * @param writer The XML writer.
 * @param _setVlanId The SetVlanId to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0SetVlanIdElementNS(xmlTextWriterPtr writer, struct full_ns0_setVlanId *_setVlanId, int writeNamespaces);

/**
 * Frees the children of a SetVlanId.
 *
 * @param _setVlanId The SetVlanId whose children are to be free.
 */
static void freeNs0SetVlanIdElement(struct full_ns0_setVlanId *_setVlanId);

/**
 * Reads a SetVlanId from XML. The reader is assumed to be at the start element.
 *
 * @param reader The XML reader.
 * @return The SetVlanId, or NULL in case of error.
 */
static struct full_ns0_setVlanId *xmlTextReaderReadNs0SetVlanIdType(xmlTextReaderPtr reader);

/**
 * Writes a SetVlanId to XML.
 *
 * @param writer The XML writer.
 * @param _setVlanId The SetVlanId to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0SetVlanIdType(xmlTextWriterPtr writer, struct full_ns0_setVlanId *_setVlanId);

/**
 * Frees the elements of a SetVlanId.
 *
 * @param _setVlanId The SetVlanId to free.
 */
static void freeNs0SetVlanIdType(struct full_ns0_setVlanId *_setVlanId);

#endif /* DEF_full_ns0_setVlanId_H */
#ifndef DEF_full_ns0_setVlanPcp_H
#define DEF_full_ns0_setVlanPcp_H

/**
 * (no documentation provided)
 */
struct full_ns0_setVlanPcp {


  /**
   * (no documentation provided)
   */
  int pcp;
};

/**
 * Reads a SetVlanPcp element from XML. The element to be read is "setVlanPcp", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The SetVlanPcp, or NULL in case of error.
 */
struct full_ns0_setVlanPcp *xml_read_full_ns0_setVlanPcp(xmlTextReaderPtr reader);

/**
 * Writes a SetVlanPcp to XML under element name "setVlanPcp".
 *
 * @param writer The XML writer.
 * @param _setVlanPcp The SetVlanPcp to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
int xml_write_full_ns0_setVlanPcp(xmlTextWriterPtr writer, struct full_ns0_setVlanPcp *_setVlanPcp);

/**
 * Frees a SetVlanPcp.
 *
 * @param _setVlanPcp The SetVlanPcp to free.
 */
void free_full_ns0_setVlanPcp(struct full_ns0_setVlanPcp *_setVlanPcp);

/**
 * Reads a SetVlanPcp element from XML. The element to be read is "setVlanPcp", and
 * it is assumed that the reader is already pointing to the element.
 *
 * @param reader The XML reader.
 * @return The SetVlanPcp, or NULL in case of error.
 */
struct full_ns0_setVlanPcp *xmlTextReaderReadNs0SetVlanPcpElement(xmlTextReaderPtr reader);

/**
 * Writes a SetVlanPcp to XML under element name "setVlanPcp".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _setVlanPcp The SetVlanPcp to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0SetVlanPcpElement(xmlTextWriterPtr writer, struct full_ns0_setVlanPcp *_setVlanPcp);

/**
 * Writes a SetVlanPcp to XML under element name "setVlanPcp".
 *
 * @param writer The XML writer.
 * @param _setVlanPcp The SetVlanPcp to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0SetVlanPcpElementNS(xmlTextWriterPtr writer, struct full_ns0_setVlanPcp *_setVlanPcp, int writeNamespaces);

/**
 * Frees the children of a SetVlanPcp.
 *
 * @param _setVlanPcp The SetVlanPcp whose children are to be free.
 */
static void freeNs0SetVlanPcpElement(struct full_ns0_setVlanPcp *_setVlanPcp);

/**
 * Reads a SetVlanPcp from XML. The reader is assumed to be at the start element.
 *
 * @param reader The XML reader.
 * @return The SetVlanPcp, or NULL in case of error.
 */
static struct full_ns0_setVlanPcp *xmlTextReaderReadNs0SetVlanPcpType(xmlTextReaderPtr reader);

/**
 * Writes a SetVlanPcp to XML.
 *
 * @param writer The XML writer.
 * @param _setVlanPcp The SetVlanPcp to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0SetVlanPcpType(xmlTextWriterPtr writer, struct full_ns0_setVlanPcp *_setVlanPcp);

/**
 * Frees the elements of a SetVlanPcp.
 *
 * @param _setVlanPcp The SetVlanPcp to free.
 */
static void freeNs0SetVlanPcpType(struct full_ns0_setVlanPcp *_setVlanPcp);

#endif /* DEF_full_ns0_setVlanPcp_H */
#ifndef DEF_full_ns0_swPath_H
#define DEF_full_ns0_swPath_H

/**
 * (no documentation provided)
 */
struct full_ns0_swPath {

};

/**
 * Reads a SwPath element from XML. The element to be read is "swPath", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The SwPath, or NULL in case of error.
 */
struct full_ns0_swPath *xml_read_full_ns0_swPath(xmlTextReaderPtr reader);

/**
 * Writes a SwPath to XML under element name "swPath".
 *
 * @param writer The XML writer.
 * @param _swPath The SwPath to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
int xml_write_full_ns0_swPath(xmlTextWriterPtr writer, struct full_ns0_swPath *_swPath);

/**
 * Frees a SwPath.
 *
 * @param _swPath The SwPath to free.
 */
void free_full_ns0_swPath(struct full_ns0_swPath *_swPath);

/**
 * Reads a SwPath element from XML. The element to be read is "swPath", and
 * it is assumed that the reader is already pointing to the element.
 *
 * @param reader The XML reader.
 * @return The SwPath, or NULL in case of error.
 */
struct full_ns0_swPath *xmlTextReaderReadNs0SwPathElement(xmlTextReaderPtr reader);

/**
 * Writes a SwPath to XML under element name "swPath".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _swPath The SwPath to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0SwPathElement(xmlTextWriterPtr writer, struct full_ns0_swPath *_swPath);

/**
 * Writes a SwPath to XML under element name "swPath".
 *
 * @param writer The XML writer.
 * @param _swPath The SwPath to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0SwPathElementNS(xmlTextWriterPtr writer, struct full_ns0_swPath *_swPath, int writeNamespaces);

/**
 * Frees the children of a SwPath.
 *
 * @param _swPath The SwPath whose children are to be free.
 */
static void freeNs0SwPathElement(struct full_ns0_swPath *_swPath);

/**
 * Reads a SwPath from XML. The reader is assumed to be at the start element.
 *
 * @param reader The XML reader.
 * @return The SwPath, or NULL in case of error.
 */
static struct full_ns0_swPath *xmlTextReaderReadNs0SwPathType(xmlTextReaderPtr reader);

/**
 * Writes a SwPath to XML.
 *
 * @param writer The XML writer.
 * @param _swPath The SwPath to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0SwPathType(xmlTextWriterPtr writer, struct full_ns0_swPath *_swPath);

/**
 * Frees the elements of a SwPath.
 *
 * @param _swPath The SwPath to free.
 */
static void freeNs0SwPathType(struct full_ns0_swPath *_swPath);

#endif /* DEF_full_ns0_swPath_H */
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
#ifndef DEF_full_ns0_nodeTable_H
#define DEF_full_ns0_nodeTable_H

/**
 * (no documentation provided)
 */
struct full_ns0_nodeTable {


  /**
   * (no documentation provided)
   */
  xmlChar *nodeTableIDString;

  /**
   * (no documentation provided)
   */
  struct full_ns0_node *nodeTableNode;
};

/**
 * Reads a NodeTable element from XML. The element to be read is "nodeTable", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The NodeTable, or NULL in case of error.
 */
struct full_ns0_nodeTable *xml_read_full_ns0_nodeTable(xmlTextReaderPtr reader);

/**
 * Writes a NodeTable to XML under element name "nodeTable".
 *
 * @param writer The XML writer.
 * @param _nodeTable The NodeTable to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
int xml_write_full_ns0_nodeTable(xmlTextWriterPtr writer, struct full_ns0_nodeTable *_nodeTable);

/**
 * Frees a NodeTable.
 *
 * @param _nodeTable The NodeTable to free.
 */
void free_full_ns0_nodeTable(struct full_ns0_nodeTable *_nodeTable);

/**
 * Reads a NodeTable element from XML. The element to be read is "nodeTable", and
 * it is assumed that the reader is already pointing to the element.
 *
 * @param reader The XML reader.
 * @return The NodeTable, or NULL in case of error.
 */
struct full_ns0_nodeTable *xmlTextReaderReadNs0NodeTableElement(xmlTextReaderPtr reader);

/**
 * Writes a NodeTable to XML under element name "nodeTable".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _nodeTable The NodeTable to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0NodeTableElement(xmlTextWriterPtr writer, struct full_ns0_nodeTable *_nodeTable);

/**
 * Writes a NodeTable to XML under element name "nodeTable".
 *
 * @param writer The XML writer.
 * @param _nodeTable The NodeTable to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0NodeTableElementNS(xmlTextWriterPtr writer, struct full_ns0_nodeTable *_nodeTable, int writeNamespaces);

/**
 * Frees the children of a NodeTable.
 *
 * @param _nodeTable The NodeTable whose children are to be free.
 */
static void freeNs0NodeTableElement(struct full_ns0_nodeTable *_nodeTable);

/**
 * Reads a NodeTable from XML. The reader is assumed to be at the start element.
 *
 * @param reader The XML reader.
 * @return The NodeTable, or NULL in case of error.
 */
static struct full_ns0_nodeTable *xmlTextReaderReadNs0NodeTableType(xmlTextReaderPtr reader);

/**
 * Writes a NodeTable to XML.
 *
 * @param writer The XML writer.
 * @param _nodeTable The NodeTable to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0NodeTableType(xmlTextWriterPtr writer, struct full_ns0_nodeTable *_nodeTable);

/**
 * Frees the elements of a NodeTable.
 *
 * @param _nodeTable The NodeTable to free.
 */
static void freeNs0NodeTableType(struct full_ns0_nodeTable *_nodeTable);

#endif /* DEF_full_ns0_nodeTable_H */
#ifndef DEF_full_ns0_flow_H
#define DEF_full_ns0_flow_H

/**
 * (no documentation provided)
 */
struct full_ns0_flow {


  /**
   * (no documentation provided)
   */
  short priority;

  /**
   * (no documentation provided)
   */
  short idleTimeout;

  /**
   * (no documentation provided)
   */
  struct full_ns0_action *actions;

  /**
   * Size of the actions array.
   */
  int _sizeof_actions;

  /**
   * (no documentation provided)
   */
  short hardTimeout;

  /**
   * (no documentation provided)
   */
  long id;

  /**
   * (no documentation provided)
   */
  struct full_ns0_match *match;
};

/**
 * Reads a Flow element from XML. The element to be read is "flow", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The Flow, or NULL in case of error.
 */
struct full_ns0_flow *xml_read_full_ns0_flow(xmlTextReaderPtr reader);

/**
 * Writes a Flow to XML under element name "flow".
 *
 * @param writer The XML writer.
 * @param _flow The Flow to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
int xml_write_full_ns0_flow(xmlTextWriterPtr writer, struct full_ns0_flow *_flow);

/**
 * Frees a Flow.
 *
 * @param _flow The Flow to free.
 */
void free_full_ns0_flow(struct full_ns0_flow *_flow);

/**
 * Reads a Flow element from XML. The element to be read is "flow", and
 * it is assumed that the reader is already pointing to the element.
 *
 * @param reader The XML reader.
 * @return The Flow, or NULL in case of error.
 */
struct full_ns0_flow *xmlTextReaderReadNs0FlowElement(xmlTextReaderPtr reader);

/**
 * Writes a Flow to XML under element name "flow".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _flow The Flow to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0FlowElement(xmlTextWriterPtr writer, struct full_ns0_flow *_flow);

/**
 * Writes a Flow to XML under element name "flow".
 *
 * @param writer The XML writer.
 * @param _flow The Flow to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0FlowElementNS(xmlTextWriterPtr writer, struct full_ns0_flow *_flow, int writeNamespaces);

/**
 * Frees the children of a Flow.
 *
 * @param _flow The Flow whose children are to be free.
 */
static void freeNs0FlowElement(struct full_ns0_flow *_flow);

/**
 * Reads a Flow from XML. The reader is assumed to be at the start element.
 *
 * @param reader The XML reader.
 * @return The Flow, or NULL in case of error.
 */
static struct full_ns0_flow *xmlTextReaderReadNs0FlowType(xmlTextReaderPtr reader);

/**
 * Writes a Flow to XML.
 *
 * @param writer The XML writer.
 * @param _flow The Flow to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0FlowType(xmlTextWriterPtr writer, struct full_ns0_flow *_flow);

/**
 * Frees the elements of a Flow.
 *
 * @param _flow The Flow to free.
 */
static void freeNs0FlowType(struct full_ns0_flow *_flow);

#endif /* DEF_full_ns0_flow_H */
#ifndef DEF_full_ns0_match_H
#define DEF_full_ns0_match_H

/**
 * (no documentation provided)
 */
struct full_ns0_match {


  /**
   * (no documentation provided)
   */
  struct full_ns0_matchField *matchFields;

  /**
   * Size of the matchFields array.
   */
  int _sizeof_matchFields;
};

/**
 * Reads a Match element from XML. The element to be read is "match", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The Match, or NULL in case of error.
 */
struct full_ns0_match *xml_read_full_ns0_match(xmlTextReaderPtr reader);

/**
 * Writes a Match to XML under element name "match".
 *
 * @param writer The XML writer.
 * @param _match The Match to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
int xml_write_full_ns0_match(xmlTextWriterPtr writer, struct full_ns0_match *_match);

/**
 * Frees a Match.
 *
 * @param _match The Match to free.
 */
void free_full_ns0_match(struct full_ns0_match *_match);

/**
 * Reads a Match element from XML. The element to be read is "match", and
 * it is assumed that the reader is already pointing to the element.
 *
 * @param reader The XML reader.
 * @return The Match, or NULL in case of error.
 */
struct full_ns0_match *xmlTextReaderReadNs0MatchElement(xmlTextReaderPtr reader);

/**
 * Writes a Match to XML under element name "match".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _match The Match to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0MatchElement(xmlTextWriterPtr writer, struct full_ns0_match *_match);

/**
 * Writes a Match to XML under element name "match".
 *
 * @param writer The XML writer.
 * @param _match The Match to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0MatchElementNS(xmlTextWriterPtr writer, struct full_ns0_match *_match, int writeNamespaces);

/**
 * Frees the children of a Match.
 *
 * @param _match The Match whose children are to be free.
 */
static void freeNs0MatchElement(struct full_ns0_match *_match);

/**
 * Reads a Match from XML. The reader is assumed to be at the start element.
 *
 * @param reader The XML reader.
 * @return The Match, or NULL in case of error.
 */
static struct full_ns0_match *xmlTextReaderReadNs0MatchType(xmlTextReaderPtr reader);

/**
 * Writes a Match to XML.
 *
 * @param writer The XML writer.
 * @param _match The Match to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0MatchType(xmlTextWriterPtr writer, struct full_ns0_match *_match);

/**
 * Frees the elements of a Match.
 *
 * @param _match The Match to free.
 */
static void freeNs0MatchType(struct full_ns0_match *_match);

#endif /* DEF_full_ns0_match_H */
#ifndef DEF_full_ns0_matchField_H
#define DEF_full_ns0_matchField_H

/**
 * (no documentation provided)
 */
struct full_ns0_matchField {

};

/**
 * Reads a MatchField element from XML. The element to be read is "matchField", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The MatchField, or NULL in case of error.
 */
struct full_ns0_matchField *xml_read_full_ns0_matchField(xmlTextReaderPtr reader);

/**
 * Writes a MatchField to XML under element name "matchField".
 *
 * @param writer The XML writer.
 * @param _matchField The MatchField to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
int xml_write_full_ns0_matchField(xmlTextWriterPtr writer, struct full_ns0_matchField *_matchField);

/**
 * Frees a MatchField.
 *
 * @param _matchField The MatchField to free.
 */
void free_full_ns0_matchField(struct full_ns0_matchField *_matchField);

/**
 * Reads a MatchField element from XML. The element to be read is "matchField", and
 * it is assumed that the reader is already pointing to the element.
 *
 * @param reader The XML reader.
 * @return The MatchField, or NULL in case of error.
 */
struct full_ns0_matchField *xmlTextReaderReadNs0MatchFieldElement(xmlTextReaderPtr reader);

/**
 * Writes a MatchField to XML under element name "matchField".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _matchField The MatchField to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0MatchFieldElement(xmlTextWriterPtr writer, struct full_ns0_matchField *_matchField);

/**
 * Writes a MatchField to XML under element name "matchField".
 *
 * @param writer The XML writer.
 * @param _matchField The MatchField to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0MatchFieldElementNS(xmlTextWriterPtr writer, struct full_ns0_matchField *_matchField, int writeNamespaces);

/**
 * Frees the children of a MatchField.
 *
 * @param _matchField The MatchField whose children are to be free.
 */
static void freeNs0MatchFieldElement(struct full_ns0_matchField *_matchField);

/**
 * Reads a MatchField from XML. The reader is assumed to be at the start element.
 *
 * @param reader The XML reader.
 * @return The MatchField, or NULL in case of error.
 */
static struct full_ns0_matchField *xmlTextReaderReadNs0MatchFieldType(xmlTextReaderPtr reader);

/**
 * Writes a MatchField to XML.
 *
 * @param writer The XML writer.
 * @param _matchField The MatchField to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0MatchFieldType(xmlTextWriterPtr writer, struct full_ns0_matchField *_matchField);

/**
 * Frees the elements of a MatchField.
 *
 * @param _matchField The MatchField to free.
 */
static void freeNs0MatchFieldType(struct full_ns0_matchField *_matchField);

#endif /* DEF_full_ns0_matchField_H */
#ifndef DEF_full_ns0_flowOnNode_H
#define DEF_full_ns0_flowOnNode_H

/**
 * (no documentation provided)
 */
struct full_ns0_flowOnNode {


  /**
   * (no documentation provided)
   */
  struct full_ns0_flow *flow;

  /**
   * (no documentation provided)
   */
  long packetCount;

  /**
   * (no documentation provided)
   */
  int durationNanoseconds;

  /**
   * (no documentation provided)
   */
  long byteCount;

  /**
   * (no documentation provided)
   */
  unsigned char tableId;

  /**
   * (no documentation provided)
   */
  int durationSeconds;
};

/**
 * Reads a FlowOnNode element from XML. The element to be read is "FlowStat", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The FlowOnNode, or NULL in case of error.
 */
struct full_ns0_flowOnNode *xml_read_full_ns0_flowOnNode(xmlTextReaderPtr reader);

/**
 * Writes a FlowOnNode to XML under element name "FlowStat".
 *
 * @param writer The XML writer.
 * @param _flowOnNode The FlowOnNode to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
int xml_write_full_ns0_flowOnNode(xmlTextWriterPtr writer, struct full_ns0_flowOnNode *_flowOnNode);

/**
 * Frees a FlowOnNode.
 *
 * @param _flowOnNode The FlowOnNode to free.
 */
void free_full_ns0_flowOnNode(struct full_ns0_flowOnNode *_flowOnNode);

/**
 * Reads a FlowOnNode element from XML. The element to be read is "FlowStat", and
 * it is assumed that the reader is already pointing to the element.
 *
 * @param reader The XML reader.
 * @return The FlowOnNode, or NULL in case of error.
 */
struct full_ns0_flowOnNode *xmlTextReaderReadNs0FlowStatElement(xmlTextReaderPtr reader);

/**
 * Writes a FlowOnNode to XML under element name "FlowStat".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _flowOnNode The FlowOnNode to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0FlowStatElement(xmlTextWriterPtr writer, struct full_ns0_flowOnNode *_flowOnNode);

/**
 * Writes a FlowOnNode to XML under element name "FlowStat".
 *
 * @param writer The XML writer.
 * @param _flowOnNode The FlowOnNode to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0FlowStatElementNS(xmlTextWriterPtr writer, struct full_ns0_flowOnNode *_flowOnNode, int writeNamespaces);

/**
 * Frees the children of a FlowOnNode.
 *
 * @param _flowOnNode The FlowOnNode whose children are to be free.
 */
static void freeNs0FlowStatElement(struct full_ns0_flowOnNode *_flowOnNode);

/**
 * Reads a FlowOnNode from XML. The reader is assumed to be at the start element.
 *
 * @param reader The XML reader.
 * @return The FlowOnNode, or NULL in case of error.
 */
static struct full_ns0_flowOnNode *xmlTextReaderReadNs0FlowOnNodeType(xmlTextReaderPtr reader);

/**
 * Writes a FlowOnNode to XML.
 *
 * @param writer The XML writer.
 * @param _flowOnNode The FlowOnNode to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0FlowOnNodeType(xmlTextWriterPtr writer, struct full_ns0_flowOnNode *_flowOnNode);

/**
 * Frees the elements of a FlowOnNode.
 *
 * @param _flowOnNode The FlowOnNode to free.
 */
static void freeNs0FlowOnNodeType(struct full_ns0_flowOnNode *_flowOnNode);

#endif /* DEF_full_ns0_flowOnNode_H */
#ifndef DEF_full_ns0_nodeConnectorStatistics_H
#define DEF_full_ns0_nodeConnectorStatistics_H

/**
 * (no documentation provided)
 */
struct full_ns0_nodeConnectorStatistics {


  /**
   * (no documentation provided)
   */
  long receiveOverRunError;

  /**
   * (no documentation provided)
   */
  long transmitErrors;

  /**
   * (no documentation provided)
   */
  struct full_ns0_nodeConnector *nodeConnector;

  /**
   * (no documentation provided)
   */
  long receiveFrameError;

  /**
   * (no documentation provided)
   */
  long transmitPackets;

  /**
   * (no documentation provided)
   */
  long receiveBytes;

  /**
   * (no documentation provided)
   */
  long receiveCrcError;

  /**
   * (no documentation provided)
   */
  long collisionCount;

  /**
   * (no documentation provided)
   */
  long receiveDrops;

  /**
   * (no documentation provided)
   */
  long transmitBytes;

  /**
   * (no documentation provided)
   */
  long transmitDrops;

  /**
   * (no documentation provided)
   */
  long receiveErrors;

  /**
   * (no documentation provided)
   */
  long receivePackets;
};

/**
 * Reads a NodeConnectorStatistics element from XML. The element to be read is "nodeConnectorStatistics", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The NodeConnectorStatistics, or NULL in case of error.
 */
struct full_ns0_nodeConnectorStatistics *xml_read_full_ns0_nodeConnectorStatistics(xmlTextReaderPtr reader);

/**
 * Writes a NodeConnectorStatistics to XML under element name "nodeConnectorStatistics".
 *
 * @param writer The XML writer.
 * @param _nodeConnectorStatistics The NodeConnectorStatistics to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
int xml_write_full_ns0_nodeConnectorStatistics(xmlTextWriterPtr writer, struct full_ns0_nodeConnectorStatistics *_nodeConnectorStatistics);

/**
 * Frees a NodeConnectorStatistics.
 *
 * @param _nodeConnectorStatistics The NodeConnectorStatistics to free.
 */
void free_full_ns0_nodeConnectorStatistics(struct full_ns0_nodeConnectorStatistics *_nodeConnectorStatistics);

/**
 * Reads a NodeConnectorStatistics element from XML. The element to be read is "nodeConnectorStatistics", and
 * it is assumed that the reader is already pointing to the element.
 *
 * @param reader The XML reader.
 * @return The NodeConnectorStatistics, or NULL in case of error.
 */
struct full_ns0_nodeConnectorStatistics *xmlTextReaderReadNs0NodeConnectorStatisticsElement(xmlTextReaderPtr reader);

/**
 * Writes a NodeConnectorStatistics to XML under element name "nodeConnectorStatistics".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _nodeConnectorStatistics The NodeConnectorStatistics to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0NodeConnectorStatisticsElement(xmlTextWriterPtr writer, struct full_ns0_nodeConnectorStatistics *_nodeConnectorStatistics);

/**
 * Writes a NodeConnectorStatistics to XML under element name "nodeConnectorStatistics".
 *
 * @param writer The XML writer.
 * @param _nodeConnectorStatistics The NodeConnectorStatistics to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0NodeConnectorStatisticsElementNS(xmlTextWriterPtr writer, struct full_ns0_nodeConnectorStatistics *_nodeConnectorStatistics, int writeNamespaces);

/**
 * Frees the children of a NodeConnectorStatistics.
 *
 * @param _nodeConnectorStatistics The NodeConnectorStatistics whose children are to be free.
 */
static void freeNs0NodeConnectorStatisticsElement(struct full_ns0_nodeConnectorStatistics *_nodeConnectorStatistics);

/**
 * Reads a NodeConnectorStatistics from XML. The reader is assumed to be at the start element.
 *
 * @param reader The XML reader.
 * @return The NodeConnectorStatistics, or NULL in case of error.
 */
static struct full_ns0_nodeConnectorStatistics *xmlTextReaderReadNs0NodeConnectorStatisticsType(xmlTextReaderPtr reader);

/**
 * Writes a NodeConnectorStatistics to XML.
 *
 * @param writer The XML writer.
 * @param _nodeConnectorStatistics The NodeConnectorStatistics to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0NodeConnectorStatisticsType(xmlTextWriterPtr writer, struct full_ns0_nodeConnectorStatistics *_nodeConnectorStatistics);

/**
 * Frees the elements of a NodeConnectorStatistics.
 *
 * @param _nodeConnectorStatistics The NodeConnectorStatistics to free.
 */
static void freeNs0NodeConnectorStatisticsType(struct full_ns0_nodeConnectorStatistics *_nodeConnectorStatistics);

#endif /* DEF_full_ns0_nodeConnectorStatistics_H */
#ifndef DEF_full_ns0_nodeTableStatistics_H
#define DEF_full_ns0_nodeTableStatistics_H

/**
 * (no documentation provided)
 */
struct full_ns0_nodeTableStatistics {


  /**
   * (no documentation provided)
   */
  xmlChar *name;

  /**
   * (no documentation provided)
   */
  long matchedCount;

  /**
   * (no documentation provided)
   */
  struct full_ns0_nodeTable *nodeTable;

  /**
   * (no documentation provided)
   */
  int activeCount;

  /**
   * (no documentation provided)
   */
  long lookupCount;
};

/**
 * Reads a NodeTableStatistics element from XML. The element to be read is "nodeTableStatistics", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The NodeTableStatistics, or NULL in case of error.
 */
struct full_ns0_nodeTableStatistics *xml_read_full_ns0_nodeTableStatistics(xmlTextReaderPtr reader);

/**
 * Writes a NodeTableStatistics to XML under element name "nodeTableStatistics".
 *
 * @param writer The XML writer.
 * @param _nodeTableStatistics The NodeTableStatistics to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
int xml_write_full_ns0_nodeTableStatistics(xmlTextWriterPtr writer, struct full_ns0_nodeTableStatistics *_nodeTableStatistics);

/**
 * Frees a NodeTableStatistics.
 *
 * @param _nodeTableStatistics The NodeTableStatistics to free.
 */
void free_full_ns0_nodeTableStatistics(struct full_ns0_nodeTableStatistics *_nodeTableStatistics);

/**
 * Reads a NodeTableStatistics element from XML. The element to be read is "nodeTableStatistics", and
 * it is assumed that the reader is already pointing to the element.
 *
 * @param reader The XML reader.
 * @return The NodeTableStatistics, or NULL in case of error.
 */
struct full_ns0_nodeTableStatistics *xmlTextReaderReadNs0NodeTableStatisticsElement(xmlTextReaderPtr reader);

/**
 * Writes a NodeTableStatistics to XML under element name "nodeTableStatistics".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _nodeTableStatistics The NodeTableStatistics to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0NodeTableStatisticsElement(xmlTextWriterPtr writer, struct full_ns0_nodeTableStatistics *_nodeTableStatistics);

/**
 * Writes a NodeTableStatistics to XML under element name "nodeTableStatistics".
 *
 * @param writer The XML writer.
 * @param _nodeTableStatistics The NodeTableStatistics to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0NodeTableStatisticsElementNS(xmlTextWriterPtr writer, struct full_ns0_nodeTableStatistics *_nodeTableStatistics, int writeNamespaces);

/**
 * Frees the children of a NodeTableStatistics.
 *
 * @param _nodeTableStatistics The NodeTableStatistics whose children are to be free.
 */
static void freeNs0NodeTableStatisticsElement(struct full_ns0_nodeTableStatistics *_nodeTableStatistics);

/**
 * Reads a NodeTableStatistics from XML. The reader is assumed to be at the start element.
 *
 * @param reader The XML reader.
 * @return The NodeTableStatistics, or NULL in case of error.
 */
static struct full_ns0_nodeTableStatistics *xmlTextReaderReadNs0NodeTableStatisticsType(xmlTextReaderPtr reader);

/**
 * Writes a NodeTableStatistics to XML.
 *
 * @param writer The XML writer.
 * @param _nodeTableStatistics The NodeTableStatistics to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0NodeTableStatisticsType(xmlTextWriterPtr writer, struct full_ns0_nodeTableStatistics *_nodeTableStatistics);

/**
 * Frees the elements of a NodeTableStatistics.
 *
 * @param _nodeTableStatistics The NodeTableStatistics to free.
 */
static void freeNs0NodeTableStatisticsType(struct full_ns0_nodeTableStatistics *_nodeTableStatistics);

#endif /* DEF_full_ns0_nodeTableStatistics_H */
#ifndef DEF_full_ns0_allFlowStatistics_H
#define DEF_full_ns0_allFlowStatistics_H

/**
 * (no documentation provided)
 */
struct full_ns0_allFlowStatistics {


  /**
   * (no documentation provided)
   */
  struct full_ns0_flowStatistics *flowStatistics;

  /**
   * Size of the flowStatistics array.
   */
  int _sizeof_flowStatistics;
};

/**
 * Reads a AllFlowStatistics element from XML. The element to be read is "allFlowStatistics", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The AllFlowStatistics, or NULL in case of error.
 */
struct full_ns0_allFlowStatistics *xml_read_full_ns0_allFlowStatistics(xmlTextReaderPtr reader);

/**
 * Writes a AllFlowStatistics to XML under element name "allFlowStatistics".
 *
 * @param writer The XML writer.
 * @param _allFlowStatistics The AllFlowStatistics to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
int xml_write_full_ns0_allFlowStatistics(xmlTextWriterPtr writer, struct full_ns0_allFlowStatistics *_allFlowStatistics);

/**
 * Frees a AllFlowStatistics.
 *
 * @param _allFlowStatistics The AllFlowStatistics to free.
 */
void free_full_ns0_allFlowStatistics(struct full_ns0_allFlowStatistics *_allFlowStatistics);

/**
 * Reads a AllFlowStatistics element from XML. The element to be read is "allFlowStatistics", and
 * it is assumed that the reader is already pointing to the element.
 *
 * @param reader The XML reader.
 * @return The AllFlowStatistics, or NULL in case of error.
 */
struct full_ns0_allFlowStatistics *xmlTextReaderReadNs0AllFlowStatisticsElement(xmlTextReaderPtr reader);

/**
 * Writes a AllFlowStatistics to XML under element name "allFlowStatistics".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _allFlowStatistics The AllFlowStatistics to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0AllFlowStatisticsElement(xmlTextWriterPtr writer, struct full_ns0_allFlowStatistics *_allFlowStatistics);

/**
 * Writes a AllFlowStatistics to XML under element name "allFlowStatistics".
 *
 * @param writer The XML writer.
 * @param _allFlowStatistics The AllFlowStatistics to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0AllFlowStatisticsElementNS(xmlTextWriterPtr writer, struct full_ns0_allFlowStatistics *_allFlowStatistics, int writeNamespaces);

/**
 * Frees the children of a AllFlowStatistics.
 *
 * @param _allFlowStatistics The AllFlowStatistics whose children are to be free.
 */
static void freeNs0AllFlowStatisticsElement(struct full_ns0_allFlowStatistics *_allFlowStatistics);

/**
 * Reads a AllFlowStatistics from XML. The reader is assumed to be at the start element.
 *
 * @param reader The XML reader.
 * @return The AllFlowStatistics, or NULL in case of error.
 */
static struct full_ns0_allFlowStatistics *xmlTextReaderReadNs0AllFlowStatisticsType(xmlTextReaderPtr reader);

/**
 * Writes a AllFlowStatistics to XML.
 *
 * @param writer The XML writer.
 * @param _allFlowStatistics The AllFlowStatistics to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0AllFlowStatisticsType(xmlTextWriterPtr writer, struct full_ns0_allFlowStatistics *_allFlowStatistics);

/**
 * Frees the elements of a AllFlowStatistics.
 *
 * @param _allFlowStatistics The AllFlowStatistics to free.
 */
static void freeNs0AllFlowStatisticsType(struct full_ns0_allFlowStatistics *_allFlowStatistics);

#endif /* DEF_full_ns0_allFlowStatistics_H */
#ifndef DEF_full_ns0_allPortStatistics_H
#define DEF_full_ns0_allPortStatistics_H

/**
 * (no documentation provided)
 */
struct full_ns0_allPortStatistics {


  /**
   * (no documentation provided)
   */
  struct full_ns0_portStatistics *portStatistics;

  /**
   * Size of the portStatistics array.
   */
  int _sizeof_portStatistics;
};

/**
 * Reads a AllPortStatistics element from XML. The element to be read is "allPortStatistics", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The AllPortStatistics, or NULL in case of error.
 */
struct full_ns0_allPortStatistics *xml_read_full_ns0_allPortStatistics(xmlTextReaderPtr reader);

/**
 * Writes a AllPortStatistics to XML under element name "allPortStatistics".
 *
 * @param writer The XML writer.
 * @param _allPortStatistics The AllPortStatistics to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
int xml_write_full_ns0_allPortStatistics(xmlTextWriterPtr writer, struct full_ns0_allPortStatistics *_allPortStatistics);

/**
 * Frees a AllPortStatistics.
 *
 * @param _allPortStatistics The AllPortStatistics to free.
 */
void free_full_ns0_allPortStatistics(struct full_ns0_allPortStatistics *_allPortStatistics);

/**
 * Reads a AllPortStatistics element from XML. The element to be read is "allPortStatistics", and
 * it is assumed that the reader is already pointing to the element.
 *
 * @param reader The XML reader.
 * @return The AllPortStatistics, or NULL in case of error.
 */
struct full_ns0_allPortStatistics *xmlTextReaderReadNs0AllPortStatisticsElement(xmlTextReaderPtr reader);

/**
 * Writes a AllPortStatistics to XML under element name "allPortStatistics".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _allPortStatistics The AllPortStatistics to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0AllPortStatisticsElement(xmlTextWriterPtr writer, struct full_ns0_allPortStatistics *_allPortStatistics);

/**
 * Writes a AllPortStatistics to XML under element name "allPortStatistics".
 *
 * @param writer The XML writer.
 * @param _allPortStatistics The AllPortStatistics to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0AllPortStatisticsElementNS(xmlTextWriterPtr writer, struct full_ns0_allPortStatistics *_allPortStatistics, int writeNamespaces);

/**
 * Frees the children of a AllPortStatistics.
 *
 * @param _allPortStatistics The AllPortStatistics whose children are to be free.
 */
static void freeNs0AllPortStatisticsElement(struct full_ns0_allPortStatistics *_allPortStatistics);

/**
 * Reads a AllPortStatistics from XML. The reader is assumed to be at the start element.
 *
 * @param reader The XML reader.
 * @return The AllPortStatistics, or NULL in case of error.
 */
static struct full_ns0_allPortStatistics *xmlTextReaderReadNs0AllPortStatisticsType(xmlTextReaderPtr reader);

/**
 * Writes a AllPortStatistics to XML.
 *
 * @param writer The XML writer.
 * @param _allPortStatistics The AllPortStatistics to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0AllPortStatisticsType(xmlTextWriterPtr writer, struct full_ns0_allPortStatistics *_allPortStatistics);

/**
 * Frees the elements of a AllPortStatistics.
 *
 * @param _allPortStatistics The AllPortStatistics to free.
 */
static void freeNs0AllPortStatisticsType(struct full_ns0_allPortStatistics *_allPortStatistics);

#endif /* DEF_full_ns0_allPortStatistics_H */
#ifndef DEF_full_ns0_allTableStatistics_H
#define DEF_full_ns0_allTableStatistics_H

/**
 * (no documentation provided)
 */
struct full_ns0_allTableStatistics {


  /**
   * (no documentation provided)
   */
  struct full_ns0_tableStatistics *tableStatistics;

  /**
   * Size of the tableStatistics array.
   */
  int _sizeof_tableStatistics;
};

/**
 * Reads a AllTableStatistics element from XML. The element to be read is "allTableStatistics", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The AllTableStatistics, or NULL in case of error.
 */
struct full_ns0_allTableStatistics *xml_read_full_ns0_allTableStatistics(xmlTextReaderPtr reader);

/**
 * Writes a AllTableStatistics to XML under element name "allTableStatistics".
 *
 * @param writer The XML writer.
 * @param _allTableStatistics The AllTableStatistics to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
int xml_write_full_ns0_allTableStatistics(xmlTextWriterPtr writer, struct full_ns0_allTableStatistics *_allTableStatistics);

/**
 * Frees a AllTableStatistics.
 *
 * @param _allTableStatistics The AllTableStatistics to free.
 */
void free_full_ns0_allTableStatistics(struct full_ns0_allTableStatistics *_allTableStatistics);

/**
 * Reads a AllTableStatistics element from XML. The element to be read is "allTableStatistics", and
 * it is assumed that the reader is already pointing to the element.
 *
 * @param reader The XML reader.
 * @return The AllTableStatistics, or NULL in case of error.
 */
struct full_ns0_allTableStatistics *xmlTextReaderReadNs0AllTableStatisticsElement(xmlTextReaderPtr reader);

/**
 * Writes a AllTableStatistics to XML under element name "allTableStatistics".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _allTableStatistics The AllTableStatistics to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0AllTableStatisticsElement(xmlTextWriterPtr writer, struct full_ns0_allTableStatistics *_allTableStatistics);

/**
 * Writes a AllTableStatistics to XML under element name "allTableStatistics".
 *
 * @param writer The XML writer.
 * @param _allTableStatistics The AllTableStatistics to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0AllTableStatisticsElementNS(xmlTextWriterPtr writer, struct full_ns0_allTableStatistics *_allTableStatistics, int writeNamespaces);

/**
 * Frees the children of a AllTableStatistics.
 *
 * @param _allTableStatistics The AllTableStatistics whose children are to be free.
 */
static void freeNs0AllTableStatisticsElement(struct full_ns0_allTableStatistics *_allTableStatistics);

/**
 * Reads a AllTableStatistics from XML. The reader is assumed to be at the start element.
 *
 * @param reader The XML reader.
 * @return The AllTableStatistics, or NULL in case of error.
 */
static struct full_ns0_allTableStatistics *xmlTextReaderReadNs0AllTableStatisticsType(xmlTextReaderPtr reader);

/**
 * Writes a AllTableStatistics to XML.
 *
 * @param writer The XML writer.
 * @param _allTableStatistics The AllTableStatistics to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0AllTableStatisticsType(xmlTextWriterPtr writer, struct full_ns0_allTableStatistics *_allTableStatistics);

/**
 * Frees the elements of a AllTableStatistics.
 *
 * @param _allTableStatistics The AllTableStatistics to free.
 */
static void freeNs0AllTableStatisticsType(struct full_ns0_allTableStatistics *_allTableStatistics);

#endif /* DEF_full_ns0_allTableStatistics_H */
#ifndef DEF_full_ns0_flowStatistics_H
#define DEF_full_ns0_flowStatistics_H

/**
 * (no documentation provided)
 */
struct full_ns0_flowStatistics {


  /**
   * (no documentation provided)
   */
  struct full_ns0_node *node;

  /**
   * (no documentation provided)
   */
  struct full_ns0_flowOnNode *flowStat;

  /**
   * Size of the flowStat array.
   */
  int _sizeof_flowStat;
};

/**
 * Reads a FlowStatistics element from XML. The element to be read is "flowStatistics", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The FlowStatistics, or NULL in case of error.
 */
struct full_ns0_flowStatistics *xml_read_full_ns0_flowStatistics(xmlTextReaderPtr reader);

/**
 * Writes a FlowStatistics to XML under element name "flowStatistics".
 *
 * @param writer The XML writer.
 * @param _flowStatistics The FlowStatistics to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
int xml_write_full_ns0_flowStatistics(xmlTextWriterPtr writer, struct full_ns0_flowStatistics *_flowStatistics);

/**
 * Frees a FlowStatistics.
 *
 * @param _flowStatistics The FlowStatistics to free.
 */
void free_full_ns0_flowStatistics(struct full_ns0_flowStatistics *_flowStatistics);

/**
 * Reads a FlowStatistics element from XML. The element to be read is "flowStatistics", and
 * it is assumed that the reader is already pointing to the element.
 *
 * @param reader The XML reader.
 * @return The FlowStatistics, or NULL in case of error.
 */
struct full_ns0_flowStatistics *xmlTextReaderReadNs0FlowStatisticsElement(xmlTextReaderPtr reader);

/**
 * Writes a FlowStatistics to XML under element name "flowStatistics".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _flowStatistics The FlowStatistics to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0FlowStatisticsElement(xmlTextWriterPtr writer, struct full_ns0_flowStatistics *_flowStatistics);

/**
 * Writes a FlowStatistics to XML under element name "flowStatistics".
 *
 * @param writer The XML writer.
 * @param _flowStatistics The FlowStatistics to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0FlowStatisticsElementNS(xmlTextWriterPtr writer, struct full_ns0_flowStatistics *_flowStatistics, int writeNamespaces);

/**
 * Frees the children of a FlowStatistics.
 *
 * @param _flowStatistics The FlowStatistics whose children are to be free.
 */
static void freeNs0FlowStatisticsElement(struct full_ns0_flowStatistics *_flowStatistics);

/**
 * Reads a FlowStatistics from XML. The reader is assumed to be at the start element.
 *
 * @param reader The XML reader.
 * @return The FlowStatistics, or NULL in case of error.
 */
static struct full_ns0_flowStatistics *xmlTextReaderReadNs0FlowStatisticsType(xmlTextReaderPtr reader);

/**
 * Writes a FlowStatistics to XML.
 *
 * @param writer The XML writer.
 * @param _flowStatistics The FlowStatistics to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0FlowStatisticsType(xmlTextWriterPtr writer, struct full_ns0_flowStatistics *_flowStatistics);

/**
 * Frees the elements of a FlowStatistics.
 *
 * @param _flowStatistics The FlowStatistics to free.
 */
static void freeNs0FlowStatisticsType(struct full_ns0_flowStatistics *_flowStatistics);

#endif /* DEF_full_ns0_flowStatistics_H */
#ifndef DEF_full_ns0_portStatistics_H
#define DEF_full_ns0_portStatistics_H

/**
 * (no documentation provided)
 */
struct full_ns0_portStatistics {


  /**
   * (no documentation provided)
   */
  struct full_ns0_node *node;

  /**
   * (no documentation provided)
   */
  struct full_ns0_nodeConnectorStatistics *portStats;

  /**
   * Size of the portStats array.
   */
  int _sizeof_portStats;
};

/**
 * Reads a PortStatistics element from XML. The element to be read is "portStatistics", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The PortStatistics, or NULL in case of error.
 */
struct full_ns0_portStatistics *xml_read_full_ns0_portStatistics(xmlTextReaderPtr reader);

/**
 * Writes a PortStatistics to XML under element name "portStatistics".
 *
 * @param writer The XML writer.
 * @param _portStatistics The PortStatistics to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
int xml_write_full_ns0_portStatistics(xmlTextWriterPtr writer, struct full_ns0_portStatistics *_portStatistics);

/**
 * Frees a PortStatistics.
 *
 * @param _portStatistics The PortStatistics to free.
 */
void free_full_ns0_portStatistics(struct full_ns0_portStatistics *_portStatistics);

/**
 * Reads a PortStatistics element from XML. The element to be read is "portStatistics", and
 * it is assumed that the reader is already pointing to the element.
 *
 * @param reader The XML reader.
 * @return The PortStatistics, or NULL in case of error.
 */
struct full_ns0_portStatistics *xmlTextReaderReadNs0PortStatisticsElement(xmlTextReaderPtr reader);

/**
 * Writes a PortStatistics to XML under element name "portStatistics".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _portStatistics The PortStatistics to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0PortStatisticsElement(xmlTextWriterPtr writer, struct full_ns0_portStatistics *_portStatistics);

/**
 * Writes a PortStatistics to XML under element name "portStatistics".
 *
 * @param writer The XML writer.
 * @param _portStatistics The PortStatistics to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0PortStatisticsElementNS(xmlTextWriterPtr writer, struct full_ns0_portStatistics *_portStatistics, int writeNamespaces);

/**
 * Frees the children of a PortStatistics.
 *
 * @param _portStatistics The PortStatistics whose children are to be free.
 */
static void freeNs0PortStatisticsElement(struct full_ns0_portStatistics *_portStatistics);

/**
 * Reads a PortStatistics from XML. The reader is assumed to be at the start element.
 *
 * @param reader The XML reader.
 * @return The PortStatistics, or NULL in case of error.
 */
static struct full_ns0_portStatistics *xmlTextReaderReadNs0PortStatisticsType(xmlTextReaderPtr reader);

/**
 * Writes a PortStatistics to XML.
 *
 * @param writer The XML writer.
 * @param _portStatistics The PortStatistics to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0PortStatisticsType(xmlTextWriterPtr writer, struct full_ns0_portStatistics *_portStatistics);

/**
 * Frees the elements of a PortStatistics.
 *
 * @param _portStatistics The PortStatistics to free.
 */
static void freeNs0PortStatisticsType(struct full_ns0_portStatistics *_portStatistics);

#endif /* DEF_full_ns0_portStatistics_H */
#ifndef DEF_full_ns0_tableStatistics_H
#define DEF_full_ns0_tableStatistics_H

/**
 * (no documentation provided)
 */
struct full_ns0_tableStatistics {


  /**
   * (no documentation provided)
   */
  struct full_ns0_node *node;

  /**
   * (no documentation provided)
   */
  struct full_ns0_nodeTableStatistics *tableStats;

  /**
   * Size of the tableStats array.
   */
  int _sizeof_tableStats;
};

/**
 * Reads a TableStatistics element from XML. The element to be read is "tableStatistics", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The TableStatistics, or NULL in case of error.
 */
struct full_ns0_tableStatistics *xml_read_full_ns0_tableStatistics(xmlTextReaderPtr reader);

/**
 * Writes a TableStatistics to XML under element name "tableStatistics".
 *
 * @param writer The XML writer.
 * @param _tableStatistics The TableStatistics to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
int xml_write_full_ns0_tableStatistics(xmlTextWriterPtr writer, struct full_ns0_tableStatistics *_tableStatistics);

/**
 * Frees a TableStatistics.
 *
 * @param _tableStatistics The TableStatistics to free.
 */
void free_full_ns0_tableStatistics(struct full_ns0_tableStatistics *_tableStatistics);

/**
 * Reads a TableStatistics element from XML. The element to be read is "tableStatistics", and
 * it is assumed that the reader is already pointing to the element.
 *
 * @param reader The XML reader.
 * @return The TableStatistics, or NULL in case of error.
 */
struct full_ns0_tableStatistics *xmlTextReaderReadNs0TableStatisticsElement(xmlTextReaderPtr reader);

/**
 * Writes a TableStatistics to XML under element name "tableStatistics".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _tableStatistics The TableStatistics to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0TableStatisticsElement(xmlTextWriterPtr writer, struct full_ns0_tableStatistics *_tableStatistics);

/**
 * Writes a TableStatistics to XML under element name "tableStatistics".
 *
 * @param writer The XML writer.
 * @param _tableStatistics The TableStatistics to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0TableStatisticsElementNS(xmlTextWriterPtr writer, struct full_ns0_tableStatistics *_tableStatistics, int writeNamespaces);

/**
 * Frees the children of a TableStatistics.
 *
 * @param _tableStatistics The TableStatistics whose children are to be free.
 */
static void freeNs0TableStatisticsElement(struct full_ns0_tableStatistics *_tableStatistics);

/**
 * Reads a TableStatistics from XML. The reader is assumed to be at the start element.
 *
 * @param reader The XML reader.
 * @return The TableStatistics, or NULL in case of error.
 */
static struct full_ns0_tableStatistics *xmlTextReaderReadNs0TableStatisticsType(xmlTextReaderPtr reader);

/**
 * Writes a TableStatistics to XML.
 *
 * @param writer The XML writer.
 * @param _tableStatistics The TableStatistics to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0TableStatisticsType(xmlTextWriterPtr writer, struct full_ns0_tableStatistics *_tableStatistics);

/**
 * Frees the elements of a TableStatistics.
 *
 * @param _tableStatistics The TableStatistics to free.
 */
static void freeNs0TableStatisticsType(struct full_ns0_tableStatistics *_tableStatistics);

#endif /* DEF_full_ns0_tableStatistics_H */
#ifndef DEF_full_ns0_controller_M
#define DEF_full_ns0_controller_M

/**
 * Reads a Controller element from XML. The element to be read is "controller", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The Controller, or NULL in case of error.
 */
struct full_ns0_controller *xml_read_full_ns0_controller(xmlTextReaderPtr reader) {
  int status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
  return xmlTextReaderReadNs0ControllerElement(reader);
}

/**
 * Writes a Controller to XML under element name "controller".
 *
 * @param writer The XML writer.
 * @param _controller The Controller to write.
 * @return 1 if successful, 0 otherwise.
 */
int xml_write_full_ns0_controller(xmlTextWriterPtr writer, struct full_ns0_controller *_controller) {
  return xmlTextWriterWriteNs0ControllerElementNS(writer, _controller, 1);
}

/**
 * Frees a Controller.
 *
 * @param _controller The Controller to free.
 */
void free_full_ns0_controller(struct full_ns0_controller *_controller) {
  freeNs0ControllerType(_controller);
  free(_controller);
}

/**
 * Reads a Controller element from XML. The element to be read is "controller", and
 * it is assumed that the reader is pointing to that element.
 *
 * @param reader The XML reader.
 * @return The Controller, or NULL in case of error.
 */
struct full_ns0_controller *xmlTextReaderReadNs0ControllerElement(xmlTextReaderPtr reader) {
  struct full_ns0_controller *_controller = NULL;

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "controller", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Attempting to read root element {}controller.\n");
#endif
    _controller = xmlTextReaderReadNs0ControllerType(reader);
  }
#if DEBUG_ENUNCIATE
  if (_controller == NULL) {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      printf("attempt to read {}controller failed. current element: {}%s\n",  xmlTextReaderConstLocalName(reader));
    }
    else {
      printf("attempt to read {}controller failed. current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
    }
  }
#endif

  return _controller;
}

/**
 * Writes a Controller to XML under element name "controller".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _controller The Controller to write.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0ControllerElement(xmlTextWriterPtr writer, struct full_ns0_controller *_controller) {
  return xmlTextWriterWriteNs0ControllerElementNS(writer, _controller, 0);
}

/**
 * Writes a Controller to XML under element name "controller".
 *
 * @param writer The XML writer.
 * @param _controller The Controller to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0ControllerElementNS(xmlTextWriterPtr writer, struct full_ns0_controller *_controller, int writeNamespaces) {
  int totalBytes = 0;
  int status;

  status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "controller", NULL);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write start element {}controller. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

#if DEBUG_ENUNCIATE > 1
  printf("writing type {}controller for root element {}controller...\n");
#endif
  status = xmlTextWriterWriteNs0ControllerType(writer, _controller);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write type for start element {}controller. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  status = xmlTextWriterEndElement(writer);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to end element {}controller. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  return totalBytes;
}

/**
 * Frees the children of a Controller.
 *
 * @param _controller The Controller whose children are to be free.
 */
static void freeNs0ControllerElement(struct full_ns0_controller *_controller) {
  freeNs0ControllerType(_controller);
}

/**
 * Reads a Controller from XML. The reader is assumed to be at the start element.
 *
 * @return the Controller, or NULL in case of error.
 */
static struct full_ns0_controller *xmlTextReaderReadNs0ControllerType(xmlTextReaderPtr reader) {
  int status, depth;
  void *_child_accessor;
  struct full_ns0_controller *_controller = calloc(1, sizeof(struct full_ns0_controller));




  return _controller;
}

/**
 * Writes a Controller to XML.
 *
 * @param writer The XML writer.
 * @param _controller The Controller to write.
 * @return The total bytes written, or -1 on error;
 */
static int xmlTextWriterWriteNs0ControllerType(xmlTextWriterPtr writer, struct full_ns0_controller *_controller) {
  int status, totalBytes = 0, i;
  xmlChar *binaryData;

  return totalBytes;
}

/**
 * Frees the elements of a Controller.
 *
 * @param _controller The Controller to free.
 */
static void freeNs0ControllerType(struct full_ns0_controller *_controller) {
  int i;
}
#endif /* DEF_full_ns0_controller_M */
#ifndef DEF_full_ns0_drop_M
#define DEF_full_ns0_drop_M

/**
 * Reads a Drop element from XML. The element to be read is "drop", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The Drop, or NULL in case of error.
 */
struct full_ns0_drop *xml_read_full_ns0_drop(xmlTextReaderPtr reader) {
  int status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
  return xmlTextReaderReadNs0DropElement(reader);
}

/**
 * Writes a Drop to XML under element name "drop".
 *
 * @param writer The XML writer.
 * @param _drop The Drop to write.
 * @return 1 if successful, 0 otherwise.
 */
int xml_write_full_ns0_drop(xmlTextWriterPtr writer, struct full_ns0_drop *_drop) {
  return xmlTextWriterWriteNs0DropElementNS(writer, _drop, 1);
}

/**
 * Frees a Drop.
 *
 * @param _drop The Drop to free.
 */
void free_full_ns0_drop(struct full_ns0_drop *_drop) {
  freeNs0DropType(_drop);
  free(_drop);
}

/**
 * Reads a Drop element from XML. The element to be read is "drop", and
 * it is assumed that the reader is pointing to that element.
 *
 * @param reader The XML reader.
 * @return The Drop, or NULL in case of error.
 */
struct full_ns0_drop *xmlTextReaderReadNs0DropElement(xmlTextReaderPtr reader) {
  struct full_ns0_drop *_drop = NULL;

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "drop", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Attempting to read root element {}drop.\n");
#endif
    _drop = xmlTextReaderReadNs0DropType(reader);
  }
#if DEBUG_ENUNCIATE
  if (_drop == NULL) {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      printf("attempt to read {}drop failed. current element: {}%s\n",  xmlTextReaderConstLocalName(reader));
    }
    else {
      printf("attempt to read {}drop failed. current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
    }
  }
#endif

  return _drop;
}

/**
 * Writes a Drop to XML under element name "drop".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _drop The Drop to write.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0DropElement(xmlTextWriterPtr writer, struct full_ns0_drop *_drop) {
  return xmlTextWriterWriteNs0DropElementNS(writer, _drop, 0);
}

/**
 * Writes a Drop to XML under element name "drop".
 *
 * @param writer The XML writer.
 * @param _drop The Drop to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0DropElementNS(xmlTextWriterPtr writer, struct full_ns0_drop *_drop, int writeNamespaces) {
  int totalBytes = 0;
  int status;

  status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "drop", NULL);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write start element {}drop. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

#if DEBUG_ENUNCIATE > 1
  printf("writing type {}drop for root element {}drop...\n");
#endif
  status = xmlTextWriterWriteNs0DropType(writer, _drop);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write type for start element {}drop. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  status = xmlTextWriterEndElement(writer);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to end element {}drop. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  return totalBytes;
}

/**
 * Frees the children of a Drop.
 *
 * @param _drop The Drop whose children are to be free.
 */
static void freeNs0DropElement(struct full_ns0_drop *_drop) {
  freeNs0DropType(_drop);
}

/**
 * Reads a Drop from XML. The reader is assumed to be at the start element.
 *
 * @return the Drop, or NULL in case of error.
 */
static struct full_ns0_drop *xmlTextReaderReadNs0DropType(xmlTextReaderPtr reader) {
  int status, depth;
  void *_child_accessor;
  struct full_ns0_drop *_drop = calloc(1, sizeof(struct full_ns0_drop));




  return _drop;
}

/**
 * Writes a Drop to XML.
 *
 * @param writer The XML writer.
 * @param _drop The Drop to write.
 * @return The total bytes written, or -1 on error;
 */
static int xmlTextWriterWriteNs0DropType(xmlTextWriterPtr writer, struct full_ns0_drop *_drop) {
  int status, totalBytes = 0, i;
  xmlChar *binaryData;

  return totalBytes;
}

/**
 * Frees the elements of a Drop.
 *
 * @param _drop The Drop to free.
 */
static void freeNs0DropType(struct full_ns0_drop *_drop) {
  int i;
}
#endif /* DEF_full_ns0_drop_M */
#ifndef DEF_full_ns0_flood_M
#define DEF_full_ns0_flood_M

/**
 * Reads a Flood element from XML. The element to be read is "flood", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The Flood, or NULL in case of error.
 */
struct full_ns0_flood *xml_read_full_ns0_flood(xmlTextReaderPtr reader) {
  int status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
  return xmlTextReaderReadNs0FloodElement(reader);
}

/**
 * Writes a Flood to XML under element name "flood".
 *
 * @param writer The XML writer.
 * @param _flood The Flood to write.
 * @return 1 if successful, 0 otherwise.
 */
int xml_write_full_ns0_flood(xmlTextWriterPtr writer, struct full_ns0_flood *_flood) {
  return xmlTextWriterWriteNs0FloodElementNS(writer, _flood, 1);
}

/**
 * Frees a Flood.
 *
 * @param _flood The Flood to free.
 */
void free_full_ns0_flood(struct full_ns0_flood *_flood) {
  freeNs0FloodType(_flood);
  free(_flood);
}

/**
 * Reads a Flood element from XML. The element to be read is "flood", and
 * it is assumed that the reader is pointing to that element.
 *
 * @param reader The XML reader.
 * @return The Flood, or NULL in case of error.
 */
struct full_ns0_flood *xmlTextReaderReadNs0FloodElement(xmlTextReaderPtr reader) {
  struct full_ns0_flood *_flood = NULL;

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "flood", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Attempting to read root element {}flood.\n");
#endif
    _flood = xmlTextReaderReadNs0FloodType(reader);
  }
#if DEBUG_ENUNCIATE
  if (_flood == NULL) {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      printf("attempt to read {}flood failed. current element: {}%s\n",  xmlTextReaderConstLocalName(reader));
    }
    else {
      printf("attempt to read {}flood failed. current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
    }
  }
#endif

  return _flood;
}

/**
 * Writes a Flood to XML under element name "flood".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _flood The Flood to write.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0FloodElement(xmlTextWriterPtr writer, struct full_ns0_flood *_flood) {
  return xmlTextWriterWriteNs0FloodElementNS(writer, _flood, 0);
}

/**
 * Writes a Flood to XML under element name "flood".
 *
 * @param writer The XML writer.
 * @param _flood The Flood to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0FloodElementNS(xmlTextWriterPtr writer, struct full_ns0_flood *_flood, int writeNamespaces) {
  int totalBytes = 0;
  int status;

  status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "flood", NULL);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write start element {}flood. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

#if DEBUG_ENUNCIATE > 1
  printf("writing type {}flood for root element {}flood...\n");
#endif
  status = xmlTextWriterWriteNs0FloodType(writer, _flood);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write type for start element {}flood. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  status = xmlTextWriterEndElement(writer);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to end element {}flood. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  return totalBytes;
}

/**
 * Frees the children of a Flood.
 *
 * @param _flood The Flood whose children are to be free.
 */
static void freeNs0FloodElement(struct full_ns0_flood *_flood) {
  freeNs0FloodType(_flood);
}

/**
 * Reads a Flood from XML. The reader is assumed to be at the start element.
 *
 * @return the Flood, or NULL in case of error.
 */
static struct full_ns0_flood *xmlTextReaderReadNs0FloodType(xmlTextReaderPtr reader) {
  int status, depth;
  void *_child_accessor;
  struct full_ns0_flood *_flood = calloc(1, sizeof(struct full_ns0_flood));




  return _flood;
}

/**
 * Writes a Flood to XML.
 *
 * @param writer The XML writer.
 * @param _flood The Flood to write.
 * @return The total bytes written, or -1 on error;
 */
static int xmlTextWriterWriteNs0FloodType(xmlTextWriterPtr writer, struct full_ns0_flood *_flood) {
  int status, totalBytes = 0, i;
  xmlChar *binaryData;

  return totalBytes;
}

/**
 * Frees the elements of a Flood.
 *
 * @param _flood The Flood to free.
 */
static void freeNs0FloodType(struct full_ns0_flood *_flood) {
  int i;
}
#endif /* DEF_full_ns0_flood_M */
#ifndef DEF_full_ns0_floodAll_M
#define DEF_full_ns0_floodAll_M

/**
 * Reads a FloodAll element from XML. The element to be read is "floodAll", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The FloodAll, or NULL in case of error.
 */
struct full_ns0_floodAll *xml_read_full_ns0_floodAll(xmlTextReaderPtr reader) {
  int status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
  return xmlTextReaderReadNs0FloodAllElement(reader);
}

/**
 * Writes a FloodAll to XML under element name "floodAll".
 *
 * @param writer The XML writer.
 * @param _floodAll The FloodAll to write.
 * @return 1 if successful, 0 otherwise.
 */
int xml_write_full_ns0_floodAll(xmlTextWriterPtr writer, struct full_ns0_floodAll *_floodAll) {
  return xmlTextWriterWriteNs0FloodAllElementNS(writer, _floodAll, 1);
}

/**
 * Frees a FloodAll.
 *
 * @param _floodAll The FloodAll to free.
 */
void free_full_ns0_floodAll(struct full_ns0_floodAll *_floodAll) {
  freeNs0FloodAllType(_floodAll);
  free(_floodAll);
}

/**
 * Reads a FloodAll element from XML. The element to be read is "floodAll", and
 * it is assumed that the reader is pointing to that element.
 *
 * @param reader The XML reader.
 * @return The FloodAll, or NULL in case of error.
 */
struct full_ns0_floodAll *xmlTextReaderReadNs0FloodAllElement(xmlTextReaderPtr reader) {
  struct full_ns0_floodAll *_floodAll = NULL;

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "floodAll", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Attempting to read root element {}floodAll.\n");
#endif
    _floodAll = xmlTextReaderReadNs0FloodAllType(reader);
  }
#if DEBUG_ENUNCIATE
  if (_floodAll == NULL) {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      printf("attempt to read {}floodAll failed. current element: {}%s\n",  xmlTextReaderConstLocalName(reader));
    }
    else {
      printf("attempt to read {}floodAll failed. current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
    }
  }
#endif

  return _floodAll;
}

/**
 * Writes a FloodAll to XML under element name "floodAll".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _floodAll The FloodAll to write.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0FloodAllElement(xmlTextWriterPtr writer, struct full_ns0_floodAll *_floodAll) {
  return xmlTextWriterWriteNs0FloodAllElementNS(writer, _floodAll, 0);
}

/**
 * Writes a FloodAll to XML under element name "floodAll".
 *
 * @param writer The XML writer.
 * @param _floodAll The FloodAll to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0FloodAllElementNS(xmlTextWriterPtr writer, struct full_ns0_floodAll *_floodAll, int writeNamespaces) {
  int totalBytes = 0;
  int status;

  status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "floodAll", NULL);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write start element {}floodAll. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

#if DEBUG_ENUNCIATE > 1
  printf("writing type {}floodAll for root element {}floodAll...\n");
#endif
  status = xmlTextWriterWriteNs0FloodAllType(writer, _floodAll);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write type for start element {}floodAll. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  status = xmlTextWriterEndElement(writer);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to end element {}floodAll. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  return totalBytes;
}

/**
 * Frees the children of a FloodAll.
 *
 * @param _floodAll The FloodAll whose children are to be free.
 */
static void freeNs0FloodAllElement(struct full_ns0_floodAll *_floodAll) {
  freeNs0FloodAllType(_floodAll);
}

/**
 * Reads a FloodAll from XML. The reader is assumed to be at the start element.
 *
 * @return the FloodAll, or NULL in case of error.
 */
static struct full_ns0_floodAll *xmlTextReaderReadNs0FloodAllType(xmlTextReaderPtr reader) {
  int status, depth;
  void *_child_accessor;
  struct full_ns0_floodAll *_floodAll = calloc(1, sizeof(struct full_ns0_floodAll));




  return _floodAll;
}

/**
 * Writes a FloodAll to XML.
 *
 * @param writer The XML writer.
 * @param _floodAll The FloodAll to write.
 * @return The total bytes written, or -1 on error;
 */
static int xmlTextWriterWriteNs0FloodAllType(xmlTextWriterPtr writer, struct full_ns0_floodAll *_floodAll) {
  int status, totalBytes = 0, i;
  xmlChar *binaryData;

  return totalBytes;
}

/**
 * Frees the elements of a FloodAll.
 *
 * @param _floodAll The FloodAll to free.
 */
static void freeNs0FloodAllType(struct full_ns0_floodAll *_floodAll) {
  int i;
}
#endif /* DEF_full_ns0_floodAll_M */
#ifndef DEF_full_ns0_hwPath_M
#define DEF_full_ns0_hwPath_M

/**
 * Reads a HwPath element from XML. The element to be read is "hwPath", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The HwPath, or NULL in case of error.
 */
struct full_ns0_hwPath *xml_read_full_ns0_hwPath(xmlTextReaderPtr reader) {
  int status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
  return xmlTextReaderReadNs0HwPathElement(reader);
}

/**
 * Writes a HwPath to XML under element name "hwPath".
 *
 * @param writer The XML writer.
 * @param _hwPath The HwPath to write.
 * @return 1 if successful, 0 otherwise.
 */
int xml_write_full_ns0_hwPath(xmlTextWriterPtr writer, struct full_ns0_hwPath *_hwPath) {
  return xmlTextWriterWriteNs0HwPathElementNS(writer, _hwPath, 1);
}

/**
 * Frees a HwPath.
 *
 * @param _hwPath The HwPath to free.
 */
void free_full_ns0_hwPath(struct full_ns0_hwPath *_hwPath) {
  freeNs0HwPathType(_hwPath);
  free(_hwPath);
}

/**
 * Reads a HwPath element from XML. The element to be read is "hwPath", and
 * it is assumed that the reader is pointing to that element.
 *
 * @param reader The XML reader.
 * @return The HwPath, or NULL in case of error.
 */
struct full_ns0_hwPath *xmlTextReaderReadNs0HwPathElement(xmlTextReaderPtr reader) {
  struct full_ns0_hwPath *_hwPath = NULL;

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "hwPath", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Attempting to read root element {}hwPath.\n");
#endif
    _hwPath = xmlTextReaderReadNs0HwPathType(reader);
  }
#if DEBUG_ENUNCIATE
  if (_hwPath == NULL) {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      printf("attempt to read {}hwPath failed. current element: {}%s\n",  xmlTextReaderConstLocalName(reader));
    }
    else {
      printf("attempt to read {}hwPath failed. current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
    }
  }
#endif

  return _hwPath;
}

/**
 * Writes a HwPath to XML under element name "hwPath".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _hwPath The HwPath to write.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0HwPathElement(xmlTextWriterPtr writer, struct full_ns0_hwPath *_hwPath) {
  return xmlTextWriterWriteNs0HwPathElementNS(writer, _hwPath, 0);
}

/**
 * Writes a HwPath to XML under element name "hwPath".
 *
 * @param writer The XML writer.
 * @param _hwPath The HwPath to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0HwPathElementNS(xmlTextWriterPtr writer, struct full_ns0_hwPath *_hwPath, int writeNamespaces) {
  int totalBytes = 0;
  int status;

  status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "hwPath", NULL);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write start element {}hwPath. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

#if DEBUG_ENUNCIATE > 1
  printf("writing type {}hwPath for root element {}hwPath...\n");
#endif
  status = xmlTextWriterWriteNs0HwPathType(writer, _hwPath);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write type for start element {}hwPath. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  status = xmlTextWriterEndElement(writer);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to end element {}hwPath. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  return totalBytes;
}

/**
 * Frees the children of a HwPath.
 *
 * @param _hwPath The HwPath whose children are to be free.
 */
static void freeNs0HwPathElement(struct full_ns0_hwPath *_hwPath) {
  freeNs0HwPathType(_hwPath);
}

/**
 * Reads a HwPath from XML. The reader is assumed to be at the start element.
 *
 * @return the HwPath, or NULL in case of error.
 */
static struct full_ns0_hwPath *xmlTextReaderReadNs0HwPathType(xmlTextReaderPtr reader) {
  int status, depth;
  void *_child_accessor;
  struct full_ns0_hwPath *_hwPath = calloc(1, sizeof(struct full_ns0_hwPath));




  return _hwPath;
}

/**
 * Writes a HwPath to XML.
 *
 * @param writer The XML writer.
 * @param _hwPath The HwPath to write.
 * @return The total bytes written, or -1 on error;
 */
static int xmlTextWriterWriteNs0HwPathType(xmlTextWriterPtr writer, struct full_ns0_hwPath *_hwPath) {
  int status, totalBytes = 0, i;
  xmlChar *binaryData;

  return totalBytes;
}

/**
 * Frees the elements of a HwPath.
 *
 * @param _hwPath The HwPath to free.
 */
static void freeNs0HwPathType(struct full_ns0_hwPath *_hwPath) {
  int i;
}
#endif /* DEF_full_ns0_hwPath_M */
#ifndef DEF_full_ns0_loopback_M
#define DEF_full_ns0_loopback_M

/**
 * Reads a Loopback element from XML. The element to be read is "loopback", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The Loopback, or NULL in case of error.
 */
struct full_ns0_loopback *xml_read_full_ns0_loopback(xmlTextReaderPtr reader) {
  int status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
  return xmlTextReaderReadNs0LoopbackElement(reader);
}

/**
 * Writes a Loopback to XML under element name "loopback".
 *
 * @param writer The XML writer.
 * @param _loopback The Loopback to write.
 * @return 1 if successful, 0 otherwise.
 */
int xml_write_full_ns0_loopback(xmlTextWriterPtr writer, struct full_ns0_loopback *_loopback) {
  return xmlTextWriterWriteNs0LoopbackElementNS(writer, _loopback, 1);
}

/**
 * Frees a Loopback.
 *
 * @param _loopback The Loopback to free.
 */
void free_full_ns0_loopback(struct full_ns0_loopback *_loopback) {
  freeNs0LoopbackType(_loopback);
  free(_loopback);
}

/**
 * Reads a Loopback element from XML. The element to be read is "loopback", and
 * it is assumed that the reader is pointing to that element.
 *
 * @param reader The XML reader.
 * @return The Loopback, or NULL in case of error.
 */
struct full_ns0_loopback *xmlTextReaderReadNs0LoopbackElement(xmlTextReaderPtr reader) {
  struct full_ns0_loopback *_loopback = NULL;

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "loopback", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Attempting to read root element {}loopback.\n");
#endif
    _loopback = xmlTextReaderReadNs0LoopbackType(reader);
  }
#if DEBUG_ENUNCIATE
  if (_loopback == NULL) {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      printf("attempt to read {}loopback failed. current element: {}%s\n",  xmlTextReaderConstLocalName(reader));
    }
    else {
      printf("attempt to read {}loopback failed. current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
    }
  }
#endif

  return _loopback;
}

/**
 * Writes a Loopback to XML under element name "loopback".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _loopback The Loopback to write.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0LoopbackElement(xmlTextWriterPtr writer, struct full_ns0_loopback *_loopback) {
  return xmlTextWriterWriteNs0LoopbackElementNS(writer, _loopback, 0);
}

/**
 * Writes a Loopback to XML under element name "loopback".
 *
 * @param writer The XML writer.
 * @param _loopback The Loopback to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0LoopbackElementNS(xmlTextWriterPtr writer, struct full_ns0_loopback *_loopback, int writeNamespaces) {
  int totalBytes = 0;
  int status;

  status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "loopback", NULL);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write start element {}loopback. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

#if DEBUG_ENUNCIATE > 1
  printf("writing type {}loopback for root element {}loopback...\n");
#endif
  status = xmlTextWriterWriteNs0LoopbackType(writer, _loopback);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write type for start element {}loopback. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  status = xmlTextWriterEndElement(writer);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to end element {}loopback. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  return totalBytes;
}

/**
 * Frees the children of a Loopback.
 *
 * @param _loopback The Loopback whose children are to be free.
 */
static void freeNs0LoopbackElement(struct full_ns0_loopback *_loopback) {
  freeNs0LoopbackType(_loopback);
}

/**
 * Reads a Loopback from XML. The reader is assumed to be at the start element.
 *
 * @return the Loopback, or NULL in case of error.
 */
static struct full_ns0_loopback *xmlTextReaderReadNs0LoopbackType(xmlTextReaderPtr reader) {
  int status, depth;
  void *_child_accessor;
  struct full_ns0_loopback *_loopback = calloc(1, sizeof(struct full_ns0_loopback));




  return _loopback;
}

/**
 * Writes a Loopback to XML.
 *
 * @param writer The XML writer.
 * @param _loopback The Loopback to write.
 * @return The total bytes written, or -1 on error;
 */
static int xmlTextWriterWriteNs0LoopbackType(xmlTextWriterPtr writer, struct full_ns0_loopback *_loopback) {
  int status, totalBytes = 0, i;
  xmlChar *binaryData;

  return totalBytes;
}

/**
 * Frees the elements of a Loopback.
 *
 * @param _loopback The Loopback to free.
 */
static void freeNs0LoopbackType(struct full_ns0_loopback *_loopback) {
  int i;
}
#endif /* DEF_full_ns0_loopback_M */
#ifndef DEF_full_ns0_output_M
#define DEF_full_ns0_output_M

/**
 * Reads a Output element from XML. The element to be read is "output", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The Output, or NULL in case of error.
 */
struct full_ns0_output *xml_read_full_ns0_output(xmlTextReaderPtr reader) {
  int status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
  return xmlTextReaderReadNs0OutputElement(reader);
}

/**
 * Writes a Output to XML under element name "output".
 *
 * @param writer The XML writer.
 * @param _output The Output to write.
 * @return 1 if successful, 0 otherwise.
 */
int xml_write_full_ns0_output(xmlTextWriterPtr writer, struct full_ns0_output *_output) {
  return xmlTextWriterWriteNs0OutputElementNS(writer, _output, 1);
}

/**
 * Frees a Output.
 *
 * @param _output The Output to free.
 */
void free_full_ns0_output(struct full_ns0_output *_output) {
  freeNs0OutputType(_output);
  free(_output);
}

/**
 * Reads a Output element from XML. The element to be read is "output", and
 * it is assumed that the reader is pointing to that element.
 *
 * @param reader The XML reader.
 * @return The Output, or NULL in case of error.
 */
struct full_ns0_output *xmlTextReaderReadNs0OutputElement(xmlTextReaderPtr reader) {
  struct full_ns0_output *_output = NULL;

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "output", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Attempting to read root element {}output.\n");
#endif
    _output = xmlTextReaderReadNs0OutputType(reader);
  }
#if DEBUG_ENUNCIATE
  if (_output == NULL) {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      printf("attempt to read {}output failed. current element: {}%s\n",  xmlTextReaderConstLocalName(reader));
    }
    else {
      printf("attempt to read {}output failed. current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
    }
  }
#endif

  return _output;
}

/**
 * Writes a Output to XML under element name "output".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _output The Output to write.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0OutputElement(xmlTextWriterPtr writer, struct full_ns0_output *_output) {
  return xmlTextWriterWriteNs0OutputElementNS(writer, _output, 0);
}

/**
 * Writes a Output to XML under element name "output".
 *
 * @param writer The XML writer.
 * @param _output The Output to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0OutputElementNS(xmlTextWriterPtr writer, struct full_ns0_output *_output, int writeNamespaces) {
  int totalBytes = 0;
  int status;

  status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "output", NULL);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write start element {}output. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

#if DEBUG_ENUNCIATE > 1
  printf("writing type {}output for root element {}output...\n");
#endif
  status = xmlTextWriterWriteNs0OutputType(writer, _output);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write type for start element {}output. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  status = xmlTextWriterEndElement(writer);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to end element {}output. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  return totalBytes;
}

/**
 * Frees the children of a Output.
 *
 * @param _output The Output whose children are to be free.
 */
static void freeNs0OutputElement(struct full_ns0_output *_output) {
  freeNs0OutputType(_output);
}

/**
 * Reads a Output from XML. The reader is assumed to be at the start element.
 *
 * @return the Output, or NULL in case of error.
 */
static struct full_ns0_output *xmlTextReaderReadNs0OutputType(xmlTextReaderPtr reader) {
  int status, depth;
  void *_child_accessor;
  struct full_ns0_output *_output = calloc(1, sizeof(struct full_ns0_output));



  if (xmlTextReaderIsEmptyElement(reader) == 0) {
    depth = xmlTextReaderDepth(reader);//track the depth.
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);

    while (xmlTextReaderDepth(reader) > depth) {
      if (status < 1) {
        //panic: XML read error.
#if DEBUG_ENUNCIATE
        printf("Failure to advance to next child element.\n");
#endif
        freeNs0OutputType(_output);
        free(_output);
        return NULL;
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "port", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}port of type {}nodeConnector.\n");
#endif
        _child_accessor = xmlTextReaderReadNs0NodeConnectorType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}port of type {}nodeConnector.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0OutputType(_output);
          free(_output);
          return NULL;
        }

        _output->port = ((struct full_ns0_nodeConnector*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else {
#if DEBUG_ENUNCIATE > 1
        if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
          printf("unknown child element {}%s for type {}output.  Skipping...\n",  xmlTextReaderConstLocalName(reader));
        }
        else {
          printf("unknown child element {%s}%s for type {}output. Skipping...\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
        }
#endif
        status = xmlTextReaderSkipElement(reader);
      }
    }
  }

  return _output;
}

/**
 * Writes a Output to XML.
 *
 * @param writer The XML writer.
 * @param _output The Output to write.
 * @return The total bytes written, or -1 on error;
 */
static int xmlTextWriterWriteNs0OutputType(xmlTextWriterPtr writer, struct full_ns0_output *_output) {
  int status, totalBytes = 0, i;
  xmlChar *binaryData;
  if (_output->port != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "port", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}port. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {}nodeConnector for element {}port...\n");
#endif
    status = xmlTextWriterWriteNs0NodeConnectorType(writer, (_output->port));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {}nodeConnector for element {}port. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}port. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }

  return totalBytes;
}

/**
 * Frees the elements of a Output.
 *
 * @param _output The Output to free.
 */
static void freeNs0OutputType(struct full_ns0_output *_output) {
  int i;
  if (_output->port != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor port of type full_ns0_output...\n");
#endif
    freeNs0NodeConnectorType(_output->port);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor port of type full_ns0_output...\n");
#endif
    free(_output->port);
  }
}
#endif /* DEF_full_ns0_output_M */
#ifndef DEF_full_ns0_popVlan_M
#define DEF_full_ns0_popVlan_M

/**
 * Reads a PopVlan element from XML. The element to be read is "popVlan", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The PopVlan, or NULL in case of error.
 */
struct full_ns0_popVlan *xml_read_full_ns0_popVlan(xmlTextReaderPtr reader) {
  int status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
  return xmlTextReaderReadNs0PopVlanElement(reader);
}

/**
 * Writes a PopVlan to XML under element name "popVlan".
 *
 * @param writer The XML writer.
 * @param _popVlan The PopVlan to write.
 * @return 1 if successful, 0 otherwise.
 */
int xml_write_full_ns0_popVlan(xmlTextWriterPtr writer, struct full_ns0_popVlan *_popVlan) {
  return xmlTextWriterWriteNs0PopVlanElementNS(writer, _popVlan, 1);
}

/**
 * Frees a PopVlan.
 *
 * @param _popVlan The PopVlan to free.
 */
void free_full_ns0_popVlan(struct full_ns0_popVlan *_popVlan) {
  freeNs0PopVlanType(_popVlan);
  free(_popVlan);
}

/**
 * Reads a PopVlan element from XML. The element to be read is "popVlan", and
 * it is assumed that the reader is pointing to that element.
 *
 * @param reader The XML reader.
 * @return The PopVlan, or NULL in case of error.
 */
struct full_ns0_popVlan *xmlTextReaderReadNs0PopVlanElement(xmlTextReaderPtr reader) {
  struct full_ns0_popVlan *_popVlan = NULL;

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "popVlan", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Attempting to read root element {}popVlan.\n");
#endif
    _popVlan = xmlTextReaderReadNs0PopVlanType(reader);
  }
#if DEBUG_ENUNCIATE
  if (_popVlan == NULL) {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      printf("attempt to read {}popVlan failed. current element: {}%s\n",  xmlTextReaderConstLocalName(reader));
    }
    else {
      printf("attempt to read {}popVlan failed. current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
    }
  }
#endif

  return _popVlan;
}

/**
 * Writes a PopVlan to XML under element name "popVlan".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _popVlan The PopVlan to write.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0PopVlanElement(xmlTextWriterPtr writer, struct full_ns0_popVlan *_popVlan) {
  return xmlTextWriterWriteNs0PopVlanElementNS(writer, _popVlan, 0);
}

/**
 * Writes a PopVlan to XML under element name "popVlan".
 *
 * @param writer The XML writer.
 * @param _popVlan The PopVlan to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0PopVlanElementNS(xmlTextWriterPtr writer, struct full_ns0_popVlan *_popVlan, int writeNamespaces) {
  int totalBytes = 0;
  int status;

  status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "popVlan", NULL);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write start element {}popVlan. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

#if DEBUG_ENUNCIATE > 1
  printf("writing type {}popVlan for root element {}popVlan...\n");
#endif
  status = xmlTextWriterWriteNs0PopVlanType(writer, _popVlan);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write type for start element {}popVlan. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  status = xmlTextWriterEndElement(writer);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to end element {}popVlan. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  return totalBytes;
}

/**
 * Frees the children of a PopVlan.
 *
 * @param _popVlan The PopVlan whose children are to be free.
 */
static void freeNs0PopVlanElement(struct full_ns0_popVlan *_popVlan) {
  freeNs0PopVlanType(_popVlan);
}

/**
 * Reads a PopVlan from XML. The reader is assumed to be at the start element.
 *
 * @return the PopVlan, or NULL in case of error.
 */
static struct full_ns0_popVlan *xmlTextReaderReadNs0PopVlanType(xmlTextReaderPtr reader) {
  int status, depth;
  void *_child_accessor;
  struct full_ns0_popVlan *_popVlan = calloc(1, sizeof(struct full_ns0_popVlan));




  return _popVlan;
}

/**
 * Writes a PopVlan to XML.
 *
 * @param writer The XML writer.
 * @param _popVlan The PopVlan to write.
 * @return The total bytes written, or -1 on error;
 */
static int xmlTextWriterWriteNs0PopVlanType(xmlTextWriterPtr writer, struct full_ns0_popVlan *_popVlan) {
  int status, totalBytes = 0, i;
  xmlChar *binaryData;

  return totalBytes;
}

/**
 * Frees the elements of a PopVlan.
 *
 * @param _popVlan The PopVlan to free.
 */
static void freeNs0PopVlanType(struct full_ns0_popVlan *_popVlan) {
  int i;
}
#endif /* DEF_full_ns0_popVlan_M */
#ifndef DEF_full_ns0_pushVlan_M
#define DEF_full_ns0_pushVlan_M

/**
 * Reads a PushVlan element from XML. The element to be read is "pushVlan", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The PushVlan, or NULL in case of error.
 */
struct full_ns0_pushVlan *xml_read_full_ns0_pushVlan(xmlTextReaderPtr reader) {
  int status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
  return xmlTextReaderReadNs0PushVlanElement(reader);
}

/**
 * Writes a PushVlan to XML under element name "pushVlan".
 *
 * @param writer The XML writer.
 * @param _pushVlan The PushVlan to write.
 * @return 1 if successful, 0 otherwise.
 */
int xml_write_full_ns0_pushVlan(xmlTextWriterPtr writer, struct full_ns0_pushVlan *_pushVlan) {
  return xmlTextWriterWriteNs0PushVlanElementNS(writer, _pushVlan, 1);
}

/**
 * Frees a PushVlan.
 *
 * @param _pushVlan The PushVlan to free.
 */
void free_full_ns0_pushVlan(struct full_ns0_pushVlan *_pushVlan) {
  freeNs0PushVlanType(_pushVlan);
  free(_pushVlan);
}

/**
 * Reads a PushVlan element from XML. The element to be read is "pushVlan", and
 * it is assumed that the reader is pointing to that element.
 *
 * @param reader The XML reader.
 * @return The PushVlan, or NULL in case of error.
 */
struct full_ns0_pushVlan *xmlTextReaderReadNs0PushVlanElement(xmlTextReaderPtr reader) {
  struct full_ns0_pushVlan *_pushVlan = NULL;

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "pushVlan", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Attempting to read root element {}pushVlan.\n");
#endif
    _pushVlan = xmlTextReaderReadNs0PushVlanType(reader);
  }
#if DEBUG_ENUNCIATE
  if (_pushVlan == NULL) {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      printf("attempt to read {}pushVlan failed. current element: {}%s\n",  xmlTextReaderConstLocalName(reader));
    }
    else {
      printf("attempt to read {}pushVlan failed. current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
    }
  }
#endif

  return _pushVlan;
}

/**
 * Writes a PushVlan to XML under element name "pushVlan".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _pushVlan The PushVlan to write.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0PushVlanElement(xmlTextWriterPtr writer, struct full_ns0_pushVlan *_pushVlan) {
  return xmlTextWriterWriteNs0PushVlanElementNS(writer, _pushVlan, 0);
}

/**
 * Writes a PushVlan to XML under element name "pushVlan".
 *
 * @param writer The XML writer.
 * @param _pushVlan The PushVlan to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0PushVlanElementNS(xmlTextWriterPtr writer, struct full_ns0_pushVlan *_pushVlan, int writeNamespaces) {
  int totalBytes = 0;
  int status;

  status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "pushVlan", NULL);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write start element {}pushVlan. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

#if DEBUG_ENUNCIATE > 1
  printf("writing type {}pushVlan for root element {}pushVlan...\n");
#endif
  status = xmlTextWriterWriteNs0PushVlanType(writer, _pushVlan);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write type for start element {}pushVlan. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  status = xmlTextWriterEndElement(writer);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to end element {}pushVlan. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  return totalBytes;
}

/**
 * Frees the children of a PushVlan.
 *
 * @param _pushVlan The PushVlan whose children are to be free.
 */
static void freeNs0PushVlanElement(struct full_ns0_pushVlan *_pushVlan) {
  freeNs0PushVlanType(_pushVlan);
}

/**
 * Reads a PushVlan from XML. The reader is assumed to be at the start element.
 *
 * @return the PushVlan, or NULL in case of error.
 */
static struct full_ns0_pushVlan *xmlTextReaderReadNs0PushVlanType(xmlTextReaderPtr reader) {
  int status, depth;
  void *_child_accessor;
  struct full_ns0_pushVlan *_pushVlan = calloc(1, sizeof(struct full_ns0_pushVlan));



  if (xmlTextReaderIsEmptyElement(reader) == 0) {
    depth = xmlTextReaderDepth(reader);//track the depth.
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);

    while (xmlTextReaderDepth(reader) > depth) {
      if (status < 1) {
        //panic: XML read error.
#if DEBUG_ENUNCIATE
        printf("Failure to advance to next child element.\n");
#endif
        freeNs0PushVlanType(_pushVlan);
        free(_pushVlan);
        return NULL;
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "VlanHeader", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}VlanHeader of type {http://www.w3.org/2001/XMLSchema}int.\n");
#endif
        _child_accessor = xmlTextReaderReadXsIntType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}VlanHeader of type {http://www.w3.org/2001/XMLSchema}int.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0PushVlanType(_pushVlan);
          free(_pushVlan);
          return NULL;
        }

        _pushVlan->header = *((int*)_child_accessor);
        free(_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else {
#if DEBUG_ENUNCIATE > 1
        if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
          printf("unknown child element {}%s for type {}pushVlan.  Skipping...\n",  xmlTextReaderConstLocalName(reader));
        }
        else {
          printf("unknown child element {%s}%s for type {}pushVlan. Skipping...\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
        }
#endif
        status = xmlTextReaderSkipElement(reader);
      }
    }
  }

  return _pushVlan;
}

/**
 * Writes a PushVlan to XML.
 *
 * @param writer The XML writer.
 * @param _pushVlan The PushVlan to write.
 * @return The total bytes written, or -1 on error;
 */
static int xmlTextWriterWriteNs0PushVlanType(xmlTextWriterPtr writer, struct full_ns0_pushVlan *_pushVlan) {
  int status, totalBytes = 0, i;
  xmlChar *binaryData;
  if (1) { //always write the primitive element.
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "VlanHeader", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}VlanHeader. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}int for element {}VlanHeader...\n");
#endif
    status = xmlTextWriterWriteXsIntType(writer, &(_pushVlan->header));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}int for element {}VlanHeader. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}VlanHeader. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }

  return totalBytes;
}

/**
 * Frees the elements of a PushVlan.
 *
 * @param _pushVlan The PushVlan to free.
 */
static void freeNs0PushVlanType(struct full_ns0_pushVlan *_pushVlan) {
  int i;
}
#endif /* DEF_full_ns0_pushVlan_M */
#ifndef DEF_full_ns0_setDlDst_M
#define DEF_full_ns0_setDlDst_M

/**
 * Reads a SetDlDst element from XML. The element to be read is "setDlDst", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The SetDlDst, or NULL in case of error.
 */
struct full_ns0_setDlDst *xml_read_full_ns0_setDlDst(xmlTextReaderPtr reader) {
  int status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
  return xmlTextReaderReadNs0SetDlDstElement(reader);
}

/**
 * Writes a SetDlDst to XML under element name "setDlDst".
 *
 * @param writer The XML writer.
 * @param _setDlDst The SetDlDst to write.
 * @return 1 if successful, 0 otherwise.
 */
int xml_write_full_ns0_setDlDst(xmlTextWriterPtr writer, struct full_ns0_setDlDst *_setDlDst) {
  return xmlTextWriterWriteNs0SetDlDstElementNS(writer, _setDlDst, 1);
}

/**
 * Frees a SetDlDst.
 *
 * @param _setDlDst The SetDlDst to free.
 */
void free_full_ns0_setDlDst(struct full_ns0_setDlDst *_setDlDst) {
  freeNs0SetDlDstType(_setDlDst);
  free(_setDlDst);
}

/**
 * Reads a SetDlDst element from XML. The element to be read is "setDlDst", and
 * it is assumed that the reader is pointing to that element.
 *
 * @param reader The XML reader.
 * @return The SetDlDst, or NULL in case of error.
 */
struct full_ns0_setDlDst *xmlTextReaderReadNs0SetDlDstElement(xmlTextReaderPtr reader) {
  struct full_ns0_setDlDst *_setDlDst = NULL;

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "setDlDst", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Attempting to read root element {}setDlDst.\n");
#endif
    _setDlDst = xmlTextReaderReadNs0SetDlDstType(reader);
  }
#if DEBUG_ENUNCIATE
  if (_setDlDst == NULL) {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      printf("attempt to read {}setDlDst failed. current element: {}%s\n",  xmlTextReaderConstLocalName(reader));
    }
    else {
      printf("attempt to read {}setDlDst failed. current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
    }
  }
#endif

  return _setDlDst;
}

/**
 * Writes a SetDlDst to XML under element name "setDlDst".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _setDlDst The SetDlDst to write.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0SetDlDstElement(xmlTextWriterPtr writer, struct full_ns0_setDlDst *_setDlDst) {
  return xmlTextWriterWriteNs0SetDlDstElementNS(writer, _setDlDst, 0);
}

/**
 * Writes a SetDlDst to XML under element name "setDlDst".
 *
 * @param writer The XML writer.
 * @param _setDlDst The SetDlDst to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0SetDlDstElementNS(xmlTextWriterPtr writer, struct full_ns0_setDlDst *_setDlDst, int writeNamespaces) {
  int totalBytes = 0;
  int status;

  status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "setDlDst", NULL);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write start element {}setDlDst. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

#if DEBUG_ENUNCIATE > 1
  printf("writing type {}setDlDst for root element {}setDlDst...\n");
#endif
  status = xmlTextWriterWriteNs0SetDlDstType(writer, _setDlDst);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write type for start element {}setDlDst. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  status = xmlTextWriterEndElement(writer);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to end element {}setDlDst. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  return totalBytes;
}

/**
 * Frees the children of a SetDlDst.
 *
 * @param _setDlDst The SetDlDst whose children are to be free.
 */
static void freeNs0SetDlDstElement(struct full_ns0_setDlDst *_setDlDst) {
  freeNs0SetDlDstType(_setDlDst);
}

/**
 * Reads a SetDlDst from XML. The reader is assumed to be at the start element.
 *
 * @return the SetDlDst, or NULL in case of error.
 */
static struct full_ns0_setDlDst *xmlTextReaderReadNs0SetDlDstType(xmlTextReaderPtr reader) {
  int status, depth;
  void *_child_accessor;
  struct full_ns0_setDlDst *_setDlDst = calloc(1, sizeof(struct full_ns0_setDlDst));



  if (xmlTextReaderIsEmptyElement(reader) == 0) {
    depth = xmlTextReaderDepth(reader);//track the depth.
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);

    while (xmlTextReaderDepth(reader) > depth) {
      if (status < 1) {
        //panic: XML read error.
#if DEBUG_ENUNCIATE
        printf("Failure to advance to next child element.\n");
#endif
        freeNs0SetDlDstType(_setDlDst);
        free(_setDlDst);
        return NULL;
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "address", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}address of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}address of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0SetDlDstType(_setDlDst);
          free(_setDlDst);
          return NULL;
        }

        _setDlDst->dlAddressString = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else {
#if DEBUG_ENUNCIATE > 1
        if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
          printf("unknown child element {}%s for type {}setDlDst.  Skipping...\n",  xmlTextReaderConstLocalName(reader));
        }
        else {
          printf("unknown child element {%s}%s for type {}setDlDst. Skipping...\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
        }
#endif
        status = xmlTextReaderSkipElement(reader);
      }
    }
  }

  return _setDlDst;
}

/**
 * Writes a SetDlDst to XML.
 *
 * @param writer The XML writer.
 * @param _setDlDst The SetDlDst to write.
 * @return The total bytes written, or -1 on error;
 */
static int xmlTextWriterWriteNs0SetDlDstType(xmlTextWriterPtr writer, struct full_ns0_setDlDst *_setDlDst) {
  int status, totalBytes = 0, i;
  xmlChar *binaryData;
  if (_setDlDst->dlAddressString != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "address", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}address. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}address...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_setDlDst->dlAddressString));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}address. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}address. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }

  return totalBytes;
}

/**
 * Frees the elements of a SetDlDst.
 *
 * @param _setDlDst The SetDlDst to free.
 */
static void freeNs0SetDlDstType(struct full_ns0_setDlDst *_setDlDst) {
  int i;
  if (_setDlDst->dlAddressString != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor dlAddressString of type full_ns0_setDlDst...\n");
#endif
    freeXsStringType(_setDlDst->dlAddressString);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor dlAddressString of type full_ns0_setDlDst...\n");
#endif
    free(_setDlDst->dlAddressString);
  }
}
#endif /* DEF_full_ns0_setDlDst_M */
#ifndef DEF_full_ns0_setDlSrc_M
#define DEF_full_ns0_setDlSrc_M

/**
 * Reads a SetDlSrc element from XML. The element to be read is "setDlSrc", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The SetDlSrc, or NULL in case of error.
 */
struct full_ns0_setDlSrc *xml_read_full_ns0_setDlSrc(xmlTextReaderPtr reader) {
  int status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
  return xmlTextReaderReadNs0SetDlSrcElement(reader);
}

/**
 * Writes a SetDlSrc to XML under element name "setDlSrc".
 *
 * @param writer The XML writer.
 * @param _setDlSrc The SetDlSrc to write.
 * @return 1 if successful, 0 otherwise.
 */
int xml_write_full_ns0_setDlSrc(xmlTextWriterPtr writer, struct full_ns0_setDlSrc *_setDlSrc) {
  return xmlTextWriterWriteNs0SetDlSrcElementNS(writer, _setDlSrc, 1);
}

/**
 * Frees a SetDlSrc.
 *
 * @param _setDlSrc The SetDlSrc to free.
 */
void free_full_ns0_setDlSrc(struct full_ns0_setDlSrc *_setDlSrc) {
  freeNs0SetDlSrcType(_setDlSrc);
  free(_setDlSrc);
}

/**
 * Reads a SetDlSrc element from XML. The element to be read is "setDlSrc", and
 * it is assumed that the reader is pointing to that element.
 *
 * @param reader The XML reader.
 * @return The SetDlSrc, or NULL in case of error.
 */
struct full_ns0_setDlSrc *xmlTextReaderReadNs0SetDlSrcElement(xmlTextReaderPtr reader) {
  struct full_ns0_setDlSrc *_setDlSrc = NULL;

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "setDlSrc", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Attempting to read root element {}setDlSrc.\n");
#endif
    _setDlSrc = xmlTextReaderReadNs0SetDlSrcType(reader);
  }
#if DEBUG_ENUNCIATE
  if (_setDlSrc == NULL) {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      printf("attempt to read {}setDlSrc failed. current element: {}%s\n",  xmlTextReaderConstLocalName(reader));
    }
    else {
      printf("attempt to read {}setDlSrc failed. current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
    }
  }
#endif

  return _setDlSrc;
}

/**
 * Writes a SetDlSrc to XML under element name "setDlSrc".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _setDlSrc The SetDlSrc to write.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0SetDlSrcElement(xmlTextWriterPtr writer, struct full_ns0_setDlSrc *_setDlSrc) {
  return xmlTextWriterWriteNs0SetDlSrcElementNS(writer, _setDlSrc, 0);
}

/**
 * Writes a SetDlSrc to XML under element name "setDlSrc".
 *
 * @param writer The XML writer.
 * @param _setDlSrc The SetDlSrc to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0SetDlSrcElementNS(xmlTextWriterPtr writer, struct full_ns0_setDlSrc *_setDlSrc, int writeNamespaces) {
  int totalBytes = 0;
  int status;

  status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "setDlSrc", NULL);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write start element {}setDlSrc. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

#if DEBUG_ENUNCIATE > 1
  printf("writing type {}setDlSrc for root element {}setDlSrc...\n");
#endif
  status = xmlTextWriterWriteNs0SetDlSrcType(writer, _setDlSrc);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write type for start element {}setDlSrc. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  status = xmlTextWriterEndElement(writer);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to end element {}setDlSrc. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  return totalBytes;
}

/**
 * Frees the children of a SetDlSrc.
 *
 * @param _setDlSrc The SetDlSrc whose children are to be free.
 */
static void freeNs0SetDlSrcElement(struct full_ns0_setDlSrc *_setDlSrc) {
  freeNs0SetDlSrcType(_setDlSrc);
}

/**
 * Reads a SetDlSrc from XML. The reader is assumed to be at the start element.
 *
 * @return the SetDlSrc, or NULL in case of error.
 */
static struct full_ns0_setDlSrc *xmlTextReaderReadNs0SetDlSrcType(xmlTextReaderPtr reader) {
  int status, depth;
  void *_child_accessor;
  struct full_ns0_setDlSrc *_setDlSrc = calloc(1, sizeof(struct full_ns0_setDlSrc));



  if (xmlTextReaderIsEmptyElement(reader) == 0) {
    depth = xmlTextReaderDepth(reader);//track the depth.
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);

    while (xmlTextReaderDepth(reader) > depth) {
      if (status < 1) {
        //panic: XML read error.
#if DEBUG_ENUNCIATE
        printf("Failure to advance to next child element.\n");
#endif
        freeNs0SetDlSrcType(_setDlSrc);
        free(_setDlSrc);
        return NULL;
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "address", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}address of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}address of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0SetDlSrcType(_setDlSrc);
          free(_setDlSrc);
          return NULL;
        }

        _setDlSrc->dlAddressString = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else {
#if DEBUG_ENUNCIATE > 1
        if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
          printf("unknown child element {}%s for type {}setDlSrc.  Skipping...\n",  xmlTextReaderConstLocalName(reader));
        }
        else {
          printf("unknown child element {%s}%s for type {}setDlSrc. Skipping...\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
        }
#endif
        status = xmlTextReaderSkipElement(reader);
      }
    }
  }

  return _setDlSrc;
}

/**
 * Writes a SetDlSrc to XML.
 *
 * @param writer The XML writer.
 * @param _setDlSrc The SetDlSrc to write.
 * @return The total bytes written, or -1 on error;
 */
static int xmlTextWriterWriteNs0SetDlSrcType(xmlTextWriterPtr writer, struct full_ns0_setDlSrc *_setDlSrc) {
  int status, totalBytes = 0, i;
  xmlChar *binaryData;
  if (_setDlSrc->dlAddressString != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "address", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}address. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}address...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_setDlSrc->dlAddressString));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}address. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}address. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }

  return totalBytes;
}

/**
 * Frees the elements of a SetDlSrc.
 *
 * @param _setDlSrc The SetDlSrc to free.
 */
static void freeNs0SetDlSrcType(struct full_ns0_setDlSrc *_setDlSrc) {
  int i;
  if (_setDlSrc->dlAddressString != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor dlAddressString of type full_ns0_setDlSrc...\n");
#endif
    freeXsStringType(_setDlSrc->dlAddressString);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor dlAddressString of type full_ns0_setDlSrc...\n");
#endif
    free(_setDlSrc->dlAddressString);
  }
}
#endif /* DEF_full_ns0_setDlSrc_M */
#ifndef DEF_full_ns0_setDlType_M
#define DEF_full_ns0_setDlType_M

/**
 * Reads a SetDlType element from XML. The element to be read is "setDlType", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The SetDlType, or NULL in case of error.
 */
struct full_ns0_setDlType *xml_read_full_ns0_setDlType(xmlTextReaderPtr reader) {
  int status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
  return xmlTextReaderReadNs0SetDlTypeElement(reader);
}

/**
 * Writes a SetDlType to XML under element name "setDlType".
 *
 * @param writer The XML writer.
 * @param _setDlType The SetDlType to write.
 * @return 1 if successful, 0 otherwise.
 */
int xml_write_full_ns0_setDlType(xmlTextWriterPtr writer, struct full_ns0_setDlType *_setDlType) {
  return xmlTextWriterWriteNs0SetDlTypeElementNS(writer, _setDlType, 1);
}

/**
 * Frees a SetDlType.
 *
 * @param _setDlType The SetDlType to free.
 */
void free_full_ns0_setDlType(struct full_ns0_setDlType *_setDlType) {
  freeNs0SetDlTypeType(_setDlType);
  free(_setDlType);
}

/**
 * Reads a SetDlType element from XML. The element to be read is "setDlType", and
 * it is assumed that the reader is pointing to that element.
 *
 * @param reader The XML reader.
 * @return The SetDlType, or NULL in case of error.
 */
struct full_ns0_setDlType *xmlTextReaderReadNs0SetDlTypeElement(xmlTextReaderPtr reader) {
  struct full_ns0_setDlType *_setDlType = NULL;

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "setDlType", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Attempting to read root element {}setDlType.\n");
#endif
    _setDlType = xmlTextReaderReadNs0SetDlTypeType(reader);
  }
#if DEBUG_ENUNCIATE
  if (_setDlType == NULL) {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      printf("attempt to read {}setDlType failed. current element: {}%s\n",  xmlTextReaderConstLocalName(reader));
    }
    else {
      printf("attempt to read {}setDlType failed. current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
    }
  }
#endif

  return _setDlType;
}

/**
 * Writes a SetDlType to XML under element name "setDlType".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _setDlType The SetDlType to write.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0SetDlTypeElement(xmlTextWriterPtr writer, struct full_ns0_setDlType *_setDlType) {
  return xmlTextWriterWriteNs0SetDlTypeElementNS(writer, _setDlType, 0);
}

/**
 * Writes a SetDlType to XML under element name "setDlType".
 *
 * @param writer The XML writer.
 * @param _setDlType The SetDlType to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0SetDlTypeElementNS(xmlTextWriterPtr writer, struct full_ns0_setDlType *_setDlType, int writeNamespaces) {
  int totalBytes = 0;
  int status;

  status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "setDlType", NULL);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write start element {}setDlType. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

#if DEBUG_ENUNCIATE > 1
  printf("writing type {}setDlType for root element {}setDlType...\n");
#endif
  status = xmlTextWriterWriteNs0SetDlTypeType(writer, _setDlType);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write type for start element {}setDlType. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  status = xmlTextWriterEndElement(writer);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to end element {}setDlType. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  return totalBytes;
}

/**
 * Frees the children of a SetDlType.
 *
 * @param _setDlType The SetDlType whose children are to be free.
 */
static void freeNs0SetDlTypeElement(struct full_ns0_setDlType *_setDlType) {
  freeNs0SetDlTypeType(_setDlType);
}

/**
 * Reads a SetDlType from XML. The reader is assumed to be at the start element.
 *
 * @return the SetDlType, or NULL in case of error.
 */
static struct full_ns0_setDlType *xmlTextReaderReadNs0SetDlTypeType(xmlTextReaderPtr reader) {
  int status, depth;
  void *_child_accessor;
  struct full_ns0_setDlType *_setDlType = calloc(1, sizeof(struct full_ns0_setDlType));



  if (xmlTextReaderIsEmptyElement(reader) == 0) {
    depth = xmlTextReaderDepth(reader);//track the depth.
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);

    while (xmlTextReaderDepth(reader) > depth) {
      if (status < 1) {
        //panic: XML read error.
#if DEBUG_ENUNCIATE
        printf("Failure to advance to next child element.\n");
#endif
        freeNs0SetDlTypeType(_setDlType);
        free(_setDlType);
        return NULL;
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "dlType", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}dlType of type {http://www.w3.org/2001/XMLSchema}int.\n");
#endif
        _child_accessor = xmlTextReaderReadXsIntType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}dlType of type {http://www.w3.org/2001/XMLSchema}int.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0SetDlTypeType(_setDlType);
          free(_setDlType);
          return NULL;
        }

        _setDlType->dlType = *((int*)_child_accessor);
        free(_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else {
#if DEBUG_ENUNCIATE > 1
        if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
          printf("unknown child element {}%s for type {}setDlType.  Skipping...\n",  xmlTextReaderConstLocalName(reader));
        }
        else {
          printf("unknown child element {%s}%s for type {}setDlType. Skipping...\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
        }
#endif
        status = xmlTextReaderSkipElement(reader);
      }
    }
  }

  return _setDlType;
}

/**
 * Writes a SetDlType to XML.
 *
 * @param writer The XML writer.
 * @param _setDlType The SetDlType to write.
 * @return The total bytes written, or -1 on error;
 */
static int xmlTextWriterWriteNs0SetDlTypeType(xmlTextWriterPtr writer, struct full_ns0_setDlType *_setDlType) {
  int status, totalBytes = 0, i;
  xmlChar *binaryData;
  if (1) { //always write the primitive element.
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "dlType", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}dlType. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}int for element {}dlType...\n");
#endif
    status = xmlTextWriterWriteXsIntType(writer, &(_setDlType->dlType));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}int for element {}dlType. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}dlType. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }

  return totalBytes;
}

/**
 * Frees the elements of a SetDlType.
 *
 * @param _setDlType The SetDlType to free.
 */
static void freeNs0SetDlTypeType(struct full_ns0_setDlType *_setDlType) {
  int i;
}
#endif /* DEF_full_ns0_setDlType_M */
#ifndef DEF_full_ns0_setNwDst_M
#define DEF_full_ns0_setNwDst_M

/**
 * Reads a SetNwDst element from XML. The element to be read is "setNwDst", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The SetNwDst, or NULL in case of error.
 */
struct full_ns0_setNwDst *xml_read_full_ns0_setNwDst(xmlTextReaderPtr reader) {
  int status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
  return xmlTextReaderReadNs0SetNwDstElement(reader);
}

/**
 * Writes a SetNwDst to XML under element name "setNwDst".
 *
 * @param writer The XML writer.
 * @param _setNwDst The SetNwDst to write.
 * @return 1 if successful, 0 otherwise.
 */
int xml_write_full_ns0_setNwDst(xmlTextWriterPtr writer, struct full_ns0_setNwDst *_setNwDst) {
  return xmlTextWriterWriteNs0SetNwDstElementNS(writer, _setNwDst, 1);
}

/**
 * Frees a SetNwDst.
 *
 * @param _setNwDst The SetNwDst to free.
 */
void free_full_ns0_setNwDst(struct full_ns0_setNwDst *_setNwDst) {
  freeNs0SetNwDstType(_setNwDst);
  free(_setNwDst);
}

/**
 * Reads a SetNwDst element from XML. The element to be read is "setNwDst", and
 * it is assumed that the reader is pointing to that element.
 *
 * @param reader The XML reader.
 * @return The SetNwDst, or NULL in case of error.
 */
struct full_ns0_setNwDst *xmlTextReaderReadNs0SetNwDstElement(xmlTextReaderPtr reader) {
  struct full_ns0_setNwDst *_setNwDst = NULL;

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "setNwDst", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Attempting to read root element {}setNwDst.\n");
#endif
    _setNwDst = xmlTextReaderReadNs0SetNwDstType(reader);
  }
#if DEBUG_ENUNCIATE
  if (_setNwDst == NULL) {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      printf("attempt to read {}setNwDst failed. current element: {}%s\n",  xmlTextReaderConstLocalName(reader));
    }
    else {
      printf("attempt to read {}setNwDst failed. current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
    }
  }
#endif

  return _setNwDst;
}

/**
 * Writes a SetNwDst to XML under element name "setNwDst".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _setNwDst The SetNwDst to write.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0SetNwDstElement(xmlTextWriterPtr writer, struct full_ns0_setNwDst *_setNwDst) {
  return xmlTextWriterWriteNs0SetNwDstElementNS(writer, _setNwDst, 0);
}

/**
 * Writes a SetNwDst to XML under element name "setNwDst".
 *
 * @param writer The XML writer.
 * @param _setNwDst The SetNwDst to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0SetNwDstElementNS(xmlTextWriterPtr writer, struct full_ns0_setNwDst *_setNwDst, int writeNamespaces) {
  int totalBytes = 0;
  int status;

  status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "setNwDst", NULL);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write start element {}setNwDst. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

#if DEBUG_ENUNCIATE > 1
  printf("writing type {}setNwDst for root element {}setNwDst...\n");
#endif
  status = xmlTextWriterWriteNs0SetNwDstType(writer, _setNwDst);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write type for start element {}setNwDst. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  status = xmlTextWriterEndElement(writer);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to end element {}setNwDst. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  return totalBytes;
}

/**
 * Frees the children of a SetNwDst.
 *
 * @param _setNwDst The SetNwDst whose children are to be free.
 */
static void freeNs0SetNwDstElement(struct full_ns0_setNwDst *_setNwDst) {
  freeNs0SetNwDstType(_setNwDst);
}

/**
 * Reads a SetNwDst from XML. The reader is assumed to be at the start element.
 *
 * @return the SetNwDst, or NULL in case of error.
 */
static struct full_ns0_setNwDst *xmlTextReaderReadNs0SetNwDstType(xmlTextReaderPtr reader) {
  int status, depth;
  void *_child_accessor;
  struct full_ns0_setNwDst *_setNwDst = calloc(1, sizeof(struct full_ns0_setNwDst));



  if (xmlTextReaderIsEmptyElement(reader) == 0) {
    depth = xmlTextReaderDepth(reader);//track the depth.
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);

    while (xmlTextReaderDepth(reader) > depth) {
      if (status < 1) {
        //panic: XML read error.
#if DEBUG_ENUNCIATE
        printf("Failure to advance to next child element.\n");
#endif
        freeNs0SetNwDstType(_setNwDst);
        free(_setNwDst);
        return NULL;
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "address", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}address of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}address of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0SetNwDstType(_setNwDst);
          free(_setNwDst);
          return NULL;
        }

        _setNwDst->addressAsString = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else {
#if DEBUG_ENUNCIATE > 1
        if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
          printf("unknown child element {}%s for type {}setNwDst.  Skipping...\n",  xmlTextReaderConstLocalName(reader));
        }
        else {
          printf("unknown child element {%s}%s for type {}setNwDst. Skipping...\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
        }
#endif
        status = xmlTextReaderSkipElement(reader);
      }
    }
  }

  return _setNwDst;
}

/**
 * Writes a SetNwDst to XML.
 *
 * @param writer The XML writer.
 * @param _setNwDst The SetNwDst to write.
 * @return The total bytes written, or -1 on error;
 */
static int xmlTextWriterWriteNs0SetNwDstType(xmlTextWriterPtr writer, struct full_ns0_setNwDst *_setNwDst) {
  int status, totalBytes = 0, i;
  xmlChar *binaryData;
  if (_setNwDst->addressAsString != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "address", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}address. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}address...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_setNwDst->addressAsString));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}address. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}address. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }

  return totalBytes;
}

/**
 * Frees the elements of a SetNwDst.
 *
 * @param _setNwDst The SetNwDst to free.
 */
static void freeNs0SetNwDstType(struct full_ns0_setNwDst *_setNwDst) {
  int i;
  if (_setNwDst->addressAsString != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor addressAsString of type full_ns0_setNwDst...\n");
#endif
    freeXsStringType(_setNwDst->addressAsString);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor addressAsString of type full_ns0_setNwDst...\n");
#endif
    free(_setNwDst->addressAsString);
  }
}
#endif /* DEF_full_ns0_setNwDst_M */
#ifndef DEF_full_ns0_setNwSrc_M
#define DEF_full_ns0_setNwSrc_M

/**
 * Reads a SetNwSrc element from XML. The element to be read is "setNwSrc", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The SetNwSrc, or NULL in case of error.
 */
struct full_ns0_setNwSrc *xml_read_full_ns0_setNwSrc(xmlTextReaderPtr reader) {
  int status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
  return xmlTextReaderReadNs0SetNwSrcElement(reader);
}

/**
 * Writes a SetNwSrc to XML under element name "setNwSrc".
 *
 * @param writer The XML writer.
 * @param _setNwSrc The SetNwSrc to write.
 * @return 1 if successful, 0 otherwise.
 */
int xml_write_full_ns0_setNwSrc(xmlTextWriterPtr writer, struct full_ns0_setNwSrc *_setNwSrc) {
  return xmlTextWriterWriteNs0SetNwSrcElementNS(writer, _setNwSrc, 1);
}

/**
 * Frees a SetNwSrc.
 *
 * @param _setNwSrc The SetNwSrc to free.
 */
void free_full_ns0_setNwSrc(struct full_ns0_setNwSrc *_setNwSrc) {
  freeNs0SetNwSrcType(_setNwSrc);
  free(_setNwSrc);
}

/**
 * Reads a SetNwSrc element from XML. The element to be read is "setNwSrc", and
 * it is assumed that the reader is pointing to that element.
 *
 * @param reader The XML reader.
 * @return The SetNwSrc, or NULL in case of error.
 */
struct full_ns0_setNwSrc *xmlTextReaderReadNs0SetNwSrcElement(xmlTextReaderPtr reader) {
  struct full_ns0_setNwSrc *_setNwSrc = NULL;

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "setNwSrc", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Attempting to read root element {}setNwSrc.\n");
#endif
    _setNwSrc = xmlTextReaderReadNs0SetNwSrcType(reader);
  }
#if DEBUG_ENUNCIATE
  if (_setNwSrc == NULL) {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      printf("attempt to read {}setNwSrc failed. current element: {}%s\n",  xmlTextReaderConstLocalName(reader));
    }
    else {
      printf("attempt to read {}setNwSrc failed. current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
    }
  }
#endif

  return _setNwSrc;
}

/**
 * Writes a SetNwSrc to XML under element name "setNwSrc".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _setNwSrc The SetNwSrc to write.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0SetNwSrcElement(xmlTextWriterPtr writer, struct full_ns0_setNwSrc *_setNwSrc) {
  return xmlTextWriterWriteNs0SetNwSrcElementNS(writer, _setNwSrc, 0);
}

/**
 * Writes a SetNwSrc to XML under element name "setNwSrc".
 *
 * @param writer The XML writer.
 * @param _setNwSrc The SetNwSrc to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0SetNwSrcElementNS(xmlTextWriterPtr writer, struct full_ns0_setNwSrc *_setNwSrc, int writeNamespaces) {
  int totalBytes = 0;
  int status;

  status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "setNwSrc", NULL);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write start element {}setNwSrc. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

#if DEBUG_ENUNCIATE > 1
  printf("writing type {}setNwSrc for root element {}setNwSrc...\n");
#endif
  status = xmlTextWriterWriteNs0SetNwSrcType(writer, _setNwSrc);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write type for start element {}setNwSrc. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  status = xmlTextWriterEndElement(writer);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to end element {}setNwSrc. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  return totalBytes;
}

/**
 * Frees the children of a SetNwSrc.
 *
 * @param _setNwSrc The SetNwSrc whose children are to be free.
 */
static void freeNs0SetNwSrcElement(struct full_ns0_setNwSrc *_setNwSrc) {
  freeNs0SetNwSrcType(_setNwSrc);
}

/**
 * Reads a SetNwSrc from XML. The reader is assumed to be at the start element.
 *
 * @return the SetNwSrc, or NULL in case of error.
 */
static struct full_ns0_setNwSrc *xmlTextReaderReadNs0SetNwSrcType(xmlTextReaderPtr reader) {
  int status, depth;
  void *_child_accessor;
  struct full_ns0_setNwSrc *_setNwSrc = calloc(1, sizeof(struct full_ns0_setNwSrc));



  if (xmlTextReaderIsEmptyElement(reader) == 0) {
    depth = xmlTextReaderDepth(reader);//track the depth.
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);

    while (xmlTextReaderDepth(reader) > depth) {
      if (status < 1) {
        //panic: XML read error.
#if DEBUG_ENUNCIATE
        printf("Failure to advance to next child element.\n");
#endif
        freeNs0SetNwSrcType(_setNwSrc);
        free(_setNwSrc);
        return NULL;
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "address", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}address of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}address of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0SetNwSrcType(_setNwSrc);
          free(_setNwSrc);
          return NULL;
        }

        _setNwSrc->addressAsString = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else {
#if DEBUG_ENUNCIATE > 1
        if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
          printf("unknown child element {}%s for type {}setNwSrc.  Skipping...\n",  xmlTextReaderConstLocalName(reader));
        }
        else {
          printf("unknown child element {%s}%s for type {}setNwSrc. Skipping...\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
        }
#endif
        status = xmlTextReaderSkipElement(reader);
      }
    }
  }

  return _setNwSrc;
}

/**
 * Writes a SetNwSrc to XML.
 *
 * @param writer The XML writer.
 * @param _setNwSrc The SetNwSrc to write.
 * @return The total bytes written, or -1 on error;
 */
static int xmlTextWriterWriteNs0SetNwSrcType(xmlTextWriterPtr writer, struct full_ns0_setNwSrc *_setNwSrc) {
  int status, totalBytes = 0, i;
  xmlChar *binaryData;
  if (_setNwSrc->addressAsString != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "address", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}address. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}address...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_setNwSrc->addressAsString));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}address. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}address. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }

  return totalBytes;
}

/**
 * Frees the elements of a SetNwSrc.
 *
 * @param _setNwSrc The SetNwSrc to free.
 */
static void freeNs0SetNwSrcType(struct full_ns0_setNwSrc *_setNwSrc) {
  int i;
  if (_setNwSrc->addressAsString != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor addressAsString of type full_ns0_setNwSrc...\n");
#endif
    freeXsStringType(_setNwSrc->addressAsString);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor addressAsString of type full_ns0_setNwSrc...\n");
#endif
    free(_setNwSrc->addressAsString);
  }
}
#endif /* DEF_full_ns0_setNwSrc_M */
#ifndef DEF_full_ns0_setNwTos_M
#define DEF_full_ns0_setNwTos_M

/**
 * Reads a SetNwTos element from XML. The element to be read is "setNwTos", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The SetNwTos, or NULL in case of error.
 */
struct full_ns0_setNwTos *xml_read_full_ns0_setNwTos(xmlTextReaderPtr reader) {
  int status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
  return xmlTextReaderReadNs0SetNwTosElement(reader);
}

/**
 * Writes a SetNwTos to XML under element name "setNwTos".
 *
 * @param writer The XML writer.
 * @param _setNwTos The SetNwTos to write.
 * @return 1 if successful, 0 otherwise.
 */
int xml_write_full_ns0_setNwTos(xmlTextWriterPtr writer, struct full_ns0_setNwTos *_setNwTos) {
  return xmlTextWriterWriteNs0SetNwTosElementNS(writer, _setNwTos, 1);
}

/**
 * Frees a SetNwTos.
 *
 * @param _setNwTos The SetNwTos to free.
 */
void free_full_ns0_setNwTos(struct full_ns0_setNwTos *_setNwTos) {
  freeNs0SetNwTosType(_setNwTos);
  free(_setNwTos);
}

/**
 * Reads a SetNwTos element from XML. The element to be read is "setNwTos", and
 * it is assumed that the reader is pointing to that element.
 *
 * @param reader The XML reader.
 * @return The SetNwTos, or NULL in case of error.
 */
struct full_ns0_setNwTos *xmlTextReaderReadNs0SetNwTosElement(xmlTextReaderPtr reader) {
  struct full_ns0_setNwTos *_setNwTos = NULL;

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "setNwTos", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Attempting to read root element {}setNwTos.\n");
#endif
    _setNwTos = xmlTextReaderReadNs0SetNwTosType(reader);
  }
#if DEBUG_ENUNCIATE
  if (_setNwTos == NULL) {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      printf("attempt to read {}setNwTos failed. current element: {}%s\n",  xmlTextReaderConstLocalName(reader));
    }
    else {
      printf("attempt to read {}setNwTos failed. current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
    }
  }
#endif

  return _setNwTos;
}

/**
 * Writes a SetNwTos to XML under element name "setNwTos".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _setNwTos The SetNwTos to write.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0SetNwTosElement(xmlTextWriterPtr writer, struct full_ns0_setNwTos *_setNwTos) {
  return xmlTextWriterWriteNs0SetNwTosElementNS(writer, _setNwTos, 0);
}

/**
 * Writes a SetNwTos to XML under element name "setNwTos".
 *
 * @param writer The XML writer.
 * @param _setNwTos The SetNwTos to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0SetNwTosElementNS(xmlTextWriterPtr writer, struct full_ns0_setNwTos *_setNwTos, int writeNamespaces) {
  int totalBytes = 0;
  int status;

  status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "setNwTos", NULL);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write start element {}setNwTos. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

#if DEBUG_ENUNCIATE > 1
  printf("writing type {}setNwTos for root element {}setNwTos...\n");
#endif
  status = xmlTextWriterWriteNs0SetNwTosType(writer, _setNwTos);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write type for start element {}setNwTos. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  status = xmlTextWriterEndElement(writer);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to end element {}setNwTos. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  return totalBytes;
}

/**
 * Frees the children of a SetNwTos.
 *
 * @param _setNwTos The SetNwTos whose children are to be free.
 */
static void freeNs0SetNwTosElement(struct full_ns0_setNwTos *_setNwTos) {
  freeNs0SetNwTosType(_setNwTos);
}

/**
 * Reads a SetNwTos from XML. The reader is assumed to be at the start element.
 *
 * @return the SetNwTos, or NULL in case of error.
 */
static struct full_ns0_setNwTos *xmlTextReaderReadNs0SetNwTosType(xmlTextReaderPtr reader) {
  int status, depth;
  void *_child_accessor;
  struct full_ns0_setNwTos *_setNwTos = calloc(1, sizeof(struct full_ns0_setNwTos));



  if (xmlTextReaderIsEmptyElement(reader) == 0) {
    depth = xmlTextReaderDepth(reader);//track the depth.
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);

    while (xmlTextReaderDepth(reader) > depth) {
      if (status < 1) {
        //panic: XML read error.
#if DEBUG_ENUNCIATE
        printf("Failure to advance to next child element.\n");
#endif
        freeNs0SetNwTosType(_setNwTos);
        free(_setNwTos);
        return NULL;
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "tos", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}tos of type {http://www.w3.org/2001/XMLSchema}int.\n");
#endif
        _child_accessor = xmlTextReaderReadXsIntType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}tos of type {http://www.w3.org/2001/XMLSchema}int.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0SetNwTosType(_setNwTos);
          free(_setNwTos);
          return NULL;
        }

        _setNwTos->tos = *((int*)_child_accessor);
        free(_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else {
#if DEBUG_ENUNCIATE > 1
        if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
          printf("unknown child element {}%s for type {}setNwTos.  Skipping...\n",  xmlTextReaderConstLocalName(reader));
        }
        else {
          printf("unknown child element {%s}%s for type {}setNwTos. Skipping...\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
        }
#endif
        status = xmlTextReaderSkipElement(reader);
      }
    }
  }

  return _setNwTos;
}

/**
 * Writes a SetNwTos to XML.
 *
 * @param writer The XML writer.
 * @param _setNwTos The SetNwTos to write.
 * @return The total bytes written, or -1 on error;
 */
static int xmlTextWriterWriteNs0SetNwTosType(xmlTextWriterPtr writer, struct full_ns0_setNwTos *_setNwTos) {
  int status, totalBytes = 0, i;
  xmlChar *binaryData;
  if (1) { //always write the primitive element.
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "tos", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}tos. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}int for element {}tos...\n");
#endif
    status = xmlTextWriterWriteXsIntType(writer, &(_setNwTos->tos));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}int for element {}tos. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}tos. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }

  return totalBytes;
}

/**
 * Frees the elements of a SetNwTos.
 *
 * @param _setNwTos The SetNwTos to free.
 */
static void freeNs0SetNwTosType(struct full_ns0_setNwTos *_setNwTos) {
  int i;
}
#endif /* DEF_full_ns0_setNwTos_M */
#ifndef DEF_full_ns0_setTpDst_M
#define DEF_full_ns0_setTpDst_M

/**
 * Reads a SetTpDst element from XML. The element to be read is "setTpDst", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The SetTpDst, or NULL in case of error.
 */
struct full_ns0_setTpDst *xml_read_full_ns0_setTpDst(xmlTextReaderPtr reader) {
  int status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
  return xmlTextReaderReadNs0SetTpDstElement(reader);
}

/**
 * Writes a SetTpDst to XML under element name "setTpDst".
 *
 * @param writer The XML writer.
 * @param _setTpDst The SetTpDst to write.
 * @return 1 if successful, 0 otherwise.
 */
int xml_write_full_ns0_setTpDst(xmlTextWriterPtr writer, struct full_ns0_setTpDst *_setTpDst) {
  return xmlTextWriterWriteNs0SetTpDstElementNS(writer, _setTpDst, 1);
}

/**
 * Frees a SetTpDst.
 *
 * @param _setTpDst The SetTpDst to free.
 */
void free_full_ns0_setTpDst(struct full_ns0_setTpDst *_setTpDst) {
  freeNs0SetTpDstType(_setTpDst);
  free(_setTpDst);
}

/**
 * Reads a SetTpDst element from XML. The element to be read is "setTpDst", and
 * it is assumed that the reader is pointing to that element.
 *
 * @param reader The XML reader.
 * @return The SetTpDst, or NULL in case of error.
 */
struct full_ns0_setTpDst *xmlTextReaderReadNs0SetTpDstElement(xmlTextReaderPtr reader) {
  struct full_ns0_setTpDst *_setTpDst = NULL;

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "setTpDst", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Attempting to read root element {}setTpDst.\n");
#endif
    _setTpDst = xmlTextReaderReadNs0SetTpDstType(reader);
  }
#if DEBUG_ENUNCIATE
  if (_setTpDst == NULL) {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      printf("attempt to read {}setTpDst failed. current element: {}%s\n",  xmlTextReaderConstLocalName(reader));
    }
    else {
      printf("attempt to read {}setTpDst failed. current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
    }
  }
#endif

  return _setTpDst;
}

/**
 * Writes a SetTpDst to XML under element name "setTpDst".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _setTpDst The SetTpDst to write.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0SetTpDstElement(xmlTextWriterPtr writer, struct full_ns0_setTpDst *_setTpDst) {
  return xmlTextWriterWriteNs0SetTpDstElementNS(writer, _setTpDst, 0);
}

/**
 * Writes a SetTpDst to XML under element name "setTpDst".
 *
 * @param writer The XML writer.
 * @param _setTpDst The SetTpDst to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0SetTpDstElementNS(xmlTextWriterPtr writer, struct full_ns0_setTpDst *_setTpDst, int writeNamespaces) {
  int totalBytes = 0;
  int status;

  status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "setTpDst", NULL);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write start element {}setTpDst. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

#if DEBUG_ENUNCIATE > 1
  printf("writing type {}setTpDst for root element {}setTpDst...\n");
#endif
  status = xmlTextWriterWriteNs0SetTpDstType(writer, _setTpDst);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write type for start element {}setTpDst. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  status = xmlTextWriterEndElement(writer);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to end element {}setTpDst. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  return totalBytes;
}

/**
 * Frees the children of a SetTpDst.
 *
 * @param _setTpDst The SetTpDst whose children are to be free.
 */
static void freeNs0SetTpDstElement(struct full_ns0_setTpDst *_setTpDst) {
  freeNs0SetTpDstType(_setTpDst);
}

/**
 * Reads a SetTpDst from XML. The reader is assumed to be at the start element.
 *
 * @return the SetTpDst, or NULL in case of error.
 */
static struct full_ns0_setTpDst *xmlTextReaderReadNs0SetTpDstType(xmlTextReaderPtr reader) {
  int status, depth;
  void *_child_accessor;
  struct full_ns0_setTpDst *_setTpDst = calloc(1, sizeof(struct full_ns0_setTpDst));



  if (xmlTextReaderIsEmptyElement(reader) == 0) {
    depth = xmlTextReaderDepth(reader);//track the depth.
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);

    while (xmlTextReaderDepth(reader) > depth) {
      if (status < 1) {
        //panic: XML read error.
#if DEBUG_ENUNCIATE
        printf("Failure to advance to next child element.\n");
#endif
        freeNs0SetTpDstType(_setTpDst);
        free(_setTpDst);
        return NULL;
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "port", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}port of type {http://www.w3.org/2001/XMLSchema}int.\n");
#endif
        _child_accessor = xmlTextReaderReadXsIntType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}port of type {http://www.w3.org/2001/XMLSchema}int.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0SetTpDstType(_setTpDst);
          free(_setTpDst);
          return NULL;
        }

        _setTpDst->port = *((int*)_child_accessor);
        free(_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else {
#if DEBUG_ENUNCIATE > 1
        if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
          printf("unknown child element {}%s for type {}setTpDst.  Skipping...\n",  xmlTextReaderConstLocalName(reader));
        }
        else {
          printf("unknown child element {%s}%s for type {}setTpDst. Skipping...\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
        }
#endif
        status = xmlTextReaderSkipElement(reader);
      }
    }
  }

  return _setTpDst;
}

/**
 * Writes a SetTpDst to XML.
 *
 * @param writer The XML writer.
 * @param _setTpDst The SetTpDst to write.
 * @return The total bytes written, or -1 on error;
 */
static int xmlTextWriterWriteNs0SetTpDstType(xmlTextWriterPtr writer, struct full_ns0_setTpDst *_setTpDst) {
  int status, totalBytes = 0, i;
  xmlChar *binaryData;
  if (1) { //always write the primitive element.
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "port", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}port. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}int for element {}port...\n");
#endif
    status = xmlTextWriterWriteXsIntType(writer, &(_setTpDst->port));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}int for element {}port. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}port. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }

  return totalBytes;
}

/**
 * Frees the elements of a SetTpDst.
 *
 * @param _setTpDst The SetTpDst to free.
 */
static void freeNs0SetTpDstType(struct full_ns0_setTpDst *_setTpDst) {
  int i;
}
#endif /* DEF_full_ns0_setTpDst_M */
#ifndef DEF_full_ns0_setTpSrc_M
#define DEF_full_ns0_setTpSrc_M

/**
 * Reads a SetTpSrc element from XML. The element to be read is "setTpSrc", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The SetTpSrc, or NULL in case of error.
 */
struct full_ns0_setTpSrc *xml_read_full_ns0_setTpSrc(xmlTextReaderPtr reader) {
  int status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
  return xmlTextReaderReadNs0SetTpSrcElement(reader);
}

/**
 * Writes a SetTpSrc to XML under element name "setTpSrc".
 *
 * @param writer The XML writer.
 * @param _setTpSrc The SetTpSrc to write.
 * @return 1 if successful, 0 otherwise.
 */
int xml_write_full_ns0_setTpSrc(xmlTextWriterPtr writer, struct full_ns0_setTpSrc *_setTpSrc) {
  return xmlTextWriterWriteNs0SetTpSrcElementNS(writer, _setTpSrc, 1);
}

/**
 * Frees a SetTpSrc.
 *
 * @param _setTpSrc The SetTpSrc to free.
 */
void free_full_ns0_setTpSrc(struct full_ns0_setTpSrc *_setTpSrc) {
  freeNs0SetTpSrcType(_setTpSrc);
  free(_setTpSrc);
}

/**
 * Reads a SetTpSrc element from XML. The element to be read is "setTpSrc", and
 * it is assumed that the reader is pointing to that element.
 *
 * @param reader The XML reader.
 * @return The SetTpSrc, or NULL in case of error.
 */
struct full_ns0_setTpSrc *xmlTextReaderReadNs0SetTpSrcElement(xmlTextReaderPtr reader) {
  struct full_ns0_setTpSrc *_setTpSrc = NULL;

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "setTpSrc", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Attempting to read root element {}setTpSrc.\n");
#endif
    _setTpSrc = xmlTextReaderReadNs0SetTpSrcType(reader);
  }
#if DEBUG_ENUNCIATE
  if (_setTpSrc == NULL) {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      printf("attempt to read {}setTpSrc failed. current element: {}%s\n",  xmlTextReaderConstLocalName(reader));
    }
    else {
      printf("attempt to read {}setTpSrc failed. current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
    }
  }
#endif

  return _setTpSrc;
}

/**
 * Writes a SetTpSrc to XML under element name "setTpSrc".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _setTpSrc The SetTpSrc to write.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0SetTpSrcElement(xmlTextWriterPtr writer, struct full_ns0_setTpSrc *_setTpSrc) {
  return xmlTextWriterWriteNs0SetTpSrcElementNS(writer, _setTpSrc, 0);
}

/**
 * Writes a SetTpSrc to XML under element name "setTpSrc".
 *
 * @param writer The XML writer.
 * @param _setTpSrc The SetTpSrc to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0SetTpSrcElementNS(xmlTextWriterPtr writer, struct full_ns0_setTpSrc *_setTpSrc, int writeNamespaces) {
  int totalBytes = 0;
  int status;

  status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "setTpSrc", NULL);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write start element {}setTpSrc. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

#if DEBUG_ENUNCIATE > 1
  printf("writing type {}setTpSrc for root element {}setTpSrc...\n");
#endif
  status = xmlTextWriterWriteNs0SetTpSrcType(writer, _setTpSrc);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write type for start element {}setTpSrc. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  status = xmlTextWriterEndElement(writer);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to end element {}setTpSrc. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  return totalBytes;
}

/**
 * Frees the children of a SetTpSrc.
 *
 * @param _setTpSrc The SetTpSrc whose children are to be free.
 */
static void freeNs0SetTpSrcElement(struct full_ns0_setTpSrc *_setTpSrc) {
  freeNs0SetTpSrcType(_setTpSrc);
}

/**
 * Reads a SetTpSrc from XML. The reader is assumed to be at the start element.
 *
 * @return the SetTpSrc, or NULL in case of error.
 */
static struct full_ns0_setTpSrc *xmlTextReaderReadNs0SetTpSrcType(xmlTextReaderPtr reader) {
  int status, depth;
  void *_child_accessor;
  struct full_ns0_setTpSrc *_setTpSrc = calloc(1, sizeof(struct full_ns0_setTpSrc));



  if (xmlTextReaderIsEmptyElement(reader) == 0) {
    depth = xmlTextReaderDepth(reader);//track the depth.
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);

    while (xmlTextReaderDepth(reader) > depth) {
      if (status < 1) {
        //panic: XML read error.
#if DEBUG_ENUNCIATE
        printf("Failure to advance to next child element.\n");
#endif
        freeNs0SetTpSrcType(_setTpSrc);
        free(_setTpSrc);
        return NULL;
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "port", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}port of type {http://www.w3.org/2001/XMLSchema}int.\n");
#endif
        _child_accessor = xmlTextReaderReadXsIntType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}port of type {http://www.w3.org/2001/XMLSchema}int.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0SetTpSrcType(_setTpSrc);
          free(_setTpSrc);
          return NULL;
        }

        _setTpSrc->port = *((int*)_child_accessor);
        free(_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else {
#if DEBUG_ENUNCIATE > 1
        if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
          printf("unknown child element {}%s for type {}setTpSrc.  Skipping...\n",  xmlTextReaderConstLocalName(reader));
        }
        else {
          printf("unknown child element {%s}%s for type {}setTpSrc. Skipping...\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
        }
#endif
        status = xmlTextReaderSkipElement(reader);
      }
    }
  }

  return _setTpSrc;
}

/**
 * Writes a SetTpSrc to XML.
 *
 * @param writer The XML writer.
 * @param _setTpSrc The SetTpSrc to write.
 * @return The total bytes written, or -1 on error;
 */
static int xmlTextWriterWriteNs0SetTpSrcType(xmlTextWriterPtr writer, struct full_ns0_setTpSrc *_setTpSrc) {
  int status, totalBytes = 0, i;
  xmlChar *binaryData;
  if (1) { //always write the primitive element.
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "port", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}port. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}int for element {}port...\n");
#endif
    status = xmlTextWriterWriteXsIntType(writer, &(_setTpSrc->port));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}int for element {}port. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}port. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }

  return totalBytes;
}

/**
 * Frees the elements of a SetTpSrc.
 *
 * @param _setTpSrc The SetTpSrc to free.
 */
static void freeNs0SetTpSrcType(struct full_ns0_setTpSrc *_setTpSrc) {
  int i;
}
#endif /* DEF_full_ns0_setTpSrc_M */
#ifndef DEF_full_ns0_setVlanCfi_M
#define DEF_full_ns0_setVlanCfi_M

/**
 * Reads a SetVlanCfi element from XML. The element to be read is "setVlanCfi", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The SetVlanCfi, or NULL in case of error.
 */
struct full_ns0_setVlanCfi *xml_read_full_ns0_setVlanCfi(xmlTextReaderPtr reader) {
  int status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
  return xmlTextReaderReadNs0SetVlanCfiElement(reader);
}

/**
 * Writes a SetVlanCfi to XML under element name "setVlanCfi".
 *
 * @param writer The XML writer.
 * @param _setVlanCfi The SetVlanCfi to write.
 * @return 1 if successful, 0 otherwise.
 */
int xml_write_full_ns0_setVlanCfi(xmlTextWriterPtr writer, struct full_ns0_setVlanCfi *_setVlanCfi) {
  return xmlTextWriterWriteNs0SetVlanCfiElementNS(writer, _setVlanCfi, 1);
}

/**
 * Frees a SetVlanCfi.
 *
 * @param _setVlanCfi The SetVlanCfi to free.
 */
void free_full_ns0_setVlanCfi(struct full_ns0_setVlanCfi *_setVlanCfi) {
  freeNs0SetVlanCfiType(_setVlanCfi);
  free(_setVlanCfi);
}

/**
 * Reads a SetVlanCfi element from XML. The element to be read is "setVlanCfi", and
 * it is assumed that the reader is pointing to that element.
 *
 * @param reader The XML reader.
 * @return The SetVlanCfi, or NULL in case of error.
 */
struct full_ns0_setVlanCfi *xmlTextReaderReadNs0SetVlanCfiElement(xmlTextReaderPtr reader) {
  struct full_ns0_setVlanCfi *_setVlanCfi = NULL;

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "setVlanCfi", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Attempting to read root element {}setVlanCfi.\n");
#endif
    _setVlanCfi = xmlTextReaderReadNs0SetVlanCfiType(reader);
  }
#if DEBUG_ENUNCIATE
  if (_setVlanCfi == NULL) {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      printf("attempt to read {}setVlanCfi failed. current element: {}%s\n",  xmlTextReaderConstLocalName(reader));
    }
    else {
      printf("attempt to read {}setVlanCfi failed. current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
    }
  }
#endif

  return _setVlanCfi;
}

/**
 * Writes a SetVlanCfi to XML under element name "setVlanCfi".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _setVlanCfi The SetVlanCfi to write.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0SetVlanCfiElement(xmlTextWriterPtr writer, struct full_ns0_setVlanCfi *_setVlanCfi) {
  return xmlTextWriterWriteNs0SetVlanCfiElementNS(writer, _setVlanCfi, 0);
}

/**
 * Writes a SetVlanCfi to XML under element name "setVlanCfi".
 *
 * @param writer The XML writer.
 * @param _setVlanCfi The SetVlanCfi to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0SetVlanCfiElementNS(xmlTextWriterPtr writer, struct full_ns0_setVlanCfi *_setVlanCfi, int writeNamespaces) {
  int totalBytes = 0;
  int status;

  status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "setVlanCfi", NULL);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write start element {}setVlanCfi. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

#if DEBUG_ENUNCIATE > 1
  printf("writing type {}setVlanCfi for root element {}setVlanCfi...\n");
#endif
  status = xmlTextWriterWriteNs0SetVlanCfiType(writer, _setVlanCfi);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write type for start element {}setVlanCfi. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  status = xmlTextWriterEndElement(writer);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to end element {}setVlanCfi. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  return totalBytes;
}

/**
 * Frees the children of a SetVlanCfi.
 *
 * @param _setVlanCfi The SetVlanCfi whose children are to be free.
 */
static void freeNs0SetVlanCfiElement(struct full_ns0_setVlanCfi *_setVlanCfi) {
  freeNs0SetVlanCfiType(_setVlanCfi);
}

/**
 * Reads a SetVlanCfi from XML. The reader is assumed to be at the start element.
 *
 * @return the SetVlanCfi, or NULL in case of error.
 */
static struct full_ns0_setVlanCfi *xmlTextReaderReadNs0SetVlanCfiType(xmlTextReaderPtr reader) {
  int status, depth;
  void *_child_accessor;
  struct full_ns0_setVlanCfi *_setVlanCfi = calloc(1, sizeof(struct full_ns0_setVlanCfi));



  if (xmlTextReaderIsEmptyElement(reader) == 0) {
    depth = xmlTextReaderDepth(reader);//track the depth.
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);

    while (xmlTextReaderDepth(reader) > depth) {
      if (status < 1) {
        //panic: XML read error.
#if DEBUG_ENUNCIATE
        printf("Failure to advance to next child element.\n");
#endif
        freeNs0SetVlanCfiType(_setVlanCfi);
        free(_setVlanCfi);
        return NULL;
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "cfi", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}cfi of type {http://www.w3.org/2001/XMLSchema}int.\n");
#endif
        _child_accessor = xmlTextReaderReadXsIntType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}cfi of type {http://www.w3.org/2001/XMLSchema}int.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0SetVlanCfiType(_setVlanCfi);
          free(_setVlanCfi);
          return NULL;
        }

        _setVlanCfi->cfi = *((int*)_child_accessor);
        free(_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else {
#if DEBUG_ENUNCIATE > 1
        if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
          printf("unknown child element {}%s for type {}setVlanCfi.  Skipping...\n",  xmlTextReaderConstLocalName(reader));
        }
        else {
          printf("unknown child element {%s}%s for type {}setVlanCfi. Skipping...\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
        }
#endif
        status = xmlTextReaderSkipElement(reader);
      }
    }
  }

  return _setVlanCfi;
}

/**
 * Writes a SetVlanCfi to XML.
 *
 * @param writer The XML writer.
 * @param _setVlanCfi The SetVlanCfi to write.
 * @return The total bytes written, or -1 on error;
 */
static int xmlTextWriterWriteNs0SetVlanCfiType(xmlTextWriterPtr writer, struct full_ns0_setVlanCfi *_setVlanCfi) {
  int status, totalBytes = 0, i;
  xmlChar *binaryData;
  if (1) { //always write the primitive element.
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "cfi", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}cfi. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}int for element {}cfi...\n");
#endif
    status = xmlTextWriterWriteXsIntType(writer, &(_setVlanCfi->cfi));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}int for element {}cfi. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}cfi. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }

  return totalBytes;
}

/**
 * Frees the elements of a SetVlanCfi.
 *
 * @param _setVlanCfi The SetVlanCfi to free.
 */
static void freeNs0SetVlanCfiType(struct full_ns0_setVlanCfi *_setVlanCfi) {
  int i;
}
#endif /* DEF_full_ns0_setVlanCfi_M */
#ifndef DEF_full_ns0_setVlanId_M
#define DEF_full_ns0_setVlanId_M

/**
 * Reads a SetVlanId element from XML. The element to be read is "setVlanId", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The SetVlanId, or NULL in case of error.
 */
struct full_ns0_setVlanId *xml_read_full_ns0_setVlanId(xmlTextReaderPtr reader) {
  int status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
  return xmlTextReaderReadNs0SetVlanIdElement(reader);
}

/**
 * Writes a SetVlanId to XML under element name "setVlanId".
 *
 * @param writer The XML writer.
 * @param _setVlanId The SetVlanId to write.
 * @return 1 if successful, 0 otherwise.
 */
int xml_write_full_ns0_setVlanId(xmlTextWriterPtr writer, struct full_ns0_setVlanId *_setVlanId) {
  return xmlTextWriterWriteNs0SetVlanIdElementNS(writer, _setVlanId, 1);
}

/**
 * Frees a SetVlanId.
 *
 * @param _setVlanId The SetVlanId to free.
 */
void free_full_ns0_setVlanId(struct full_ns0_setVlanId *_setVlanId) {
  freeNs0SetVlanIdType(_setVlanId);
  free(_setVlanId);
}

/**
 * Reads a SetVlanId element from XML. The element to be read is "setVlanId", and
 * it is assumed that the reader is pointing to that element.
 *
 * @param reader The XML reader.
 * @return The SetVlanId, or NULL in case of error.
 */
struct full_ns0_setVlanId *xmlTextReaderReadNs0SetVlanIdElement(xmlTextReaderPtr reader) {
  struct full_ns0_setVlanId *_setVlanId = NULL;

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "setVlanId", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Attempting to read root element {}setVlanId.\n");
#endif
    _setVlanId = xmlTextReaderReadNs0SetVlanIdType(reader);
  }
#if DEBUG_ENUNCIATE
  if (_setVlanId == NULL) {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      printf("attempt to read {}setVlanId failed. current element: {}%s\n",  xmlTextReaderConstLocalName(reader));
    }
    else {
      printf("attempt to read {}setVlanId failed. current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
    }
  }
#endif

  return _setVlanId;
}

/**
 * Writes a SetVlanId to XML under element name "setVlanId".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _setVlanId The SetVlanId to write.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0SetVlanIdElement(xmlTextWriterPtr writer, struct full_ns0_setVlanId *_setVlanId) {
  return xmlTextWriterWriteNs0SetVlanIdElementNS(writer, _setVlanId, 0);
}

/**
 * Writes a SetVlanId to XML under element name "setVlanId".
 *
 * @param writer The XML writer.
 * @param _setVlanId The SetVlanId to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0SetVlanIdElementNS(xmlTextWriterPtr writer, struct full_ns0_setVlanId *_setVlanId, int writeNamespaces) {
  int totalBytes = 0;
  int status;

  status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "setVlanId", NULL);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write start element {}setVlanId. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

#if DEBUG_ENUNCIATE > 1
  printf("writing type {}setVlanId for root element {}setVlanId...\n");
#endif
  status = xmlTextWriterWriteNs0SetVlanIdType(writer, _setVlanId);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write type for start element {}setVlanId. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  status = xmlTextWriterEndElement(writer);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to end element {}setVlanId. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  return totalBytes;
}

/**
 * Frees the children of a SetVlanId.
 *
 * @param _setVlanId The SetVlanId whose children are to be free.
 */
static void freeNs0SetVlanIdElement(struct full_ns0_setVlanId *_setVlanId) {
  freeNs0SetVlanIdType(_setVlanId);
}

/**
 * Reads a SetVlanId from XML. The reader is assumed to be at the start element.
 *
 * @return the SetVlanId, or NULL in case of error.
 */
static struct full_ns0_setVlanId *xmlTextReaderReadNs0SetVlanIdType(xmlTextReaderPtr reader) {
  int status, depth;
  void *_child_accessor;
  struct full_ns0_setVlanId *_setVlanId = calloc(1, sizeof(struct full_ns0_setVlanId));



  if (xmlTextReaderIsEmptyElement(reader) == 0) {
    depth = xmlTextReaderDepth(reader);//track the depth.
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);

    while (xmlTextReaderDepth(reader) > depth) {
      if (status < 1) {
        //panic: XML read error.
#if DEBUG_ENUNCIATE
        printf("Failure to advance to next child element.\n");
#endif
        freeNs0SetVlanIdType(_setVlanId);
        free(_setVlanId);
        return NULL;
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "vlanId", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}vlanId of type {http://www.w3.org/2001/XMLSchema}int.\n");
#endif
        _child_accessor = xmlTextReaderReadXsIntType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}vlanId of type {http://www.w3.org/2001/XMLSchema}int.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0SetVlanIdType(_setVlanId);
          free(_setVlanId);
          return NULL;
        }

        _setVlanId->vlanId = *((int*)_child_accessor);
        free(_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else {
#if DEBUG_ENUNCIATE > 1
        if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
          printf("unknown child element {}%s for type {}setVlanId.  Skipping...\n",  xmlTextReaderConstLocalName(reader));
        }
        else {
          printf("unknown child element {%s}%s for type {}setVlanId. Skipping...\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
        }
#endif
        status = xmlTextReaderSkipElement(reader);
      }
    }
  }

  return _setVlanId;
}

/**
 * Writes a SetVlanId to XML.
 *
 * @param writer The XML writer.
 * @param _setVlanId The SetVlanId to write.
 * @return The total bytes written, or -1 on error;
 */
static int xmlTextWriterWriteNs0SetVlanIdType(xmlTextWriterPtr writer, struct full_ns0_setVlanId *_setVlanId) {
  int status, totalBytes = 0, i;
  xmlChar *binaryData;
  if (1) { //always write the primitive element.
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "vlanId", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}vlanId. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}int for element {}vlanId...\n");
#endif
    status = xmlTextWriterWriteXsIntType(writer, &(_setVlanId->vlanId));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}int for element {}vlanId. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}vlanId. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }

  return totalBytes;
}

/**
 * Frees the elements of a SetVlanId.
 *
 * @param _setVlanId The SetVlanId to free.
 */
static void freeNs0SetVlanIdType(struct full_ns0_setVlanId *_setVlanId) {
  int i;
}
#endif /* DEF_full_ns0_setVlanId_M */
#ifndef DEF_full_ns0_setVlanPcp_M
#define DEF_full_ns0_setVlanPcp_M

/**
 * Reads a SetVlanPcp element from XML. The element to be read is "setVlanPcp", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The SetVlanPcp, or NULL in case of error.
 */
struct full_ns0_setVlanPcp *xml_read_full_ns0_setVlanPcp(xmlTextReaderPtr reader) {
  int status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
  return xmlTextReaderReadNs0SetVlanPcpElement(reader);
}

/**
 * Writes a SetVlanPcp to XML under element name "setVlanPcp".
 *
 * @param writer The XML writer.
 * @param _setVlanPcp The SetVlanPcp to write.
 * @return 1 if successful, 0 otherwise.
 */
int xml_write_full_ns0_setVlanPcp(xmlTextWriterPtr writer, struct full_ns0_setVlanPcp *_setVlanPcp) {
  return xmlTextWriterWriteNs0SetVlanPcpElementNS(writer, _setVlanPcp, 1);
}

/**
 * Frees a SetVlanPcp.
 *
 * @param _setVlanPcp The SetVlanPcp to free.
 */
void free_full_ns0_setVlanPcp(struct full_ns0_setVlanPcp *_setVlanPcp) {
  freeNs0SetVlanPcpType(_setVlanPcp);
  free(_setVlanPcp);
}

/**
 * Reads a SetVlanPcp element from XML. The element to be read is "setVlanPcp", and
 * it is assumed that the reader is pointing to that element.
 *
 * @param reader The XML reader.
 * @return The SetVlanPcp, or NULL in case of error.
 */
struct full_ns0_setVlanPcp *xmlTextReaderReadNs0SetVlanPcpElement(xmlTextReaderPtr reader) {
  struct full_ns0_setVlanPcp *_setVlanPcp = NULL;

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "setVlanPcp", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Attempting to read root element {}setVlanPcp.\n");
#endif
    _setVlanPcp = xmlTextReaderReadNs0SetVlanPcpType(reader);
  }
#if DEBUG_ENUNCIATE
  if (_setVlanPcp == NULL) {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      printf("attempt to read {}setVlanPcp failed. current element: {}%s\n",  xmlTextReaderConstLocalName(reader));
    }
    else {
      printf("attempt to read {}setVlanPcp failed. current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
    }
  }
#endif

  return _setVlanPcp;
}

/**
 * Writes a SetVlanPcp to XML under element name "setVlanPcp".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _setVlanPcp The SetVlanPcp to write.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0SetVlanPcpElement(xmlTextWriterPtr writer, struct full_ns0_setVlanPcp *_setVlanPcp) {
  return xmlTextWriterWriteNs0SetVlanPcpElementNS(writer, _setVlanPcp, 0);
}

/**
 * Writes a SetVlanPcp to XML under element name "setVlanPcp".
 *
 * @param writer The XML writer.
 * @param _setVlanPcp The SetVlanPcp to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0SetVlanPcpElementNS(xmlTextWriterPtr writer, struct full_ns0_setVlanPcp *_setVlanPcp, int writeNamespaces) {
  int totalBytes = 0;
  int status;

  status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "setVlanPcp", NULL);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write start element {}setVlanPcp. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

#if DEBUG_ENUNCIATE > 1
  printf("writing type {}setVlanPcp for root element {}setVlanPcp...\n");
#endif
  status = xmlTextWriterWriteNs0SetVlanPcpType(writer, _setVlanPcp);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write type for start element {}setVlanPcp. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  status = xmlTextWriterEndElement(writer);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to end element {}setVlanPcp. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  return totalBytes;
}

/**
 * Frees the children of a SetVlanPcp.
 *
 * @param _setVlanPcp The SetVlanPcp whose children are to be free.
 */
static void freeNs0SetVlanPcpElement(struct full_ns0_setVlanPcp *_setVlanPcp) {
  freeNs0SetVlanPcpType(_setVlanPcp);
}

/**
 * Reads a SetVlanPcp from XML. The reader is assumed to be at the start element.
 *
 * @return the SetVlanPcp, or NULL in case of error.
 */
static struct full_ns0_setVlanPcp *xmlTextReaderReadNs0SetVlanPcpType(xmlTextReaderPtr reader) {
  int status, depth;
  void *_child_accessor;
  struct full_ns0_setVlanPcp *_setVlanPcp = calloc(1, sizeof(struct full_ns0_setVlanPcp));



  if (xmlTextReaderIsEmptyElement(reader) == 0) {
    depth = xmlTextReaderDepth(reader);//track the depth.
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);

    while (xmlTextReaderDepth(reader) > depth) {
      if (status < 1) {
        //panic: XML read error.
#if DEBUG_ENUNCIATE
        printf("Failure to advance to next child element.\n");
#endif
        freeNs0SetVlanPcpType(_setVlanPcp);
        free(_setVlanPcp);
        return NULL;
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "pcp", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}pcp of type {http://www.w3.org/2001/XMLSchema}int.\n");
#endif
        _child_accessor = xmlTextReaderReadXsIntType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}pcp of type {http://www.w3.org/2001/XMLSchema}int.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0SetVlanPcpType(_setVlanPcp);
          free(_setVlanPcp);
          return NULL;
        }

        _setVlanPcp->pcp = *((int*)_child_accessor);
        free(_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else {
#if DEBUG_ENUNCIATE > 1
        if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
          printf("unknown child element {}%s for type {}setVlanPcp.  Skipping...\n",  xmlTextReaderConstLocalName(reader));
        }
        else {
          printf("unknown child element {%s}%s for type {}setVlanPcp. Skipping...\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
        }
#endif
        status = xmlTextReaderSkipElement(reader);
      }
    }
  }

  return _setVlanPcp;
}

/**
 * Writes a SetVlanPcp to XML.
 *
 * @param writer The XML writer.
 * @param _setVlanPcp The SetVlanPcp to write.
 * @return The total bytes written, or -1 on error;
 */
static int xmlTextWriterWriteNs0SetVlanPcpType(xmlTextWriterPtr writer, struct full_ns0_setVlanPcp *_setVlanPcp) {
  int status, totalBytes = 0, i;
  xmlChar *binaryData;
  if (1) { //always write the primitive element.
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "pcp", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}pcp. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}int for element {}pcp...\n");
#endif
    status = xmlTextWriterWriteXsIntType(writer, &(_setVlanPcp->pcp));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}int for element {}pcp. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}pcp. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }

  return totalBytes;
}

/**
 * Frees the elements of a SetVlanPcp.
 *
 * @param _setVlanPcp The SetVlanPcp to free.
 */
static void freeNs0SetVlanPcpType(struct full_ns0_setVlanPcp *_setVlanPcp) {
  int i;
}
#endif /* DEF_full_ns0_setVlanPcp_M */
#ifndef DEF_full_ns0_swPath_M
#define DEF_full_ns0_swPath_M

/**
 * Reads a SwPath element from XML. The element to be read is "swPath", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The SwPath, or NULL in case of error.
 */
struct full_ns0_swPath *xml_read_full_ns0_swPath(xmlTextReaderPtr reader) {
  int status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
  return xmlTextReaderReadNs0SwPathElement(reader);
}

/**
 * Writes a SwPath to XML under element name "swPath".
 *
 * @param writer The XML writer.
 * @param _swPath The SwPath to write.
 * @return 1 if successful, 0 otherwise.
 */
int xml_write_full_ns0_swPath(xmlTextWriterPtr writer, struct full_ns0_swPath *_swPath) {
  return xmlTextWriterWriteNs0SwPathElementNS(writer, _swPath, 1);
}

/**
 * Frees a SwPath.
 *
 * @param _swPath The SwPath to free.
 */
void free_full_ns0_swPath(struct full_ns0_swPath *_swPath) {
  freeNs0SwPathType(_swPath);
  free(_swPath);
}

/**
 * Reads a SwPath element from XML. The element to be read is "swPath", and
 * it is assumed that the reader is pointing to that element.
 *
 * @param reader The XML reader.
 * @return The SwPath, or NULL in case of error.
 */
struct full_ns0_swPath *xmlTextReaderReadNs0SwPathElement(xmlTextReaderPtr reader) {
  struct full_ns0_swPath *_swPath = NULL;

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "swPath", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Attempting to read root element {}swPath.\n");
#endif
    _swPath = xmlTextReaderReadNs0SwPathType(reader);
  }
#if DEBUG_ENUNCIATE
  if (_swPath == NULL) {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      printf("attempt to read {}swPath failed. current element: {}%s\n",  xmlTextReaderConstLocalName(reader));
    }
    else {
      printf("attempt to read {}swPath failed. current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
    }
  }
#endif

  return _swPath;
}

/**
 * Writes a SwPath to XML under element name "swPath".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _swPath The SwPath to write.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0SwPathElement(xmlTextWriterPtr writer, struct full_ns0_swPath *_swPath) {
  return xmlTextWriterWriteNs0SwPathElementNS(writer, _swPath, 0);
}

/**
 * Writes a SwPath to XML under element name "swPath".
 *
 * @param writer The XML writer.
 * @param _swPath The SwPath to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0SwPathElementNS(xmlTextWriterPtr writer, struct full_ns0_swPath *_swPath, int writeNamespaces) {
  int totalBytes = 0;
  int status;

  status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "swPath", NULL);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write start element {}swPath. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

#if DEBUG_ENUNCIATE > 1
  printf("writing type {}swPath for root element {}swPath...\n");
#endif
  status = xmlTextWriterWriteNs0SwPathType(writer, _swPath);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write type for start element {}swPath. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  status = xmlTextWriterEndElement(writer);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to end element {}swPath. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  return totalBytes;
}

/**
 * Frees the children of a SwPath.
 *
 * @param _swPath The SwPath whose children are to be free.
 */
static void freeNs0SwPathElement(struct full_ns0_swPath *_swPath) {
  freeNs0SwPathType(_swPath);
}

/**
 * Reads a SwPath from XML. The reader is assumed to be at the start element.
 *
 * @return the SwPath, or NULL in case of error.
 */
static struct full_ns0_swPath *xmlTextReaderReadNs0SwPathType(xmlTextReaderPtr reader) {
  int status, depth;
  void *_child_accessor;
  struct full_ns0_swPath *_swPath = calloc(1, sizeof(struct full_ns0_swPath));




  return _swPath;
}

/**
 * Writes a SwPath to XML.
 *
 * @param writer The XML writer.
 * @param _swPath The SwPath to write.
 * @return The total bytes written, or -1 on error;
 */
static int xmlTextWriterWriteNs0SwPathType(xmlTextWriterPtr writer, struct full_ns0_swPath *_swPath) {
  int status, totalBytes = 0, i;
  xmlChar *binaryData;

  return totalBytes;
}

/**
 * Frees the elements of a SwPath.
 *
 * @param _swPath The SwPath to free.
 */
static void freeNs0SwPathType(struct full_ns0_swPath *_swPath) {
  int i;
}
#endif /* DEF_full_ns0_swPath_M */
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
#ifndef DEF_full_ns0_nodeTable_M
#define DEF_full_ns0_nodeTable_M

/**
 * Reads a NodeTable element from XML. The element to be read is "nodeTable", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The NodeTable, or NULL in case of error.
 */
struct full_ns0_nodeTable *xml_read_full_ns0_nodeTable(xmlTextReaderPtr reader) {
  int status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
  return xmlTextReaderReadNs0NodeTableElement(reader);
}

/**
 * Writes a NodeTable to XML under element name "nodeTable".
 *
 * @param writer The XML writer.
 * @param _nodeTable The NodeTable to write.
 * @return 1 if successful, 0 otherwise.
 */
int xml_write_full_ns0_nodeTable(xmlTextWriterPtr writer, struct full_ns0_nodeTable *_nodeTable) {
  return xmlTextWriterWriteNs0NodeTableElementNS(writer, _nodeTable, 1);
}

/**
 * Frees a NodeTable.
 *
 * @param _nodeTable The NodeTable to free.
 */
void free_full_ns0_nodeTable(struct full_ns0_nodeTable *_nodeTable) {
  freeNs0NodeTableType(_nodeTable);
  free(_nodeTable);
}

/**
 * Reads a NodeTable element from XML. The element to be read is "nodeTable", and
 * it is assumed that the reader is pointing to that element.
 *
 * @param reader The XML reader.
 * @return The NodeTable, or NULL in case of error.
 */
struct full_ns0_nodeTable *xmlTextReaderReadNs0NodeTableElement(xmlTextReaderPtr reader) {
  struct full_ns0_nodeTable *_nodeTable = NULL;

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "nodeTable", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Attempting to read root element {}nodeTable.\n");
#endif
    _nodeTable = xmlTextReaderReadNs0NodeTableType(reader);
  }
#if DEBUG_ENUNCIATE
  if (_nodeTable == NULL) {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      printf("attempt to read {}nodeTable failed. current element: {}%s\n",  xmlTextReaderConstLocalName(reader));
    }
    else {
      printf("attempt to read {}nodeTable failed. current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
    }
  }
#endif

  return _nodeTable;
}

/**
 * Writes a NodeTable to XML under element name "nodeTable".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _nodeTable The NodeTable to write.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0NodeTableElement(xmlTextWriterPtr writer, struct full_ns0_nodeTable *_nodeTable) {
  return xmlTextWriterWriteNs0NodeTableElementNS(writer, _nodeTable, 0);
}

/**
 * Writes a NodeTable to XML under element name "nodeTable".
 *
 * @param writer The XML writer.
 * @param _nodeTable The NodeTable to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0NodeTableElementNS(xmlTextWriterPtr writer, struct full_ns0_nodeTable *_nodeTable, int writeNamespaces) {
  int totalBytes = 0;
  int status;

  status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "nodeTable", NULL);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write start element {}nodeTable. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

#if DEBUG_ENUNCIATE > 1
  printf("writing type {}nodeTable for root element {}nodeTable...\n");
#endif
  status = xmlTextWriterWriteNs0NodeTableType(writer, _nodeTable);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write type for start element {}nodeTable. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  status = xmlTextWriterEndElement(writer);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to end element {}nodeTable. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  return totalBytes;
}

/**
 * Frees the children of a NodeTable.
 *
 * @param _nodeTable The NodeTable whose children are to be free.
 */
static void freeNs0NodeTableElement(struct full_ns0_nodeTable *_nodeTable) {
  freeNs0NodeTableType(_nodeTable);
}

/**
 * Reads a NodeTable from XML. The reader is assumed to be at the start element.
 *
 * @return the NodeTable, or NULL in case of error.
 */
static struct full_ns0_nodeTable *xmlTextReaderReadNs0NodeTableType(xmlTextReaderPtr reader) {
  int status, depth;
  void *_child_accessor;
  struct full_ns0_nodeTable *_nodeTable = calloc(1, sizeof(struct full_ns0_nodeTable));

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
          freeNs0NodeTableType(_nodeTable);
          free(_nodeTable);
          return NULL;
        }
        _nodeTable->nodeTableIDString = ((xmlChar*)_child_accessor);
        continue;
      }
    }

    status = xmlTextReaderMoveToElement(reader);
    if (status < 1) {
      //panic: unable to return to the element node.
#if DEBUG_ENUNCIATE
      printf("Unable to return to element node from attributes.\n");
#endif
      freeNs0NodeTableType(_nodeTable);
      free(_nodeTable);
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
        freeNs0NodeTableType(_nodeTable);
        free(_nodeTable);
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
          freeNs0NodeTableType(_nodeTable);
          free(_nodeTable);
          return NULL;
        }

        _nodeTable->nodeTableNode = ((struct full_ns0_node*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else {
#if DEBUG_ENUNCIATE > 1
        if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
          printf("unknown child element {}%s for type {}nodeTable.  Skipping...\n",  xmlTextReaderConstLocalName(reader));
        }
        else {
          printf("unknown child element {%s}%s for type {}nodeTable. Skipping...\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
        }
#endif
        status = xmlTextReaderSkipElement(reader);
      }
    }
  }

  return _nodeTable;
}

/**
 * Writes a NodeTable to XML.
 *
 * @param writer The XML writer.
 * @param _nodeTable The NodeTable to write.
 * @return The total bytes written, or -1 on error;
 */
static int xmlTextWriterWriteNs0NodeTableType(xmlTextWriterPtr writer, struct full_ns0_nodeTable *_nodeTable) {
  int status, totalBytes = 0, i;
  xmlChar *binaryData;

  if (_nodeTable->nodeTableIDString != NULL) {
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
    status = xmlTextWriterWriteXsStringType(writer, (_nodeTable->nodeTableIDString));
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
  if (_nodeTable->nodeTableNode != NULL) {
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
    status = xmlTextWriterWriteNs0NodeType(writer, (_nodeTable->nodeTableNode));
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
 * Frees the elements of a NodeTable.
 *
 * @param _nodeTable The NodeTable to free.
 */
static void freeNs0NodeTableType(struct full_ns0_nodeTable *_nodeTable) {
  int i;
  if (_nodeTable->nodeTableIDString != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor nodeTableIDString of type full_ns0_nodeTable...\n");
#endif
    freeXsStringType(_nodeTable->nodeTableIDString);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor nodeTableIDString of type full_ns0_nodeTable...\n");
#endif
    free(_nodeTable->nodeTableIDString);
  }
  if (_nodeTable->nodeTableNode != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor nodeTableNode of type full_ns0_nodeTable...\n");
#endif
    freeNs0NodeType(_nodeTable->nodeTableNode);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor nodeTableNode of type full_ns0_nodeTable...\n");
#endif
    free(_nodeTable->nodeTableNode);
  }
}
#endif /* DEF_full_ns0_nodeTable_M */
#ifndef DEF_full_ns0_flow_M
#define DEF_full_ns0_flow_M

/**
 * Reads a Flow element from XML. The element to be read is "flow", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The Flow, or NULL in case of error.
 */
struct full_ns0_flow *xml_read_full_ns0_flow(xmlTextReaderPtr reader) {
  int status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
  return xmlTextReaderReadNs0FlowElement(reader);
}

/**
 * Writes a Flow to XML under element name "flow".
 *
 * @param writer The XML writer.
 * @param _flow The Flow to write.
 * @return 1 if successful, 0 otherwise.
 */
int xml_write_full_ns0_flow(xmlTextWriterPtr writer, struct full_ns0_flow *_flow) {
  return xmlTextWriterWriteNs0FlowElementNS(writer, _flow, 1);
}

/**
 * Frees a Flow.
 *
 * @param _flow The Flow to free.
 */
void free_full_ns0_flow(struct full_ns0_flow *_flow) {
  freeNs0FlowType(_flow);
  free(_flow);
}

/**
 * Reads a Flow element from XML. The element to be read is "flow", and
 * it is assumed that the reader is pointing to that element.
 *
 * @param reader The XML reader.
 * @return The Flow, or NULL in case of error.
 */
struct full_ns0_flow *xmlTextReaderReadNs0FlowElement(xmlTextReaderPtr reader) {
  struct full_ns0_flow *_flow = NULL;

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "flow", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Attempting to read root element {}flow.\n");
#endif
    _flow = xmlTextReaderReadNs0FlowType(reader);
  }
#if DEBUG_ENUNCIATE
  if (_flow == NULL) {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      printf("attempt to read {}flow failed. current element: {}%s\n",  xmlTextReaderConstLocalName(reader));
    }
    else {
      printf("attempt to read {}flow failed. current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
    }
  }
#endif

  return _flow;
}

/**
 * Writes a Flow to XML under element name "flow".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _flow The Flow to write.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0FlowElement(xmlTextWriterPtr writer, struct full_ns0_flow *_flow) {
  return xmlTextWriterWriteNs0FlowElementNS(writer, _flow, 0);
}

/**
 * Writes a Flow to XML under element name "flow".
 *
 * @param writer The XML writer.
 * @param _flow The Flow to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0FlowElementNS(xmlTextWriterPtr writer, struct full_ns0_flow *_flow, int writeNamespaces) {
  int totalBytes = 0;
  int status;

  status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "flow", NULL);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write start element {}flow. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

#if DEBUG_ENUNCIATE > 1
  printf("writing type {}flow for root element {}flow...\n");
#endif
  status = xmlTextWriterWriteNs0FlowType(writer, _flow);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write type for start element {}flow. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  status = xmlTextWriterEndElement(writer);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to end element {}flow. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  return totalBytes;
}

/**
 * Frees the children of a Flow.
 *
 * @param _flow The Flow whose children are to be free.
 */
static void freeNs0FlowElement(struct full_ns0_flow *_flow) {
  freeNs0FlowType(_flow);
}

/**
 * Reads a Flow from XML. The reader is assumed to be at the start element.
 *
 * @return the Flow, or NULL in case of error.
 */
static struct full_ns0_flow *xmlTextReaderReadNs0FlowType(xmlTextReaderPtr reader) {
  int status, depth;
  void *_child_accessor;
  struct full_ns0_flow *_flow = calloc(1, sizeof(struct full_ns0_flow));



  if (xmlTextReaderIsEmptyElement(reader) == 0) {
    depth = xmlTextReaderDepth(reader);//track the depth.
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);

    while (xmlTextReaderDepth(reader) > depth) {
      if (status < 1) {
        //panic: XML read error.
#if DEBUG_ENUNCIATE
        printf("Failure to advance to next child element.\n");
#endif
        freeNs0FlowType(_flow);
        free(_flow);
        return NULL;
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "priority", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}priority of type {http://www.w3.org/2001/XMLSchema}short.\n");
#endif
        _child_accessor = xmlTextReaderReadXsShortType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}priority of type {http://www.w3.org/2001/XMLSchema}short.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0FlowType(_flow);
          free(_flow);
          return NULL;
        }

        _flow->priority = *((short*)_child_accessor);
        free(_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "idleTimeout", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}idleTimeout of type {http://www.w3.org/2001/XMLSchema}short.\n");
#endif
        _child_accessor = xmlTextReaderReadXsShortType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}idleTimeout of type {http://www.w3.org/2001/XMLSchema}short.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0FlowType(_flow);
          free(_flow);
          return NULL;
        }

        _flow->idleTimeout = *((short*)_child_accessor);
        free(_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "actions", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}actions of type {}action.\n");
#endif
        _child_accessor = xmlTextReaderReadNs0ActionType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}actions of type {}action.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0FlowType(_flow);
          free(_flow);
          return NULL;
        }

        _flow->actions = realloc(_flow->actions, (_flow->_sizeof_actions + 1) * sizeof(struct full_ns0_action));
        memcpy(&(_flow->actions[_flow->_sizeof_actions++]), _child_accessor, sizeof(struct full_ns0_action));
        free(_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "hardTimeout", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}hardTimeout of type {http://www.w3.org/2001/XMLSchema}short.\n");
#endif
        _child_accessor = xmlTextReaderReadXsShortType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}hardTimeout of type {http://www.w3.org/2001/XMLSchema}short.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0FlowType(_flow);
          free(_flow);
          return NULL;
        }

        _flow->hardTimeout = *((short*)_child_accessor);
        free(_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "id", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}id of type {http://www.w3.org/2001/XMLSchema}long.\n");
#endif
        _child_accessor = xmlTextReaderReadXsLongType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}id of type {http://www.w3.org/2001/XMLSchema}long.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0FlowType(_flow);
          free(_flow);
          return NULL;
        }

        _flow->id = *((long*)_child_accessor);
        free(_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "match", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}match of type {}match.\n");
#endif
        _child_accessor = xmlTextReaderReadNs0MatchType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}match of type {}match.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0FlowType(_flow);
          free(_flow);
          return NULL;
        }

        _flow->match = ((struct full_ns0_match*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else {
#if DEBUG_ENUNCIATE > 1
        if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
          printf("unknown child element {}%s for type {}flow.  Skipping...\n",  xmlTextReaderConstLocalName(reader));
        }
        else {
          printf("unknown child element {%s}%s for type {}flow. Skipping...\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
        }
#endif
        status = xmlTextReaderSkipElement(reader);
      }
    }
  }

  return _flow;
}

/**
 * Writes a Flow to XML.
 *
 * @param writer The XML writer.
 * @param _flow The Flow to write.
 * @return The total bytes written, or -1 on error;
 */
static int xmlTextWriterWriteNs0FlowType(xmlTextWriterPtr writer, struct full_ns0_flow *_flow) {
  int status, totalBytes = 0, i;
  xmlChar *binaryData;
  if (1) { //always write the primitive element.
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "priority", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}priority. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}short for element {}priority...\n");
#endif
    status = xmlTextWriterWriteXsShortType(writer, &(_flow->priority));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}short for element {}priority. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}priority. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (1) { //always write the primitive element.
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "idleTimeout", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}idleTimeout. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}short for element {}idleTimeout...\n");
#endif
    status = xmlTextWriterWriteXsShortType(writer, &(_flow->idleTimeout));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}short for element {}idleTimeout. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}idleTimeout. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  for (i = 0; i < _flow->_sizeof_actions; i++) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "actions", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}actions. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {}action for element {}actions...\n");
#endif
    status = xmlTextWriterWriteNs0ActionType(writer, &(_flow->actions[i]));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {}action for element {}actions. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}actions. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (1) { //always write the primitive element.
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "hardTimeout", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}hardTimeout. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}short for element {}hardTimeout...\n");
#endif
    status = xmlTextWriterWriteXsShortType(writer, &(_flow->hardTimeout));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}short for element {}hardTimeout. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}hardTimeout. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (1) { //always write the primitive element.
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "id", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}id. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}long for element {}id...\n");
#endif
    status = xmlTextWriterWriteXsLongType(writer, &(_flow->id));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}long for element {}id. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}id. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_flow->match != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "match", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}match. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {}match for element {}match...\n");
#endif
    status = xmlTextWriterWriteNs0MatchType(writer, (_flow->match));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {}match for element {}match. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}match. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }

  return totalBytes;
}

/**
 * Frees the elements of a Flow.
 *
 * @param _flow The Flow to free.
 */
static void freeNs0FlowType(struct full_ns0_flow *_flow) {
  int i;
  if (_flow->actions != NULL) {
    for (i = 0; i < _flow->_sizeof_actions; i++) {
#if DEBUG_ENUNCIATE > 1
      printf("Freeing accessor actions[%i] of type full_ns0_flow...\n", i);
#endif
      freeNs0ActionType(&(_flow->actions[i]));
    }
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor actions of type full_ns0_flow...\n");
#endif
    free(_flow->actions);
  }
  if (_flow->match != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor match of type full_ns0_flow...\n");
#endif
    freeNs0MatchType(_flow->match);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor match of type full_ns0_flow...\n");
#endif
    free(_flow->match);
  }
}
#endif /* DEF_full_ns0_flow_M */
#ifndef DEF_full_ns0_match_M
#define DEF_full_ns0_match_M

/**
 * Reads a Match element from XML. The element to be read is "match", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The Match, or NULL in case of error.
 */
struct full_ns0_match *xml_read_full_ns0_match(xmlTextReaderPtr reader) {
  int status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
  return xmlTextReaderReadNs0MatchElement(reader);
}

/**
 * Writes a Match to XML under element name "match".
 *
 * @param writer The XML writer.
 * @param _match The Match to write.
 * @return 1 if successful, 0 otherwise.
 */
int xml_write_full_ns0_match(xmlTextWriterPtr writer, struct full_ns0_match *_match) {
  return xmlTextWriterWriteNs0MatchElementNS(writer, _match, 1);
}

/**
 * Frees a Match.
 *
 * @param _match The Match to free.
 */
void free_full_ns0_match(struct full_ns0_match *_match) {
  freeNs0MatchType(_match);
  free(_match);
}

/**
 * Reads a Match element from XML. The element to be read is "match", and
 * it is assumed that the reader is pointing to that element.
 *
 * @param reader The XML reader.
 * @return The Match, or NULL in case of error.
 */
struct full_ns0_match *xmlTextReaderReadNs0MatchElement(xmlTextReaderPtr reader) {
  struct full_ns0_match *_match = NULL;

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "match", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Attempting to read root element {}match.\n");
#endif
    _match = xmlTextReaderReadNs0MatchType(reader);
  }
#if DEBUG_ENUNCIATE
  if (_match == NULL) {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      printf("attempt to read {}match failed. current element: {}%s\n",  xmlTextReaderConstLocalName(reader));
    }
    else {
      printf("attempt to read {}match failed. current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
    }
  }
#endif

  return _match;
}

/**
 * Writes a Match to XML under element name "match".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _match The Match to write.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0MatchElement(xmlTextWriterPtr writer, struct full_ns0_match *_match) {
  return xmlTextWriterWriteNs0MatchElementNS(writer, _match, 0);
}

/**
 * Writes a Match to XML under element name "match".
 *
 * @param writer The XML writer.
 * @param _match The Match to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0MatchElementNS(xmlTextWriterPtr writer, struct full_ns0_match *_match, int writeNamespaces) {
  int totalBytes = 0;
  int status;

  status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "match", NULL);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write start element {}match. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

#if DEBUG_ENUNCIATE > 1
  printf("writing type {}match for root element {}match...\n");
#endif
  status = xmlTextWriterWriteNs0MatchType(writer, _match);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write type for start element {}match. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  status = xmlTextWriterEndElement(writer);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to end element {}match. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  return totalBytes;
}

/**
 * Frees the children of a Match.
 *
 * @param _match The Match whose children are to be free.
 */
static void freeNs0MatchElement(struct full_ns0_match *_match) {
  freeNs0MatchType(_match);
}

/**
 * Reads a Match from XML. The reader is assumed to be at the start element.
 *
 * @return the Match, or NULL in case of error.
 */
static struct full_ns0_match *xmlTextReaderReadNs0MatchType(xmlTextReaderPtr reader) {
  int status, depth;
  void *_child_accessor;
  struct full_ns0_match *_match = calloc(1, sizeof(struct full_ns0_match));



  if (xmlTextReaderIsEmptyElement(reader) == 0) {
    depth = xmlTextReaderDepth(reader);//track the depth.
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);

    while (xmlTextReaderDepth(reader) > depth) {
      if (status < 1) {
        //panic: XML read error.
#if DEBUG_ENUNCIATE
        printf("Failure to advance to next child element.\n");
#endif
        freeNs0MatchType(_match);
        free(_match);
        return NULL;
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "matchField", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}matchField of type {}matchField.\n");
#endif
        _child_accessor = xmlTextReaderReadNs0MatchFieldType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}matchField of type {}matchField.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0MatchType(_match);
          free(_match);
          return NULL;
        }

        _match->matchFields = realloc(_match->matchFields, (_match->_sizeof_matchFields + 1) * sizeof(struct full_ns0_matchField));
        memcpy(&(_match->matchFields[_match->_sizeof_matchFields++]), _child_accessor, sizeof(struct full_ns0_matchField));
        free(_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else {
#if DEBUG_ENUNCIATE > 1
        if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
          printf("unknown child element {}%s for type {}match.  Skipping...\n",  xmlTextReaderConstLocalName(reader));
        }
        else {
          printf("unknown child element {%s}%s for type {}match. Skipping...\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
        }
#endif
        status = xmlTextReaderSkipElement(reader);
      }
    }
  }

  return _match;
}

/**
 * Writes a Match to XML.
 *
 * @param writer The XML writer.
 * @param _match The Match to write.
 * @return The total bytes written, or -1 on error;
 */
static int xmlTextWriterWriteNs0MatchType(xmlTextWriterPtr writer, struct full_ns0_match *_match) {
  int status, totalBytes = 0, i;
  xmlChar *binaryData;
  for (i = 0; i < _match->_sizeof_matchFields; i++) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "matchField", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}matchField. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {}matchField for element {}matchField...\n");
#endif
    status = xmlTextWriterWriteNs0MatchFieldType(writer, &(_match->matchFields[i]));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {}matchField for element {}matchField. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}matchField. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }

  return totalBytes;
}

/**
 * Frees the elements of a Match.
 *
 * @param _match The Match to free.
 */
static void freeNs0MatchType(struct full_ns0_match *_match) {
  int i;
  if (_match->matchFields != NULL) {
    for (i = 0; i < _match->_sizeof_matchFields; i++) {
#if DEBUG_ENUNCIATE > 1
      printf("Freeing accessor matchFields[%i] of type full_ns0_match...\n", i);
#endif
      freeNs0MatchFieldType(&(_match->matchFields[i]));
    }
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor matchFields of type full_ns0_match...\n");
#endif
    free(_match->matchFields);
  }
}
#endif /* DEF_full_ns0_match_M */
#ifndef DEF_full_ns0_matchField_M
#define DEF_full_ns0_matchField_M

/**
 * Reads a MatchField element from XML. The element to be read is "matchField", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The MatchField, or NULL in case of error.
 */
struct full_ns0_matchField *xml_read_full_ns0_matchField(xmlTextReaderPtr reader) {
  int status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
  return xmlTextReaderReadNs0MatchFieldElement(reader);
}

/**
 * Writes a MatchField to XML under element name "matchField".
 *
 * @param writer The XML writer.
 * @param _matchField The MatchField to write.
 * @return 1 if successful, 0 otherwise.
 */
int xml_write_full_ns0_matchField(xmlTextWriterPtr writer, struct full_ns0_matchField *_matchField) {
  return xmlTextWriterWriteNs0MatchFieldElementNS(writer, _matchField, 1);
}

/**
 * Frees a MatchField.
 *
 * @param _matchField The MatchField to free.
 */
void free_full_ns0_matchField(struct full_ns0_matchField *_matchField) {
  freeNs0MatchFieldType(_matchField);
  free(_matchField);
}

/**
 * Reads a MatchField element from XML. The element to be read is "matchField", and
 * it is assumed that the reader is pointing to that element.
 *
 * @param reader The XML reader.
 * @return The MatchField, or NULL in case of error.
 */
struct full_ns0_matchField *xmlTextReaderReadNs0MatchFieldElement(xmlTextReaderPtr reader) {
  struct full_ns0_matchField *_matchField = NULL;

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "matchField", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Attempting to read root element {}matchField.\n");
#endif
    _matchField = xmlTextReaderReadNs0MatchFieldType(reader);
  }
#if DEBUG_ENUNCIATE
  if (_matchField == NULL) {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      printf("attempt to read {}matchField failed. current element: {}%s\n",  xmlTextReaderConstLocalName(reader));
    }
    else {
      printf("attempt to read {}matchField failed. current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
    }
  }
#endif

  return _matchField;
}

/**
 * Writes a MatchField to XML under element name "matchField".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _matchField The MatchField to write.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0MatchFieldElement(xmlTextWriterPtr writer, struct full_ns0_matchField *_matchField) {
  return xmlTextWriterWriteNs0MatchFieldElementNS(writer, _matchField, 0);
}

/**
 * Writes a MatchField to XML under element name "matchField".
 *
 * @param writer The XML writer.
 * @param _matchField The MatchField to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0MatchFieldElementNS(xmlTextWriterPtr writer, struct full_ns0_matchField *_matchField, int writeNamespaces) {
  int totalBytes = 0;
  int status;

  status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "matchField", NULL);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write start element {}matchField. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

#if DEBUG_ENUNCIATE > 1
  printf("writing type {}matchField for root element {}matchField...\n");
#endif
  status = xmlTextWriterWriteNs0MatchFieldType(writer, _matchField);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write type for start element {}matchField. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  status = xmlTextWriterEndElement(writer);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to end element {}matchField. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  return totalBytes;
}

/**
 * Frees the children of a MatchField.
 *
 * @param _matchField The MatchField whose children are to be free.
 */
static void freeNs0MatchFieldElement(struct full_ns0_matchField *_matchField) {
  freeNs0MatchFieldType(_matchField);
}

/**
 * Reads a MatchField from XML. The reader is assumed to be at the start element.
 *
 * @return the MatchField, or NULL in case of error.
 */
static struct full_ns0_matchField *xmlTextReaderReadNs0MatchFieldType(xmlTextReaderPtr reader) {
  int status, depth;
  void *_child_accessor;
  struct full_ns0_matchField *_matchField = calloc(1, sizeof(struct full_ns0_matchField));




  return _matchField;
}

/**
 * Writes a MatchField to XML.
 *
 * @param writer The XML writer.
 * @param _matchField The MatchField to write.
 * @return The total bytes written, or -1 on error;
 */
static int xmlTextWriterWriteNs0MatchFieldType(xmlTextWriterPtr writer, struct full_ns0_matchField *_matchField) {
  int status, totalBytes = 0, i;
  xmlChar *binaryData;

  return totalBytes;
}

/**
 * Frees the elements of a MatchField.
 *
 * @param _matchField The MatchField to free.
 */
static void freeNs0MatchFieldType(struct full_ns0_matchField *_matchField) {
  int i;
}
#endif /* DEF_full_ns0_matchField_M */
#ifndef DEF_full_ns0_flowOnNode_M
#define DEF_full_ns0_flowOnNode_M

/**
 * Reads a FlowOnNode element from XML. The element to be read is "FlowStat", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The FlowOnNode, or NULL in case of error.
 */
struct full_ns0_flowOnNode *xml_read_full_ns0_flowOnNode(xmlTextReaderPtr reader) {
  int status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
  return xmlTextReaderReadNs0FlowStatElement(reader);
}

/**
 * Writes a FlowOnNode to XML under element name "FlowStat".
 *
 * @param writer The XML writer.
 * @param _flowOnNode The FlowOnNode to write.
 * @return 1 if successful, 0 otherwise.
 */
int xml_write_full_ns0_flowOnNode(xmlTextWriterPtr writer, struct full_ns0_flowOnNode *_flowOnNode) {
  return xmlTextWriterWriteNs0FlowStatElementNS(writer, _flowOnNode, 1);
}

/**
 * Frees a FlowOnNode.
 *
 * @param _flowOnNode The FlowOnNode to free.
 */
void free_full_ns0_flowOnNode(struct full_ns0_flowOnNode *_flowOnNode) {
  freeNs0FlowOnNodeType(_flowOnNode);
  free(_flowOnNode);
}

/**
 * Reads a FlowOnNode element from XML. The element to be read is "FlowStat", and
 * it is assumed that the reader is pointing to that element.
 *
 * @param reader The XML reader.
 * @return The FlowOnNode, or NULL in case of error.
 */
struct full_ns0_flowOnNode *xmlTextReaderReadNs0FlowStatElement(xmlTextReaderPtr reader) {
  struct full_ns0_flowOnNode *_flowOnNode = NULL;

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "FlowStat", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Attempting to read root element {}FlowStat.\n");
#endif
    _flowOnNode = xmlTextReaderReadNs0FlowOnNodeType(reader);
  }
#if DEBUG_ENUNCIATE
  if (_flowOnNode == NULL) {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      printf("attempt to read {}FlowStat failed. current element: {}%s\n",  xmlTextReaderConstLocalName(reader));
    }
    else {
      printf("attempt to read {}FlowStat failed. current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
    }
  }
#endif

  return _flowOnNode;
}

/**
 * Writes a FlowOnNode to XML under element name "FlowStat".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _flowOnNode The FlowOnNode to write.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0FlowStatElement(xmlTextWriterPtr writer, struct full_ns0_flowOnNode *_flowOnNode) {
  return xmlTextWriterWriteNs0FlowStatElementNS(writer, _flowOnNode, 0);
}

/**
 * Writes a FlowOnNode to XML under element name "FlowStat".
 *
 * @param writer The XML writer.
 * @param _flowOnNode The FlowOnNode to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0FlowStatElementNS(xmlTextWriterPtr writer, struct full_ns0_flowOnNode *_flowOnNode, int writeNamespaces) {
  int totalBytes = 0;
  int status;

  status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "FlowStat", NULL);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write start element {}FlowStat. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

#if DEBUG_ENUNCIATE > 1
  printf("writing type {}flowOnNode for root element {}FlowStat...\n");
#endif
  status = xmlTextWriterWriteNs0FlowOnNodeType(writer, _flowOnNode);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write type for start element {}FlowStat. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  status = xmlTextWriterEndElement(writer);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to end element {}FlowStat. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  return totalBytes;
}

/**
 * Frees the children of a FlowOnNode.
 *
 * @param _flowOnNode The FlowOnNode whose children are to be free.
 */
static void freeNs0FlowStatElement(struct full_ns0_flowOnNode *_flowOnNode) {
  freeNs0FlowOnNodeType(_flowOnNode);
}

/**
 * Reads a FlowOnNode from XML. The reader is assumed to be at the start element.
 *
 * @return the FlowOnNode, or NULL in case of error.
 */
static struct full_ns0_flowOnNode *xmlTextReaderReadNs0FlowOnNodeType(xmlTextReaderPtr reader) {
  int status, depth;
  void *_child_accessor;
  struct full_ns0_flowOnNode *_flowOnNode = calloc(1, sizeof(struct full_ns0_flowOnNode));



  if (xmlTextReaderIsEmptyElement(reader) == 0) {
    depth = xmlTextReaderDepth(reader);//track the depth.
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);

    while (xmlTextReaderDepth(reader) > depth) {
      if (status < 1) {
        //panic: XML read error.
#if DEBUG_ENUNCIATE
        printf("Failure to advance to next child element.\n");
#endif
        freeNs0FlowOnNodeType(_flowOnNode);
        free(_flowOnNode);
        return NULL;
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "flow", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}flow of type {}flow.\n");
#endif
        _child_accessor = xmlTextReaderReadNs0FlowType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}flow of type {}flow.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0FlowOnNodeType(_flowOnNode);
          free(_flowOnNode);
          return NULL;
        }

        _flowOnNode->flow = ((struct full_ns0_flow*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "packetCount", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}packetCount of type {http://www.w3.org/2001/XMLSchema}long.\n");
#endif
        _child_accessor = xmlTextReaderReadXsLongType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}packetCount of type {http://www.w3.org/2001/XMLSchema}long.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0FlowOnNodeType(_flowOnNode);
          free(_flowOnNode);
          return NULL;
        }

        _flowOnNode->packetCount = *((long*)_child_accessor);
        free(_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "durationNanoseconds", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}durationNanoseconds of type {http://www.w3.org/2001/XMLSchema}int.\n");
#endif
        _child_accessor = xmlTextReaderReadXsIntType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}durationNanoseconds of type {http://www.w3.org/2001/XMLSchema}int.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0FlowOnNodeType(_flowOnNode);
          free(_flowOnNode);
          return NULL;
        }

        _flowOnNode->durationNanoseconds = *((int*)_child_accessor);
        free(_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "byteCount", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}byteCount of type {http://www.w3.org/2001/XMLSchema}long.\n");
#endif
        _child_accessor = xmlTextReaderReadXsLongType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}byteCount of type {http://www.w3.org/2001/XMLSchema}long.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0FlowOnNodeType(_flowOnNode);
          free(_flowOnNode);
          return NULL;
        }

        _flowOnNode->byteCount = *((long*)_child_accessor);
        free(_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "tableId", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}tableId of type {http://www.w3.org/2001/XMLSchema}byte.\n");
#endif
        _child_accessor = xmlTextReaderReadXsByteType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}tableId of type {http://www.w3.org/2001/XMLSchema}byte.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0FlowOnNodeType(_flowOnNode);
          free(_flowOnNode);
          return NULL;
        }

        _flowOnNode->tableId = *((unsigned char*)_child_accessor);
        free(_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "durationSeconds", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}durationSeconds of type {http://www.w3.org/2001/XMLSchema}int.\n");
#endif
        _child_accessor = xmlTextReaderReadXsIntType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}durationSeconds of type {http://www.w3.org/2001/XMLSchema}int.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0FlowOnNodeType(_flowOnNode);
          free(_flowOnNode);
          return NULL;
        }

        _flowOnNode->durationSeconds = *((int*)_child_accessor);
        free(_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else {
#if DEBUG_ENUNCIATE > 1
        if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
          printf("unknown child element {}%s for type {}flowOnNode.  Skipping...\n",  xmlTextReaderConstLocalName(reader));
        }
        else {
          printf("unknown child element {%s}%s for type {}flowOnNode. Skipping...\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
        }
#endif
        status = xmlTextReaderSkipElement(reader);
      }
    }
  }

  return _flowOnNode;
}

/**
 * Writes a FlowOnNode to XML.
 *
 * @param writer The XML writer.
 * @param _flowOnNode The FlowOnNode to write.
 * @return The total bytes written, or -1 on error;
 */
static int xmlTextWriterWriteNs0FlowOnNodeType(xmlTextWriterPtr writer, struct full_ns0_flowOnNode *_flowOnNode) {
  int status, totalBytes = 0, i;
  xmlChar *binaryData;
  if (_flowOnNode->flow != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "flow", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}flow. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {}flow for element {}flow...\n");
#endif
    status = xmlTextWriterWriteNs0FlowType(writer, (_flowOnNode->flow));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {}flow for element {}flow. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}flow. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (1) { //always write the primitive element.
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "packetCount", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}packetCount. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}long for element {}packetCount...\n");
#endif
    status = xmlTextWriterWriteXsLongType(writer, &(_flowOnNode->packetCount));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}long for element {}packetCount. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}packetCount. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (1) { //always write the primitive element.
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "durationNanoseconds", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}durationNanoseconds. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}int for element {}durationNanoseconds...\n");
#endif
    status = xmlTextWriterWriteXsIntType(writer, &(_flowOnNode->durationNanoseconds));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}int for element {}durationNanoseconds. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}durationNanoseconds. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (1) { //always write the primitive element.
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "byteCount", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}byteCount. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}long for element {}byteCount...\n");
#endif
    status = xmlTextWriterWriteXsLongType(writer, &(_flowOnNode->byteCount));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}long for element {}byteCount. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}byteCount. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (1) { //always write the primitive element.
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "tableId", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}tableId. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}byte for element {}tableId...\n");
#endif
    status = xmlTextWriterWriteXsByteType(writer, &(_flowOnNode->tableId));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}byte for element {}tableId. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}tableId. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (1) { //always write the primitive element.
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "durationSeconds", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}durationSeconds. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}int for element {}durationSeconds...\n");
#endif
    status = xmlTextWriterWriteXsIntType(writer, &(_flowOnNode->durationSeconds));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}int for element {}durationSeconds. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}durationSeconds. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }

  return totalBytes;
}

/**
 * Frees the elements of a FlowOnNode.
 *
 * @param _flowOnNode The FlowOnNode to free.
 */
static void freeNs0FlowOnNodeType(struct full_ns0_flowOnNode *_flowOnNode) {
  int i;
  if (_flowOnNode->flow != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor flow of type full_ns0_flowOnNode...\n");
#endif
    freeNs0FlowType(_flowOnNode->flow);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor flow of type full_ns0_flowOnNode...\n");
#endif
    free(_flowOnNode->flow);
  }
}
#endif /* DEF_full_ns0_flowOnNode_M */
#ifndef DEF_full_ns0_nodeConnectorStatistics_M
#define DEF_full_ns0_nodeConnectorStatistics_M

/**
 * Reads a NodeConnectorStatistics element from XML. The element to be read is "nodeConnectorStatistics", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The NodeConnectorStatistics, or NULL in case of error.
 */
struct full_ns0_nodeConnectorStatistics *xml_read_full_ns0_nodeConnectorStatistics(xmlTextReaderPtr reader) {
  int status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
  return xmlTextReaderReadNs0NodeConnectorStatisticsElement(reader);
}

/**
 * Writes a NodeConnectorStatistics to XML under element name "nodeConnectorStatistics".
 *
 * @param writer The XML writer.
 * @param _nodeConnectorStatistics The NodeConnectorStatistics to write.
 * @return 1 if successful, 0 otherwise.
 */
int xml_write_full_ns0_nodeConnectorStatistics(xmlTextWriterPtr writer, struct full_ns0_nodeConnectorStatistics *_nodeConnectorStatistics) {
  return xmlTextWriterWriteNs0NodeConnectorStatisticsElementNS(writer, _nodeConnectorStatistics, 1);
}

/**
 * Frees a NodeConnectorStatistics.
 *
 * @param _nodeConnectorStatistics The NodeConnectorStatistics to free.
 */
void free_full_ns0_nodeConnectorStatistics(struct full_ns0_nodeConnectorStatistics *_nodeConnectorStatistics) {
  freeNs0NodeConnectorStatisticsType(_nodeConnectorStatistics);
  free(_nodeConnectorStatistics);
}

/**
 * Reads a NodeConnectorStatistics element from XML. The element to be read is "nodeConnectorStatistics", and
 * it is assumed that the reader is pointing to that element.
 *
 * @param reader The XML reader.
 * @return The NodeConnectorStatistics, or NULL in case of error.
 */
struct full_ns0_nodeConnectorStatistics *xmlTextReaderReadNs0NodeConnectorStatisticsElement(xmlTextReaderPtr reader) {
  struct full_ns0_nodeConnectorStatistics *_nodeConnectorStatistics = NULL;

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "nodeConnectorStatistics", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Attempting to read root element {}nodeConnectorStatistics.\n");
#endif
    _nodeConnectorStatistics = xmlTextReaderReadNs0NodeConnectorStatisticsType(reader);
  }
#if DEBUG_ENUNCIATE
  if (_nodeConnectorStatistics == NULL) {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      printf("attempt to read {}nodeConnectorStatistics failed. current element: {}%s\n",  xmlTextReaderConstLocalName(reader));
    }
    else {
      printf("attempt to read {}nodeConnectorStatistics failed. current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
    }
  }
#endif

  return _nodeConnectorStatistics;
}

/**
 * Writes a NodeConnectorStatistics to XML under element name "nodeConnectorStatistics".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _nodeConnectorStatistics The NodeConnectorStatistics to write.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0NodeConnectorStatisticsElement(xmlTextWriterPtr writer, struct full_ns0_nodeConnectorStatistics *_nodeConnectorStatistics) {
  return xmlTextWriterWriteNs0NodeConnectorStatisticsElementNS(writer, _nodeConnectorStatistics, 0);
}

/**
 * Writes a NodeConnectorStatistics to XML under element name "nodeConnectorStatistics".
 *
 * @param writer The XML writer.
 * @param _nodeConnectorStatistics The NodeConnectorStatistics to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0NodeConnectorStatisticsElementNS(xmlTextWriterPtr writer, struct full_ns0_nodeConnectorStatistics *_nodeConnectorStatistics, int writeNamespaces) {
  int totalBytes = 0;
  int status;

  status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "nodeConnectorStatistics", NULL);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write start element {}nodeConnectorStatistics. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

#if DEBUG_ENUNCIATE > 1
  printf("writing type {}nodeConnectorStatistics for root element {}nodeConnectorStatistics...\n");
#endif
  status = xmlTextWriterWriteNs0NodeConnectorStatisticsType(writer, _nodeConnectorStatistics);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write type for start element {}nodeConnectorStatistics. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  status = xmlTextWriterEndElement(writer);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to end element {}nodeConnectorStatistics. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  return totalBytes;
}

/**
 * Frees the children of a NodeConnectorStatistics.
 *
 * @param _nodeConnectorStatistics The NodeConnectorStatistics whose children are to be free.
 */
static void freeNs0NodeConnectorStatisticsElement(struct full_ns0_nodeConnectorStatistics *_nodeConnectorStatistics) {
  freeNs0NodeConnectorStatisticsType(_nodeConnectorStatistics);
}

/**
 * Reads a NodeConnectorStatistics from XML. The reader is assumed to be at the start element.
 *
 * @return the NodeConnectorStatistics, or NULL in case of error.
 */
static struct full_ns0_nodeConnectorStatistics *xmlTextReaderReadNs0NodeConnectorStatisticsType(xmlTextReaderPtr reader) {
  int status, depth;
  void *_child_accessor;
  struct full_ns0_nodeConnectorStatistics *_nodeConnectorStatistics = calloc(1, sizeof(struct full_ns0_nodeConnectorStatistics));



  if (xmlTextReaderIsEmptyElement(reader) == 0) {
    depth = xmlTextReaderDepth(reader);//track the depth.
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);

    while (xmlTextReaderDepth(reader) > depth) {
      if (status < 1) {
        //panic: XML read error.
#if DEBUG_ENUNCIATE
        printf("Failure to advance to next child element.\n");
#endif
        freeNs0NodeConnectorStatisticsType(_nodeConnectorStatistics);
        free(_nodeConnectorStatistics);
        return NULL;
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "receiveOverRunError", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}receiveOverRunError of type {http://www.w3.org/2001/XMLSchema}long.\n");
#endif
        _child_accessor = xmlTextReaderReadXsLongType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}receiveOverRunError of type {http://www.w3.org/2001/XMLSchema}long.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0NodeConnectorStatisticsType(_nodeConnectorStatistics);
          free(_nodeConnectorStatistics);
          return NULL;
        }

        _nodeConnectorStatistics->receiveOverRunError = *((long*)_child_accessor);
        free(_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "transmitErrors", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}transmitErrors of type {http://www.w3.org/2001/XMLSchema}long.\n");
#endif
        _child_accessor = xmlTextReaderReadXsLongType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}transmitErrors of type {http://www.w3.org/2001/XMLSchema}long.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0NodeConnectorStatisticsType(_nodeConnectorStatistics);
          free(_nodeConnectorStatistics);
          return NULL;
        }

        _nodeConnectorStatistics->transmitErrors = *((long*)_child_accessor);
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
          freeNs0NodeConnectorStatisticsType(_nodeConnectorStatistics);
          free(_nodeConnectorStatistics);
          return NULL;
        }

        _nodeConnectorStatistics->nodeConnector = ((struct full_ns0_nodeConnector*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "receiveFrameError", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}receiveFrameError of type {http://www.w3.org/2001/XMLSchema}long.\n");
#endif
        _child_accessor = xmlTextReaderReadXsLongType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}receiveFrameError of type {http://www.w3.org/2001/XMLSchema}long.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0NodeConnectorStatisticsType(_nodeConnectorStatistics);
          free(_nodeConnectorStatistics);
          return NULL;
        }

        _nodeConnectorStatistics->receiveFrameError = *((long*)_child_accessor);
        free(_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "transmitPackets", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}transmitPackets of type {http://www.w3.org/2001/XMLSchema}long.\n");
#endif
        _child_accessor = xmlTextReaderReadXsLongType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}transmitPackets of type {http://www.w3.org/2001/XMLSchema}long.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0NodeConnectorStatisticsType(_nodeConnectorStatistics);
          free(_nodeConnectorStatistics);
          return NULL;
        }

        _nodeConnectorStatistics->transmitPackets = *((long*)_child_accessor);
        free(_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "receiveBytes", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}receiveBytes of type {http://www.w3.org/2001/XMLSchema}long.\n");
#endif
        _child_accessor = xmlTextReaderReadXsLongType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}receiveBytes of type {http://www.w3.org/2001/XMLSchema}long.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0NodeConnectorStatisticsType(_nodeConnectorStatistics);
          free(_nodeConnectorStatistics);
          return NULL;
        }

        _nodeConnectorStatistics->receiveBytes = *((long*)_child_accessor);
        free(_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "receiveCrcError", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}receiveCrcError of type {http://www.w3.org/2001/XMLSchema}long.\n");
#endif
        _child_accessor = xmlTextReaderReadXsLongType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}receiveCrcError of type {http://www.w3.org/2001/XMLSchema}long.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0NodeConnectorStatisticsType(_nodeConnectorStatistics);
          free(_nodeConnectorStatistics);
          return NULL;
        }

        _nodeConnectorStatistics->receiveCrcError = *((long*)_child_accessor);
        free(_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "collisionCount", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}collisionCount of type {http://www.w3.org/2001/XMLSchema}long.\n");
#endif
        _child_accessor = xmlTextReaderReadXsLongType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}collisionCount of type {http://www.w3.org/2001/XMLSchema}long.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0NodeConnectorStatisticsType(_nodeConnectorStatistics);
          free(_nodeConnectorStatistics);
          return NULL;
        }

        _nodeConnectorStatistics->collisionCount = *((long*)_child_accessor);
        free(_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "receiveDrops", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}receiveDrops of type {http://www.w3.org/2001/XMLSchema}long.\n");
#endif
        _child_accessor = xmlTextReaderReadXsLongType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}receiveDrops of type {http://www.w3.org/2001/XMLSchema}long.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0NodeConnectorStatisticsType(_nodeConnectorStatistics);
          free(_nodeConnectorStatistics);
          return NULL;
        }

        _nodeConnectorStatistics->receiveDrops = *((long*)_child_accessor);
        free(_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "transmitBytes", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}transmitBytes of type {http://www.w3.org/2001/XMLSchema}long.\n");
#endif
        _child_accessor = xmlTextReaderReadXsLongType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}transmitBytes of type {http://www.w3.org/2001/XMLSchema}long.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0NodeConnectorStatisticsType(_nodeConnectorStatistics);
          free(_nodeConnectorStatistics);
          return NULL;
        }

        _nodeConnectorStatistics->transmitBytes = *((long*)_child_accessor);
        free(_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "transmitDrops", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}transmitDrops of type {http://www.w3.org/2001/XMLSchema}long.\n");
#endif
        _child_accessor = xmlTextReaderReadXsLongType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}transmitDrops of type {http://www.w3.org/2001/XMLSchema}long.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0NodeConnectorStatisticsType(_nodeConnectorStatistics);
          free(_nodeConnectorStatistics);
          return NULL;
        }

        _nodeConnectorStatistics->transmitDrops = *((long*)_child_accessor);
        free(_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "receiveErrors", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}receiveErrors of type {http://www.w3.org/2001/XMLSchema}long.\n");
#endif
        _child_accessor = xmlTextReaderReadXsLongType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}receiveErrors of type {http://www.w3.org/2001/XMLSchema}long.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0NodeConnectorStatisticsType(_nodeConnectorStatistics);
          free(_nodeConnectorStatistics);
          return NULL;
        }

        _nodeConnectorStatistics->receiveErrors = *((long*)_child_accessor);
        free(_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "receivePackets", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}receivePackets of type {http://www.w3.org/2001/XMLSchema}long.\n");
#endif
        _child_accessor = xmlTextReaderReadXsLongType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}receivePackets of type {http://www.w3.org/2001/XMLSchema}long.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0NodeConnectorStatisticsType(_nodeConnectorStatistics);
          free(_nodeConnectorStatistics);
          return NULL;
        }

        _nodeConnectorStatistics->receivePackets = *((long*)_child_accessor);
        free(_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else {
#if DEBUG_ENUNCIATE > 1
        if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
          printf("unknown child element {}%s for type {}nodeConnectorStatistics.  Skipping...\n",  xmlTextReaderConstLocalName(reader));
        }
        else {
          printf("unknown child element {%s}%s for type {}nodeConnectorStatistics. Skipping...\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
        }
#endif
        status = xmlTextReaderSkipElement(reader);
      }
    }
  }

  return _nodeConnectorStatistics;
}

/**
 * Writes a NodeConnectorStatistics to XML.
 *
 * @param writer The XML writer.
 * @param _nodeConnectorStatistics The NodeConnectorStatistics to write.
 * @return The total bytes written, or -1 on error;
 */
static int xmlTextWriterWriteNs0NodeConnectorStatisticsType(xmlTextWriterPtr writer, struct full_ns0_nodeConnectorStatistics *_nodeConnectorStatistics) {
  int status, totalBytes = 0, i;
  xmlChar *binaryData;
  if (1) { //always write the primitive element.
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "receiveOverRunError", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}receiveOverRunError. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}long for element {}receiveOverRunError...\n");
#endif
    status = xmlTextWriterWriteXsLongType(writer, &(_nodeConnectorStatistics->receiveOverRunError));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}long for element {}receiveOverRunError. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}receiveOverRunError. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (1) { //always write the primitive element.
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "transmitErrors", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}transmitErrors. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}long for element {}transmitErrors...\n");
#endif
    status = xmlTextWriterWriteXsLongType(writer, &(_nodeConnectorStatistics->transmitErrors));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}long for element {}transmitErrors. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}transmitErrors. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_nodeConnectorStatistics->nodeConnector != NULL) {
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
    status = xmlTextWriterWriteNs0NodeConnectorType(writer, (_nodeConnectorStatistics->nodeConnector));
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
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "receiveFrameError", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}receiveFrameError. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}long for element {}receiveFrameError...\n");
#endif
    status = xmlTextWriterWriteXsLongType(writer, &(_nodeConnectorStatistics->receiveFrameError));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}long for element {}receiveFrameError. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}receiveFrameError. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (1) { //always write the primitive element.
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "transmitPackets", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}transmitPackets. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}long for element {}transmitPackets...\n");
#endif
    status = xmlTextWriterWriteXsLongType(writer, &(_nodeConnectorStatistics->transmitPackets));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}long for element {}transmitPackets. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}transmitPackets. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (1) { //always write the primitive element.
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "receiveBytes", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}receiveBytes. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}long for element {}receiveBytes...\n");
#endif
    status = xmlTextWriterWriteXsLongType(writer, &(_nodeConnectorStatistics->receiveBytes));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}long for element {}receiveBytes. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}receiveBytes. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (1) { //always write the primitive element.
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "receiveCrcError", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}receiveCrcError. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}long for element {}receiveCrcError...\n");
#endif
    status = xmlTextWriterWriteXsLongType(writer, &(_nodeConnectorStatistics->receiveCrcError));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}long for element {}receiveCrcError. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}receiveCrcError. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (1) { //always write the primitive element.
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "collisionCount", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}collisionCount. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}long for element {}collisionCount...\n");
#endif
    status = xmlTextWriterWriteXsLongType(writer, &(_nodeConnectorStatistics->collisionCount));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}long for element {}collisionCount. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}collisionCount. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (1) { //always write the primitive element.
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "receiveDrops", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}receiveDrops. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}long for element {}receiveDrops...\n");
#endif
    status = xmlTextWriterWriteXsLongType(writer, &(_nodeConnectorStatistics->receiveDrops));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}long for element {}receiveDrops. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}receiveDrops. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (1) { //always write the primitive element.
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "transmitBytes", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}transmitBytes. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}long for element {}transmitBytes...\n");
#endif
    status = xmlTextWriterWriteXsLongType(writer, &(_nodeConnectorStatistics->transmitBytes));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}long for element {}transmitBytes. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}transmitBytes. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (1) { //always write the primitive element.
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "transmitDrops", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}transmitDrops. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}long for element {}transmitDrops...\n");
#endif
    status = xmlTextWriterWriteXsLongType(writer, &(_nodeConnectorStatistics->transmitDrops));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}long for element {}transmitDrops. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}transmitDrops. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (1) { //always write the primitive element.
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "receiveErrors", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}receiveErrors. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}long for element {}receiveErrors...\n");
#endif
    status = xmlTextWriterWriteXsLongType(writer, &(_nodeConnectorStatistics->receiveErrors));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}long for element {}receiveErrors. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}receiveErrors. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (1) { //always write the primitive element.
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "receivePackets", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}receivePackets. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}long for element {}receivePackets...\n");
#endif
    status = xmlTextWriterWriteXsLongType(writer, &(_nodeConnectorStatistics->receivePackets));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}long for element {}receivePackets. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}receivePackets. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }

  return totalBytes;
}

/**
 * Frees the elements of a NodeConnectorStatistics.
 *
 * @param _nodeConnectorStatistics The NodeConnectorStatistics to free.
 */
static void freeNs0NodeConnectorStatisticsType(struct full_ns0_nodeConnectorStatistics *_nodeConnectorStatistics) {
  int i;
  if (_nodeConnectorStatistics->nodeConnector != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor nodeConnector of type full_ns0_nodeConnectorStatistics...\n");
#endif
    freeNs0NodeConnectorType(_nodeConnectorStatistics->nodeConnector);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor nodeConnector of type full_ns0_nodeConnectorStatistics...\n");
#endif
    free(_nodeConnectorStatistics->nodeConnector);
  }
}
#endif /* DEF_full_ns0_nodeConnectorStatistics_M */
#ifndef DEF_full_ns0_nodeTableStatistics_M
#define DEF_full_ns0_nodeTableStatistics_M

/**
 * Reads a NodeTableStatistics element from XML. The element to be read is "nodeTableStatistics", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The NodeTableStatistics, or NULL in case of error.
 */
struct full_ns0_nodeTableStatistics *xml_read_full_ns0_nodeTableStatistics(xmlTextReaderPtr reader) {
  int status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
  return xmlTextReaderReadNs0NodeTableStatisticsElement(reader);
}

/**
 * Writes a NodeTableStatistics to XML under element name "nodeTableStatistics".
 *
 * @param writer The XML writer.
 * @param _nodeTableStatistics The NodeTableStatistics to write.
 * @return 1 if successful, 0 otherwise.
 */
int xml_write_full_ns0_nodeTableStatistics(xmlTextWriterPtr writer, struct full_ns0_nodeTableStatistics *_nodeTableStatistics) {
  return xmlTextWriterWriteNs0NodeTableStatisticsElementNS(writer, _nodeTableStatistics, 1);
}

/**
 * Frees a NodeTableStatistics.
 *
 * @param _nodeTableStatistics The NodeTableStatistics to free.
 */
void free_full_ns0_nodeTableStatistics(struct full_ns0_nodeTableStatistics *_nodeTableStatistics) {
  freeNs0NodeTableStatisticsType(_nodeTableStatistics);
  free(_nodeTableStatistics);
}

/**
 * Reads a NodeTableStatistics element from XML. The element to be read is "nodeTableStatistics", and
 * it is assumed that the reader is pointing to that element.
 *
 * @param reader The XML reader.
 * @return The NodeTableStatistics, or NULL in case of error.
 */
struct full_ns0_nodeTableStatistics *xmlTextReaderReadNs0NodeTableStatisticsElement(xmlTextReaderPtr reader) {
  struct full_ns0_nodeTableStatistics *_nodeTableStatistics = NULL;

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "nodeTableStatistics", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Attempting to read root element {}nodeTableStatistics.\n");
#endif
    _nodeTableStatistics = xmlTextReaderReadNs0NodeTableStatisticsType(reader);
  }
#if DEBUG_ENUNCIATE
  if (_nodeTableStatistics == NULL) {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      printf("attempt to read {}nodeTableStatistics failed. current element: {}%s\n",  xmlTextReaderConstLocalName(reader));
    }
    else {
      printf("attempt to read {}nodeTableStatistics failed. current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
    }
  }
#endif

  return _nodeTableStatistics;
}

/**
 * Writes a NodeTableStatistics to XML under element name "nodeTableStatistics".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _nodeTableStatistics The NodeTableStatistics to write.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0NodeTableStatisticsElement(xmlTextWriterPtr writer, struct full_ns0_nodeTableStatistics *_nodeTableStatistics) {
  return xmlTextWriterWriteNs0NodeTableStatisticsElementNS(writer, _nodeTableStatistics, 0);
}

/**
 * Writes a NodeTableStatistics to XML under element name "nodeTableStatistics".
 *
 * @param writer The XML writer.
 * @param _nodeTableStatistics The NodeTableStatistics to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0NodeTableStatisticsElementNS(xmlTextWriterPtr writer, struct full_ns0_nodeTableStatistics *_nodeTableStatistics, int writeNamespaces) {
  int totalBytes = 0;
  int status;

  status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "nodeTableStatistics", NULL);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write start element {}nodeTableStatistics. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

#if DEBUG_ENUNCIATE > 1
  printf("writing type {}nodeTableStatistics for root element {}nodeTableStatistics...\n");
#endif
  status = xmlTextWriterWriteNs0NodeTableStatisticsType(writer, _nodeTableStatistics);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write type for start element {}nodeTableStatistics. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  status = xmlTextWriterEndElement(writer);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to end element {}nodeTableStatistics. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  return totalBytes;
}

/**
 * Frees the children of a NodeTableStatistics.
 *
 * @param _nodeTableStatistics The NodeTableStatistics whose children are to be free.
 */
static void freeNs0NodeTableStatisticsElement(struct full_ns0_nodeTableStatistics *_nodeTableStatistics) {
  freeNs0NodeTableStatisticsType(_nodeTableStatistics);
}

/**
 * Reads a NodeTableStatistics from XML. The reader is assumed to be at the start element.
 *
 * @return the NodeTableStatistics, or NULL in case of error.
 */
static struct full_ns0_nodeTableStatistics *xmlTextReaderReadNs0NodeTableStatisticsType(xmlTextReaderPtr reader) {
  int status, depth;
  void *_child_accessor;
  struct full_ns0_nodeTableStatistics *_nodeTableStatistics = calloc(1, sizeof(struct full_ns0_nodeTableStatistics));



  if (xmlTextReaderIsEmptyElement(reader) == 0) {
    depth = xmlTextReaderDepth(reader);//track the depth.
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);

    while (xmlTextReaderDepth(reader) > depth) {
      if (status < 1) {
        //panic: XML read error.
#if DEBUG_ENUNCIATE
        printf("Failure to advance to next child element.\n");
#endif
        freeNs0NodeTableStatisticsType(_nodeTableStatistics);
        free(_nodeTableStatistics);
        return NULL;
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "name", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}name of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}name of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0NodeTableStatisticsType(_nodeTableStatistics);
          free(_nodeTableStatistics);
          return NULL;
        }

        _nodeTableStatistics->name = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "matchedCount", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}matchedCount of type {http://www.w3.org/2001/XMLSchema}long.\n");
#endif
        _child_accessor = xmlTextReaderReadXsLongType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}matchedCount of type {http://www.w3.org/2001/XMLSchema}long.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0NodeTableStatisticsType(_nodeTableStatistics);
          free(_nodeTableStatistics);
          return NULL;
        }

        _nodeTableStatistics->matchedCount = *((long*)_child_accessor);
        free(_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "nodeTable", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}nodeTable of type {}nodeTable.\n");
#endif
        _child_accessor = xmlTextReaderReadNs0NodeTableType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}nodeTable of type {}nodeTable.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0NodeTableStatisticsType(_nodeTableStatistics);
          free(_nodeTableStatistics);
          return NULL;
        }

        _nodeTableStatistics->nodeTable = ((struct full_ns0_nodeTable*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "activeCount", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}activeCount of type {http://www.w3.org/2001/XMLSchema}int.\n");
#endif
        _child_accessor = xmlTextReaderReadXsIntType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}activeCount of type {http://www.w3.org/2001/XMLSchema}int.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0NodeTableStatisticsType(_nodeTableStatistics);
          free(_nodeTableStatistics);
          return NULL;
        }

        _nodeTableStatistics->activeCount = *((int*)_child_accessor);
        free(_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "lookupCount", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}lookupCount of type {http://www.w3.org/2001/XMLSchema}long.\n");
#endif
        _child_accessor = xmlTextReaderReadXsLongType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}lookupCount of type {http://www.w3.org/2001/XMLSchema}long.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0NodeTableStatisticsType(_nodeTableStatistics);
          free(_nodeTableStatistics);
          return NULL;
        }

        _nodeTableStatistics->lookupCount = *((long*)_child_accessor);
        free(_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else {
#if DEBUG_ENUNCIATE > 1
        if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
          printf("unknown child element {}%s for type {}nodeTableStatistics.  Skipping...\n",  xmlTextReaderConstLocalName(reader));
        }
        else {
          printf("unknown child element {%s}%s for type {}nodeTableStatistics. Skipping...\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
        }
#endif
        status = xmlTextReaderSkipElement(reader);
      }
    }
  }

  return _nodeTableStatistics;
}

/**
 * Writes a NodeTableStatistics to XML.
 *
 * @param writer The XML writer.
 * @param _nodeTableStatistics The NodeTableStatistics to write.
 * @return The total bytes written, or -1 on error;
 */
static int xmlTextWriterWriteNs0NodeTableStatisticsType(xmlTextWriterPtr writer, struct full_ns0_nodeTableStatistics *_nodeTableStatistics) {
  int status, totalBytes = 0, i;
  xmlChar *binaryData;
  if (_nodeTableStatistics->name != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "name", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}name. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}name...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_nodeTableStatistics->name));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}name. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}name. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (1) { //always write the primitive element.
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "matchedCount", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}matchedCount. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}long for element {}matchedCount...\n");
#endif
    status = xmlTextWriterWriteXsLongType(writer, &(_nodeTableStatistics->matchedCount));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}long for element {}matchedCount. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}matchedCount. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_nodeTableStatistics->nodeTable != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "nodeTable", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}nodeTable. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {}nodeTable for element {}nodeTable...\n");
#endif
    status = xmlTextWriterWriteNs0NodeTableType(writer, (_nodeTableStatistics->nodeTable));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {}nodeTable for element {}nodeTable. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}nodeTable. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (1) { //always write the primitive element.
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "activeCount", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}activeCount. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}int for element {}activeCount...\n");
#endif
    status = xmlTextWriterWriteXsIntType(writer, &(_nodeTableStatistics->activeCount));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}int for element {}activeCount. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}activeCount. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (1) { //always write the primitive element.
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "lookupCount", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}lookupCount. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}long for element {}lookupCount...\n");
#endif
    status = xmlTextWriterWriteXsLongType(writer, &(_nodeTableStatistics->lookupCount));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}long for element {}lookupCount. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}lookupCount. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }

  return totalBytes;
}

/**
 * Frees the elements of a NodeTableStatistics.
 *
 * @param _nodeTableStatistics The NodeTableStatistics to free.
 */
static void freeNs0NodeTableStatisticsType(struct full_ns0_nodeTableStatistics *_nodeTableStatistics) {
  int i;
  if (_nodeTableStatistics->name != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor name of type full_ns0_nodeTableStatistics...\n");
#endif
    freeXsStringType(_nodeTableStatistics->name);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor name of type full_ns0_nodeTableStatistics...\n");
#endif
    free(_nodeTableStatistics->name);
  }
  if (_nodeTableStatistics->nodeTable != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor nodeTable of type full_ns0_nodeTableStatistics...\n");
#endif
    freeNs0NodeTableType(_nodeTableStatistics->nodeTable);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor nodeTable of type full_ns0_nodeTableStatistics...\n");
#endif
    free(_nodeTableStatistics->nodeTable);
  }
}
#endif /* DEF_full_ns0_nodeTableStatistics_M */
#ifndef DEF_full_ns0_allFlowStatistics_M
#define DEF_full_ns0_allFlowStatistics_M

/**
 * Reads a AllFlowStatistics element from XML. The element to be read is "allFlowStatistics", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The AllFlowStatistics, or NULL in case of error.
 */
struct full_ns0_allFlowStatistics *xml_read_full_ns0_allFlowStatistics(xmlTextReaderPtr reader) {
  int status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
  return xmlTextReaderReadNs0AllFlowStatisticsElement(reader);
}

/**
 * Writes a AllFlowStatistics to XML under element name "allFlowStatistics".
 *
 * @param writer The XML writer.
 * @param _allFlowStatistics The AllFlowStatistics to write.
 * @return 1 if successful, 0 otherwise.
 */
int xml_write_full_ns0_allFlowStatistics(xmlTextWriterPtr writer, struct full_ns0_allFlowStatistics *_allFlowStatistics) {
  return xmlTextWriterWriteNs0AllFlowStatisticsElementNS(writer, _allFlowStatistics, 1);
}

/**
 * Frees a AllFlowStatistics.
 *
 * @param _allFlowStatistics The AllFlowStatistics to free.
 */
void free_full_ns0_allFlowStatistics(struct full_ns0_allFlowStatistics *_allFlowStatistics) {
  freeNs0AllFlowStatisticsType(_allFlowStatistics);
  free(_allFlowStatistics);
}

/**
 * Reads a AllFlowStatistics element from XML. The element to be read is "allFlowStatistics", and
 * it is assumed that the reader is pointing to that element.
 *
 * @param reader The XML reader.
 * @return The AllFlowStatistics, or NULL in case of error.
 */
struct full_ns0_allFlowStatistics *xmlTextReaderReadNs0AllFlowStatisticsElement(xmlTextReaderPtr reader) {
  struct full_ns0_allFlowStatistics *_allFlowStatistics = NULL;

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "allFlowStatistics", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Attempting to read root element {}allFlowStatistics.\n");
#endif
    _allFlowStatistics = xmlTextReaderReadNs0AllFlowStatisticsType(reader);
  }
#if DEBUG_ENUNCIATE
  if (_allFlowStatistics == NULL) {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      printf("attempt to read {}allFlowStatistics failed. current element: {}%s\n",  xmlTextReaderConstLocalName(reader));
    }
    else {
      printf("attempt to read {}allFlowStatistics failed. current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
    }
  }
#endif

  return _allFlowStatistics;
}

/**
 * Writes a AllFlowStatistics to XML under element name "allFlowStatistics".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _allFlowStatistics The AllFlowStatistics to write.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0AllFlowStatisticsElement(xmlTextWriterPtr writer, struct full_ns0_allFlowStatistics *_allFlowStatistics) {
  return xmlTextWriterWriteNs0AllFlowStatisticsElementNS(writer, _allFlowStatistics, 0);
}

/**
 * Writes a AllFlowStatistics to XML under element name "allFlowStatistics".
 *
 * @param writer The XML writer.
 * @param _allFlowStatistics The AllFlowStatistics to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0AllFlowStatisticsElementNS(xmlTextWriterPtr writer, struct full_ns0_allFlowStatistics *_allFlowStatistics, int writeNamespaces) {
  int totalBytes = 0;
  int status;

  status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "allFlowStatistics", NULL);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write start element {}allFlowStatistics. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

#if DEBUG_ENUNCIATE > 1
  printf("writing type {}allFlowStatistics for root element {}allFlowStatistics...\n");
#endif
  status = xmlTextWriterWriteNs0AllFlowStatisticsType(writer, _allFlowStatistics);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write type for start element {}allFlowStatistics. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  status = xmlTextWriterEndElement(writer);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to end element {}allFlowStatistics. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  return totalBytes;
}

/**
 * Frees the children of a AllFlowStatistics.
 *
 * @param _allFlowStatistics The AllFlowStatistics whose children are to be free.
 */
static void freeNs0AllFlowStatisticsElement(struct full_ns0_allFlowStatistics *_allFlowStatistics) {
  freeNs0AllFlowStatisticsType(_allFlowStatistics);
}

/**
 * Reads a AllFlowStatistics from XML. The reader is assumed to be at the start element.
 *
 * @return the AllFlowStatistics, or NULL in case of error.
 */
static struct full_ns0_allFlowStatistics *xmlTextReaderReadNs0AllFlowStatisticsType(xmlTextReaderPtr reader) {
  int status, depth;
  void *_child_accessor;
  struct full_ns0_allFlowStatistics *_allFlowStatistics = calloc(1, sizeof(struct full_ns0_allFlowStatistics));



  if (xmlTextReaderIsEmptyElement(reader) == 0) {
    depth = xmlTextReaderDepth(reader);//track the depth.
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);

    while (xmlTextReaderDepth(reader) > depth) {
      if (status < 1) {
        //panic: XML read error.
#if DEBUG_ENUNCIATE
        printf("Failure to advance to next child element.\n");
#endif
        freeNs0AllFlowStatisticsType(_allFlowStatistics);
        free(_allFlowStatistics);
        return NULL;
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "flowStatistics", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}flowStatistics of type {}flowStatistics.\n");
#endif
        _child_accessor = xmlTextReaderReadNs0FlowStatisticsType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}flowStatistics of type {}flowStatistics.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0AllFlowStatisticsType(_allFlowStatistics);
          free(_allFlowStatistics);
          return NULL;
        }

        _allFlowStatistics->flowStatistics = realloc(_allFlowStatistics->flowStatistics, (_allFlowStatistics->_sizeof_flowStatistics + 1) * sizeof(struct full_ns0_flowStatistics));
        memcpy(&(_allFlowStatistics->flowStatistics[_allFlowStatistics->_sizeof_flowStatistics++]), _child_accessor, sizeof(struct full_ns0_flowStatistics));
        free(_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else {
#if DEBUG_ENUNCIATE > 1
        if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
          printf("unknown child element {}%s for type {}allFlowStatistics.  Skipping...\n",  xmlTextReaderConstLocalName(reader));
        }
        else {
          printf("unknown child element {%s}%s for type {}allFlowStatistics. Skipping...\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
        }
#endif
        status = xmlTextReaderSkipElement(reader);
      }
    }
  }

  return _allFlowStatistics;
}

/**
 * Writes a AllFlowStatistics to XML.
 *
 * @param writer The XML writer.
 * @param _allFlowStatistics The AllFlowStatistics to write.
 * @return The total bytes written, or -1 on error;
 */
static int xmlTextWriterWriteNs0AllFlowStatisticsType(xmlTextWriterPtr writer, struct full_ns0_allFlowStatistics *_allFlowStatistics) {
  int status, totalBytes = 0, i;
  xmlChar *binaryData;
  for (i = 0; i < _allFlowStatistics->_sizeof_flowStatistics; i++) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "flowStatistics", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}flowStatistics. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {}flowStatistics for element {}flowStatistics...\n");
#endif
    status = xmlTextWriterWriteNs0FlowStatisticsType(writer, &(_allFlowStatistics->flowStatistics[i]));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {}flowStatistics for element {}flowStatistics. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}flowStatistics. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }

  return totalBytes;
}

/**
 * Frees the elements of a AllFlowStatistics.
 *
 * @param _allFlowStatistics The AllFlowStatistics to free.
 */
static void freeNs0AllFlowStatisticsType(struct full_ns0_allFlowStatistics *_allFlowStatistics) {
  int i;
  if (_allFlowStatistics->flowStatistics != NULL) {
    for (i = 0; i < _allFlowStatistics->_sizeof_flowStatistics; i++) {
#if DEBUG_ENUNCIATE > 1
      printf("Freeing accessor flowStatistics[%i] of type full_ns0_allFlowStatistics...\n", i);
#endif
      freeNs0FlowStatisticsType(&(_allFlowStatistics->flowStatistics[i]));
    }
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor flowStatistics of type full_ns0_allFlowStatistics...\n");
#endif
    free(_allFlowStatistics->flowStatistics);
  }
}
#endif /* DEF_full_ns0_allFlowStatistics_M */
#ifndef DEF_full_ns0_allPortStatistics_M
#define DEF_full_ns0_allPortStatistics_M

/**
 * Reads a AllPortStatistics element from XML. The element to be read is "allPortStatistics", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The AllPortStatistics, or NULL in case of error.
 */
struct full_ns0_allPortStatistics *xml_read_full_ns0_allPortStatistics(xmlTextReaderPtr reader) {
  int status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
  return xmlTextReaderReadNs0AllPortStatisticsElement(reader);
}

/**
 * Writes a AllPortStatistics to XML under element name "allPortStatistics".
 *
 * @param writer The XML writer.
 * @param _allPortStatistics The AllPortStatistics to write.
 * @return 1 if successful, 0 otherwise.
 */
int xml_write_full_ns0_allPortStatistics(xmlTextWriterPtr writer, struct full_ns0_allPortStatistics *_allPortStatistics) {
  return xmlTextWriterWriteNs0AllPortStatisticsElementNS(writer, _allPortStatistics, 1);
}

/**
 * Frees a AllPortStatistics.
 *
 * @param _allPortStatistics The AllPortStatistics to free.
 */
void free_full_ns0_allPortStatistics(struct full_ns0_allPortStatistics *_allPortStatistics) {
  freeNs0AllPortStatisticsType(_allPortStatistics);
  free(_allPortStatistics);
}

/**
 * Reads a AllPortStatistics element from XML. The element to be read is "allPortStatistics", and
 * it is assumed that the reader is pointing to that element.
 *
 * @param reader The XML reader.
 * @return The AllPortStatistics, or NULL in case of error.
 */
struct full_ns0_allPortStatistics *xmlTextReaderReadNs0AllPortStatisticsElement(xmlTextReaderPtr reader) {
  struct full_ns0_allPortStatistics *_allPortStatistics = NULL;

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "allPortStatistics", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Attempting to read root element {}allPortStatistics.\n");
#endif
    _allPortStatistics = xmlTextReaderReadNs0AllPortStatisticsType(reader);
  }
#if DEBUG_ENUNCIATE
  if (_allPortStatistics == NULL) {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      printf("attempt to read {}allPortStatistics failed. current element: {}%s\n",  xmlTextReaderConstLocalName(reader));
    }
    else {
      printf("attempt to read {}allPortStatistics failed. current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
    }
  }
#endif

  return _allPortStatistics;
}

/**
 * Writes a AllPortStatistics to XML under element name "allPortStatistics".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _allPortStatistics The AllPortStatistics to write.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0AllPortStatisticsElement(xmlTextWriterPtr writer, struct full_ns0_allPortStatistics *_allPortStatistics) {
  return xmlTextWriterWriteNs0AllPortStatisticsElementNS(writer, _allPortStatistics, 0);
}

/**
 * Writes a AllPortStatistics to XML under element name "allPortStatistics".
 *
 * @param writer The XML writer.
 * @param _allPortStatistics The AllPortStatistics to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0AllPortStatisticsElementNS(xmlTextWriterPtr writer, struct full_ns0_allPortStatistics *_allPortStatistics, int writeNamespaces) {
  int totalBytes = 0;
  int status;

  status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "allPortStatistics", NULL);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write start element {}allPortStatistics. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

#if DEBUG_ENUNCIATE > 1
  printf("writing type {}allPortStatistics for root element {}allPortStatistics...\n");
#endif
  status = xmlTextWriterWriteNs0AllPortStatisticsType(writer, _allPortStatistics);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write type for start element {}allPortStatistics. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  status = xmlTextWriterEndElement(writer);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to end element {}allPortStatistics. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  return totalBytes;
}

/**
 * Frees the children of a AllPortStatistics.
 *
 * @param _allPortStatistics The AllPortStatistics whose children are to be free.
 */
static void freeNs0AllPortStatisticsElement(struct full_ns0_allPortStatistics *_allPortStatistics) {
  freeNs0AllPortStatisticsType(_allPortStatistics);
}

/**
 * Reads a AllPortStatistics from XML. The reader is assumed to be at the start element.
 *
 * @return the AllPortStatistics, or NULL in case of error.
 */
static struct full_ns0_allPortStatistics *xmlTextReaderReadNs0AllPortStatisticsType(xmlTextReaderPtr reader) {
  int status, depth;
  void *_child_accessor;
  struct full_ns0_allPortStatistics *_allPortStatistics = calloc(1, sizeof(struct full_ns0_allPortStatistics));



  if (xmlTextReaderIsEmptyElement(reader) == 0) {
    depth = xmlTextReaderDepth(reader);//track the depth.
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);

    while (xmlTextReaderDepth(reader) > depth) {
      if (status < 1) {
        //panic: XML read error.
#if DEBUG_ENUNCIATE
        printf("Failure to advance to next child element.\n");
#endif
        freeNs0AllPortStatisticsType(_allPortStatistics);
        free(_allPortStatistics);
        return NULL;
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "portStatistics", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}portStatistics of type {}portStatistics.\n");
#endif
        _child_accessor = xmlTextReaderReadNs0PortStatisticsType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}portStatistics of type {}portStatistics.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0AllPortStatisticsType(_allPortStatistics);
          free(_allPortStatistics);
          return NULL;
        }

        _allPortStatistics->portStatistics = realloc(_allPortStatistics->portStatistics, (_allPortStatistics->_sizeof_portStatistics + 1) * sizeof(struct full_ns0_portStatistics));
        memcpy(&(_allPortStatistics->portStatistics[_allPortStatistics->_sizeof_portStatistics++]), _child_accessor, sizeof(struct full_ns0_portStatistics));
        free(_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else {
#if DEBUG_ENUNCIATE > 1
        if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
          printf("unknown child element {}%s for type {}allPortStatistics.  Skipping...\n",  xmlTextReaderConstLocalName(reader));
        }
        else {
          printf("unknown child element {%s}%s for type {}allPortStatistics. Skipping...\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
        }
#endif
        status = xmlTextReaderSkipElement(reader);
      }
    }
  }

  return _allPortStatistics;
}

/**
 * Writes a AllPortStatistics to XML.
 *
 * @param writer The XML writer.
 * @param _allPortStatistics The AllPortStatistics to write.
 * @return The total bytes written, or -1 on error;
 */
static int xmlTextWriterWriteNs0AllPortStatisticsType(xmlTextWriterPtr writer, struct full_ns0_allPortStatistics *_allPortStatistics) {
  int status, totalBytes = 0, i;
  xmlChar *binaryData;
  for (i = 0; i < _allPortStatistics->_sizeof_portStatistics; i++) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "portStatistics", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}portStatistics. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {}portStatistics for element {}portStatistics...\n");
#endif
    status = xmlTextWriterWriteNs0PortStatisticsType(writer, &(_allPortStatistics->portStatistics[i]));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {}portStatistics for element {}portStatistics. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}portStatistics. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }

  return totalBytes;
}

/**
 * Frees the elements of a AllPortStatistics.
 *
 * @param _allPortStatistics The AllPortStatistics to free.
 */
static void freeNs0AllPortStatisticsType(struct full_ns0_allPortStatistics *_allPortStatistics) {
  int i;
  if (_allPortStatistics->portStatistics != NULL) {
    for (i = 0; i < _allPortStatistics->_sizeof_portStatistics; i++) {
#if DEBUG_ENUNCIATE > 1
      printf("Freeing accessor portStatistics[%i] of type full_ns0_allPortStatistics...\n", i);
#endif
      freeNs0PortStatisticsType(&(_allPortStatistics->portStatistics[i]));
    }
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor portStatistics of type full_ns0_allPortStatistics...\n");
#endif
    free(_allPortStatistics->portStatistics);
  }
}
#endif /* DEF_full_ns0_allPortStatistics_M */
#ifndef DEF_full_ns0_allTableStatistics_M
#define DEF_full_ns0_allTableStatistics_M

/**
 * Reads a AllTableStatistics element from XML. The element to be read is "allTableStatistics", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The AllTableStatistics, or NULL in case of error.
 */
struct full_ns0_allTableStatistics *xml_read_full_ns0_allTableStatistics(xmlTextReaderPtr reader) {
  int status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
  return xmlTextReaderReadNs0AllTableStatisticsElement(reader);
}

/**
 * Writes a AllTableStatistics to XML under element name "allTableStatistics".
 *
 * @param writer The XML writer.
 * @param _allTableStatistics The AllTableStatistics to write.
 * @return 1 if successful, 0 otherwise.
 */
int xml_write_full_ns0_allTableStatistics(xmlTextWriterPtr writer, struct full_ns0_allTableStatistics *_allTableStatistics) {
  return xmlTextWriterWriteNs0AllTableStatisticsElementNS(writer, _allTableStatistics, 1);
}

/**
 * Frees a AllTableStatistics.
 *
 * @param _allTableStatistics The AllTableStatistics to free.
 */
void free_full_ns0_allTableStatistics(struct full_ns0_allTableStatistics *_allTableStatistics) {
  freeNs0AllTableStatisticsType(_allTableStatistics);
  free(_allTableStatistics);
}

/**
 * Reads a AllTableStatistics element from XML. The element to be read is "allTableStatistics", and
 * it is assumed that the reader is pointing to that element.
 *
 * @param reader The XML reader.
 * @return The AllTableStatistics, or NULL in case of error.
 */
struct full_ns0_allTableStatistics *xmlTextReaderReadNs0AllTableStatisticsElement(xmlTextReaderPtr reader) {
  struct full_ns0_allTableStatistics *_allTableStatistics = NULL;

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "allTableStatistics", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Attempting to read root element {}allTableStatistics.\n");
#endif
    _allTableStatistics = xmlTextReaderReadNs0AllTableStatisticsType(reader);
  }
#if DEBUG_ENUNCIATE
  if (_allTableStatistics == NULL) {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      printf("attempt to read {}allTableStatistics failed. current element: {}%s\n",  xmlTextReaderConstLocalName(reader));
    }
    else {
      printf("attempt to read {}allTableStatistics failed. current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
    }
  }
#endif

  return _allTableStatistics;
}

/**
 * Writes a AllTableStatistics to XML under element name "allTableStatistics".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _allTableStatistics The AllTableStatistics to write.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0AllTableStatisticsElement(xmlTextWriterPtr writer, struct full_ns0_allTableStatistics *_allTableStatistics) {
  return xmlTextWriterWriteNs0AllTableStatisticsElementNS(writer, _allTableStatistics, 0);
}

/**
 * Writes a AllTableStatistics to XML under element name "allTableStatistics".
 *
 * @param writer The XML writer.
 * @param _allTableStatistics The AllTableStatistics to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0AllTableStatisticsElementNS(xmlTextWriterPtr writer, struct full_ns0_allTableStatistics *_allTableStatistics, int writeNamespaces) {
  int totalBytes = 0;
  int status;

  status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "allTableStatistics", NULL);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write start element {}allTableStatistics. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

#if DEBUG_ENUNCIATE > 1
  printf("writing type {}allTableStatistics for root element {}allTableStatistics...\n");
#endif
  status = xmlTextWriterWriteNs0AllTableStatisticsType(writer, _allTableStatistics);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write type for start element {}allTableStatistics. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  status = xmlTextWriterEndElement(writer);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to end element {}allTableStatistics. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  return totalBytes;
}

/**
 * Frees the children of a AllTableStatistics.
 *
 * @param _allTableStatistics The AllTableStatistics whose children are to be free.
 */
static void freeNs0AllTableStatisticsElement(struct full_ns0_allTableStatistics *_allTableStatistics) {
  freeNs0AllTableStatisticsType(_allTableStatistics);
}

/**
 * Reads a AllTableStatistics from XML. The reader is assumed to be at the start element.
 *
 * @return the AllTableStatistics, or NULL in case of error.
 */
static struct full_ns0_allTableStatistics *xmlTextReaderReadNs0AllTableStatisticsType(xmlTextReaderPtr reader) {
  int status, depth;
  void *_child_accessor;
  struct full_ns0_allTableStatistics *_allTableStatistics = calloc(1, sizeof(struct full_ns0_allTableStatistics));



  if (xmlTextReaderIsEmptyElement(reader) == 0) {
    depth = xmlTextReaderDepth(reader);//track the depth.
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);

    while (xmlTextReaderDepth(reader) > depth) {
      if (status < 1) {
        //panic: XML read error.
#if DEBUG_ENUNCIATE
        printf("Failure to advance to next child element.\n");
#endif
        freeNs0AllTableStatisticsType(_allTableStatistics);
        free(_allTableStatistics);
        return NULL;
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "tableStatistics", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}tableStatistics of type {}tableStatistics.\n");
#endif
        _child_accessor = xmlTextReaderReadNs0TableStatisticsType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}tableStatistics of type {}tableStatistics.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0AllTableStatisticsType(_allTableStatistics);
          free(_allTableStatistics);
          return NULL;
        }

        _allTableStatistics->tableStatistics = realloc(_allTableStatistics->tableStatistics, (_allTableStatistics->_sizeof_tableStatistics + 1) * sizeof(struct full_ns0_tableStatistics));
        memcpy(&(_allTableStatistics->tableStatistics[_allTableStatistics->_sizeof_tableStatistics++]), _child_accessor, sizeof(struct full_ns0_tableStatistics));
        free(_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else {
#if DEBUG_ENUNCIATE > 1
        if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
          printf("unknown child element {}%s for type {}allTableStatistics.  Skipping...\n",  xmlTextReaderConstLocalName(reader));
        }
        else {
          printf("unknown child element {%s}%s for type {}allTableStatistics. Skipping...\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
        }
#endif
        status = xmlTextReaderSkipElement(reader);
      }
    }
  }

  return _allTableStatistics;
}

/**
 * Writes a AllTableStatistics to XML.
 *
 * @param writer The XML writer.
 * @param _allTableStatistics The AllTableStatistics to write.
 * @return The total bytes written, or -1 on error;
 */
static int xmlTextWriterWriteNs0AllTableStatisticsType(xmlTextWriterPtr writer, struct full_ns0_allTableStatistics *_allTableStatistics) {
  int status, totalBytes = 0, i;
  xmlChar *binaryData;
  for (i = 0; i < _allTableStatistics->_sizeof_tableStatistics; i++) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "tableStatistics", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}tableStatistics. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {}tableStatistics for element {}tableStatistics...\n");
#endif
    status = xmlTextWriterWriteNs0TableStatisticsType(writer, &(_allTableStatistics->tableStatistics[i]));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {}tableStatistics for element {}tableStatistics. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}tableStatistics. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }

  return totalBytes;
}

/**
 * Frees the elements of a AllTableStatistics.
 *
 * @param _allTableStatistics The AllTableStatistics to free.
 */
static void freeNs0AllTableStatisticsType(struct full_ns0_allTableStatistics *_allTableStatistics) {
  int i;
  if (_allTableStatistics->tableStatistics != NULL) {
    for (i = 0; i < _allTableStatistics->_sizeof_tableStatistics; i++) {
#if DEBUG_ENUNCIATE > 1
      printf("Freeing accessor tableStatistics[%i] of type full_ns0_allTableStatistics...\n", i);
#endif
      freeNs0TableStatisticsType(&(_allTableStatistics->tableStatistics[i]));
    }
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor tableStatistics of type full_ns0_allTableStatistics...\n");
#endif
    free(_allTableStatistics->tableStatistics);
  }
}
#endif /* DEF_full_ns0_allTableStatistics_M */
#ifndef DEF_full_ns0_flowStatistics_M
#define DEF_full_ns0_flowStatistics_M

/**
 * Reads a FlowStatistics element from XML. The element to be read is "flowStatistics", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The FlowStatistics, or NULL in case of error.
 */
struct full_ns0_flowStatistics *xml_read_full_ns0_flowStatistics(xmlTextReaderPtr reader) {
  int status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
  return xmlTextReaderReadNs0FlowStatisticsElement(reader);
}

/**
 * Writes a FlowStatistics to XML under element name "flowStatistics".
 *
 * @param writer The XML writer.
 * @param _flowStatistics The FlowStatistics to write.
 * @return 1 if successful, 0 otherwise.
 */
int xml_write_full_ns0_flowStatistics(xmlTextWriterPtr writer, struct full_ns0_flowStatistics *_flowStatistics) {
  return xmlTextWriterWriteNs0FlowStatisticsElementNS(writer, _flowStatistics, 1);
}

/**
 * Frees a FlowStatistics.
 *
 * @param _flowStatistics The FlowStatistics to free.
 */
void free_full_ns0_flowStatistics(struct full_ns0_flowStatistics *_flowStatistics) {
  freeNs0FlowStatisticsType(_flowStatistics);
  free(_flowStatistics);
}

/**
 * Reads a FlowStatistics element from XML. The element to be read is "flowStatistics", and
 * it is assumed that the reader is pointing to that element.
 *
 * @param reader The XML reader.
 * @return The FlowStatistics, or NULL in case of error.
 */
struct full_ns0_flowStatistics *xmlTextReaderReadNs0FlowStatisticsElement(xmlTextReaderPtr reader) {
  struct full_ns0_flowStatistics *_flowStatistics = NULL;

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "flowStatistics", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Attempting to read root element {}flowStatistics.\n");
#endif
    _flowStatistics = xmlTextReaderReadNs0FlowStatisticsType(reader);
  }
#if DEBUG_ENUNCIATE
  if (_flowStatistics == NULL) {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      printf("attempt to read {}flowStatistics failed. current element: {}%s\n",  xmlTextReaderConstLocalName(reader));
    }
    else {
      printf("attempt to read {}flowStatistics failed. current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
    }
  }
#endif

  return _flowStatistics;
}

/**
 * Writes a FlowStatistics to XML under element name "flowStatistics".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _flowStatistics The FlowStatistics to write.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0FlowStatisticsElement(xmlTextWriterPtr writer, struct full_ns0_flowStatistics *_flowStatistics) {
  return xmlTextWriterWriteNs0FlowStatisticsElementNS(writer, _flowStatistics, 0);
}

/**
 * Writes a FlowStatistics to XML under element name "flowStatistics".
 *
 * @param writer The XML writer.
 * @param _flowStatistics The FlowStatistics to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0FlowStatisticsElementNS(xmlTextWriterPtr writer, struct full_ns0_flowStatistics *_flowStatistics, int writeNamespaces) {
  int totalBytes = 0;
  int status;

  status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "flowStatistics", NULL);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write start element {}flowStatistics. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

#if DEBUG_ENUNCIATE > 1
  printf("writing type {}flowStatistics for root element {}flowStatistics...\n");
#endif
  status = xmlTextWriterWriteNs0FlowStatisticsType(writer, _flowStatistics);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write type for start element {}flowStatistics. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  status = xmlTextWriterEndElement(writer);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to end element {}flowStatistics. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  return totalBytes;
}

/**
 * Frees the children of a FlowStatistics.
 *
 * @param _flowStatistics The FlowStatistics whose children are to be free.
 */
static void freeNs0FlowStatisticsElement(struct full_ns0_flowStatistics *_flowStatistics) {
  freeNs0FlowStatisticsType(_flowStatistics);
}

/**
 * Reads a FlowStatistics from XML. The reader is assumed to be at the start element.
 *
 * @return the FlowStatistics, or NULL in case of error.
 */
static struct full_ns0_flowStatistics *xmlTextReaderReadNs0FlowStatisticsType(xmlTextReaderPtr reader) {
  int status, depth;
  void *_child_accessor;
  struct full_ns0_flowStatistics *_flowStatistics = calloc(1, sizeof(struct full_ns0_flowStatistics));



  if (xmlTextReaderIsEmptyElement(reader) == 0) {
    depth = xmlTextReaderDepth(reader);//track the depth.
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);

    while (xmlTextReaderDepth(reader) > depth) {
      if (status < 1) {
        //panic: XML read error.
#if DEBUG_ENUNCIATE
        printf("Failure to advance to next child element.\n");
#endif
        freeNs0FlowStatisticsType(_flowStatistics);
        free(_flowStatistics);
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
          freeNs0FlowStatisticsType(_flowStatistics);
          free(_flowStatistics);
          return NULL;
        }

        _flowStatistics->node = ((struct full_ns0_node*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "flowStat", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}flowStat of type {}flowOnNode.\n");
#endif
        _child_accessor = xmlTextReaderReadNs0FlowOnNodeType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}flowStat of type {}flowOnNode.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0FlowStatisticsType(_flowStatistics);
          free(_flowStatistics);
          return NULL;
        }

        _flowStatistics->flowStat = realloc(_flowStatistics->flowStat, (_flowStatistics->_sizeof_flowStat + 1) * sizeof(struct full_ns0_flowOnNode));
        memcpy(&(_flowStatistics->flowStat[_flowStatistics->_sizeof_flowStat++]), _child_accessor, sizeof(struct full_ns0_flowOnNode));
        free(_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else {
#if DEBUG_ENUNCIATE > 1
        if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
          printf("unknown child element {}%s for type {}flowStatistics.  Skipping...\n",  xmlTextReaderConstLocalName(reader));
        }
        else {
          printf("unknown child element {%s}%s for type {}flowStatistics. Skipping...\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
        }
#endif
        status = xmlTextReaderSkipElement(reader);
      }
    }
  }

  return _flowStatistics;
}

/**
 * Writes a FlowStatistics to XML.
 *
 * @param writer The XML writer.
 * @param _flowStatistics The FlowStatistics to write.
 * @return The total bytes written, or -1 on error;
 */
static int xmlTextWriterWriteNs0FlowStatisticsType(xmlTextWriterPtr writer, struct full_ns0_flowStatistics *_flowStatistics) {
  int status, totalBytes = 0, i;
  xmlChar *binaryData;
  if (_flowStatistics->node != NULL) {
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
    status = xmlTextWriterWriteNs0NodeType(writer, (_flowStatistics->node));
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
  for (i = 0; i < _flowStatistics->_sizeof_flowStat; i++) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "flowStat", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}flowStat. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {}flowOnNode for element {}flowStat...\n");
#endif
    status = xmlTextWriterWriteNs0FlowOnNodeType(writer, &(_flowStatistics->flowStat[i]));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {}flowOnNode for element {}flowStat. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}flowStat. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }

  return totalBytes;
}

/**
 * Frees the elements of a FlowStatistics.
 *
 * @param _flowStatistics The FlowStatistics to free.
 */
static void freeNs0FlowStatisticsType(struct full_ns0_flowStatistics *_flowStatistics) {
  int i;
  if (_flowStatistics->node != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor node of type full_ns0_flowStatistics...\n");
#endif
    freeNs0NodeType(_flowStatistics->node);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor node of type full_ns0_flowStatistics...\n");
#endif
    free(_flowStatistics->node);
  }
  if (_flowStatistics->flowStat != NULL) {
    for (i = 0; i < _flowStatistics->_sizeof_flowStat; i++) {
#if DEBUG_ENUNCIATE > 1
      printf("Freeing accessor flowStat[%i] of type full_ns0_flowStatistics...\n", i);
#endif
      freeNs0FlowOnNodeType(&(_flowStatistics->flowStat[i]));
    }
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor flowStat of type full_ns0_flowStatistics...\n");
#endif
    free(_flowStatistics->flowStat);
  }
}
#endif /* DEF_full_ns0_flowStatistics_M */
#ifndef DEF_full_ns0_portStatistics_M
#define DEF_full_ns0_portStatistics_M

/**
 * Reads a PortStatistics element from XML. The element to be read is "portStatistics", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The PortStatistics, or NULL in case of error.
 */
struct full_ns0_portStatistics *xml_read_full_ns0_portStatistics(xmlTextReaderPtr reader) {
  int status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
  return xmlTextReaderReadNs0PortStatisticsElement(reader);
}

/**
 * Writes a PortStatistics to XML under element name "portStatistics".
 *
 * @param writer The XML writer.
 * @param _portStatistics The PortStatistics to write.
 * @return 1 if successful, 0 otherwise.
 */
int xml_write_full_ns0_portStatistics(xmlTextWriterPtr writer, struct full_ns0_portStatistics *_portStatistics) {
  return xmlTextWriterWriteNs0PortStatisticsElementNS(writer, _portStatistics, 1);
}

/**
 * Frees a PortStatistics.
 *
 * @param _portStatistics The PortStatistics to free.
 */
void free_full_ns0_portStatistics(struct full_ns0_portStatistics *_portStatistics) {
  freeNs0PortStatisticsType(_portStatistics);
  free(_portStatistics);
}

/**
 * Reads a PortStatistics element from XML. The element to be read is "portStatistics", and
 * it is assumed that the reader is pointing to that element.
 *
 * @param reader The XML reader.
 * @return The PortStatistics, or NULL in case of error.
 */
struct full_ns0_portStatistics *xmlTextReaderReadNs0PortStatisticsElement(xmlTextReaderPtr reader) {
  struct full_ns0_portStatistics *_portStatistics = NULL;

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "portStatistics", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Attempting to read root element {}portStatistics.\n");
#endif
    _portStatistics = xmlTextReaderReadNs0PortStatisticsType(reader);
  }
#if DEBUG_ENUNCIATE
  if (_portStatistics == NULL) {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      printf("attempt to read {}portStatistics failed. current element: {}%s\n",  xmlTextReaderConstLocalName(reader));
    }
    else {
      printf("attempt to read {}portStatistics failed. current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
    }
  }
#endif

  return _portStatistics;
}

/**
 * Writes a PortStatistics to XML under element name "portStatistics".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _portStatistics The PortStatistics to write.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0PortStatisticsElement(xmlTextWriterPtr writer, struct full_ns0_portStatistics *_portStatistics) {
  return xmlTextWriterWriteNs0PortStatisticsElementNS(writer, _portStatistics, 0);
}

/**
 * Writes a PortStatistics to XML under element name "portStatistics".
 *
 * @param writer The XML writer.
 * @param _portStatistics The PortStatistics to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0PortStatisticsElementNS(xmlTextWriterPtr writer, struct full_ns0_portStatistics *_portStatistics, int writeNamespaces) {
  int totalBytes = 0;
  int status;

  status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "portStatistics", NULL);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write start element {}portStatistics. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

#if DEBUG_ENUNCIATE > 1
  printf("writing type {}portStatistics for root element {}portStatistics...\n");
#endif
  status = xmlTextWriterWriteNs0PortStatisticsType(writer, _portStatistics);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write type for start element {}portStatistics. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  status = xmlTextWriterEndElement(writer);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to end element {}portStatistics. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  return totalBytes;
}

/**
 * Frees the children of a PortStatistics.
 *
 * @param _portStatistics The PortStatistics whose children are to be free.
 */
static void freeNs0PortStatisticsElement(struct full_ns0_portStatistics *_portStatistics) {
  freeNs0PortStatisticsType(_portStatistics);
}

/**
 * Reads a PortStatistics from XML. The reader is assumed to be at the start element.
 *
 * @return the PortStatistics, or NULL in case of error.
 */
static struct full_ns0_portStatistics *xmlTextReaderReadNs0PortStatisticsType(xmlTextReaderPtr reader) {
  int status, depth;
  void *_child_accessor;
  struct full_ns0_portStatistics *_portStatistics = calloc(1, sizeof(struct full_ns0_portStatistics));



  if (xmlTextReaderIsEmptyElement(reader) == 0) {
    depth = xmlTextReaderDepth(reader);//track the depth.
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);

    while (xmlTextReaderDepth(reader) > depth) {
      if (status < 1) {
        //panic: XML read error.
#if DEBUG_ENUNCIATE
        printf("Failure to advance to next child element.\n");
#endif
        freeNs0PortStatisticsType(_portStatistics);
        free(_portStatistics);
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
          freeNs0PortStatisticsType(_portStatistics);
          free(_portStatistics);
          return NULL;
        }

        _portStatistics->node = ((struct full_ns0_node*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "portStat", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}portStat of type {}nodeConnectorStatistics.\n");
#endif
        _child_accessor = xmlTextReaderReadNs0NodeConnectorStatisticsType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}portStat of type {}nodeConnectorStatistics.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0PortStatisticsType(_portStatistics);
          free(_portStatistics);
          return NULL;
        }

        _portStatistics->portStats = realloc(_portStatistics->portStats, (_portStatistics->_sizeof_portStats + 1) * sizeof(struct full_ns0_nodeConnectorStatistics));
        memcpy(&(_portStatistics->portStats[_portStatistics->_sizeof_portStats++]), _child_accessor, sizeof(struct full_ns0_nodeConnectorStatistics));
        free(_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else {
#if DEBUG_ENUNCIATE > 1
        if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
          printf("unknown child element {}%s for type {}portStatistics.  Skipping...\n",  xmlTextReaderConstLocalName(reader));
        }
        else {
          printf("unknown child element {%s}%s for type {}portStatistics. Skipping...\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
        }
#endif
        status = xmlTextReaderSkipElement(reader);
      }
    }
  }

  return _portStatistics;
}

/**
 * Writes a PortStatistics to XML.
 *
 * @param writer The XML writer.
 * @param _portStatistics The PortStatistics to write.
 * @return The total bytes written, or -1 on error;
 */
static int xmlTextWriterWriteNs0PortStatisticsType(xmlTextWriterPtr writer, struct full_ns0_portStatistics *_portStatistics) {
  int status, totalBytes = 0, i;
  xmlChar *binaryData;
  if (_portStatistics->node != NULL) {
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
    status = xmlTextWriterWriteNs0NodeType(writer, (_portStatistics->node));
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
  for (i = 0; i < _portStatistics->_sizeof_portStats; i++) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "portStat", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}portStat. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {}nodeConnectorStatistics for element {}portStat...\n");
#endif
    status = xmlTextWriterWriteNs0NodeConnectorStatisticsType(writer, &(_portStatistics->portStats[i]));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {}nodeConnectorStatistics for element {}portStat. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}portStat. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }

  return totalBytes;
}

/**
 * Frees the elements of a PortStatistics.
 *
 * @param _portStatistics The PortStatistics to free.
 */
static void freeNs0PortStatisticsType(struct full_ns0_portStatistics *_portStatistics) {
  int i;
  if (_portStatistics->node != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor node of type full_ns0_portStatistics...\n");
#endif
    freeNs0NodeType(_portStatistics->node);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor node of type full_ns0_portStatistics...\n");
#endif
    free(_portStatistics->node);
  }
  if (_portStatistics->portStats != NULL) {
    for (i = 0; i < _portStatistics->_sizeof_portStats; i++) {
#if DEBUG_ENUNCIATE > 1
      printf("Freeing accessor portStats[%i] of type full_ns0_portStatistics...\n", i);
#endif
      freeNs0NodeConnectorStatisticsType(&(_portStatistics->portStats[i]));
    }
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor portStats of type full_ns0_portStatistics...\n");
#endif
    free(_portStatistics->portStats);
  }
}
#endif /* DEF_full_ns0_portStatistics_M */
#ifndef DEF_full_ns0_tableStatistics_M
#define DEF_full_ns0_tableStatistics_M

/**
 * Reads a TableStatistics element from XML. The element to be read is "tableStatistics", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The TableStatistics, or NULL in case of error.
 */
struct full_ns0_tableStatistics *xml_read_full_ns0_tableStatistics(xmlTextReaderPtr reader) {
  int status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
  return xmlTextReaderReadNs0TableStatisticsElement(reader);
}

/**
 * Writes a TableStatistics to XML under element name "tableStatistics".
 *
 * @param writer The XML writer.
 * @param _tableStatistics The TableStatistics to write.
 * @return 1 if successful, 0 otherwise.
 */
int xml_write_full_ns0_tableStatistics(xmlTextWriterPtr writer, struct full_ns0_tableStatistics *_tableStatistics) {
  return xmlTextWriterWriteNs0TableStatisticsElementNS(writer, _tableStatistics, 1);
}

/**
 * Frees a TableStatistics.
 *
 * @param _tableStatistics The TableStatistics to free.
 */
void free_full_ns0_tableStatistics(struct full_ns0_tableStatistics *_tableStatistics) {
  freeNs0TableStatisticsType(_tableStatistics);
  free(_tableStatistics);
}

/**
 * Reads a TableStatistics element from XML. The element to be read is "tableStatistics", and
 * it is assumed that the reader is pointing to that element.
 *
 * @param reader The XML reader.
 * @return The TableStatistics, or NULL in case of error.
 */
struct full_ns0_tableStatistics *xmlTextReaderReadNs0TableStatisticsElement(xmlTextReaderPtr reader) {
  struct full_ns0_tableStatistics *_tableStatistics = NULL;

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "tableStatistics", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Attempting to read root element {}tableStatistics.\n");
#endif
    _tableStatistics = xmlTextReaderReadNs0TableStatisticsType(reader);
  }
#if DEBUG_ENUNCIATE
  if (_tableStatistics == NULL) {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      printf("attempt to read {}tableStatistics failed. current element: {}%s\n",  xmlTextReaderConstLocalName(reader));
    }
    else {
      printf("attempt to read {}tableStatistics failed. current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
    }
  }
#endif

  return _tableStatistics;
}

/**
 * Writes a TableStatistics to XML under element name "tableStatistics".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _tableStatistics The TableStatistics to write.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0TableStatisticsElement(xmlTextWriterPtr writer, struct full_ns0_tableStatistics *_tableStatistics) {
  return xmlTextWriterWriteNs0TableStatisticsElementNS(writer, _tableStatistics, 0);
}

/**
 * Writes a TableStatistics to XML under element name "tableStatistics".
 *
 * @param writer The XML writer.
 * @param _tableStatistics The TableStatistics to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0TableStatisticsElementNS(xmlTextWriterPtr writer, struct full_ns0_tableStatistics *_tableStatistics, int writeNamespaces) {
  int totalBytes = 0;
  int status;

  status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "tableStatistics", NULL);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write start element {}tableStatistics. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

#if DEBUG_ENUNCIATE > 1
  printf("writing type {}tableStatistics for root element {}tableStatistics...\n");
#endif
  status = xmlTextWriterWriteNs0TableStatisticsType(writer, _tableStatistics);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write type for start element {}tableStatistics. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  status = xmlTextWriterEndElement(writer);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to end element {}tableStatistics. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  return totalBytes;
}

/**
 * Frees the children of a TableStatistics.
 *
 * @param _tableStatistics The TableStatistics whose children are to be free.
 */
static void freeNs0TableStatisticsElement(struct full_ns0_tableStatistics *_tableStatistics) {
  freeNs0TableStatisticsType(_tableStatistics);
}

/**
 * Reads a TableStatistics from XML. The reader is assumed to be at the start element.
 *
 * @return the TableStatistics, or NULL in case of error.
 */
static struct full_ns0_tableStatistics *xmlTextReaderReadNs0TableStatisticsType(xmlTextReaderPtr reader) {
  int status, depth;
  void *_child_accessor;
  struct full_ns0_tableStatistics *_tableStatistics = calloc(1, sizeof(struct full_ns0_tableStatistics));



  if (xmlTextReaderIsEmptyElement(reader) == 0) {
    depth = xmlTextReaderDepth(reader);//track the depth.
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);

    while (xmlTextReaderDepth(reader) > depth) {
      if (status < 1) {
        //panic: XML read error.
#if DEBUG_ENUNCIATE
        printf("Failure to advance to next child element.\n");
#endif
        freeNs0TableStatisticsType(_tableStatistics);
        free(_tableStatistics);
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
          freeNs0TableStatisticsType(_tableStatistics);
          free(_tableStatistics);
          return NULL;
        }

        _tableStatistics->node = ((struct full_ns0_node*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "tableStat", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}tableStat of type {}nodeTableStatistics.\n");
#endif
        _child_accessor = xmlTextReaderReadNs0NodeTableStatisticsType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}tableStat of type {}nodeTableStatistics.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TableStatisticsType(_tableStatistics);
          free(_tableStatistics);
          return NULL;
        }

        _tableStatistics->tableStats = realloc(_tableStatistics->tableStats, (_tableStatistics->_sizeof_tableStats + 1) * sizeof(struct full_ns0_nodeTableStatistics));
        memcpy(&(_tableStatistics->tableStats[_tableStatistics->_sizeof_tableStats++]), _child_accessor, sizeof(struct full_ns0_nodeTableStatistics));
        free(_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else {
#if DEBUG_ENUNCIATE > 1
        if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
          printf("unknown child element {}%s for type {}tableStatistics.  Skipping...\n",  xmlTextReaderConstLocalName(reader));
        }
        else {
          printf("unknown child element {%s}%s for type {}tableStatistics. Skipping...\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
        }
#endif
        status = xmlTextReaderSkipElement(reader);
      }
    }
  }

  return _tableStatistics;
}

/**
 * Writes a TableStatistics to XML.
 *
 * @param writer The XML writer.
 * @param _tableStatistics The TableStatistics to write.
 * @return The total bytes written, or -1 on error;
 */
static int xmlTextWriterWriteNs0TableStatisticsType(xmlTextWriterPtr writer, struct full_ns0_tableStatistics *_tableStatistics) {
  int status, totalBytes = 0, i;
  xmlChar *binaryData;
  if (_tableStatistics->node != NULL) {
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
    status = xmlTextWriterWriteNs0NodeType(writer, (_tableStatistics->node));
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
  for (i = 0; i < _tableStatistics->_sizeof_tableStats; i++) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "tableStat", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}tableStat. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {}nodeTableStatistics for element {}tableStat...\n");
#endif
    status = xmlTextWriterWriteNs0NodeTableStatisticsType(writer, &(_tableStatistics->tableStats[i]));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {}nodeTableStatistics for element {}tableStat. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}tableStat. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }

  return totalBytes;
}

/**
 * Frees the elements of a TableStatistics.
 *
 * @param _tableStatistics The TableStatistics to free.
 */
static void freeNs0TableStatisticsType(struct full_ns0_tableStatistics *_tableStatistics) {
  int i;
  if (_tableStatistics->node != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor node of type full_ns0_tableStatistics...\n");
#endif
    freeNs0NodeType(_tableStatistics->node);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor node of type full_ns0_tableStatistics...\n");
#endif
    free(_tableStatistics->node);
  }
  if (_tableStatistics->tableStats != NULL) {
    for (i = 0; i < _tableStatistics->_sizeof_tableStats; i++) {
#if DEBUG_ENUNCIATE > 1
      printf("Freeing accessor tableStats[%i] of type full_ns0_tableStatistics...\n", i);
#endif
      freeNs0NodeTableStatisticsType(&(_tableStatistics->tableStats[i]));
    }
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor tableStats of type full_ns0_tableStatistics...\n");
#endif
    free(_tableStatistics->tableStats);
  }
}
#endif /* DEF_full_ns0_tableStatistics_M */
