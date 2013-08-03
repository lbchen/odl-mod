#import "full.h"
#ifndef DEF_FULLNS0NodeConnector_M
#define DEF_FULLNS0NodeConnector_M

/**
 * (no documentation provided)
 */
@implementation FULLNS0NodeConnector

/**
 * (no documentation provided)
 */
- (NSString *) nodeConnectorIDString
{
  return _nodeConnectorIDString;
}

/**
 * (no documentation provided)
 */
- (void) setNodeConnectorIDString: (NSString *) newNodeConnectorIDString
{
  [newNodeConnectorIDString retain];
  [_nodeConnectorIDString release];
  _nodeConnectorIDString = newNodeConnectorIDString;
}

/**
 * (no documentation provided)
 */
- (NSString *) type
{
  return _type;
}

/**
 * (no documentation provided)
 */
- (void) setType: (NSString *) newType
{
  [newType retain];
  [_type release];
  _type = newType;
}

/**
 * (no documentation provided)
 */
- (FULLNS0Node *) nodeConnectorNode
{
  return _nodeConnectorNode;
}

/**
 * (no documentation provided)
 */
- (void) setNodeConnectorNode: (FULLNS0Node *) newNodeConnectorNode
{
  [newNodeConnectorNode retain];
  [_nodeConnectorNode release];
  _nodeConnectorNode = newNodeConnectorNode;
}

- (void) dealloc
{
  [self setNodeConnectorIDString: nil];
  [self setType: nil];
  [self setNodeConnectorNode: nil];
  [super dealloc];
}

//documentation inherited.
+ (id<EnunciateXML>) readFromXML: (NSData *) xml
{
  FULLNS0NodeConnector *_fULLNS0NodeConnector;
  xmlTextReaderPtr reader = xmlReaderForMemory([xml bytes], [xml length], NULL, NULL, 0);
  if (reader == NULL) {
    [NSException raise: @"XMLReadError"
                 format: @"Error instantiating an XML reader."];
    return nil;
  }

  _fULLNS0NodeConnector = (FULLNS0NodeConnector *) [FULLNS0NodeConnector readXMLElement: reader];
  xmlFreeTextReader(reader); //free the reader
  return _fULLNS0NodeConnector;
}

//documentation inherited.
- (NSData *) writeToXML
{
  xmlBufferPtr buf;
  xmlTextWriterPtr writer;
  int rc;
  NSData *data;

  buf = xmlBufferCreate();
  if (buf == NULL) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error creating an XML buffer."];
    return nil;
  }

  writer = xmlNewTextWriterMemory(buf, 0);
  if (writer == NULL) {
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error creating an XML writer."];
    return nil;
  }

  rc = xmlTextWriterStartDocument(writer, NULL, "utf-8", NULL);
  if (rc < 0) {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing XML start document."];
    return nil;
  }

  NS_DURING
  {
    [self writeXMLElement: writer];
  }
  NS_HANDLER
  {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [localException raise];
  }
  NS_ENDHANDLER

  rc = xmlTextWriterEndDocument(writer);
  if (rc < 0) {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing XML end document."];
    return nil;
  }

  xmlFreeTextWriter(writer);
  data = [NSData dataWithBytes: buf->content length: buf->use];
  xmlBufferFree(buf);
  return data;
}
@end /* implementation FULLNS0NodeConnector */

/**
 * Internal, private interface for JAXB reading and writing.
 */
@interface FULLNS0NodeConnector (JAXB) <JAXBReading, JAXBWriting, JAXBType, JAXBElement>

@end /*interface FULLNS0NodeConnector (JAXB)*/

/**
 * Internal, private implementation for JAXB reading and writing.
 */
@implementation FULLNS0NodeConnector (JAXB)

/**
 * Read an instance of FULLNS0NodeConnector from an XML reader.
 *
 * @param reader The reader.
 * @return An instance of FULLNS0NodeConnector defined by the XML reader.
 */
+ (id<JAXBType>) readXMLType: (xmlTextReaderPtr) reader
{
  FULLNS0NodeConnector *_fULLNS0NodeConnector = [[FULLNS0NodeConnector alloc] init];
  NS_DURING
  {
    [_fULLNS0NodeConnector initWithReader: reader];
  }
  NS_HANDLER
  {
    _fULLNS0NodeConnector = nil;
    [localException raise];
  }
  NS_ENDHANDLER

  [_fULLNS0NodeConnector autorelease];
  return _fULLNS0NodeConnector;
}

/**
 * Initialize this instance of FULLNS0NodeConnector according to
 * the XML being read from the reader.
 *
 * @param reader The reader.
 */
- (id) initWithReader: (xmlTextReaderPtr) reader
{
  return [super initWithReader: reader];
}

/**
 * Write the XML for this instance of FULLNS0NodeConnector to the writer.
 * Note that since we're only writing the XML type,
 * No start/end element will be written.
 *
 * @param reader The reader.
 */
- (void) writeXMLType: (xmlTextWriterPtr) writer
{
  [super writeXMLType:writer];
}

/**
 * Reads a FULLNS0NodeConnector from an XML reader. The element to be read is
 * "nodeConnector".
 *
 * @param reader The XML reader.
 * @return The FULLNS0NodeConnector.
 */
+ (id<JAXBElement>) readXMLElement: (xmlTextReaderPtr) reader {
  int status;
  FULLNS0NodeConnector *_nodeConnector = nil;

  if (xmlTextReaderNodeType(reader) != XML_READER_TYPE_ELEMENT) {
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
    if (status < 1) {
      [NSException raise: @"XMLReadError"
                   format: @"Error advancing the reader to start element nodeConnector."];
    }
  }

  if (xmlStrcmp(BAD_CAST "nodeConnector", xmlTextReaderConstLocalName(reader)) == 0
      && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read root element {}nodeConnector.");
#endif
    _nodeConnector = (FULLNS0NodeConnector *)[FULLNS0NodeConnector readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Successfully read root element {}nodeConnector.");
#endif
  }
  else {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read FULLNS0NodeConnector. Expected element nodeConnector. Current element: {}%s", xmlTextReaderConstLocalName(reader)];
    }
    else {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read FULLNS0NodeConnector. Expected element nodeConnector. Current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader)];
    }
  }

  return _nodeConnector;
}

/**
 * Writes this FULLNS0NodeConnector to XML under element name "nodeConnector".
 * The namespace declarations for the element will be written.
 *
 * @param writer The XML writer.
 * @param _nodeConnector The NodeConnector to write.
 * @return 1 if successful, 0 otherwise.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer
{
  [self writeXMLElement: writer writeNamespaces: YES];
}

/**
 * Writes this FULLNS0NodeConnector to an XML writer.
 *
 * @param writer The writer.
 * @param writeNs Whether to write the namespaces for this element to the xml writer.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer writeNamespaces: (BOOL) writeNs
{
  int rc = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "nodeConnector", NULL);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing start element {}nodeConnector. XML writer status: %i\n", rc];
  }

#if DEBUG_ENUNCIATE > 1
  NSLog(@"writing type {}nodeConnector for root element {}nodeConnector...");
#endif
  [self writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
  NSLog(@"successfully wrote type {}nodeConnector for root element {}nodeConnector...");
#endif
  rc = xmlTextWriterEndElement(writer);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing end element {}nodeConnector. XML writer status: %i\n", rc];
  }
}

//documentation inherited.
- (BOOL) readJAXBAttribute: (xmlTextReaderPtr) reader
{
  void *_child_accessor;

  if ([super readJAXBAttribute: reader]) {
    return YES;
  }

  if ((xmlStrcmp(BAD_CAST "id", xmlTextReaderConstLocalName(reader)) == 0) && (xmlTextReaderConstNamespaceUri(reader) == NULL)) {
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read attribute {}id...");
#endif
    [self setNodeConnectorIDString: (NSString*) [NSString readXMLType: reader]];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read attribute {}id...");
#endif
    return YES;
  }

  if ((xmlStrcmp(BAD_CAST "type", xmlTextReaderConstLocalName(reader)) == 0) && (xmlTextReaderConstNamespaceUri(reader) == NULL)) {
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read attribute {}type...");
#endif
    [self setType: (NSString*) [NSString readXMLType: reader]];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read attribute {}type...");
#endif
    return YES;
  }

  return NO;
}

//documentation inherited.
- (BOOL) readJAXBValue: (xmlTextReaderPtr) reader
{
  return [super readJAXBValue: reader];
}

//documentation inherited.
- (BOOL) readJAXBChildElement: (xmlTextReaderPtr) reader
{
  id __child;
  void *_child_accessor;
  int status, depth;

  if ([super readJAXBChildElement: reader]) {
    return YES;
  }
  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "node", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}node of type {}node.");
#endif
    __child = [FULLNS0Node readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}node of type {}node.");
#endif

    [self setNodeConnectorNode: __child];
    return YES;
  } //end "if choice"


  return NO;
}

//documentation inherited.
- (int) readUnknownJAXBChildElement: (xmlTextReaderPtr) reader
{
  return [super readUnknownJAXBChildElement: reader];
}

//documentation inherited.
- (void) readUnknownJAXBAttribute: (xmlTextReaderPtr) reader
{
  [super readUnknownJAXBAttribute: reader];
}

//documentation inherited.
- (void) writeJAXBAttributes: (xmlTextWriterPtr) writer
{
  int status;

  [super writeJAXBAttributes: writer];

  if ([self nodeConnectorIDString]) {

    status = xmlTextWriterStartAttributeNS(writer, NULL, BAD_CAST "id", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start attribute {}id."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing attribute {}id...");
#endif
    [[self nodeConnectorIDString] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote attribute {}id...");
#endif

    status = xmlTextWriterEndAttribute(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end attribute {}id."];
    }
  }
  if ([self type]) {

    status = xmlTextWriterStartAttributeNS(writer, NULL, BAD_CAST "type", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start attribute {}type."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing attribute {}type...");
#endif
    [[self type] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote attribute {}type...");
#endif

    status = xmlTextWriterEndAttribute(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end attribute {}type."];
    }
  }
}

//documentation inherited.
- (void) writeJAXBValue: (xmlTextWriterPtr) writer
{
  [super writeJAXBValue: writer];
}

/**
 * Method for writing the child elements.
 *
 * @param writer The writer.
 */
- (void) writeJAXBChildElements: (xmlTextWriterPtr) writer
{
  int status;
  id __item;
  NSEnumerator *__enumerator;

  [super writeJAXBChildElements: writer];

  if ([self nodeConnectorNode]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "node", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}node."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}node...");
#endif
    [[self nodeConnectorNode] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}node...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}node."];
    }
  }
}
@end /* implementation FULLNS0NodeConnector (JAXB) */

#endif /* DEF_FULLNS0NodeConnector_M */
#ifndef DEF_FULLNS0Node_M
#define DEF_FULLNS0Node_M

/**
 * (no documentation provided)
 */
@implementation FULLNS0Node

/**
 * (no documentation provided)
 */
- (NSString *) nodeIDString
{
  return _nodeIDString;
}

/**
 * (no documentation provided)
 */
- (void) setNodeIDString: (NSString *) newNodeIDString
{
  [newNodeIDString retain];
  [_nodeIDString release];
  _nodeIDString = newNodeIDString;
}

/**
 * (no documentation provided)
 */
- (NSString *) type
{
  return _type;
}

/**
 * (no documentation provided)
 */
- (void) setType: (NSString *) newType
{
  [newType retain];
  [_type release];
  _type = newType;
}

- (void) dealloc
{
  [self setNodeIDString: nil];
  [self setType: nil];
  [super dealloc];
}

//documentation inherited.
+ (id<EnunciateXML>) readFromXML: (NSData *) xml
{
  FULLNS0Node *_fULLNS0Node;
  xmlTextReaderPtr reader = xmlReaderForMemory([xml bytes], [xml length], NULL, NULL, 0);
  if (reader == NULL) {
    [NSException raise: @"XMLReadError"
                 format: @"Error instantiating an XML reader."];
    return nil;
  }

  _fULLNS0Node = (FULLNS0Node *) [FULLNS0Node readXMLElement: reader];
  xmlFreeTextReader(reader); //free the reader
  return _fULLNS0Node;
}

//documentation inherited.
- (NSData *) writeToXML
{
  xmlBufferPtr buf;
  xmlTextWriterPtr writer;
  int rc;
  NSData *data;

  buf = xmlBufferCreate();
  if (buf == NULL) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error creating an XML buffer."];
    return nil;
  }

  writer = xmlNewTextWriterMemory(buf, 0);
  if (writer == NULL) {
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error creating an XML writer."];
    return nil;
  }

  rc = xmlTextWriterStartDocument(writer, NULL, "utf-8", NULL);
  if (rc < 0) {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing XML start document."];
    return nil;
  }

  NS_DURING
  {
    [self writeXMLElement: writer];
  }
  NS_HANDLER
  {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [localException raise];
  }
  NS_ENDHANDLER

  rc = xmlTextWriterEndDocument(writer);
  if (rc < 0) {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing XML end document."];
    return nil;
  }

  xmlFreeTextWriter(writer);
  data = [NSData dataWithBytes: buf->content length: buf->use];
  xmlBufferFree(buf);
  return data;
}
@end /* implementation FULLNS0Node */

/**
 * Internal, private interface for JAXB reading and writing.
 */
@interface FULLNS0Node (JAXB) <JAXBReading, JAXBWriting, JAXBType, JAXBElement>

@end /*interface FULLNS0Node (JAXB)*/

/**
 * Internal, private implementation for JAXB reading and writing.
 */
@implementation FULLNS0Node (JAXB)

/**
 * Read an instance of FULLNS0Node from an XML reader.
 *
 * @param reader The reader.
 * @return An instance of FULLNS0Node defined by the XML reader.
 */
+ (id<JAXBType>) readXMLType: (xmlTextReaderPtr) reader
{
  FULLNS0Node *_fULLNS0Node = [[FULLNS0Node alloc] init];
  NS_DURING
  {
    [_fULLNS0Node initWithReader: reader];
  }
  NS_HANDLER
  {
    _fULLNS0Node = nil;
    [localException raise];
  }
  NS_ENDHANDLER

  [_fULLNS0Node autorelease];
  return _fULLNS0Node;
}

/**
 * Initialize this instance of FULLNS0Node according to
 * the XML being read from the reader.
 *
 * @param reader The reader.
 */
- (id) initWithReader: (xmlTextReaderPtr) reader
{
  return [super initWithReader: reader];
}

/**
 * Write the XML for this instance of FULLNS0Node to the writer.
 * Note that since we're only writing the XML type,
 * No start/end element will be written.
 *
 * @param reader The reader.
 */
- (void) writeXMLType: (xmlTextWriterPtr) writer
{
  [super writeXMLType:writer];
}

/**
 * Reads a FULLNS0Node from an XML reader. The element to be read is
 * "node".
 *
 * @param reader The XML reader.
 * @return The FULLNS0Node.
 */
+ (id<JAXBElement>) readXMLElement: (xmlTextReaderPtr) reader {
  int status;
  FULLNS0Node *_node = nil;

  if (xmlTextReaderNodeType(reader) != XML_READER_TYPE_ELEMENT) {
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
    if (status < 1) {
      [NSException raise: @"XMLReadError"
                   format: @"Error advancing the reader to start element node."];
    }
  }

  if (xmlStrcmp(BAD_CAST "node", xmlTextReaderConstLocalName(reader)) == 0
      && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read root element {}node.");
#endif
    _node = (FULLNS0Node *)[FULLNS0Node readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Successfully read root element {}node.");
#endif
  }
  else {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read FULLNS0Node. Expected element node. Current element: {}%s", xmlTextReaderConstLocalName(reader)];
    }
    else {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read FULLNS0Node. Expected element node. Current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader)];
    }
  }

  return _node;
}

/**
 * Writes this FULLNS0Node to XML under element name "node".
 * The namespace declarations for the element will be written.
 *
 * @param writer The XML writer.
 * @param _node The Node to write.
 * @return 1 if successful, 0 otherwise.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer
{
  [self writeXMLElement: writer writeNamespaces: YES];
}

/**
 * Writes this FULLNS0Node to an XML writer.
 *
 * @param writer The writer.
 * @param writeNs Whether to write the namespaces for this element to the xml writer.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer writeNamespaces: (BOOL) writeNs
{
  int rc = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "node", NULL);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing start element {}node. XML writer status: %i\n", rc];
  }

#if DEBUG_ENUNCIATE > 1
  NSLog(@"writing type {}node for root element {}node...");
#endif
  [self writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
  NSLog(@"successfully wrote type {}node for root element {}node...");
#endif
  rc = xmlTextWriterEndElement(writer);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing end element {}node. XML writer status: %i\n", rc];
  }
}

//documentation inherited.
- (BOOL) readJAXBAttribute: (xmlTextReaderPtr) reader
{
  void *_child_accessor;

  if ([super readJAXBAttribute: reader]) {
    return YES;
  }

  if ((xmlStrcmp(BAD_CAST "id", xmlTextReaderConstLocalName(reader)) == 0) && (xmlTextReaderConstNamespaceUri(reader) == NULL)) {
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read attribute {}id...");
#endif
    [self setNodeIDString: (NSString*) [NSString readXMLType: reader]];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read attribute {}id...");
#endif
    return YES;
  }

  if ((xmlStrcmp(BAD_CAST "type", xmlTextReaderConstLocalName(reader)) == 0) && (xmlTextReaderConstNamespaceUri(reader) == NULL)) {
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read attribute {}type...");
#endif
    [self setType: (NSString*) [NSString readXMLType: reader]];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read attribute {}type...");
#endif
    return YES;
  }

  return NO;
}

//documentation inherited.
- (BOOL) readJAXBValue: (xmlTextReaderPtr) reader
{
  return [super readJAXBValue: reader];
}

//documentation inherited.
- (BOOL) readJAXBChildElement: (xmlTextReaderPtr) reader
{
  id __child;
  void *_child_accessor;
  int status, depth;

  if ([super readJAXBChildElement: reader]) {
    return YES;
  }

  return NO;
}

//documentation inherited.
- (int) readUnknownJAXBChildElement: (xmlTextReaderPtr) reader
{
  return [super readUnknownJAXBChildElement: reader];
}

//documentation inherited.
- (void) readUnknownJAXBAttribute: (xmlTextReaderPtr) reader
{
  [super readUnknownJAXBAttribute: reader];
}

//documentation inherited.
- (void) writeJAXBAttributes: (xmlTextWriterPtr) writer
{
  int status;

  [super writeJAXBAttributes: writer];

  if ([self nodeIDString]) {

    status = xmlTextWriterStartAttributeNS(writer, NULL, BAD_CAST "id", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start attribute {}id."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing attribute {}id...");
#endif
    [[self nodeIDString] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote attribute {}id...");
#endif

    status = xmlTextWriterEndAttribute(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end attribute {}id."];
    }
  }
  if ([self type]) {

    status = xmlTextWriterStartAttributeNS(writer, NULL, BAD_CAST "type", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start attribute {}type."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing attribute {}type...");
#endif
    [[self type] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote attribute {}type...");
#endif

    status = xmlTextWriterEndAttribute(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end attribute {}type."];
    }
  }
}

//documentation inherited.
- (void) writeJAXBValue: (xmlTextWriterPtr) writer
{
  [super writeJAXBValue: writer];
}

/**
 * Method for writing the child elements.
 *
 * @param writer The writer.
 */
- (void) writeJAXBChildElements: (xmlTextWriterPtr) writer
{
  int status;
  id __item;
  NSEnumerator *__enumerator;

  [super writeJAXBChildElements: writer];

}
@end /* implementation FULLNS0Node (JAXB) */

#endif /* DEF_FULLNS0Node_M */
#ifndef DEF_FULLNS0MatchField_M
#define DEF_FULLNS0MatchField_M

/**
 * (no documentation provided)
 */
@implementation FULLNS0MatchField

- (void) dealloc
{
  [super dealloc];
}

//documentation inherited.
+ (id<EnunciateXML>) readFromXML: (NSData *) xml
{
  FULLNS0MatchField *_fULLNS0MatchField;
  xmlTextReaderPtr reader = xmlReaderForMemory([xml bytes], [xml length], NULL, NULL, 0);
  if (reader == NULL) {
    [NSException raise: @"XMLReadError"
                 format: @"Error instantiating an XML reader."];
    return nil;
  }

  _fULLNS0MatchField = (FULLNS0MatchField *) [FULLNS0MatchField readXMLElement: reader];
  xmlFreeTextReader(reader); //free the reader
  return _fULLNS0MatchField;
}

//documentation inherited.
- (NSData *) writeToXML
{
  xmlBufferPtr buf;
  xmlTextWriterPtr writer;
  int rc;
  NSData *data;

  buf = xmlBufferCreate();
  if (buf == NULL) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error creating an XML buffer."];
    return nil;
  }

  writer = xmlNewTextWriterMemory(buf, 0);
  if (writer == NULL) {
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error creating an XML writer."];
    return nil;
  }

  rc = xmlTextWriterStartDocument(writer, NULL, "utf-8", NULL);
  if (rc < 0) {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing XML start document."];
    return nil;
  }

  NS_DURING
  {
    [self writeXMLElement: writer];
  }
  NS_HANDLER
  {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [localException raise];
  }
  NS_ENDHANDLER

  rc = xmlTextWriterEndDocument(writer);
  if (rc < 0) {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing XML end document."];
    return nil;
  }

  xmlFreeTextWriter(writer);
  data = [NSData dataWithBytes: buf->content length: buf->use];
  xmlBufferFree(buf);
  return data;
}
@end /* implementation FULLNS0MatchField */

/**
 * Internal, private interface for JAXB reading and writing.
 */
@interface FULLNS0MatchField (JAXB) <JAXBReading, JAXBWriting, JAXBType, JAXBElement>

@end /*interface FULLNS0MatchField (JAXB)*/

/**
 * Internal, private implementation for JAXB reading and writing.
 */
@implementation FULLNS0MatchField (JAXB)

/**
 * Read an instance of FULLNS0MatchField from an XML reader.
 *
 * @param reader The reader.
 * @return An instance of FULLNS0MatchField defined by the XML reader.
 */
+ (id<JAXBType>) readXMLType: (xmlTextReaderPtr) reader
{
  FULLNS0MatchField *_fULLNS0MatchField = [[FULLNS0MatchField alloc] init];
  NS_DURING
  {
    [_fULLNS0MatchField initWithReader: reader];
  }
  NS_HANDLER
  {
    _fULLNS0MatchField = nil;
    [localException raise];
  }
  NS_ENDHANDLER

  [_fULLNS0MatchField autorelease];
  return _fULLNS0MatchField;
}

/**
 * Initialize this instance of FULLNS0MatchField according to
 * the XML being read from the reader.
 *
 * @param reader The reader.
 */
- (id) initWithReader: (xmlTextReaderPtr) reader
{
  return [super initWithReader: reader];
}

/**
 * Write the XML for this instance of FULLNS0MatchField to the writer.
 * Note that since we're only writing the XML type,
 * No start/end element will be written.
 *
 * @param reader The reader.
 */
- (void) writeXMLType: (xmlTextWriterPtr) writer
{
  [super writeXMLType:writer];
}

/**
 * Reads a FULLNS0MatchField from an XML reader. The element to be read is
 * "matchField".
 *
 * @param reader The XML reader.
 * @return The FULLNS0MatchField.
 */
+ (id<JAXBElement>) readXMLElement: (xmlTextReaderPtr) reader {
  int status;
  FULLNS0MatchField *_matchField = nil;

  if (xmlTextReaderNodeType(reader) != XML_READER_TYPE_ELEMENT) {
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
    if (status < 1) {
      [NSException raise: @"XMLReadError"
                   format: @"Error advancing the reader to start element matchField."];
    }
  }

  if (xmlStrcmp(BAD_CAST "matchField", xmlTextReaderConstLocalName(reader)) == 0
      && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read root element {}matchField.");
#endif
    _matchField = (FULLNS0MatchField *)[FULLNS0MatchField readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Successfully read root element {}matchField.");
#endif
  }
  else {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read FULLNS0MatchField. Expected element matchField. Current element: {}%s", xmlTextReaderConstLocalName(reader)];
    }
    else {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read FULLNS0MatchField. Expected element matchField. Current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader)];
    }
  }

  return _matchField;
}

/**
 * Writes this FULLNS0MatchField to XML under element name "matchField".
 * The namespace declarations for the element will be written.
 *
 * @param writer The XML writer.
 * @param _matchField The MatchField to write.
 * @return 1 if successful, 0 otherwise.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer
{
  [self writeXMLElement: writer writeNamespaces: YES];
}

/**
 * Writes this FULLNS0MatchField to an XML writer.
 *
 * @param writer The writer.
 * @param writeNs Whether to write the namespaces for this element to the xml writer.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer writeNamespaces: (BOOL) writeNs
{
  int rc = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "matchField", NULL);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing start element {}matchField. XML writer status: %i\n", rc];
  }

#if DEBUG_ENUNCIATE > 1
  NSLog(@"writing type {}matchField for root element {}matchField...");
#endif
  [self writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
  NSLog(@"successfully wrote type {}matchField for root element {}matchField...");
#endif
  rc = xmlTextWriterEndElement(writer);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing end element {}matchField. XML writer status: %i\n", rc];
  }
}

//documentation inherited.
- (BOOL) readJAXBAttribute: (xmlTextReaderPtr) reader
{
  void *_child_accessor;

  if ([super readJAXBAttribute: reader]) {
    return YES;
  }

  return NO;
}

//documentation inherited.
- (BOOL) readJAXBValue: (xmlTextReaderPtr) reader
{
  return [super readJAXBValue: reader];
}

//documentation inherited.
- (BOOL) readJAXBChildElement: (xmlTextReaderPtr) reader
{
  id __child;
  void *_child_accessor;
  int status, depth;

  if ([super readJAXBChildElement: reader]) {
    return YES;
  }

  return NO;
}

//documentation inherited.
- (int) readUnknownJAXBChildElement: (xmlTextReaderPtr) reader
{
  return [super readUnknownJAXBChildElement: reader];
}

//documentation inherited.
- (void) readUnknownJAXBAttribute: (xmlTextReaderPtr) reader
{
  [super readUnknownJAXBAttribute: reader];
}

//documentation inherited.
- (void) writeJAXBAttributes: (xmlTextWriterPtr) writer
{
  int status;

  [super writeJAXBAttributes: writer];

}

//documentation inherited.
- (void) writeJAXBValue: (xmlTextWriterPtr) writer
{
  [super writeJAXBValue: writer];
}

/**
 * Method for writing the child elements.
 *
 * @param writer The writer.
 */
- (void) writeJAXBChildElements: (xmlTextWriterPtr) writer
{
  int status;
  id __item;
  NSEnumerator *__enumerator;

  [super writeJAXBChildElements: writer];

}
@end /* implementation FULLNS0MatchField (JAXB) */

#endif /* DEF_FULLNS0MatchField_M */
#ifndef DEF_FULLNS0Match_M
#define DEF_FULLNS0Match_M

/**
 * (no documentation provided)
 */
@implementation FULLNS0Match

/**
 * (no documentation provided)
 */
- (NSArray *) matchFields
{
  return _matchFields;
}

/**
 * (no documentation provided)
 */
- (void) setMatchFields: (NSArray *) newMatchFields
{
  [newMatchFields retain];
  [_matchFields release];
  _matchFields = newMatchFields;
}

- (void) dealloc
{
  [self setMatchFields: nil];
  [super dealloc];
}

//documentation inherited.
+ (id<EnunciateXML>) readFromXML: (NSData *) xml
{
  FULLNS0Match *_fULLNS0Match;
  xmlTextReaderPtr reader = xmlReaderForMemory([xml bytes], [xml length], NULL, NULL, 0);
  if (reader == NULL) {
    [NSException raise: @"XMLReadError"
                 format: @"Error instantiating an XML reader."];
    return nil;
  }

  _fULLNS0Match = (FULLNS0Match *) [FULLNS0Match readXMLElement: reader];
  xmlFreeTextReader(reader); //free the reader
  return _fULLNS0Match;
}

//documentation inherited.
- (NSData *) writeToXML
{
  xmlBufferPtr buf;
  xmlTextWriterPtr writer;
  int rc;
  NSData *data;

  buf = xmlBufferCreate();
  if (buf == NULL) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error creating an XML buffer."];
    return nil;
  }

  writer = xmlNewTextWriterMemory(buf, 0);
  if (writer == NULL) {
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error creating an XML writer."];
    return nil;
  }

  rc = xmlTextWriterStartDocument(writer, NULL, "utf-8", NULL);
  if (rc < 0) {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing XML start document."];
    return nil;
  }

  NS_DURING
  {
    [self writeXMLElement: writer];
  }
  NS_HANDLER
  {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [localException raise];
  }
  NS_ENDHANDLER

  rc = xmlTextWriterEndDocument(writer);
  if (rc < 0) {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing XML end document."];
    return nil;
  }

  xmlFreeTextWriter(writer);
  data = [NSData dataWithBytes: buf->content length: buf->use];
  xmlBufferFree(buf);
  return data;
}
@end /* implementation FULLNS0Match */

/**
 * Internal, private interface for JAXB reading and writing.
 */
@interface FULLNS0Match (JAXB) <JAXBReading, JAXBWriting, JAXBType, JAXBElement>

@end /*interface FULLNS0Match (JAXB)*/

/**
 * Internal, private implementation for JAXB reading and writing.
 */
@implementation FULLNS0Match (JAXB)

/**
 * Read an instance of FULLNS0Match from an XML reader.
 *
 * @param reader The reader.
 * @return An instance of FULLNS0Match defined by the XML reader.
 */
+ (id<JAXBType>) readXMLType: (xmlTextReaderPtr) reader
{
  FULLNS0Match *_fULLNS0Match = [[FULLNS0Match alloc] init];
  NS_DURING
  {
    [_fULLNS0Match initWithReader: reader];
  }
  NS_HANDLER
  {
    _fULLNS0Match = nil;
    [localException raise];
  }
  NS_ENDHANDLER

  [_fULLNS0Match autorelease];
  return _fULLNS0Match;
}

/**
 * Initialize this instance of FULLNS0Match according to
 * the XML being read from the reader.
 *
 * @param reader The reader.
 */
- (id) initWithReader: (xmlTextReaderPtr) reader
{
  return [super initWithReader: reader];
}

/**
 * Write the XML for this instance of FULLNS0Match to the writer.
 * Note that since we're only writing the XML type,
 * No start/end element will be written.
 *
 * @param reader The reader.
 */
- (void) writeXMLType: (xmlTextWriterPtr) writer
{
  [super writeXMLType:writer];
}

/**
 * Reads a FULLNS0Match from an XML reader. The element to be read is
 * "match".
 *
 * @param reader The XML reader.
 * @return The FULLNS0Match.
 */
+ (id<JAXBElement>) readXMLElement: (xmlTextReaderPtr) reader {
  int status;
  FULLNS0Match *_match = nil;

  if (xmlTextReaderNodeType(reader) != XML_READER_TYPE_ELEMENT) {
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
    if (status < 1) {
      [NSException raise: @"XMLReadError"
                   format: @"Error advancing the reader to start element match."];
    }
  }

  if (xmlStrcmp(BAD_CAST "match", xmlTextReaderConstLocalName(reader)) == 0
      && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read root element {}match.");
#endif
    _match = (FULLNS0Match *)[FULLNS0Match readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Successfully read root element {}match.");
#endif
  }
  else {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read FULLNS0Match. Expected element match. Current element: {}%s", xmlTextReaderConstLocalName(reader)];
    }
    else {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read FULLNS0Match. Expected element match. Current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader)];
    }
  }

  return _match;
}

/**
 * Writes this FULLNS0Match to XML under element name "match".
 * The namespace declarations for the element will be written.
 *
 * @param writer The XML writer.
 * @param _match The Match to write.
 * @return 1 if successful, 0 otherwise.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer
{
  [self writeXMLElement: writer writeNamespaces: YES];
}

/**
 * Writes this FULLNS0Match to an XML writer.
 *
 * @param writer The writer.
 * @param writeNs Whether to write the namespaces for this element to the xml writer.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer writeNamespaces: (BOOL) writeNs
{
  int rc = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "match", NULL);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing start element {}match. XML writer status: %i\n", rc];
  }

#if DEBUG_ENUNCIATE > 1
  NSLog(@"writing type {}match for root element {}match...");
#endif
  [self writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
  NSLog(@"successfully wrote type {}match for root element {}match...");
#endif
  rc = xmlTextWriterEndElement(writer);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing end element {}match. XML writer status: %i\n", rc];
  }
}

//documentation inherited.
- (BOOL) readJAXBAttribute: (xmlTextReaderPtr) reader
{
  void *_child_accessor;

  if ([super readJAXBAttribute: reader]) {
    return YES;
  }

  return NO;
}

//documentation inherited.
- (BOOL) readJAXBValue: (xmlTextReaderPtr) reader
{
  return [super readJAXBValue: reader];
}

//documentation inherited.
- (BOOL) readJAXBChildElement: (xmlTextReaderPtr) reader
{
  id __child;
  void *_child_accessor;
  int status, depth;

  if ([super readJAXBChildElement: reader]) {
    return YES;
  }
  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "matchField", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}matchField of type {}matchField.");
#endif

    __child = [FULLNS0MatchField readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}matchField of type {}matchField.");
#endif

    if ([self matchFields]) {
      [self setMatchFields: [[self matchFields] arrayByAddingObject: __child]];
    }
    else {
      [self setMatchFields: [NSArray arrayWithObject: __child]];
    }
    return YES;
  } //end "if choice"


  return NO;
}

//documentation inherited.
- (int) readUnknownJAXBChildElement: (xmlTextReaderPtr) reader
{
  return [super readUnknownJAXBChildElement: reader];
}

//documentation inherited.
- (void) readUnknownJAXBAttribute: (xmlTextReaderPtr) reader
{
  [super readUnknownJAXBAttribute: reader];
}

//documentation inherited.
- (void) writeJAXBAttributes: (xmlTextWriterPtr) writer
{
  int status;

  [super writeJAXBAttributes: writer];

}

//documentation inherited.
- (void) writeJAXBValue: (xmlTextWriterPtr) writer
{
  [super writeJAXBValue: writer];
}

/**
 * Method for writing the child elements.
 *
 * @param writer The writer.
 */
- (void) writeJAXBChildElements: (xmlTextWriterPtr) writer
{
  int status;
  id __item;
  NSEnumerator *__enumerator;

  [super writeJAXBChildElements: writer];

  if ([self matchFields]) {
    __enumerator = [[self matchFields] objectEnumerator];

    while ( (__item = [__enumerator nextObject]) ) {
      status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "matchField", NULL);
      if (status < 0) {
        [NSException raise: @"XMLWriteError"
                     format: @"Error writing start child element {}matchField."];
      }

#if DEBUG_ENUNCIATE > 1
      NSLog(@"writing element {}matchField...");
#endif
      [__item writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
      NSLog(@"successfully wrote element {}matchField...");
#endif

      status = xmlTextWriterEndElement(writer);
      if (status < 0) {
        [NSException raise: @"XMLWriteError"
                     format: @"Error writing end child element {}matchField."];
      }
    } //end item iterator.
  }
}
@end /* implementation FULLNS0Match (JAXB) */

#endif /* DEF_FULLNS0Match_M */
#ifndef DEF_FULLNS0Flow_M
#define DEF_FULLNS0Flow_M

/**
 * (no documentation provided)
 */
@implementation FULLNS0Flow

/**
 * (no documentation provided)
 */
- (short) priority
{
  return _priority;
}

/**
 * (no documentation provided)
 */
- (void) setPriority: (short) newPriority
{
  _priority = newPriority;
}

/**
 * (no documentation provided)
 */
- (short) idleTimeout
{
  return _idleTimeout;
}

/**
 * (no documentation provided)
 */
- (void) setIdleTimeout: (short) newIdleTimeout
{
  _idleTimeout = newIdleTimeout;
}

/**
 * (no documentation provided)
 */
- (NSArray *) actions
{
  return _actions;
}

/**
 * (no documentation provided)
 */
- (void) setActions: (NSArray *) newActions
{
  [newActions retain];
  [_actions release];
  _actions = newActions;
}

/**
 * (no documentation provided)
 */
- (short) hardTimeout
{
  return _hardTimeout;
}

/**
 * (no documentation provided)
 */
- (void) setHardTimeout: (short) newHardTimeout
{
  _hardTimeout = newHardTimeout;
}

/**
 * (no documentation provided)
 */
- (long) identifier
{
  return _identifier;
}

/**
 * (no documentation provided)
 */
- (void) setIdentifier: (long) newIdentifier
{
  _identifier = newIdentifier;
}

/**
 * (no documentation provided)
 */
- (FULLNS0Match *) match
{
  return _match;
}

/**
 * (no documentation provided)
 */
- (void) setMatch: (FULLNS0Match *) newMatch
{
  [newMatch retain];
  [_match release];
  _match = newMatch;
}

- (void) dealloc
{
  [self setActions: nil];
  [self setMatch: nil];
  [super dealloc];
}

//documentation inherited.
+ (id<EnunciateXML>) readFromXML: (NSData *) xml
{
  FULLNS0Flow *_fULLNS0Flow;
  xmlTextReaderPtr reader = xmlReaderForMemory([xml bytes], [xml length], NULL, NULL, 0);
  if (reader == NULL) {
    [NSException raise: @"XMLReadError"
                 format: @"Error instantiating an XML reader."];
    return nil;
  }

  _fULLNS0Flow = (FULLNS0Flow *) [FULLNS0Flow readXMLElement: reader];
  xmlFreeTextReader(reader); //free the reader
  return _fULLNS0Flow;
}

//documentation inherited.
- (NSData *) writeToXML
{
  xmlBufferPtr buf;
  xmlTextWriterPtr writer;
  int rc;
  NSData *data;

  buf = xmlBufferCreate();
  if (buf == NULL) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error creating an XML buffer."];
    return nil;
  }

  writer = xmlNewTextWriterMemory(buf, 0);
  if (writer == NULL) {
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error creating an XML writer."];
    return nil;
  }

  rc = xmlTextWriterStartDocument(writer, NULL, "utf-8", NULL);
  if (rc < 0) {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing XML start document."];
    return nil;
  }

  NS_DURING
  {
    [self writeXMLElement: writer];
  }
  NS_HANDLER
  {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [localException raise];
  }
  NS_ENDHANDLER

  rc = xmlTextWriterEndDocument(writer);
  if (rc < 0) {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing XML end document."];
    return nil;
  }

  xmlFreeTextWriter(writer);
  data = [NSData dataWithBytes: buf->content length: buf->use];
  xmlBufferFree(buf);
  return data;
}
@end /* implementation FULLNS0Flow */

/**
 * Internal, private interface for JAXB reading and writing.
 */
@interface FULLNS0Flow (JAXB) <JAXBReading, JAXBWriting, JAXBType, JAXBElement>

@end /*interface FULLNS0Flow (JAXB)*/

/**
 * Internal, private implementation for JAXB reading and writing.
 */
@implementation FULLNS0Flow (JAXB)

/**
 * Read an instance of FULLNS0Flow from an XML reader.
 *
 * @param reader The reader.
 * @return An instance of FULLNS0Flow defined by the XML reader.
 */
+ (id<JAXBType>) readXMLType: (xmlTextReaderPtr) reader
{
  FULLNS0Flow *_fULLNS0Flow = [[FULLNS0Flow alloc] init];
  NS_DURING
  {
    [_fULLNS0Flow initWithReader: reader];
  }
  NS_HANDLER
  {
    _fULLNS0Flow = nil;
    [localException raise];
  }
  NS_ENDHANDLER

  [_fULLNS0Flow autorelease];
  return _fULLNS0Flow;
}

/**
 * Initialize this instance of FULLNS0Flow according to
 * the XML being read from the reader.
 *
 * @param reader The reader.
 */
- (id) initWithReader: (xmlTextReaderPtr) reader
{
  return [super initWithReader: reader];
}

/**
 * Write the XML for this instance of FULLNS0Flow to the writer.
 * Note that since we're only writing the XML type,
 * No start/end element will be written.
 *
 * @param reader The reader.
 */
- (void) writeXMLType: (xmlTextWriterPtr) writer
{
  [super writeXMLType:writer];
}

/**
 * Reads a FULLNS0Flow from an XML reader. The element to be read is
 * "flow".
 *
 * @param reader The XML reader.
 * @return The FULLNS0Flow.
 */
+ (id<JAXBElement>) readXMLElement: (xmlTextReaderPtr) reader {
  int status;
  FULLNS0Flow *_flow = nil;

  if (xmlTextReaderNodeType(reader) != XML_READER_TYPE_ELEMENT) {
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
    if (status < 1) {
      [NSException raise: @"XMLReadError"
                   format: @"Error advancing the reader to start element flow."];
    }
  }

  if (xmlStrcmp(BAD_CAST "flow", xmlTextReaderConstLocalName(reader)) == 0
      && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read root element {}flow.");
#endif
    _flow = (FULLNS0Flow *)[FULLNS0Flow readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Successfully read root element {}flow.");
#endif
  }
  else {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read FULLNS0Flow. Expected element flow. Current element: {}%s", xmlTextReaderConstLocalName(reader)];
    }
    else {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read FULLNS0Flow. Expected element flow. Current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader)];
    }
  }

  return _flow;
}

/**
 * Writes this FULLNS0Flow to XML under element name "flow".
 * The namespace declarations for the element will be written.
 *
 * @param writer The XML writer.
 * @param _flow The Flow to write.
 * @return 1 if successful, 0 otherwise.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer
{
  [self writeXMLElement: writer writeNamespaces: YES];
}

/**
 * Writes this FULLNS0Flow to an XML writer.
 *
 * @param writer The writer.
 * @param writeNs Whether to write the namespaces for this element to the xml writer.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer writeNamespaces: (BOOL) writeNs
{
  int rc = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "flow", NULL);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing start element {}flow. XML writer status: %i\n", rc];
  }

#if DEBUG_ENUNCIATE > 1
  NSLog(@"writing type {}flow for root element {}flow...");
#endif
  [self writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
  NSLog(@"successfully wrote type {}flow for root element {}flow...");
#endif
  rc = xmlTextWriterEndElement(writer);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing end element {}flow. XML writer status: %i\n", rc];
  }
}

//documentation inherited.
- (BOOL) readJAXBAttribute: (xmlTextReaderPtr) reader
{
  void *_child_accessor;

  if ([super readJAXBAttribute: reader]) {
    return YES;
  }

  return NO;
}

//documentation inherited.
- (BOOL) readJAXBValue: (xmlTextReaderPtr) reader
{
  return [super readJAXBValue: reader];
}

//documentation inherited.
- (BOOL) readJAXBChildElement: (xmlTextReaderPtr) reader
{
  id __child;
  void *_child_accessor;
  int status, depth;

  if ([super readJAXBChildElement: reader]) {
    return YES;
  }

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "priority", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

    _child_accessor = xmlTextReaderReadShortType(reader);
    if (_child_accessor == NULL) {
      //panic: unable to return the value for some reason.
      [NSException raise: @"XMLReadError"
                   format: @"Error reading element value."];
    }
    [self setPriority: *((short*) _child_accessor)];
    free(_child_accessor);
    return YES;
  }

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "idleTimeout", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

    _child_accessor = xmlTextReaderReadShortType(reader);
    if (_child_accessor == NULL) {
      //panic: unable to return the value for some reason.
      [NSException raise: @"XMLReadError"
                   format: @"Error reading element value."];
    }
    [self setIdleTimeout: *((short*) _child_accessor)];
    free(_child_accessor);
    return YES;
  }
  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "actions", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}actions of type {}action.");
#endif

    __child = [FULLNS0Action readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}actions of type {}action.");
#endif

    if ([self actions]) {
      [self setActions: [[self actions] arrayByAddingObject: __child]];
    }
    else {
      [self setActions: [NSArray arrayWithObject: __child]];
    }
    return YES;
  } //end "if choice"


  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "hardTimeout", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

    _child_accessor = xmlTextReaderReadShortType(reader);
    if (_child_accessor == NULL) {
      //panic: unable to return the value for some reason.
      [NSException raise: @"XMLReadError"
                   format: @"Error reading element value."];
    }
    [self setHardTimeout: *((short*) _child_accessor)];
    free(_child_accessor);
    return YES;
  }

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "id", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

    _child_accessor = xmlTextReaderReadLongType(reader);
    if (_child_accessor == NULL) {
      //panic: unable to return the value for some reason.
      [NSException raise: @"XMLReadError"
                   format: @"Error reading element value."];
    }
    [self setIdentifier: *((long*) _child_accessor)];
    free(_child_accessor);
    return YES;
  }
  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "match", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}match of type {}match.");
#endif
    __child = [FULLNS0Match readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}match of type {}match.");
#endif

    [self setMatch: __child];
    return YES;
  } //end "if choice"


  return NO;
}

//documentation inherited.
- (int) readUnknownJAXBChildElement: (xmlTextReaderPtr) reader
{
  return [super readUnknownJAXBChildElement: reader];
}

//documentation inherited.
- (void) readUnknownJAXBAttribute: (xmlTextReaderPtr) reader
{
  [super readUnknownJAXBAttribute: reader];
}

//documentation inherited.
- (void) writeJAXBAttributes: (xmlTextWriterPtr) writer
{
  int status;

  [super writeJAXBAttributes: writer];

}

//documentation inherited.
- (void) writeJAXBValue: (xmlTextWriterPtr) writer
{
  [super writeJAXBValue: writer];
}

/**
 * Method for writing the child elements.
 *
 * @param writer The writer.
 */
- (void) writeJAXBChildElements: (xmlTextWriterPtr) writer
{
  int status;
  id __item;
  NSEnumerator *__enumerator;

  [super writeJAXBChildElements: writer];

  if (YES) { //always write the primitive element...
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "priority", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}priority."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}priority...");
#endif
    status = xmlTextWriterWriteShortType(writer, &_priority);
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}priority...");
#endif
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing child element {}priority."];
    }

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}priority."];
    }
  }
  if (YES) { //always write the primitive element...
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "idleTimeout", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}idleTimeout."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}idleTimeout...");
#endif
    status = xmlTextWriterWriteShortType(writer, &_idleTimeout);
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}idleTimeout...");
#endif
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing child element {}idleTimeout."];
    }

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}idleTimeout."];
    }
  }
  if ([self actions]) {
    __enumerator = [[self actions] objectEnumerator];

    while ( (__item = [__enumerator nextObject]) ) {
      status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "actions", NULL);
      if (status < 0) {
        [NSException raise: @"XMLWriteError"
                     format: @"Error writing start child element {}actions."];
      }

#if DEBUG_ENUNCIATE > 1
      NSLog(@"writing element {}actions...");
#endif
      [__item writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
      NSLog(@"successfully wrote element {}actions...");
#endif

      status = xmlTextWriterEndElement(writer);
      if (status < 0) {
        [NSException raise: @"XMLWriteError"
                     format: @"Error writing end child element {}actions."];
      }
    } //end item iterator.
  }
  if (YES) { //always write the primitive element...
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "hardTimeout", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}hardTimeout."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}hardTimeout...");
#endif
    status = xmlTextWriterWriteShortType(writer, &_hardTimeout);
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}hardTimeout...");
#endif
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing child element {}hardTimeout."];
    }

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}hardTimeout."];
    }
  }
  if (YES) { //always write the primitive element...
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "id", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}id."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}id...");
#endif
    status = xmlTextWriterWriteLongType(writer, &_identifier);
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}id...");
#endif
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing child element {}id."];
    }

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}id."];
    }
  }
  if ([self match]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "match", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}match."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}match...");
#endif
    [[self match] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}match...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}match."];
    }
  }
}
@end /* implementation FULLNS0Flow (JAXB) */

#endif /* DEF_FULLNS0Flow_M */
#ifndef DEF_FULLNS0NodeTable_M
#define DEF_FULLNS0NodeTable_M

/**
 * (no documentation provided)
 */
@implementation FULLNS0NodeTable

/**
 * (no documentation provided)
 */
- (NSString *) nodeTableIDString
{
  return _nodeTableIDString;
}

/**
 * (no documentation provided)
 */
- (void) setNodeTableIDString: (NSString *) newNodeTableIDString
{
  [newNodeTableIDString retain];
  [_nodeTableIDString release];
  _nodeTableIDString = newNodeTableIDString;
}

/**
 * (no documentation provided)
 */
- (FULLNS0Node *) nodeTableNode
{
  return _nodeTableNode;
}

/**
 * (no documentation provided)
 */
- (void) setNodeTableNode: (FULLNS0Node *) newNodeTableNode
{
  [newNodeTableNode retain];
  [_nodeTableNode release];
  _nodeTableNode = newNodeTableNode;
}

- (void) dealloc
{
  [self setNodeTableIDString: nil];
  [self setNodeTableNode: nil];
  [super dealloc];
}

//documentation inherited.
+ (id<EnunciateXML>) readFromXML: (NSData *) xml
{
  FULLNS0NodeTable *_fULLNS0NodeTable;
  xmlTextReaderPtr reader = xmlReaderForMemory([xml bytes], [xml length], NULL, NULL, 0);
  if (reader == NULL) {
    [NSException raise: @"XMLReadError"
                 format: @"Error instantiating an XML reader."];
    return nil;
  }

  _fULLNS0NodeTable = (FULLNS0NodeTable *) [FULLNS0NodeTable readXMLElement: reader];
  xmlFreeTextReader(reader); //free the reader
  return _fULLNS0NodeTable;
}

//documentation inherited.
- (NSData *) writeToXML
{
  xmlBufferPtr buf;
  xmlTextWriterPtr writer;
  int rc;
  NSData *data;

  buf = xmlBufferCreate();
  if (buf == NULL) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error creating an XML buffer."];
    return nil;
  }

  writer = xmlNewTextWriterMemory(buf, 0);
  if (writer == NULL) {
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error creating an XML writer."];
    return nil;
  }

  rc = xmlTextWriterStartDocument(writer, NULL, "utf-8", NULL);
  if (rc < 0) {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing XML start document."];
    return nil;
  }

  NS_DURING
  {
    [self writeXMLElement: writer];
  }
  NS_HANDLER
  {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [localException raise];
  }
  NS_ENDHANDLER

  rc = xmlTextWriterEndDocument(writer);
  if (rc < 0) {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing XML end document."];
    return nil;
  }

  xmlFreeTextWriter(writer);
  data = [NSData dataWithBytes: buf->content length: buf->use];
  xmlBufferFree(buf);
  return data;
}
@end /* implementation FULLNS0NodeTable */

/**
 * Internal, private interface for JAXB reading and writing.
 */
@interface FULLNS0NodeTable (JAXB) <JAXBReading, JAXBWriting, JAXBType, JAXBElement>

@end /*interface FULLNS0NodeTable (JAXB)*/

/**
 * Internal, private implementation for JAXB reading and writing.
 */
@implementation FULLNS0NodeTable (JAXB)

/**
 * Read an instance of FULLNS0NodeTable from an XML reader.
 *
 * @param reader The reader.
 * @return An instance of FULLNS0NodeTable defined by the XML reader.
 */
+ (id<JAXBType>) readXMLType: (xmlTextReaderPtr) reader
{
  FULLNS0NodeTable *_fULLNS0NodeTable = [[FULLNS0NodeTable alloc] init];
  NS_DURING
  {
    [_fULLNS0NodeTable initWithReader: reader];
  }
  NS_HANDLER
  {
    _fULLNS0NodeTable = nil;
    [localException raise];
  }
  NS_ENDHANDLER

  [_fULLNS0NodeTable autorelease];
  return _fULLNS0NodeTable;
}

/**
 * Initialize this instance of FULLNS0NodeTable according to
 * the XML being read from the reader.
 *
 * @param reader The reader.
 */
- (id) initWithReader: (xmlTextReaderPtr) reader
{
  return [super initWithReader: reader];
}

/**
 * Write the XML for this instance of FULLNS0NodeTable to the writer.
 * Note that since we're only writing the XML type,
 * No start/end element will be written.
 *
 * @param reader The reader.
 */
- (void) writeXMLType: (xmlTextWriterPtr) writer
{
  [super writeXMLType:writer];
}

/**
 * Reads a FULLNS0NodeTable from an XML reader. The element to be read is
 * "nodeTable".
 *
 * @param reader The XML reader.
 * @return The FULLNS0NodeTable.
 */
+ (id<JAXBElement>) readXMLElement: (xmlTextReaderPtr) reader {
  int status;
  FULLNS0NodeTable *_nodeTable = nil;

  if (xmlTextReaderNodeType(reader) != XML_READER_TYPE_ELEMENT) {
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
    if (status < 1) {
      [NSException raise: @"XMLReadError"
                   format: @"Error advancing the reader to start element nodeTable."];
    }
  }

  if (xmlStrcmp(BAD_CAST "nodeTable", xmlTextReaderConstLocalName(reader)) == 0
      && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read root element {}nodeTable.");
#endif
    _nodeTable = (FULLNS0NodeTable *)[FULLNS0NodeTable readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Successfully read root element {}nodeTable.");
#endif
  }
  else {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read FULLNS0NodeTable. Expected element nodeTable. Current element: {}%s", xmlTextReaderConstLocalName(reader)];
    }
    else {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read FULLNS0NodeTable. Expected element nodeTable. Current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader)];
    }
  }

  return _nodeTable;
}

/**
 * Writes this FULLNS0NodeTable to XML under element name "nodeTable".
 * The namespace declarations for the element will be written.
 *
 * @param writer The XML writer.
 * @param _nodeTable The NodeTable to write.
 * @return 1 if successful, 0 otherwise.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer
{
  [self writeXMLElement: writer writeNamespaces: YES];
}

/**
 * Writes this FULLNS0NodeTable to an XML writer.
 *
 * @param writer The writer.
 * @param writeNs Whether to write the namespaces for this element to the xml writer.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer writeNamespaces: (BOOL) writeNs
{
  int rc = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "nodeTable", NULL);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing start element {}nodeTable. XML writer status: %i\n", rc];
  }

#if DEBUG_ENUNCIATE > 1
  NSLog(@"writing type {}nodeTable for root element {}nodeTable...");
#endif
  [self writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
  NSLog(@"successfully wrote type {}nodeTable for root element {}nodeTable...");
#endif
  rc = xmlTextWriterEndElement(writer);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing end element {}nodeTable. XML writer status: %i\n", rc];
  }
}

//documentation inherited.
- (BOOL) readJAXBAttribute: (xmlTextReaderPtr) reader
{
  void *_child_accessor;

  if ([super readJAXBAttribute: reader]) {
    return YES;
  }

  if ((xmlStrcmp(BAD_CAST "id", xmlTextReaderConstLocalName(reader)) == 0) && (xmlTextReaderConstNamespaceUri(reader) == NULL)) {
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read attribute {}id...");
#endif
    [self setNodeTableIDString: (NSString*) [NSString readXMLType: reader]];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read attribute {}id...");
#endif
    return YES;
  }

  return NO;
}

//documentation inherited.
- (BOOL) readJAXBValue: (xmlTextReaderPtr) reader
{
  return [super readJAXBValue: reader];
}

//documentation inherited.
- (BOOL) readJAXBChildElement: (xmlTextReaderPtr) reader
{
  id __child;
  void *_child_accessor;
  int status, depth;

  if ([super readJAXBChildElement: reader]) {
    return YES;
  }
  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "node", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}node of type {}node.");
#endif
    __child = [FULLNS0Node readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}node of type {}node.");
#endif

    [self setNodeTableNode: __child];
    return YES;
  } //end "if choice"


  return NO;
}

//documentation inherited.
- (int) readUnknownJAXBChildElement: (xmlTextReaderPtr) reader
{
  return [super readUnknownJAXBChildElement: reader];
}

//documentation inherited.
- (void) readUnknownJAXBAttribute: (xmlTextReaderPtr) reader
{
  [super readUnknownJAXBAttribute: reader];
}

//documentation inherited.
- (void) writeJAXBAttributes: (xmlTextWriterPtr) writer
{
  int status;

  [super writeJAXBAttributes: writer];

  if ([self nodeTableIDString]) {

    status = xmlTextWriterStartAttributeNS(writer, NULL, BAD_CAST "id", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start attribute {}id."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing attribute {}id...");
#endif
    [[self nodeTableIDString] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote attribute {}id...");
#endif

    status = xmlTextWriterEndAttribute(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end attribute {}id."];
    }
  }
}

//documentation inherited.
- (void) writeJAXBValue: (xmlTextWriterPtr) writer
{
  [super writeJAXBValue: writer];
}

/**
 * Method for writing the child elements.
 *
 * @param writer The writer.
 */
- (void) writeJAXBChildElements: (xmlTextWriterPtr) writer
{
  int status;
  id __item;
  NSEnumerator *__enumerator;

  [super writeJAXBChildElements: writer];

  if ([self nodeTableNode]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "node", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}node."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}node...");
#endif
    [[self nodeTableNode] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}node...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}node."];
    }
  }
}
@end /* implementation FULLNS0NodeTable (JAXB) */

#endif /* DEF_FULLNS0NodeTable_M */
#ifndef DEF_FULLNS0NodeTableStatistics_M
#define DEF_FULLNS0NodeTableStatistics_M

/**
 * (no documentation provided)
 */
@implementation FULLNS0NodeTableStatistics

/**
 * (no documentation provided)
 */
- (NSString *) name
{
  return _name;
}

/**
 * (no documentation provided)
 */
- (void) setName: (NSString *) newName
{
  [newName retain];
  [_name release];
  _name = newName;
}

/**
 * (no documentation provided)
 */
- (long) matchedCount
{
  return _matchedCount;
}

/**
 * (no documentation provided)
 */
- (void) setMatchedCount: (long) newMatchedCount
{
  _matchedCount = newMatchedCount;
}

/**
 * (no documentation provided)
 */
- (FULLNS0NodeTable *) nodeTable
{
  return _nodeTable;
}

/**
 * (no documentation provided)
 */
- (void) setNodeTable: (FULLNS0NodeTable *) newNodeTable
{
  [newNodeTable retain];
  [_nodeTable release];
  _nodeTable = newNodeTable;
}

/**
 * (no documentation provided)
 */
- (int) activeCount
{
  return _activeCount;
}

/**
 * (no documentation provided)
 */
- (void) setActiveCount: (int) newActiveCount
{
  _activeCount = newActiveCount;
}

/**
 * (no documentation provided)
 */
- (long) lookupCount
{
  return _lookupCount;
}

/**
 * (no documentation provided)
 */
- (void) setLookupCount: (long) newLookupCount
{
  _lookupCount = newLookupCount;
}

- (void) dealloc
{
  [self setName: nil];
  [self setNodeTable: nil];
  [super dealloc];
}

//documentation inherited.
+ (id<EnunciateXML>) readFromXML: (NSData *) xml
{
  FULLNS0NodeTableStatistics *_fULLNS0NodeTableStatistics;
  xmlTextReaderPtr reader = xmlReaderForMemory([xml bytes], [xml length], NULL, NULL, 0);
  if (reader == NULL) {
    [NSException raise: @"XMLReadError"
                 format: @"Error instantiating an XML reader."];
    return nil;
  }

  _fULLNS0NodeTableStatistics = (FULLNS0NodeTableStatistics *) [FULLNS0NodeTableStatistics readXMLElement: reader];
  xmlFreeTextReader(reader); //free the reader
  return _fULLNS0NodeTableStatistics;
}

//documentation inherited.
- (NSData *) writeToXML
{
  xmlBufferPtr buf;
  xmlTextWriterPtr writer;
  int rc;
  NSData *data;

  buf = xmlBufferCreate();
  if (buf == NULL) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error creating an XML buffer."];
    return nil;
  }

  writer = xmlNewTextWriterMemory(buf, 0);
  if (writer == NULL) {
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error creating an XML writer."];
    return nil;
  }

  rc = xmlTextWriterStartDocument(writer, NULL, "utf-8", NULL);
  if (rc < 0) {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing XML start document."];
    return nil;
  }

  NS_DURING
  {
    [self writeXMLElement: writer];
  }
  NS_HANDLER
  {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [localException raise];
  }
  NS_ENDHANDLER

  rc = xmlTextWriterEndDocument(writer);
  if (rc < 0) {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing XML end document."];
    return nil;
  }

  xmlFreeTextWriter(writer);
  data = [NSData dataWithBytes: buf->content length: buf->use];
  xmlBufferFree(buf);
  return data;
}
@end /* implementation FULLNS0NodeTableStatistics */

/**
 * Internal, private interface for JAXB reading and writing.
 */
@interface FULLNS0NodeTableStatistics (JAXB) <JAXBReading, JAXBWriting, JAXBType, JAXBElement>

@end /*interface FULLNS0NodeTableStatistics (JAXB)*/

/**
 * Internal, private implementation for JAXB reading and writing.
 */
@implementation FULLNS0NodeTableStatistics (JAXB)

/**
 * Read an instance of FULLNS0NodeTableStatistics from an XML reader.
 *
 * @param reader The reader.
 * @return An instance of FULLNS0NodeTableStatistics defined by the XML reader.
 */
+ (id<JAXBType>) readXMLType: (xmlTextReaderPtr) reader
{
  FULLNS0NodeTableStatistics *_fULLNS0NodeTableStatistics = [[FULLNS0NodeTableStatistics alloc] init];
  NS_DURING
  {
    [_fULLNS0NodeTableStatistics initWithReader: reader];
  }
  NS_HANDLER
  {
    _fULLNS0NodeTableStatistics = nil;
    [localException raise];
  }
  NS_ENDHANDLER

  [_fULLNS0NodeTableStatistics autorelease];
  return _fULLNS0NodeTableStatistics;
}

/**
 * Initialize this instance of FULLNS0NodeTableStatistics according to
 * the XML being read from the reader.
 *
 * @param reader The reader.
 */
- (id) initWithReader: (xmlTextReaderPtr) reader
{
  return [super initWithReader: reader];
}

/**
 * Write the XML for this instance of FULLNS0NodeTableStatistics to the writer.
 * Note that since we're only writing the XML type,
 * No start/end element will be written.
 *
 * @param reader The reader.
 */
- (void) writeXMLType: (xmlTextWriterPtr) writer
{
  [super writeXMLType:writer];
}

/**
 * Reads a FULLNS0NodeTableStatistics from an XML reader. The element to be read is
 * "nodeTableStatistics".
 *
 * @param reader The XML reader.
 * @return The FULLNS0NodeTableStatistics.
 */
+ (id<JAXBElement>) readXMLElement: (xmlTextReaderPtr) reader {
  int status;
  FULLNS0NodeTableStatistics *_nodeTableStatistics = nil;

  if (xmlTextReaderNodeType(reader) != XML_READER_TYPE_ELEMENT) {
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
    if (status < 1) {
      [NSException raise: @"XMLReadError"
                   format: @"Error advancing the reader to start element nodeTableStatistics."];
    }
  }

  if (xmlStrcmp(BAD_CAST "nodeTableStatistics", xmlTextReaderConstLocalName(reader)) == 0
      && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read root element {}nodeTableStatistics.");
#endif
    _nodeTableStatistics = (FULLNS0NodeTableStatistics *)[FULLNS0NodeTableStatistics readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Successfully read root element {}nodeTableStatistics.");
#endif
  }
  else {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read FULLNS0NodeTableStatistics. Expected element nodeTableStatistics. Current element: {}%s", xmlTextReaderConstLocalName(reader)];
    }
    else {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read FULLNS0NodeTableStatistics. Expected element nodeTableStatistics. Current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader)];
    }
  }

  return _nodeTableStatistics;
}

/**
 * Writes this FULLNS0NodeTableStatistics to XML under element name "nodeTableStatistics".
 * The namespace declarations for the element will be written.
 *
 * @param writer The XML writer.
 * @param _nodeTableStatistics The NodeTableStatistics to write.
 * @return 1 if successful, 0 otherwise.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer
{
  [self writeXMLElement: writer writeNamespaces: YES];
}

/**
 * Writes this FULLNS0NodeTableStatistics to an XML writer.
 *
 * @param writer The writer.
 * @param writeNs Whether to write the namespaces for this element to the xml writer.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer writeNamespaces: (BOOL) writeNs
{
  int rc = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "nodeTableStatistics", NULL);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing start element {}nodeTableStatistics. XML writer status: %i\n", rc];
  }

#if DEBUG_ENUNCIATE > 1
  NSLog(@"writing type {}nodeTableStatistics for root element {}nodeTableStatistics...");
#endif
  [self writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
  NSLog(@"successfully wrote type {}nodeTableStatistics for root element {}nodeTableStatistics...");
#endif
  rc = xmlTextWriterEndElement(writer);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing end element {}nodeTableStatistics. XML writer status: %i\n", rc];
  }
}

//documentation inherited.
- (BOOL) readJAXBAttribute: (xmlTextReaderPtr) reader
{
  void *_child_accessor;

  if ([super readJAXBAttribute: reader]) {
    return YES;
  }

  return NO;
}

//documentation inherited.
- (BOOL) readJAXBValue: (xmlTextReaderPtr) reader
{
  return [super readJAXBValue: reader];
}

//documentation inherited.
- (BOOL) readJAXBChildElement: (xmlTextReaderPtr) reader
{
  id __child;
  void *_child_accessor;
  int status, depth;

  if ([super readJAXBChildElement: reader]) {
    return YES;
  }
  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "name", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}name of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}name of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setName: __child];
    return YES;
  } //end "if choice"


  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "matchedCount", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

    _child_accessor = xmlTextReaderReadLongType(reader);
    if (_child_accessor == NULL) {
      //panic: unable to return the value for some reason.
      [NSException raise: @"XMLReadError"
                   format: @"Error reading element value."];
    }
    [self setMatchedCount: *((long*) _child_accessor)];
    free(_child_accessor);
    return YES;
  }
  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "nodeTable", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}nodeTable of type {}nodeTable.");
#endif
    __child = [FULLNS0NodeTable readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}nodeTable of type {}nodeTable.");
#endif

    [self setNodeTable: __child];
    return YES;
  } //end "if choice"


  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "activeCount", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

    _child_accessor = xmlTextReaderReadIntType(reader);
    if (_child_accessor == NULL) {
      //panic: unable to return the value for some reason.
      [NSException raise: @"XMLReadError"
                   format: @"Error reading element value."];
    }
    [self setActiveCount: *((int*) _child_accessor)];
    free(_child_accessor);
    return YES;
  }

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "lookupCount", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

    _child_accessor = xmlTextReaderReadLongType(reader);
    if (_child_accessor == NULL) {
      //panic: unable to return the value for some reason.
      [NSException raise: @"XMLReadError"
                   format: @"Error reading element value."];
    }
    [self setLookupCount: *((long*) _child_accessor)];
    free(_child_accessor);
    return YES;
  }

  return NO;
}

//documentation inherited.
- (int) readUnknownJAXBChildElement: (xmlTextReaderPtr) reader
{
  return [super readUnknownJAXBChildElement: reader];
}

//documentation inherited.
- (void) readUnknownJAXBAttribute: (xmlTextReaderPtr) reader
{
  [super readUnknownJAXBAttribute: reader];
}

//documentation inherited.
- (void) writeJAXBAttributes: (xmlTextWriterPtr) writer
{
  int status;

  [super writeJAXBAttributes: writer];

}

//documentation inherited.
- (void) writeJAXBValue: (xmlTextWriterPtr) writer
{
  [super writeJAXBValue: writer];
}

/**
 * Method for writing the child elements.
 *
 * @param writer The writer.
 */
- (void) writeJAXBChildElements: (xmlTextWriterPtr) writer
{
  int status;
  id __item;
  NSEnumerator *__enumerator;

  [super writeJAXBChildElements: writer];

  if ([self name]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "name", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}name."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}name...");
#endif
    [[self name] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}name...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}name."];
    }
  }
  if (YES) { //always write the primitive element...
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "matchedCount", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}matchedCount."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}matchedCount...");
#endif
    status = xmlTextWriterWriteLongType(writer, &_matchedCount);
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}matchedCount...");
#endif
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing child element {}matchedCount."];
    }

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}matchedCount."];
    }
  }
  if ([self nodeTable]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "nodeTable", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}nodeTable."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}nodeTable...");
#endif
    [[self nodeTable] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}nodeTable...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}nodeTable."];
    }
  }
  if (YES) { //always write the primitive element...
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "activeCount", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}activeCount."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}activeCount...");
#endif
    status = xmlTextWriterWriteIntType(writer, &_activeCount);
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}activeCount...");
#endif
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing child element {}activeCount."];
    }

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}activeCount."];
    }
  }
  if (YES) { //always write the primitive element...
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "lookupCount", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}lookupCount."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}lookupCount...");
#endif
    status = xmlTextWriterWriteLongType(writer, &_lookupCount);
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}lookupCount...");
#endif
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing child element {}lookupCount."];
    }

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}lookupCount."];
    }
  }
}
@end /* implementation FULLNS0NodeTableStatistics (JAXB) */

#endif /* DEF_FULLNS0NodeTableStatistics_M */
#ifndef DEF_FULLNS0FlowStatistics_M
#define DEF_FULLNS0FlowStatistics_M

/**
 * (no documentation provided)
 */
@implementation FULLNS0FlowStatistics

/**
 * (no documentation provided)
 */
- (FULLNS0Node *) node
{
  return _node;
}

/**
 * (no documentation provided)
 */
- (void) setNode: (FULLNS0Node *) newNode
{
  [newNode retain];
  [_node release];
  _node = newNode;
}

/**
 * (no documentation provided)
 */
- (NSArray *) flowStat
{
  return _flowStat;
}

/**
 * (no documentation provided)
 */
- (void) setFlowStat: (NSArray *) newFlowStat
{
  [newFlowStat retain];
  [_flowStat release];
  _flowStat = newFlowStat;
}

- (void) dealloc
{
  [self setNode: nil];
  [self setFlowStat: nil];
  [super dealloc];
}

//documentation inherited.
+ (id<EnunciateXML>) readFromXML: (NSData *) xml
{
  FULLNS0FlowStatistics *_fULLNS0FlowStatistics;
  xmlTextReaderPtr reader = xmlReaderForMemory([xml bytes], [xml length], NULL, NULL, 0);
  if (reader == NULL) {
    [NSException raise: @"XMLReadError"
                 format: @"Error instantiating an XML reader."];
    return nil;
  }

  _fULLNS0FlowStatistics = (FULLNS0FlowStatistics *) [FULLNS0FlowStatistics readXMLElement: reader];
  xmlFreeTextReader(reader); //free the reader
  return _fULLNS0FlowStatistics;
}

//documentation inherited.
- (NSData *) writeToXML
{
  xmlBufferPtr buf;
  xmlTextWriterPtr writer;
  int rc;
  NSData *data;

  buf = xmlBufferCreate();
  if (buf == NULL) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error creating an XML buffer."];
    return nil;
  }

  writer = xmlNewTextWriterMemory(buf, 0);
  if (writer == NULL) {
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error creating an XML writer."];
    return nil;
  }

  rc = xmlTextWriterStartDocument(writer, NULL, "utf-8", NULL);
  if (rc < 0) {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing XML start document."];
    return nil;
  }

  NS_DURING
  {
    [self writeXMLElement: writer];
  }
  NS_HANDLER
  {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [localException raise];
  }
  NS_ENDHANDLER

  rc = xmlTextWriterEndDocument(writer);
  if (rc < 0) {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing XML end document."];
    return nil;
  }

  xmlFreeTextWriter(writer);
  data = [NSData dataWithBytes: buf->content length: buf->use];
  xmlBufferFree(buf);
  return data;
}
@end /* implementation FULLNS0FlowStatistics */

/**
 * Internal, private interface for JAXB reading and writing.
 */
@interface FULLNS0FlowStatistics (JAXB) <JAXBReading, JAXBWriting, JAXBType, JAXBElement>

@end /*interface FULLNS0FlowStatistics (JAXB)*/

/**
 * Internal, private implementation for JAXB reading and writing.
 */
@implementation FULLNS0FlowStatistics (JAXB)

/**
 * Read an instance of FULLNS0FlowStatistics from an XML reader.
 *
 * @param reader The reader.
 * @return An instance of FULLNS0FlowStatistics defined by the XML reader.
 */
+ (id<JAXBType>) readXMLType: (xmlTextReaderPtr) reader
{
  FULLNS0FlowStatistics *_fULLNS0FlowStatistics = [[FULLNS0FlowStatistics alloc] init];
  NS_DURING
  {
    [_fULLNS0FlowStatistics initWithReader: reader];
  }
  NS_HANDLER
  {
    _fULLNS0FlowStatistics = nil;
    [localException raise];
  }
  NS_ENDHANDLER

  [_fULLNS0FlowStatistics autorelease];
  return _fULLNS0FlowStatistics;
}

/**
 * Initialize this instance of FULLNS0FlowStatistics according to
 * the XML being read from the reader.
 *
 * @param reader The reader.
 */
- (id) initWithReader: (xmlTextReaderPtr) reader
{
  return [super initWithReader: reader];
}

/**
 * Write the XML for this instance of FULLNS0FlowStatistics to the writer.
 * Note that since we're only writing the XML type,
 * No start/end element will be written.
 *
 * @param reader The reader.
 */
- (void) writeXMLType: (xmlTextWriterPtr) writer
{
  [super writeXMLType:writer];
}

/**
 * Reads a FULLNS0FlowStatistics from an XML reader. The element to be read is
 * "flowStatistics".
 *
 * @param reader The XML reader.
 * @return The FULLNS0FlowStatistics.
 */
+ (id<JAXBElement>) readXMLElement: (xmlTextReaderPtr) reader {
  int status;
  FULLNS0FlowStatistics *_flowStatistics = nil;

  if (xmlTextReaderNodeType(reader) != XML_READER_TYPE_ELEMENT) {
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
    if (status < 1) {
      [NSException raise: @"XMLReadError"
                   format: @"Error advancing the reader to start element flowStatistics."];
    }
  }

  if (xmlStrcmp(BAD_CAST "flowStatistics", xmlTextReaderConstLocalName(reader)) == 0
      && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read root element {}flowStatistics.");
#endif
    _flowStatistics = (FULLNS0FlowStatistics *)[FULLNS0FlowStatistics readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Successfully read root element {}flowStatistics.");
#endif
  }
  else {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read FULLNS0FlowStatistics. Expected element flowStatistics. Current element: {}%s", xmlTextReaderConstLocalName(reader)];
    }
    else {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read FULLNS0FlowStatistics. Expected element flowStatistics. Current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader)];
    }
  }

  return _flowStatistics;
}

/**
 * Writes this FULLNS0FlowStatistics to XML under element name "flowStatistics".
 * The namespace declarations for the element will be written.
 *
 * @param writer The XML writer.
 * @param _flowStatistics The FlowStatistics to write.
 * @return 1 if successful, 0 otherwise.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer
{
  [self writeXMLElement: writer writeNamespaces: YES];
}

/**
 * Writes this FULLNS0FlowStatistics to an XML writer.
 *
 * @param writer The writer.
 * @param writeNs Whether to write the namespaces for this element to the xml writer.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer writeNamespaces: (BOOL) writeNs
{
  int rc = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "flowStatistics", NULL);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing start element {}flowStatistics. XML writer status: %i\n", rc];
  }

#if DEBUG_ENUNCIATE > 1
  NSLog(@"writing type {}flowStatistics for root element {}flowStatistics...");
#endif
  [self writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
  NSLog(@"successfully wrote type {}flowStatistics for root element {}flowStatistics...");
#endif
  rc = xmlTextWriterEndElement(writer);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing end element {}flowStatistics. XML writer status: %i\n", rc];
  }
}

//documentation inherited.
- (BOOL) readJAXBAttribute: (xmlTextReaderPtr) reader
{
  void *_child_accessor;

  if ([super readJAXBAttribute: reader]) {
    return YES;
  }

  return NO;
}

//documentation inherited.
- (BOOL) readJAXBValue: (xmlTextReaderPtr) reader
{
  return [super readJAXBValue: reader];
}

//documentation inherited.
- (BOOL) readJAXBChildElement: (xmlTextReaderPtr) reader
{
  id __child;
  void *_child_accessor;
  int status, depth;

  if ([super readJAXBChildElement: reader]) {
    return YES;
  }
  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "node", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}node of type {}node.");
#endif
    __child = [FULLNS0Node readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}node of type {}node.");
#endif

    [self setNode: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "flowStat", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}flowStat of type {}flowOnNode.");
#endif

    __child = [FULLNS0FlowOnNode readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}flowStat of type {}flowOnNode.");
#endif

    if ([self flowStat]) {
      [self setFlowStat: [[self flowStat] arrayByAddingObject: __child]];
    }
    else {
      [self setFlowStat: [NSArray arrayWithObject: __child]];
    }
    return YES;
  } //end "if choice"


  return NO;
}

//documentation inherited.
- (int) readUnknownJAXBChildElement: (xmlTextReaderPtr) reader
{
  return [super readUnknownJAXBChildElement: reader];
}

//documentation inherited.
- (void) readUnknownJAXBAttribute: (xmlTextReaderPtr) reader
{
  [super readUnknownJAXBAttribute: reader];
}

//documentation inherited.
- (void) writeJAXBAttributes: (xmlTextWriterPtr) writer
{
  int status;

  [super writeJAXBAttributes: writer];

}

//documentation inherited.
- (void) writeJAXBValue: (xmlTextWriterPtr) writer
{
  [super writeJAXBValue: writer];
}

/**
 * Method for writing the child elements.
 *
 * @param writer The writer.
 */
- (void) writeJAXBChildElements: (xmlTextWriterPtr) writer
{
  int status;
  id __item;
  NSEnumerator *__enumerator;

  [super writeJAXBChildElements: writer];

  if ([self node]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "node", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}node."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}node...");
#endif
    [[self node] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}node...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}node."];
    }
  }
  if ([self flowStat]) {
    __enumerator = [[self flowStat] objectEnumerator];

    while ( (__item = [__enumerator nextObject]) ) {
      status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "flowStat", NULL);
      if (status < 0) {
        [NSException raise: @"XMLWriteError"
                     format: @"Error writing start child element {}flowStat."];
      }

#if DEBUG_ENUNCIATE > 1
      NSLog(@"writing element {}flowStat...");
#endif
      [__item writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
      NSLog(@"successfully wrote element {}flowStat...");
#endif

      status = xmlTextWriterEndElement(writer);
      if (status < 0) {
        [NSException raise: @"XMLWriteError"
                     format: @"Error writing end child element {}flowStat."];
      }
    } //end item iterator.
  }
}
@end /* implementation FULLNS0FlowStatistics (JAXB) */

#endif /* DEF_FULLNS0FlowStatistics_M */
#ifndef DEF_FULLNS0TableStatistics_M
#define DEF_FULLNS0TableStatistics_M

/**
 * (no documentation provided)
 */
@implementation FULLNS0TableStatistics

/**
 * (no documentation provided)
 */
- (FULLNS0Node *) node
{
  return _node;
}

/**
 * (no documentation provided)
 */
- (void) setNode: (FULLNS0Node *) newNode
{
  [newNode retain];
  [_node release];
  _node = newNode;
}

/**
 * (no documentation provided)
 */
- (NSArray *) tableStats
{
  return _tableStats;
}

/**
 * (no documentation provided)
 */
- (void) setTableStats: (NSArray *) newTableStats
{
  [newTableStats retain];
  [_tableStats release];
  _tableStats = newTableStats;
}

- (void) dealloc
{
  [self setNode: nil];
  [self setTableStats: nil];
  [super dealloc];
}

//documentation inherited.
+ (id<EnunciateXML>) readFromXML: (NSData *) xml
{
  FULLNS0TableStatistics *_fULLNS0TableStatistics;
  xmlTextReaderPtr reader = xmlReaderForMemory([xml bytes], [xml length], NULL, NULL, 0);
  if (reader == NULL) {
    [NSException raise: @"XMLReadError"
                 format: @"Error instantiating an XML reader."];
    return nil;
  }

  _fULLNS0TableStatistics = (FULLNS0TableStatistics *) [FULLNS0TableStatistics readXMLElement: reader];
  xmlFreeTextReader(reader); //free the reader
  return _fULLNS0TableStatistics;
}

//documentation inherited.
- (NSData *) writeToXML
{
  xmlBufferPtr buf;
  xmlTextWriterPtr writer;
  int rc;
  NSData *data;

  buf = xmlBufferCreate();
  if (buf == NULL) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error creating an XML buffer."];
    return nil;
  }

  writer = xmlNewTextWriterMemory(buf, 0);
  if (writer == NULL) {
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error creating an XML writer."];
    return nil;
  }

  rc = xmlTextWriterStartDocument(writer, NULL, "utf-8", NULL);
  if (rc < 0) {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing XML start document."];
    return nil;
  }

  NS_DURING
  {
    [self writeXMLElement: writer];
  }
  NS_HANDLER
  {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [localException raise];
  }
  NS_ENDHANDLER

  rc = xmlTextWriterEndDocument(writer);
  if (rc < 0) {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing XML end document."];
    return nil;
  }

  xmlFreeTextWriter(writer);
  data = [NSData dataWithBytes: buf->content length: buf->use];
  xmlBufferFree(buf);
  return data;
}
@end /* implementation FULLNS0TableStatistics */

/**
 * Internal, private interface for JAXB reading and writing.
 */
@interface FULLNS0TableStatistics (JAXB) <JAXBReading, JAXBWriting, JAXBType, JAXBElement>

@end /*interface FULLNS0TableStatistics (JAXB)*/

/**
 * Internal, private implementation for JAXB reading and writing.
 */
@implementation FULLNS0TableStatistics (JAXB)

/**
 * Read an instance of FULLNS0TableStatistics from an XML reader.
 *
 * @param reader The reader.
 * @return An instance of FULLNS0TableStatistics defined by the XML reader.
 */
+ (id<JAXBType>) readXMLType: (xmlTextReaderPtr) reader
{
  FULLNS0TableStatistics *_fULLNS0TableStatistics = [[FULLNS0TableStatistics alloc] init];
  NS_DURING
  {
    [_fULLNS0TableStatistics initWithReader: reader];
  }
  NS_HANDLER
  {
    _fULLNS0TableStatistics = nil;
    [localException raise];
  }
  NS_ENDHANDLER

  [_fULLNS0TableStatistics autorelease];
  return _fULLNS0TableStatistics;
}

/**
 * Initialize this instance of FULLNS0TableStatistics according to
 * the XML being read from the reader.
 *
 * @param reader The reader.
 */
- (id) initWithReader: (xmlTextReaderPtr) reader
{
  return [super initWithReader: reader];
}

/**
 * Write the XML for this instance of FULLNS0TableStatistics to the writer.
 * Note that since we're only writing the XML type,
 * No start/end element will be written.
 *
 * @param reader The reader.
 */
- (void) writeXMLType: (xmlTextWriterPtr) writer
{
  [super writeXMLType:writer];
}

/**
 * Reads a FULLNS0TableStatistics from an XML reader. The element to be read is
 * "tableStatistics".
 *
 * @param reader The XML reader.
 * @return The FULLNS0TableStatistics.
 */
+ (id<JAXBElement>) readXMLElement: (xmlTextReaderPtr) reader {
  int status;
  FULLNS0TableStatistics *_tableStatistics = nil;

  if (xmlTextReaderNodeType(reader) != XML_READER_TYPE_ELEMENT) {
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
    if (status < 1) {
      [NSException raise: @"XMLReadError"
                   format: @"Error advancing the reader to start element tableStatistics."];
    }
  }

  if (xmlStrcmp(BAD_CAST "tableStatistics", xmlTextReaderConstLocalName(reader)) == 0
      && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read root element {}tableStatistics.");
#endif
    _tableStatistics = (FULLNS0TableStatistics *)[FULLNS0TableStatistics readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Successfully read root element {}tableStatistics.");
#endif
  }
  else {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read FULLNS0TableStatistics. Expected element tableStatistics. Current element: {}%s", xmlTextReaderConstLocalName(reader)];
    }
    else {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read FULLNS0TableStatistics. Expected element tableStatistics. Current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader)];
    }
  }

  return _tableStatistics;
}

/**
 * Writes this FULLNS0TableStatistics to XML under element name "tableStatistics".
 * The namespace declarations for the element will be written.
 *
 * @param writer The XML writer.
 * @param _tableStatistics The TableStatistics to write.
 * @return 1 if successful, 0 otherwise.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer
{
  [self writeXMLElement: writer writeNamespaces: YES];
}

/**
 * Writes this FULLNS0TableStatistics to an XML writer.
 *
 * @param writer The writer.
 * @param writeNs Whether to write the namespaces for this element to the xml writer.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer writeNamespaces: (BOOL) writeNs
{
  int rc = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "tableStatistics", NULL);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing start element {}tableStatistics. XML writer status: %i\n", rc];
  }

#if DEBUG_ENUNCIATE > 1
  NSLog(@"writing type {}tableStatistics for root element {}tableStatistics...");
#endif
  [self writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
  NSLog(@"successfully wrote type {}tableStatistics for root element {}tableStatistics...");
#endif
  rc = xmlTextWriterEndElement(writer);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing end element {}tableStatistics. XML writer status: %i\n", rc];
  }
}

//documentation inherited.
- (BOOL) readJAXBAttribute: (xmlTextReaderPtr) reader
{
  void *_child_accessor;

  if ([super readJAXBAttribute: reader]) {
    return YES;
  }

  return NO;
}

//documentation inherited.
- (BOOL) readJAXBValue: (xmlTextReaderPtr) reader
{
  return [super readJAXBValue: reader];
}

//documentation inherited.
- (BOOL) readJAXBChildElement: (xmlTextReaderPtr) reader
{
  id __child;
  void *_child_accessor;
  int status, depth;

  if ([super readJAXBChildElement: reader]) {
    return YES;
  }
  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "node", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}node of type {}node.");
#endif
    __child = [FULLNS0Node readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}node of type {}node.");
#endif

    [self setNode: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "tableStat", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}tableStat of type {}nodeTableStatistics.");
#endif

    __child = [FULLNS0NodeTableStatistics readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}tableStat of type {}nodeTableStatistics.");
#endif

    if ([self tableStats]) {
      [self setTableStats: [[self tableStats] arrayByAddingObject: __child]];
    }
    else {
      [self setTableStats: [NSArray arrayWithObject: __child]];
    }
    return YES;
  } //end "if choice"


  return NO;
}

//documentation inherited.
- (int) readUnknownJAXBChildElement: (xmlTextReaderPtr) reader
{
  return [super readUnknownJAXBChildElement: reader];
}

//documentation inherited.
- (void) readUnknownJAXBAttribute: (xmlTextReaderPtr) reader
{
  [super readUnknownJAXBAttribute: reader];
}

//documentation inherited.
- (void) writeJAXBAttributes: (xmlTextWriterPtr) writer
{
  int status;

  [super writeJAXBAttributes: writer];

}

//documentation inherited.
- (void) writeJAXBValue: (xmlTextWriterPtr) writer
{
  [super writeJAXBValue: writer];
}

/**
 * Method for writing the child elements.
 *
 * @param writer The writer.
 */
- (void) writeJAXBChildElements: (xmlTextWriterPtr) writer
{
  int status;
  id __item;
  NSEnumerator *__enumerator;

  [super writeJAXBChildElements: writer];

  if ([self node]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "node", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}node."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}node...");
#endif
    [[self node] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}node...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}node."];
    }
  }
  if ([self tableStats]) {
    __enumerator = [[self tableStats] objectEnumerator];

    while ( (__item = [__enumerator nextObject]) ) {
      status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "tableStat", NULL);
      if (status < 0) {
        [NSException raise: @"XMLWriteError"
                     format: @"Error writing start child element {}tableStat."];
      }

#if DEBUG_ENUNCIATE > 1
      NSLog(@"writing element {}tableStat...");
#endif
      [__item writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
      NSLog(@"successfully wrote element {}tableStat...");
#endif

      status = xmlTextWriterEndElement(writer);
      if (status < 0) {
        [NSException raise: @"XMLWriteError"
                     format: @"Error writing end child element {}tableStat."];
      }
    } //end item iterator.
  }
}
@end /* implementation FULLNS0TableStatistics (JAXB) */

#endif /* DEF_FULLNS0TableStatistics_M */
#ifndef DEF_FULLNS0PortStatistics_M
#define DEF_FULLNS0PortStatistics_M

/**
 * (no documentation provided)
 */
@implementation FULLNS0PortStatistics

/**
 * (no documentation provided)
 */
- (FULLNS0Node *) node
{
  return _node;
}

/**
 * (no documentation provided)
 */
- (void) setNode: (FULLNS0Node *) newNode
{
  [newNode retain];
  [_node release];
  _node = newNode;
}

/**
 * (no documentation provided)
 */
- (NSArray *) portStats
{
  return _portStats;
}

/**
 * (no documentation provided)
 */
- (void) setPortStats: (NSArray *) newPortStats
{
  [newPortStats retain];
  [_portStats release];
  _portStats = newPortStats;
}

- (void) dealloc
{
  [self setNode: nil];
  [self setPortStats: nil];
  [super dealloc];
}

//documentation inherited.
+ (id<EnunciateXML>) readFromXML: (NSData *) xml
{
  FULLNS0PortStatistics *_fULLNS0PortStatistics;
  xmlTextReaderPtr reader = xmlReaderForMemory([xml bytes], [xml length], NULL, NULL, 0);
  if (reader == NULL) {
    [NSException raise: @"XMLReadError"
                 format: @"Error instantiating an XML reader."];
    return nil;
  }

  _fULLNS0PortStatistics = (FULLNS0PortStatistics *) [FULLNS0PortStatistics readXMLElement: reader];
  xmlFreeTextReader(reader); //free the reader
  return _fULLNS0PortStatistics;
}

//documentation inherited.
- (NSData *) writeToXML
{
  xmlBufferPtr buf;
  xmlTextWriterPtr writer;
  int rc;
  NSData *data;

  buf = xmlBufferCreate();
  if (buf == NULL) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error creating an XML buffer."];
    return nil;
  }

  writer = xmlNewTextWriterMemory(buf, 0);
  if (writer == NULL) {
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error creating an XML writer."];
    return nil;
  }

  rc = xmlTextWriterStartDocument(writer, NULL, "utf-8", NULL);
  if (rc < 0) {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing XML start document."];
    return nil;
  }

  NS_DURING
  {
    [self writeXMLElement: writer];
  }
  NS_HANDLER
  {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [localException raise];
  }
  NS_ENDHANDLER

  rc = xmlTextWriterEndDocument(writer);
  if (rc < 0) {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing XML end document."];
    return nil;
  }

  xmlFreeTextWriter(writer);
  data = [NSData dataWithBytes: buf->content length: buf->use];
  xmlBufferFree(buf);
  return data;
}
@end /* implementation FULLNS0PortStatistics */

/**
 * Internal, private interface for JAXB reading and writing.
 */
@interface FULLNS0PortStatistics (JAXB) <JAXBReading, JAXBWriting, JAXBType, JAXBElement>

@end /*interface FULLNS0PortStatistics (JAXB)*/

/**
 * Internal, private implementation for JAXB reading and writing.
 */
@implementation FULLNS0PortStatistics (JAXB)

/**
 * Read an instance of FULLNS0PortStatistics from an XML reader.
 *
 * @param reader The reader.
 * @return An instance of FULLNS0PortStatistics defined by the XML reader.
 */
+ (id<JAXBType>) readXMLType: (xmlTextReaderPtr) reader
{
  FULLNS0PortStatistics *_fULLNS0PortStatistics = [[FULLNS0PortStatistics alloc] init];
  NS_DURING
  {
    [_fULLNS0PortStatistics initWithReader: reader];
  }
  NS_HANDLER
  {
    _fULLNS0PortStatistics = nil;
    [localException raise];
  }
  NS_ENDHANDLER

  [_fULLNS0PortStatistics autorelease];
  return _fULLNS0PortStatistics;
}

/**
 * Initialize this instance of FULLNS0PortStatistics according to
 * the XML being read from the reader.
 *
 * @param reader The reader.
 */
- (id) initWithReader: (xmlTextReaderPtr) reader
{
  return [super initWithReader: reader];
}

/**
 * Write the XML for this instance of FULLNS0PortStatistics to the writer.
 * Note that since we're only writing the XML type,
 * No start/end element will be written.
 *
 * @param reader The reader.
 */
- (void) writeXMLType: (xmlTextWriterPtr) writer
{
  [super writeXMLType:writer];
}

/**
 * Reads a FULLNS0PortStatistics from an XML reader. The element to be read is
 * "portStatistics".
 *
 * @param reader The XML reader.
 * @return The FULLNS0PortStatistics.
 */
+ (id<JAXBElement>) readXMLElement: (xmlTextReaderPtr) reader {
  int status;
  FULLNS0PortStatistics *_portStatistics = nil;

  if (xmlTextReaderNodeType(reader) != XML_READER_TYPE_ELEMENT) {
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
    if (status < 1) {
      [NSException raise: @"XMLReadError"
                   format: @"Error advancing the reader to start element portStatistics."];
    }
  }

  if (xmlStrcmp(BAD_CAST "portStatistics", xmlTextReaderConstLocalName(reader)) == 0
      && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read root element {}portStatistics.");
#endif
    _portStatistics = (FULLNS0PortStatistics *)[FULLNS0PortStatistics readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Successfully read root element {}portStatistics.");
#endif
  }
  else {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read FULLNS0PortStatistics. Expected element portStatistics. Current element: {}%s", xmlTextReaderConstLocalName(reader)];
    }
    else {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read FULLNS0PortStatistics. Expected element portStatistics. Current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader)];
    }
  }

  return _portStatistics;
}

/**
 * Writes this FULLNS0PortStatistics to XML under element name "portStatistics".
 * The namespace declarations for the element will be written.
 *
 * @param writer The XML writer.
 * @param _portStatistics The PortStatistics to write.
 * @return 1 if successful, 0 otherwise.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer
{
  [self writeXMLElement: writer writeNamespaces: YES];
}

/**
 * Writes this FULLNS0PortStatistics to an XML writer.
 *
 * @param writer The writer.
 * @param writeNs Whether to write the namespaces for this element to the xml writer.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer writeNamespaces: (BOOL) writeNs
{
  int rc = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "portStatistics", NULL);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing start element {}portStatistics. XML writer status: %i\n", rc];
  }

#if DEBUG_ENUNCIATE > 1
  NSLog(@"writing type {}portStatistics for root element {}portStatistics...");
#endif
  [self writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
  NSLog(@"successfully wrote type {}portStatistics for root element {}portStatistics...");
#endif
  rc = xmlTextWriterEndElement(writer);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing end element {}portStatistics. XML writer status: %i\n", rc];
  }
}

//documentation inherited.
- (BOOL) readJAXBAttribute: (xmlTextReaderPtr) reader
{
  void *_child_accessor;

  if ([super readJAXBAttribute: reader]) {
    return YES;
  }

  return NO;
}

//documentation inherited.
- (BOOL) readJAXBValue: (xmlTextReaderPtr) reader
{
  return [super readJAXBValue: reader];
}

//documentation inherited.
- (BOOL) readJAXBChildElement: (xmlTextReaderPtr) reader
{
  id __child;
  void *_child_accessor;
  int status, depth;

  if ([super readJAXBChildElement: reader]) {
    return YES;
  }
  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "node", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}node of type {}node.");
#endif
    __child = [FULLNS0Node readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}node of type {}node.");
#endif

    [self setNode: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "portStat", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}portStat of type {}nodeConnectorStatistics.");
#endif

    __child = [FULLNS0NodeConnectorStatistics readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}portStat of type {}nodeConnectorStatistics.");
#endif

    if ([self portStats]) {
      [self setPortStats: [[self portStats] arrayByAddingObject: __child]];
    }
    else {
      [self setPortStats: [NSArray arrayWithObject: __child]];
    }
    return YES;
  } //end "if choice"


  return NO;
}

//documentation inherited.
- (int) readUnknownJAXBChildElement: (xmlTextReaderPtr) reader
{
  return [super readUnknownJAXBChildElement: reader];
}

//documentation inherited.
- (void) readUnknownJAXBAttribute: (xmlTextReaderPtr) reader
{
  [super readUnknownJAXBAttribute: reader];
}

//documentation inherited.
- (void) writeJAXBAttributes: (xmlTextWriterPtr) writer
{
  int status;

  [super writeJAXBAttributes: writer];

}

//documentation inherited.
- (void) writeJAXBValue: (xmlTextWriterPtr) writer
{
  [super writeJAXBValue: writer];
}

/**
 * Method for writing the child elements.
 *
 * @param writer The writer.
 */
- (void) writeJAXBChildElements: (xmlTextWriterPtr) writer
{
  int status;
  id __item;
  NSEnumerator *__enumerator;

  [super writeJAXBChildElements: writer];

  if ([self node]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "node", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}node."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}node...");
#endif
    [[self node] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}node...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}node."];
    }
  }
  if ([self portStats]) {
    __enumerator = [[self portStats] objectEnumerator];

    while ( (__item = [__enumerator nextObject]) ) {
      status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "portStat", NULL);
      if (status < 0) {
        [NSException raise: @"XMLWriteError"
                     format: @"Error writing start child element {}portStat."];
      }

#if DEBUG_ENUNCIATE > 1
      NSLog(@"writing element {}portStat...");
#endif
      [__item writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
      NSLog(@"successfully wrote element {}portStat...");
#endif

      status = xmlTextWriterEndElement(writer);
      if (status < 0) {
        [NSException raise: @"XMLWriteError"
                     format: @"Error writing end child element {}portStat."];
      }
    } //end item iterator.
  }
}
@end /* implementation FULLNS0PortStatistics (JAXB) */

#endif /* DEF_FULLNS0PortStatistics_M */
#ifndef DEF_FULLNS0AllTableStatistics_M
#define DEF_FULLNS0AllTableStatistics_M

/**
 * (no documentation provided)
 */
@implementation FULLNS0AllTableStatistics

/**
 * (no documentation provided)
 */
- (NSArray *) tableStatistics
{
  return _tableStatistics;
}

/**
 * (no documentation provided)
 */
- (void) setTableStatistics: (NSArray *) newTableStatistics
{
  [newTableStatistics retain];
  [_tableStatistics release];
  _tableStatistics = newTableStatistics;
}

- (void) dealloc
{
  [self setTableStatistics: nil];
  [super dealloc];
}

//documentation inherited.
+ (id<EnunciateXML>) readFromXML: (NSData *) xml
{
  FULLNS0AllTableStatistics *_fULLNS0AllTableStatistics;
  xmlTextReaderPtr reader = xmlReaderForMemory([xml bytes], [xml length], NULL, NULL, 0);
  if (reader == NULL) {
    [NSException raise: @"XMLReadError"
                 format: @"Error instantiating an XML reader."];
    return nil;
  }

  _fULLNS0AllTableStatistics = (FULLNS0AllTableStatistics *) [FULLNS0AllTableStatistics readXMLElement: reader];
  xmlFreeTextReader(reader); //free the reader
  return _fULLNS0AllTableStatistics;
}

//documentation inherited.
- (NSData *) writeToXML
{
  xmlBufferPtr buf;
  xmlTextWriterPtr writer;
  int rc;
  NSData *data;

  buf = xmlBufferCreate();
  if (buf == NULL) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error creating an XML buffer."];
    return nil;
  }

  writer = xmlNewTextWriterMemory(buf, 0);
  if (writer == NULL) {
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error creating an XML writer."];
    return nil;
  }

  rc = xmlTextWriterStartDocument(writer, NULL, "utf-8", NULL);
  if (rc < 0) {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing XML start document."];
    return nil;
  }

  NS_DURING
  {
    [self writeXMLElement: writer];
  }
  NS_HANDLER
  {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [localException raise];
  }
  NS_ENDHANDLER

  rc = xmlTextWriterEndDocument(writer);
  if (rc < 0) {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing XML end document."];
    return nil;
  }

  xmlFreeTextWriter(writer);
  data = [NSData dataWithBytes: buf->content length: buf->use];
  xmlBufferFree(buf);
  return data;
}
@end /* implementation FULLNS0AllTableStatistics */

/**
 * Internal, private interface for JAXB reading and writing.
 */
@interface FULLNS0AllTableStatistics (JAXB) <JAXBReading, JAXBWriting, JAXBType, JAXBElement>

@end /*interface FULLNS0AllTableStatistics (JAXB)*/

/**
 * Internal, private implementation for JAXB reading and writing.
 */
@implementation FULLNS0AllTableStatistics (JAXB)

/**
 * Read an instance of FULLNS0AllTableStatistics from an XML reader.
 *
 * @param reader The reader.
 * @return An instance of FULLNS0AllTableStatistics defined by the XML reader.
 */
+ (id<JAXBType>) readXMLType: (xmlTextReaderPtr) reader
{
  FULLNS0AllTableStatistics *_fULLNS0AllTableStatistics = [[FULLNS0AllTableStatistics alloc] init];
  NS_DURING
  {
    [_fULLNS0AllTableStatistics initWithReader: reader];
  }
  NS_HANDLER
  {
    _fULLNS0AllTableStatistics = nil;
    [localException raise];
  }
  NS_ENDHANDLER

  [_fULLNS0AllTableStatistics autorelease];
  return _fULLNS0AllTableStatistics;
}

/**
 * Initialize this instance of FULLNS0AllTableStatistics according to
 * the XML being read from the reader.
 *
 * @param reader The reader.
 */
- (id) initWithReader: (xmlTextReaderPtr) reader
{
  return [super initWithReader: reader];
}

/**
 * Write the XML for this instance of FULLNS0AllTableStatistics to the writer.
 * Note that since we're only writing the XML type,
 * No start/end element will be written.
 *
 * @param reader The reader.
 */
- (void) writeXMLType: (xmlTextWriterPtr) writer
{
  [super writeXMLType:writer];
}

/**
 * Reads a FULLNS0AllTableStatistics from an XML reader. The element to be read is
 * "allTableStatistics".
 *
 * @param reader The XML reader.
 * @return The FULLNS0AllTableStatistics.
 */
+ (id<JAXBElement>) readXMLElement: (xmlTextReaderPtr) reader {
  int status;
  FULLNS0AllTableStatistics *_allTableStatistics = nil;

  if (xmlTextReaderNodeType(reader) != XML_READER_TYPE_ELEMENT) {
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
    if (status < 1) {
      [NSException raise: @"XMLReadError"
                   format: @"Error advancing the reader to start element allTableStatistics."];
    }
  }

  if (xmlStrcmp(BAD_CAST "allTableStatistics", xmlTextReaderConstLocalName(reader)) == 0
      && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read root element {}allTableStatistics.");
#endif
    _allTableStatistics = (FULLNS0AllTableStatistics *)[FULLNS0AllTableStatistics readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Successfully read root element {}allTableStatistics.");
#endif
  }
  else {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read FULLNS0AllTableStatistics. Expected element allTableStatistics. Current element: {}%s", xmlTextReaderConstLocalName(reader)];
    }
    else {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read FULLNS0AllTableStatistics. Expected element allTableStatistics. Current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader)];
    }
  }

  return _allTableStatistics;
}

/**
 * Writes this FULLNS0AllTableStatistics to XML under element name "allTableStatistics".
 * The namespace declarations for the element will be written.
 *
 * @param writer The XML writer.
 * @param _allTableStatistics The AllTableStatistics to write.
 * @return 1 if successful, 0 otherwise.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer
{
  [self writeXMLElement: writer writeNamespaces: YES];
}

/**
 * Writes this FULLNS0AllTableStatistics to an XML writer.
 *
 * @param writer The writer.
 * @param writeNs Whether to write the namespaces for this element to the xml writer.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer writeNamespaces: (BOOL) writeNs
{
  int rc = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "allTableStatistics", NULL);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing start element {}allTableStatistics. XML writer status: %i\n", rc];
  }

#if DEBUG_ENUNCIATE > 1
  NSLog(@"writing type {}allTableStatistics for root element {}allTableStatistics...");
#endif
  [self writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
  NSLog(@"successfully wrote type {}allTableStatistics for root element {}allTableStatistics...");
#endif
  rc = xmlTextWriterEndElement(writer);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing end element {}allTableStatistics. XML writer status: %i\n", rc];
  }
}

//documentation inherited.
- (BOOL) readJAXBAttribute: (xmlTextReaderPtr) reader
{
  void *_child_accessor;

  if ([super readJAXBAttribute: reader]) {
    return YES;
  }

  return NO;
}

//documentation inherited.
- (BOOL) readJAXBValue: (xmlTextReaderPtr) reader
{
  return [super readJAXBValue: reader];
}

//documentation inherited.
- (BOOL) readJAXBChildElement: (xmlTextReaderPtr) reader
{
  id __child;
  void *_child_accessor;
  int status, depth;

  if ([super readJAXBChildElement: reader]) {
    return YES;
  }
  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "tableStatistics", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}tableStatistics of type {}tableStatistics.");
#endif

    __child = [FULLNS0TableStatistics readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}tableStatistics of type {}tableStatistics.");
#endif

    if ([self tableStatistics]) {
      [self setTableStatistics: [[self tableStatistics] arrayByAddingObject: __child]];
    }
    else {
      [self setTableStatistics: [NSArray arrayWithObject: __child]];
    }
    return YES;
  } //end "if choice"


  return NO;
}

//documentation inherited.
- (int) readUnknownJAXBChildElement: (xmlTextReaderPtr) reader
{
  return [super readUnknownJAXBChildElement: reader];
}

//documentation inherited.
- (void) readUnknownJAXBAttribute: (xmlTextReaderPtr) reader
{
  [super readUnknownJAXBAttribute: reader];
}

//documentation inherited.
- (void) writeJAXBAttributes: (xmlTextWriterPtr) writer
{
  int status;

  [super writeJAXBAttributes: writer];

}

//documentation inherited.
- (void) writeJAXBValue: (xmlTextWriterPtr) writer
{
  [super writeJAXBValue: writer];
}

/**
 * Method for writing the child elements.
 *
 * @param writer The writer.
 */
- (void) writeJAXBChildElements: (xmlTextWriterPtr) writer
{
  int status;
  id __item;
  NSEnumerator *__enumerator;

  [super writeJAXBChildElements: writer];

  if ([self tableStatistics]) {
    __enumerator = [[self tableStatistics] objectEnumerator];

    while ( (__item = [__enumerator nextObject]) ) {
      status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "tableStatistics", NULL);
      if (status < 0) {
        [NSException raise: @"XMLWriteError"
                     format: @"Error writing start child element {}tableStatistics."];
      }

#if DEBUG_ENUNCIATE > 1
      NSLog(@"writing element {}tableStatistics...");
#endif
      [__item writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
      NSLog(@"successfully wrote element {}tableStatistics...");
#endif

      status = xmlTextWriterEndElement(writer);
      if (status < 0) {
        [NSException raise: @"XMLWriteError"
                     format: @"Error writing end child element {}tableStatistics."];
      }
    } //end item iterator.
  }
}
@end /* implementation FULLNS0AllTableStatistics (JAXB) */

#endif /* DEF_FULLNS0AllTableStatistics_M */
#ifndef DEF_FULLNS0AllPortStatistics_M
#define DEF_FULLNS0AllPortStatistics_M

/**
 * (no documentation provided)
 */
@implementation FULLNS0AllPortStatistics

/**
 * (no documentation provided)
 */
- (NSArray *) portStatistics
{
  return _portStatistics;
}

/**
 * (no documentation provided)
 */
- (void) setPortStatistics: (NSArray *) newPortStatistics
{
  [newPortStatistics retain];
  [_portStatistics release];
  _portStatistics = newPortStatistics;
}

- (void) dealloc
{
  [self setPortStatistics: nil];
  [super dealloc];
}

//documentation inherited.
+ (id<EnunciateXML>) readFromXML: (NSData *) xml
{
  FULLNS0AllPortStatistics *_fULLNS0AllPortStatistics;
  xmlTextReaderPtr reader = xmlReaderForMemory([xml bytes], [xml length], NULL, NULL, 0);
  if (reader == NULL) {
    [NSException raise: @"XMLReadError"
                 format: @"Error instantiating an XML reader."];
    return nil;
  }

  _fULLNS0AllPortStatistics = (FULLNS0AllPortStatistics *) [FULLNS0AllPortStatistics readXMLElement: reader];
  xmlFreeTextReader(reader); //free the reader
  return _fULLNS0AllPortStatistics;
}

//documentation inherited.
- (NSData *) writeToXML
{
  xmlBufferPtr buf;
  xmlTextWriterPtr writer;
  int rc;
  NSData *data;

  buf = xmlBufferCreate();
  if (buf == NULL) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error creating an XML buffer."];
    return nil;
  }

  writer = xmlNewTextWriterMemory(buf, 0);
  if (writer == NULL) {
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error creating an XML writer."];
    return nil;
  }

  rc = xmlTextWriterStartDocument(writer, NULL, "utf-8", NULL);
  if (rc < 0) {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing XML start document."];
    return nil;
  }

  NS_DURING
  {
    [self writeXMLElement: writer];
  }
  NS_HANDLER
  {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [localException raise];
  }
  NS_ENDHANDLER

  rc = xmlTextWriterEndDocument(writer);
  if (rc < 0) {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing XML end document."];
    return nil;
  }

  xmlFreeTextWriter(writer);
  data = [NSData dataWithBytes: buf->content length: buf->use];
  xmlBufferFree(buf);
  return data;
}
@end /* implementation FULLNS0AllPortStatistics */

/**
 * Internal, private interface for JAXB reading and writing.
 */
@interface FULLNS0AllPortStatistics (JAXB) <JAXBReading, JAXBWriting, JAXBType, JAXBElement>

@end /*interface FULLNS0AllPortStatistics (JAXB)*/

/**
 * Internal, private implementation for JAXB reading and writing.
 */
@implementation FULLNS0AllPortStatistics (JAXB)

/**
 * Read an instance of FULLNS0AllPortStatistics from an XML reader.
 *
 * @param reader The reader.
 * @return An instance of FULLNS0AllPortStatistics defined by the XML reader.
 */
+ (id<JAXBType>) readXMLType: (xmlTextReaderPtr) reader
{
  FULLNS0AllPortStatistics *_fULLNS0AllPortStatistics = [[FULLNS0AllPortStatistics alloc] init];
  NS_DURING
  {
    [_fULLNS0AllPortStatistics initWithReader: reader];
  }
  NS_HANDLER
  {
    _fULLNS0AllPortStatistics = nil;
    [localException raise];
  }
  NS_ENDHANDLER

  [_fULLNS0AllPortStatistics autorelease];
  return _fULLNS0AllPortStatistics;
}

/**
 * Initialize this instance of FULLNS0AllPortStatistics according to
 * the XML being read from the reader.
 *
 * @param reader The reader.
 */
- (id) initWithReader: (xmlTextReaderPtr) reader
{
  return [super initWithReader: reader];
}

/**
 * Write the XML for this instance of FULLNS0AllPortStatistics to the writer.
 * Note that since we're only writing the XML type,
 * No start/end element will be written.
 *
 * @param reader The reader.
 */
- (void) writeXMLType: (xmlTextWriterPtr) writer
{
  [super writeXMLType:writer];
}

/**
 * Reads a FULLNS0AllPortStatistics from an XML reader. The element to be read is
 * "allPortStatistics".
 *
 * @param reader The XML reader.
 * @return The FULLNS0AllPortStatistics.
 */
+ (id<JAXBElement>) readXMLElement: (xmlTextReaderPtr) reader {
  int status;
  FULLNS0AllPortStatistics *_allPortStatistics = nil;

  if (xmlTextReaderNodeType(reader) != XML_READER_TYPE_ELEMENT) {
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
    if (status < 1) {
      [NSException raise: @"XMLReadError"
                   format: @"Error advancing the reader to start element allPortStatistics."];
    }
  }

  if (xmlStrcmp(BAD_CAST "allPortStatistics", xmlTextReaderConstLocalName(reader)) == 0
      && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read root element {}allPortStatistics.");
#endif
    _allPortStatistics = (FULLNS0AllPortStatistics *)[FULLNS0AllPortStatistics readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Successfully read root element {}allPortStatistics.");
#endif
  }
  else {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read FULLNS0AllPortStatistics. Expected element allPortStatistics. Current element: {}%s", xmlTextReaderConstLocalName(reader)];
    }
    else {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read FULLNS0AllPortStatistics. Expected element allPortStatistics. Current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader)];
    }
  }

  return _allPortStatistics;
}

/**
 * Writes this FULLNS0AllPortStatistics to XML under element name "allPortStatistics".
 * The namespace declarations for the element will be written.
 *
 * @param writer The XML writer.
 * @param _allPortStatistics The AllPortStatistics to write.
 * @return 1 if successful, 0 otherwise.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer
{
  [self writeXMLElement: writer writeNamespaces: YES];
}

/**
 * Writes this FULLNS0AllPortStatistics to an XML writer.
 *
 * @param writer The writer.
 * @param writeNs Whether to write the namespaces for this element to the xml writer.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer writeNamespaces: (BOOL) writeNs
{
  int rc = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "allPortStatistics", NULL);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing start element {}allPortStatistics. XML writer status: %i\n", rc];
  }

#if DEBUG_ENUNCIATE > 1
  NSLog(@"writing type {}allPortStatistics for root element {}allPortStatistics...");
#endif
  [self writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
  NSLog(@"successfully wrote type {}allPortStatistics for root element {}allPortStatistics...");
#endif
  rc = xmlTextWriterEndElement(writer);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing end element {}allPortStatistics. XML writer status: %i\n", rc];
  }
}

//documentation inherited.
- (BOOL) readJAXBAttribute: (xmlTextReaderPtr) reader
{
  void *_child_accessor;

  if ([super readJAXBAttribute: reader]) {
    return YES;
  }

  return NO;
}

//documentation inherited.
- (BOOL) readJAXBValue: (xmlTextReaderPtr) reader
{
  return [super readJAXBValue: reader];
}

//documentation inherited.
- (BOOL) readJAXBChildElement: (xmlTextReaderPtr) reader
{
  id __child;
  void *_child_accessor;
  int status, depth;

  if ([super readJAXBChildElement: reader]) {
    return YES;
  }
  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "portStatistics", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}portStatistics of type {}portStatistics.");
#endif

    __child = [FULLNS0PortStatistics readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}portStatistics of type {}portStatistics.");
#endif

    if ([self portStatistics]) {
      [self setPortStatistics: [[self portStatistics] arrayByAddingObject: __child]];
    }
    else {
      [self setPortStatistics: [NSArray arrayWithObject: __child]];
    }
    return YES;
  } //end "if choice"


  return NO;
}

//documentation inherited.
- (int) readUnknownJAXBChildElement: (xmlTextReaderPtr) reader
{
  return [super readUnknownJAXBChildElement: reader];
}

//documentation inherited.
- (void) readUnknownJAXBAttribute: (xmlTextReaderPtr) reader
{
  [super readUnknownJAXBAttribute: reader];
}

//documentation inherited.
- (void) writeJAXBAttributes: (xmlTextWriterPtr) writer
{
  int status;

  [super writeJAXBAttributes: writer];

}

//documentation inherited.
- (void) writeJAXBValue: (xmlTextWriterPtr) writer
{
  [super writeJAXBValue: writer];
}

/**
 * Method for writing the child elements.
 *
 * @param writer The writer.
 */
- (void) writeJAXBChildElements: (xmlTextWriterPtr) writer
{
  int status;
  id __item;
  NSEnumerator *__enumerator;

  [super writeJAXBChildElements: writer];

  if ([self portStatistics]) {
    __enumerator = [[self portStatistics] objectEnumerator];

    while ( (__item = [__enumerator nextObject]) ) {
      status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "portStatistics", NULL);
      if (status < 0) {
        [NSException raise: @"XMLWriteError"
                     format: @"Error writing start child element {}portStatistics."];
      }

#if DEBUG_ENUNCIATE > 1
      NSLog(@"writing element {}portStatistics...");
#endif
      [__item writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
      NSLog(@"successfully wrote element {}portStatistics...");
#endif

      status = xmlTextWriterEndElement(writer);
      if (status < 0) {
        [NSException raise: @"XMLWriteError"
                     format: @"Error writing end child element {}portStatistics."];
      }
    } //end item iterator.
  }
}
@end /* implementation FULLNS0AllPortStatistics (JAXB) */

#endif /* DEF_FULLNS0AllPortStatistics_M */
#ifndef DEF_FULLNS0AllFlowStatistics_M
#define DEF_FULLNS0AllFlowStatistics_M

/**
 * (no documentation provided)
 */
@implementation FULLNS0AllFlowStatistics

/**
 * (no documentation provided)
 */
- (NSArray *) flowStatistics
{
  return _flowStatistics;
}

/**
 * (no documentation provided)
 */
- (void) setFlowStatistics: (NSArray *) newFlowStatistics
{
  [newFlowStatistics retain];
  [_flowStatistics release];
  _flowStatistics = newFlowStatistics;
}

- (void) dealloc
{
  [self setFlowStatistics: nil];
  [super dealloc];
}

//documentation inherited.
+ (id<EnunciateXML>) readFromXML: (NSData *) xml
{
  FULLNS0AllFlowStatistics *_fULLNS0AllFlowStatistics;
  xmlTextReaderPtr reader = xmlReaderForMemory([xml bytes], [xml length], NULL, NULL, 0);
  if (reader == NULL) {
    [NSException raise: @"XMLReadError"
                 format: @"Error instantiating an XML reader."];
    return nil;
  }

  _fULLNS0AllFlowStatistics = (FULLNS0AllFlowStatistics *) [FULLNS0AllFlowStatistics readXMLElement: reader];
  xmlFreeTextReader(reader); //free the reader
  return _fULLNS0AllFlowStatistics;
}

//documentation inherited.
- (NSData *) writeToXML
{
  xmlBufferPtr buf;
  xmlTextWriterPtr writer;
  int rc;
  NSData *data;

  buf = xmlBufferCreate();
  if (buf == NULL) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error creating an XML buffer."];
    return nil;
  }

  writer = xmlNewTextWriterMemory(buf, 0);
  if (writer == NULL) {
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error creating an XML writer."];
    return nil;
  }

  rc = xmlTextWriterStartDocument(writer, NULL, "utf-8", NULL);
  if (rc < 0) {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing XML start document."];
    return nil;
  }

  NS_DURING
  {
    [self writeXMLElement: writer];
  }
  NS_HANDLER
  {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [localException raise];
  }
  NS_ENDHANDLER

  rc = xmlTextWriterEndDocument(writer);
  if (rc < 0) {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing XML end document."];
    return nil;
  }

  xmlFreeTextWriter(writer);
  data = [NSData dataWithBytes: buf->content length: buf->use];
  xmlBufferFree(buf);
  return data;
}
@end /* implementation FULLNS0AllFlowStatistics */

/**
 * Internal, private interface for JAXB reading and writing.
 */
@interface FULLNS0AllFlowStatistics (JAXB) <JAXBReading, JAXBWriting, JAXBType, JAXBElement>

@end /*interface FULLNS0AllFlowStatistics (JAXB)*/

/**
 * Internal, private implementation for JAXB reading and writing.
 */
@implementation FULLNS0AllFlowStatistics (JAXB)

/**
 * Read an instance of FULLNS0AllFlowStatistics from an XML reader.
 *
 * @param reader The reader.
 * @return An instance of FULLNS0AllFlowStatistics defined by the XML reader.
 */
+ (id<JAXBType>) readXMLType: (xmlTextReaderPtr) reader
{
  FULLNS0AllFlowStatistics *_fULLNS0AllFlowStatistics = [[FULLNS0AllFlowStatistics alloc] init];
  NS_DURING
  {
    [_fULLNS0AllFlowStatistics initWithReader: reader];
  }
  NS_HANDLER
  {
    _fULLNS0AllFlowStatistics = nil;
    [localException raise];
  }
  NS_ENDHANDLER

  [_fULLNS0AllFlowStatistics autorelease];
  return _fULLNS0AllFlowStatistics;
}

/**
 * Initialize this instance of FULLNS0AllFlowStatistics according to
 * the XML being read from the reader.
 *
 * @param reader The reader.
 */
- (id) initWithReader: (xmlTextReaderPtr) reader
{
  return [super initWithReader: reader];
}

/**
 * Write the XML for this instance of FULLNS0AllFlowStatistics to the writer.
 * Note that since we're only writing the XML type,
 * No start/end element will be written.
 *
 * @param reader The reader.
 */
- (void) writeXMLType: (xmlTextWriterPtr) writer
{
  [super writeXMLType:writer];
}

/**
 * Reads a FULLNS0AllFlowStatistics from an XML reader. The element to be read is
 * "allFlowStatistics".
 *
 * @param reader The XML reader.
 * @return The FULLNS0AllFlowStatistics.
 */
+ (id<JAXBElement>) readXMLElement: (xmlTextReaderPtr) reader {
  int status;
  FULLNS0AllFlowStatistics *_allFlowStatistics = nil;

  if (xmlTextReaderNodeType(reader) != XML_READER_TYPE_ELEMENT) {
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
    if (status < 1) {
      [NSException raise: @"XMLReadError"
                   format: @"Error advancing the reader to start element allFlowStatistics."];
    }
  }

  if (xmlStrcmp(BAD_CAST "allFlowStatistics", xmlTextReaderConstLocalName(reader)) == 0
      && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read root element {}allFlowStatistics.");
#endif
    _allFlowStatistics = (FULLNS0AllFlowStatistics *)[FULLNS0AllFlowStatistics readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Successfully read root element {}allFlowStatistics.");
#endif
  }
  else {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read FULLNS0AllFlowStatistics. Expected element allFlowStatistics. Current element: {}%s", xmlTextReaderConstLocalName(reader)];
    }
    else {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read FULLNS0AllFlowStatistics. Expected element allFlowStatistics. Current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader)];
    }
  }

  return _allFlowStatistics;
}

/**
 * Writes this FULLNS0AllFlowStatistics to XML under element name "allFlowStatistics".
 * The namespace declarations for the element will be written.
 *
 * @param writer The XML writer.
 * @param _allFlowStatistics The AllFlowStatistics to write.
 * @return 1 if successful, 0 otherwise.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer
{
  [self writeXMLElement: writer writeNamespaces: YES];
}

/**
 * Writes this FULLNS0AllFlowStatistics to an XML writer.
 *
 * @param writer The writer.
 * @param writeNs Whether to write the namespaces for this element to the xml writer.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer writeNamespaces: (BOOL) writeNs
{
  int rc = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "allFlowStatistics", NULL);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing start element {}allFlowStatistics. XML writer status: %i\n", rc];
  }

#if DEBUG_ENUNCIATE > 1
  NSLog(@"writing type {}allFlowStatistics for root element {}allFlowStatistics...");
#endif
  [self writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
  NSLog(@"successfully wrote type {}allFlowStatistics for root element {}allFlowStatistics...");
#endif
  rc = xmlTextWriterEndElement(writer);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing end element {}allFlowStatistics. XML writer status: %i\n", rc];
  }
}

//documentation inherited.
- (BOOL) readJAXBAttribute: (xmlTextReaderPtr) reader
{
  void *_child_accessor;

  if ([super readJAXBAttribute: reader]) {
    return YES;
  }

  return NO;
}

//documentation inherited.
- (BOOL) readJAXBValue: (xmlTextReaderPtr) reader
{
  return [super readJAXBValue: reader];
}

//documentation inherited.
- (BOOL) readJAXBChildElement: (xmlTextReaderPtr) reader
{
  id __child;
  void *_child_accessor;
  int status, depth;

  if ([super readJAXBChildElement: reader]) {
    return YES;
  }
  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "flowStatistics", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}flowStatistics of type {}flowStatistics.");
#endif

    __child = [FULLNS0FlowStatistics readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}flowStatistics of type {}flowStatistics.");
#endif

    if ([self flowStatistics]) {
      [self setFlowStatistics: [[self flowStatistics] arrayByAddingObject: __child]];
    }
    else {
      [self setFlowStatistics: [NSArray arrayWithObject: __child]];
    }
    return YES;
  } //end "if choice"


  return NO;
}

//documentation inherited.
- (int) readUnknownJAXBChildElement: (xmlTextReaderPtr) reader
{
  return [super readUnknownJAXBChildElement: reader];
}

//documentation inherited.
- (void) readUnknownJAXBAttribute: (xmlTextReaderPtr) reader
{
  [super readUnknownJAXBAttribute: reader];
}

//documentation inherited.
- (void) writeJAXBAttributes: (xmlTextWriterPtr) writer
{
  int status;

  [super writeJAXBAttributes: writer];

}

//documentation inherited.
- (void) writeJAXBValue: (xmlTextWriterPtr) writer
{
  [super writeJAXBValue: writer];
}

/**
 * Method for writing the child elements.
 *
 * @param writer The writer.
 */
- (void) writeJAXBChildElements: (xmlTextWriterPtr) writer
{
  int status;
  id __item;
  NSEnumerator *__enumerator;

  [super writeJAXBChildElements: writer];

  if ([self flowStatistics]) {
    __enumerator = [[self flowStatistics] objectEnumerator];

    while ( (__item = [__enumerator nextObject]) ) {
      status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "flowStatistics", NULL);
      if (status < 0) {
        [NSException raise: @"XMLWriteError"
                     format: @"Error writing start child element {}flowStatistics."];
      }

#if DEBUG_ENUNCIATE > 1
      NSLog(@"writing element {}flowStatistics...");
#endif
      [__item writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
      NSLog(@"successfully wrote element {}flowStatistics...");
#endif

      status = xmlTextWriterEndElement(writer);
      if (status < 0) {
        [NSException raise: @"XMLWriteError"
                     format: @"Error writing end child element {}flowStatistics."];
      }
    } //end item iterator.
  }
}
@end /* implementation FULLNS0AllFlowStatistics (JAXB) */

#endif /* DEF_FULLNS0AllFlowStatistics_M */
#ifndef DEF_FULLNS0NodeConnectorStatistics_M
#define DEF_FULLNS0NodeConnectorStatistics_M

/**
 * (no documentation provided)
 */
@implementation FULLNS0NodeConnectorStatistics

/**
 * (no documentation provided)
 */
- (long) receiveOverRunError
{
  return _receiveOverRunError;
}

/**
 * (no documentation provided)
 */
- (void) setReceiveOverRunError: (long) newReceiveOverRunError
{
  _receiveOverRunError = newReceiveOverRunError;
}

/**
 * (no documentation provided)
 */
- (long) transmitErrors
{
  return _transmitErrors;
}

/**
 * (no documentation provided)
 */
- (void) setTransmitErrors: (long) newTransmitErrors
{
  _transmitErrors = newTransmitErrors;
}

/**
 * (no documentation provided)
 */
- (FULLNS0NodeConnector *) nodeConnector
{
  return _nodeConnector;
}

/**
 * (no documentation provided)
 */
- (void) setNodeConnector: (FULLNS0NodeConnector *) newNodeConnector
{
  [newNodeConnector retain];
  [_nodeConnector release];
  _nodeConnector = newNodeConnector;
}

/**
 * (no documentation provided)
 */
- (long) receiveFrameError
{
  return _receiveFrameError;
}

/**
 * (no documentation provided)
 */
- (void) setReceiveFrameError: (long) newReceiveFrameError
{
  _receiveFrameError = newReceiveFrameError;
}

/**
 * (no documentation provided)
 */
- (long) transmitPackets
{
  return _transmitPackets;
}

/**
 * (no documentation provided)
 */
- (void) setTransmitPackets: (long) newTransmitPackets
{
  _transmitPackets = newTransmitPackets;
}

/**
 * (no documentation provided)
 */
- (long) receiveBytes
{
  return _receiveBytes;
}

/**
 * (no documentation provided)
 */
- (void) setReceiveBytes: (long) newReceiveBytes
{
  _receiveBytes = newReceiveBytes;
}

/**
 * (no documentation provided)
 */
- (long) receiveCrcError
{
  return _receiveCrcError;
}

/**
 * (no documentation provided)
 */
- (void) setReceiveCrcError: (long) newReceiveCrcError
{
  _receiveCrcError = newReceiveCrcError;
}

/**
 * (no documentation provided)
 */
- (long) collisionCount
{
  return _collisionCount;
}

/**
 * (no documentation provided)
 */
- (void) setCollisionCount: (long) newCollisionCount
{
  _collisionCount = newCollisionCount;
}

/**
 * (no documentation provided)
 */
- (long) receiveDrops
{
  return _receiveDrops;
}

/**
 * (no documentation provided)
 */
- (void) setReceiveDrops: (long) newReceiveDrops
{
  _receiveDrops = newReceiveDrops;
}

/**
 * (no documentation provided)
 */
- (long) transmitBytes
{
  return _transmitBytes;
}

/**
 * (no documentation provided)
 */
- (void) setTransmitBytes: (long) newTransmitBytes
{
  _transmitBytes = newTransmitBytes;
}

/**
 * (no documentation provided)
 */
- (long) transmitDrops
{
  return _transmitDrops;
}

/**
 * (no documentation provided)
 */
- (void) setTransmitDrops: (long) newTransmitDrops
{
  _transmitDrops = newTransmitDrops;
}

/**
 * (no documentation provided)
 */
- (long) receiveErrors
{
  return _receiveErrors;
}

/**
 * (no documentation provided)
 */
- (void) setReceiveErrors: (long) newReceiveErrors
{
  _receiveErrors = newReceiveErrors;
}

/**
 * (no documentation provided)
 */
- (long) receivePackets
{
  return _receivePackets;
}

/**
 * (no documentation provided)
 */
- (void) setReceivePackets: (long) newReceivePackets
{
  _receivePackets = newReceivePackets;
}

- (void) dealloc
{
  [self setNodeConnector: nil];
  [super dealloc];
}

//documentation inherited.
+ (id<EnunciateXML>) readFromXML: (NSData *) xml
{
  FULLNS0NodeConnectorStatistics *_fULLNS0NodeConnectorStatistics;
  xmlTextReaderPtr reader = xmlReaderForMemory([xml bytes], [xml length], NULL, NULL, 0);
  if (reader == NULL) {
    [NSException raise: @"XMLReadError"
                 format: @"Error instantiating an XML reader."];
    return nil;
  }

  _fULLNS0NodeConnectorStatistics = (FULLNS0NodeConnectorStatistics *) [FULLNS0NodeConnectorStatistics readXMLElement: reader];
  xmlFreeTextReader(reader); //free the reader
  return _fULLNS0NodeConnectorStatistics;
}

//documentation inherited.
- (NSData *) writeToXML
{
  xmlBufferPtr buf;
  xmlTextWriterPtr writer;
  int rc;
  NSData *data;

  buf = xmlBufferCreate();
  if (buf == NULL) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error creating an XML buffer."];
    return nil;
  }

  writer = xmlNewTextWriterMemory(buf, 0);
  if (writer == NULL) {
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error creating an XML writer."];
    return nil;
  }

  rc = xmlTextWriterStartDocument(writer, NULL, "utf-8", NULL);
  if (rc < 0) {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing XML start document."];
    return nil;
  }

  NS_DURING
  {
    [self writeXMLElement: writer];
  }
  NS_HANDLER
  {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [localException raise];
  }
  NS_ENDHANDLER

  rc = xmlTextWriterEndDocument(writer);
  if (rc < 0) {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing XML end document."];
    return nil;
  }

  xmlFreeTextWriter(writer);
  data = [NSData dataWithBytes: buf->content length: buf->use];
  xmlBufferFree(buf);
  return data;
}
@end /* implementation FULLNS0NodeConnectorStatistics */

/**
 * Internal, private interface for JAXB reading and writing.
 */
@interface FULLNS0NodeConnectorStatistics (JAXB) <JAXBReading, JAXBWriting, JAXBType, JAXBElement>

@end /*interface FULLNS0NodeConnectorStatistics (JAXB)*/

/**
 * Internal, private implementation for JAXB reading and writing.
 */
@implementation FULLNS0NodeConnectorStatistics (JAXB)

/**
 * Read an instance of FULLNS0NodeConnectorStatistics from an XML reader.
 *
 * @param reader The reader.
 * @return An instance of FULLNS0NodeConnectorStatistics defined by the XML reader.
 */
+ (id<JAXBType>) readXMLType: (xmlTextReaderPtr) reader
{
  FULLNS0NodeConnectorStatistics *_fULLNS0NodeConnectorStatistics = [[FULLNS0NodeConnectorStatistics alloc] init];
  NS_DURING
  {
    [_fULLNS0NodeConnectorStatistics initWithReader: reader];
  }
  NS_HANDLER
  {
    _fULLNS0NodeConnectorStatistics = nil;
    [localException raise];
  }
  NS_ENDHANDLER

  [_fULLNS0NodeConnectorStatistics autorelease];
  return _fULLNS0NodeConnectorStatistics;
}

/**
 * Initialize this instance of FULLNS0NodeConnectorStatistics according to
 * the XML being read from the reader.
 *
 * @param reader The reader.
 */
- (id) initWithReader: (xmlTextReaderPtr) reader
{
  return [super initWithReader: reader];
}

/**
 * Write the XML for this instance of FULLNS0NodeConnectorStatistics to the writer.
 * Note that since we're only writing the XML type,
 * No start/end element will be written.
 *
 * @param reader The reader.
 */
- (void) writeXMLType: (xmlTextWriterPtr) writer
{
  [super writeXMLType:writer];
}

/**
 * Reads a FULLNS0NodeConnectorStatistics from an XML reader. The element to be read is
 * "nodeConnectorStatistics".
 *
 * @param reader The XML reader.
 * @return The FULLNS0NodeConnectorStatistics.
 */
+ (id<JAXBElement>) readXMLElement: (xmlTextReaderPtr) reader {
  int status;
  FULLNS0NodeConnectorStatistics *_nodeConnectorStatistics = nil;

  if (xmlTextReaderNodeType(reader) != XML_READER_TYPE_ELEMENT) {
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
    if (status < 1) {
      [NSException raise: @"XMLReadError"
                   format: @"Error advancing the reader to start element nodeConnectorStatistics."];
    }
  }

  if (xmlStrcmp(BAD_CAST "nodeConnectorStatistics", xmlTextReaderConstLocalName(reader)) == 0
      && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read root element {}nodeConnectorStatistics.");
#endif
    _nodeConnectorStatistics = (FULLNS0NodeConnectorStatistics *)[FULLNS0NodeConnectorStatistics readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Successfully read root element {}nodeConnectorStatistics.");
#endif
  }
  else {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read FULLNS0NodeConnectorStatistics. Expected element nodeConnectorStatistics. Current element: {}%s", xmlTextReaderConstLocalName(reader)];
    }
    else {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read FULLNS0NodeConnectorStatistics. Expected element nodeConnectorStatistics. Current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader)];
    }
  }

  return _nodeConnectorStatistics;
}

/**
 * Writes this FULLNS0NodeConnectorStatistics to XML under element name "nodeConnectorStatistics".
 * The namespace declarations for the element will be written.
 *
 * @param writer The XML writer.
 * @param _nodeConnectorStatistics The NodeConnectorStatistics to write.
 * @return 1 if successful, 0 otherwise.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer
{
  [self writeXMLElement: writer writeNamespaces: YES];
}

/**
 * Writes this FULLNS0NodeConnectorStatistics to an XML writer.
 *
 * @param writer The writer.
 * @param writeNs Whether to write the namespaces for this element to the xml writer.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer writeNamespaces: (BOOL) writeNs
{
  int rc = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "nodeConnectorStatistics", NULL);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing start element {}nodeConnectorStatistics. XML writer status: %i\n", rc];
  }

#if DEBUG_ENUNCIATE > 1
  NSLog(@"writing type {}nodeConnectorStatistics for root element {}nodeConnectorStatistics...");
#endif
  [self writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
  NSLog(@"successfully wrote type {}nodeConnectorStatistics for root element {}nodeConnectorStatistics...");
#endif
  rc = xmlTextWriterEndElement(writer);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing end element {}nodeConnectorStatistics. XML writer status: %i\n", rc];
  }
}

//documentation inherited.
- (BOOL) readJAXBAttribute: (xmlTextReaderPtr) reader
{
  void *_child_accessor;

  if ([super readJAXBAttribute: reader]) {
    return YES;
  }

  return NO;
}

//documentation inherited.
- (BOOL) readJAXBValue: (xmlTextReaderPtr) reader
{
  return [super readJAXBValue: reader];
}

//documentation inherited.
- (BOOL) readJAXBChildElement: (xmlTextReaderPtr) reader
{
  id __child;
  void *_child_accessor;
  int status, depth;

  if ([super readJAXBChildElement: reader]) {
    return YES;
  }

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "receiveOverRunError", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

    _child_accessor = xmlTextReaderReadLongType(reader);
    if (_child_accessor == NULL) {
      //panic: unable to return the value for some reason.
      [NSException raise: @"XMLReadError"
                   format: @"Error reading element value."];
    }
    [self setReceiveOverRunError: *((long*) _child_accessor)];
    free(_child_accessor);
    return YES;
  }

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "transmitErrors", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

    _child_accessor = xmlTextReaderReadLongType(reader);
    if (_child_accessor == NULL) {
      //panic: unable to return the value for some reason.
      [NSException raise: @"XMLReadError"
                   format: @"Error reading element value."];
    }
    [self setTransmitErrors: *((long*) _child_accessor)];
    free(_child_accessor);
    return YES;
  }
  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "nodeConnector", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}nodeConnector of type {}nodeConnector.");
#endif
    __child = [FULLNS0NodeConnector readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}nodeConnector of type {}nodeConnector.");
#endif

    [self setNodeConnector: __child];
    return YES;
  } //end "if choice"


  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "receiveFrameError", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

    _child_accessor = xmlTextReaderReadLongType(reader);
    if (_child_accessor == NULL) {
      //panic: unable to return the value for some reason.
      [NSException raise: @"XMLReadError"
                   format: @"Error reading element value."];
    }
    [self setReceiveFrameError: *((long*) _child_accessor)];
    free(_child_accessor);
    return YES;
  }

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "transmitPackets", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

    _child_accessor = xmlTextReaderReadLongType(reader);
    if (_child_accessor == NULL) {
      //panic: unable to return the value for some reason.
      [NSException raise: @"XMLReadError"
                   format: @"Error reading element value."];
    }
    [self setTransmitPackets: *((long*) _child_accessor)];
    free(_child_accessor);
    return YES;
  }

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "receiveBytes", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

    _child_accessor = xmlTextReaderReadLongType(reader);
    if (_child_accessor == NULL) {
      //panic: unable to return the value for some reason.
      [NSException raise: @"XMLReadError"
                   format: @"Error reading element value."];
    }
    [self setReceiveBytes: *((long*) _child_accessor)];
    free(_child_accessor);
    return YES;
  }

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "receiveCrcError", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

    _child_accessor = xmlTextReaderReadLongType(reader);
    if (_child_accessor == NULL) {
      //panic: unable to return the value for some reason.
      [NSException raise: @"XMLReadError"
                   format: @"Error reading element value."];
    }
    [self setReceiveCrcError: *((long*) _child_accessor)];
    free(_child_accessor);
    return YES;
  }

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "collisionCount", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

    _child_accessor = xmlTextReaderReadLongType(reader);
    if (_child_accessor == NULL) {
      //panic: unable to return the value for some reason.
      [NSException raise: @"XMLReadError"
                   format: @"Error reading element value."];
    }
    [self setCollisionCount: *((long*) _child_accessor)];
    free(_child_accessor);
    return YES;
  }

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "receiveDrops", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

    _child_accessor = xmlTextReaderReadLongType(reader);
    if (_child_accessor == NULL) {
      //panic: unable to return the value for some reason.
      [NSException raise: @"XMLReadError"
                   format: @"Error reading element value."];
    }
    [self setReceiveDrops: *((long*) _child_accessor)];
    free(_child_accessor);
    return YES;
  }

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "transmitBytes", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

    _child_accessor = xmlTextReaderReadLongType(reader);
    if (_child_accessor == NULL) {
      //panic: unable to return the value for some reason.
      [NSException raise: @"XMLReadError"
                   format: @"Error reading element value."];
    }
    [self setTransmitBytes: *((long*) _child_accessor)];
    free(_child_accessor);
    return YES;
  }

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "transmitDrops", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

    _child_accessor = xmlTextReaderReadLongType(reader);
    if (_child_accessor == NULL) {
      //panic: unable to return the value for some reason.
      [NSException raise: @"XMLReadError"
                   format: @"Error reading element value."];
    }
    [self setTransmitDrops: *((long*) _child_accessor)];
    free(_child_accessor);
    return YES;
  }

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "receiveErrors", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

    _child_accessor = xmlTextReaderReadLongType(reader);
    if (_child_accessor == NULL) {
      //panic: unable to return the value for some reason.
      [NSException raise: @"XMLReadError"
                   format: @"Error reading element value."];
    }
    [self setReceiveErrors: *((long*) _child_accessor)];
    free(_child_accessor);
    return YES;
  }

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "receivePackets", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

    _child_accessor = xmlTextReaderReadLongType(reader);
    if (_child_accessor == NULL) {
      //panic: unable to return the value for some reason.
      [NSException raise: @"XMLReadError"
                   format: @"Error reading element value."];
    }
    [self setReceivePackets: *((long*) _child_accessor)];
    free(_child_accessor);
    return YES;
  }

  return NO;
}

//documentation inherited.
- (int) readUnknownJAXBChildElement: (xmlTextReaderPtr) reader
{
  return [super readUnknownJAXBChildElement: reader];
}

//documentation inherited.
- (void) readUnknownJAXBAttribute: (xmlTextReaderPtr) reader
{
  [super readUnknownJAXBAttribute: reader];
}

//documentation inherited.
- (void) writeJAXBAttributes: (xmlTextWriterPtr) writer
{
  int status;

  [super writeJAXBAttributes: writer];

}

//documentation inherited.
- (void) writeJAXBValue: (xmlTextWriterPtr) writer
{
  [super writeJAXBValue: writer];
}

/**
 * Method for writing the child elements.
 *
 * @param writer The writer.
 */
- (void) writeJAXBChildElements: (xmlTextWriterPtr) writer
{
  int status;
  id __item;
  NSEnumerator *__enumerator;

  [super writeJAXBChildElements: writer];

  if (YES) { //always write the primitive element...
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "receiveOverRunError", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}receiveOverRunError."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}receiveOverRunError...");
#endif
    status = xmlTextWriterWriteLongType(writer, &_receiveOverRunError);
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}receiveOverRunError...");
#endif
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing child element {}receiveOverRunError."];
    }

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}receiveOverRunError."];
    }
  }
  if (YES) { //always write the primitive element...
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "transmitErrors", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}transmitErrors."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}transmitErrors...");
#endif
    status = xmlTextWriterWriteLongType(writer, &_transmitErrors);
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}transmitErrors...");
#endif
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing child element {}transmitErrors."];
    }

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}transmitErrors."];
    }
  }
  if ([self nodeConnector]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "nodeConnector", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}nodeConnector."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}nodeConnector...");
#endif
    [[self nodeConnector] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}nodeConnector...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}nodeConnector."];
    }
  }
  if (YES) { //always write the primitive element...
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "receiveFrameError", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}receiveFrameError."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}receiveFrameError...");
#endif
    status = xmlTextWriterWriteLongType(writer, &_receiveFrameError);
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}receiveFrameError...");
#endif
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing child element {}receiveFrameError."];
    }

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}receiveFrameError."];
    }
  }
  if (YES) { //always write the primitive element...
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "transmitPackets", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}transmitPackets."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}transmitPackets...");
#endif
    status = xmlTextWriterWriteLongType(writer, &_transmitPackets);
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}transmitPackets...");
#endif
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing child element {}transmitPackets."];
    }

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}transmitPackets."];
    }
  }
  if (YES) { //always write the primitive element...
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "receiveBytes", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}receiveBytes."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}receiveBytes...");
#endif
    status = xmlTextWriterWriteLongType(writer, &_receiveBytes);
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}receiveBytes...");
#endif
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing child element {}receiveBytes."];
    }

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}receiveBytes."];
    }
  }
  if (YES) { //always write the primitive element...
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "receiveCrcError", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}receiveCrcError."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}receiveCrcError...");
#endif
    status = xmlTextWriterWriteLongType(writer, &_receiveCrcError);
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}receiveCrcError...");
#endif
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing child element {}receiveCrcError."];
    }

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}receiveCrcError."];
    }
  }
  if (YES) { //always write the primitive element...
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "collisionCount", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}collisionCount."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}collisionCount...");
#endif
    status = xmlTextWriterWriteLongType(writer, &_collisionCount);
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}collisionCount...");
#endif
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing child element {}collisionCount."];
    }

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}collisionCount."];
    }
  }
  if (YES) { //always write the primitive element...
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "receiveDrops", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}receiveDrops."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}receiveDrops...");
#endif
    status = xmlTextWriterWriteLongType(writer, &_receiveDrops);
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}receiveDrops...");
#endif
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing child element {}receiveDrops."];
    }

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}receiveDrops."];
    }
  }
  if (YES) { //always write the primitive element...
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "transmitBytes", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}transmitBytes."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}transmitBytes...");
#endif
    status = xmlTextWriterWriteLongType(writer, &_transmitBytes);
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}transmitBytes...");
#endif
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing child element {}transmitBytes."];
    }

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}transmitBytes."];
    }
  }
  if (YES) { //always write the primitive element...
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "transmitDrops", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}transmitDrops."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}transmitDrops...");
#endif
    status = xmlTextWriterWriteLongType(writer, &_transmitDrops);
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}transmitDrops...");
#endif
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing child element {}transmitDrops."];
    }

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}transmitDrops."];
    }
  }
  if (YES) { //always write the primitive element...
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "receiveErrors", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}receiveErrors."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}receiveErrors...");
#endif
    status = xmlTextWriterWriteLongType(writer, &_receiveErrors);
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}receiveErrors...");
#endif
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing child element {}receiveErrors."];
    }

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}receiveErrors."];
    }
  }
  if (YES) { //always write the primitive element...
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "receivePackets", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}receivePackets."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}receivePackets...");
#endif
    status = xmlTextWriterWriteLongType(writer, &_receivePackets);
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}receivePackets...");
#endif
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing child element {}receivePackets."];
    }

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}receivePackets."];
    }
  }
}
@end /* implementation FULLNS0NodeConnectorStatistics (JAXB) */

#endif /* DEF_FULLNS0NodeConnectorStatistics_M */
#ifndef DEF_FULLNS0FlowOnNode_M
#define DEF_FULLNS0FlowOnNode_M

/**
 * (no documentation provided)
 */
@implementation FULLNS0FlowOnNode

/**
 * (no documentation provided)
 */
- (FULLNS0Flow *) flow
{
  return _flow;
}

/**
 * (no documentation provided)
 */
- (void) setFlow: (FULLNS0Flow *) newFlow
{
  [newFlow retain];
  [_flow release];
  _flow = newFlow;
}

/**
 * (no documentation provided)
 */
- (long) packetCount
{
  return _packetCount;
}

/**
 * (no documentation provided)
 */
- (void) setPacketCount: (long) newPacketCount
{
  _packetCount = newPacketCount;
}

/**
 * (no documentation provided)
 */
- (int) durationNanoseconds
{
  return _durationNanoseconds;
}

/**
 * (no documentation provided)
 */
- (void) setDurationNanoseconds: (int) newDurationNanoseconds
{
  _durationNanoseconds = newDurationNanoseconds;
}

/**
 * (no documentation provided)
 */
- (long) byteCount
{
  return _byteCount;
}

/**
 * (no documentation provided)
 */
- (void) setByteCount: (long) newByteCount
{
  _byteCount = newByteCount;
}

/**
 * (no documentation provided)
 */
- (unsigned char) tableId
{
  return _tableId;
}

/**
 * (no documentation provided)
 */
- (void) setTableId: (unsigned char) newTableId
{
  _tableId = newTableId;
}

/**
 * (no documentation provided)
 */
- (int) durationSeconds
{
  return _durationSeconds;
}

/**
 * (no documentation provided)
 */
- (void) setDurationSeconds: (int) newDurationSeconds
{
  _durationSeconds = newDurationSeconds;
}

- (void) dealloc
{
  [self setFlow: nil];
  [super dealloc];
}

//documentation inherited.
+ (id<EnunciateXML>) readFromXML: (NSData *) xml
{
  FULLNS0FlowOnNode *_fULLNS0FlowOnNode;
  xmlTextReaderPtr reader = xmlReaderForMemory([xml bytes], [xml length], NULL, NULL, 0);
  if (reader == NULL) {
    [NSException raise: @"XMLReadError"
                 format: @"Error instantiating an XML reader."];
    return nil;
  }

  _fULLNS0FlowOnNode = (FULLNS0FlowOnNode *) [FULLNS0FlowOnNode readXMLElement: reader];
  xmlFreeTextReader(reader); //free the reader
  return _fULLNS0FlowOnNode;
}

//documentation inherited.
- (NSData *) writeToXML
{
  xmlBufferPtr buf;
  xmlTextWriterPtr writer;
  int rc;
  NSData *data;

  buf = xmlBufferCreate();
  if (buf == NULL) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error creating an XML buffer."];
    return nil;
  }

  writer = xmlNewTextWriterMemory(buf, 0);
  if (writer == NULL) {
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error creating an XML writer."];
    return nil;
  }

  rc = xmlTextWriterStartDocument(writer, NULL, "utf-8", NULL);
  if (rc < 0) {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing XML start document."];
    return nil;
  }

  NS_DURING
  {
    [self writeXMLElement: writer];
  }
  NS_HANDLER
  {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [localException raise];
  }
  NS_ENDHANDLER

  rc = xmlTextWriterEndDocument(writer);
  if (rc < 0) {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing XML end document."];
    return nil;
  }

  xmlFreeTextWriter(writer);
  data = [NSData dataWithBytes: buf->content length: buf->use];
  xmlBufferFree(buf);
  return data;
}
@end /* implementation FULLNS0FlowOnNode */

/**
 * Internal, private interface for JAXB reading and writing.
 */
@interface FULLNS0FlowOnNode (JAXB) <JAXBReading, JAXBWriting, JAXBType, JAXBElement>

@end /*interface FULLNS0FlowOnNode (JAXB)*/

/**
 * Internal, private implementation for JAXB reading and writing.
 */
@implementation FULLNS0FlowOnNode (JAXB)

/**
 * Read an instance of FULLNS0FlowOnNode from an XML reader.
 *
 * @param reader The reader.
 * @return An instance of FULLNS0FlowOnNode defined by the XML reader.
 */
+ (id<JAXBType>) readXMLType: (xmlTextReaderPtr) reader
{
  FULLNS0FlowOnNode *_fULLNS0FlowOnNode = [[FULLNS0FlowOnNode alloc] init];
  NS_DURING
  {
    [_fULLNS0FlowOnNode initWithReader: reader];
  }
  NS_HANDLER
  {
    _fULLNS0FlowOnNode = nil;
    [localException raise];
  }
  NS_ENDHANDLER

  [_fULLNS0FlowOnNode autorelease];
  return _fULLNS0FlowOnNode;
}

/**
 * Initialize this instance of FULLNS0FlowOnNode according to
 * the XML being read from the reader.
 *
 * @param reader The reader.
 */
- (id) initWithReader: (xmlTextReaderPtr) reader
{
  return [super initWithReader: reader];
}

/**
 * Write the XML for this instance of FULLNS0FlowOnNode to the writer.
 * Note that since we're only writing the XML type,
 * No start/end element will be written.
 *
 * @param reader The reader.
 */
- (void) writeXMLType: (xmlTextWriterPtr) writer
{
  [super writeXMLType:writer];
}

/**
 * Reads a FULLNS0FlowOnNode from an XML reader. The element to be read is
 * "FlowStat".
 *
 * @param reader The XML reader.
 * @return The FULLNS0FlowOnNode.
 */
+ (id<JAXBElement>) readXMLElement: (xmlTextReaderPtr) reader {
  int status;
  FULLNS0FlowOnNode *_flowOnNode = nil;

  if (xmlTextReaderNodeType(reader) != XML_READER_TYPE_ELEMENT) {
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
    if (status < 1) {
      [NSException raise: @"XMLReadError"
                   format: @"Error advancing the reader to start element FlowStat."];
    }
  }

  if (xmlStrcmp(BAD_CAST "FlowStat", xmlTextReaderConstLocalName(reader)) == 0
      && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read root element {}FlowStat.");
#endif
    _flowOnNode = (FULLNS0FlowOnNode *)[FULLNS0FlowOnNode readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Successfully read root element {}FlowStat.");
#endif
  }
  else {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read FULLNS0FlowOnNode. Expected element FlowStat. Current element: {}%s", xmlTextReaderConstLocalName(reader)];
    }
    else {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read FULLNS0FlowOnNode. Expected element FlowStat. Current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader)];
    }
  }

  return _flowOnNode;
}

/**
 * Writes this FULLNS0FlowOnNode to XML under element name "FlowStat".
 * The namespace declarations for the element will be written.
 *
 * @param writer The XML writer.
 * @param _flowOnNode The FlowOnNode to write.
 * @return 1 if successful, 0 otherwise.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer
{
  [self writeXMLElement: writer writeNamespaces: YES];
}

/**
 * Writes this FULLNS0FlowOnNode to an XML writer.
 *
 * @param writer The writer.
 * @param writeNs Whether to write the namespaces for this element to the xml writer.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer writeNamespaces: (BOOL) writeNs
{
  int rc = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "FlowStat", NULL);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing start element {}FlowStat. XML writer status: %i\n", rc];
  }

#if DEBUG_ENUNCIATE > 1
  NSLog(@"writing type {}flowOnNode for root element {}FlowStat...");
#endif
  [self writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
  NSLog(@"successfully wrote type {}flowOnNode for root element {}FlowStat...");
#endif
  rc = xmlTextWriterEndElement(writer);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing end element {}FlowStat. XML writer status: %i\n", rc];
  }
}

//documentation inherited.
- (BOOL) readJAXBAttribute: (xmlTextReaderPtr) reader
{
  void *_child_accessor;

  if ([super readJAXBAttribute: reader]) {
    return YES;
  }

  return NO;
}

//documentation inherited.
- (BOOL) readJAXBValue: (xmlTextReaderPtr) reader
{
  return [super readJAXBValue: reader];
}

//documentation inherited.
- (BOOL) readJAXBChildElement: (xmlTextReaderPtr) reader
{
  id __child;
  void *_child_accessor;
  int status, depth;

  if ([super readJAXBChildElement: reader]) {
    return YES;
  }
  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "flow", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}flow of type {}flow.");
#endif
    __child = [FULLNS0Flow readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}flow of type {}flow.");
#endif

    [self setFlow: __child];
    return YES;
  } //end "if choice"


  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "packetCount", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

    _child_accessor = xmlTextReaderReadLongType(reader);
    if (_child_accessor == NULL) {
      //panic: unable to return the value for some reason.
      [NSException raise: @"XMLReadError"
                   format: @"Error reading element value."];
    }
    [self setPacketCount: *((long*) _child_accessor)];
    free(_child_accessor);
    return YES;
  }

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "durationNanoseconds", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

    _child_accessor = xmlTextReaderReadIntType(reader);
    if (_child_accessor == NULL) {
      //panic: unable to return the value for some reason.
      [NSException raise: @"XMLReadError"
                   format: @"Error reading element value."];
    }
    [self setDurationNanoseconds: *((int*) _child_accessor)];
    free(_child_accessor);
    return YES;
  }

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "byteCount", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

    _child_accessor = xmlTextReaderReadLongType(reader);
    if (_child_accessor == NULL) {
      //panic: unable to return the value for some reason.
      [NSException raise: @"XMLReadError"
                   format: @"Error reading element value."];
    }
    [self setByteCount: *((long*) _child_accessor)];
    free(_child_accessor);
    return YES;
  }

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "tableId", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

    _child_accessor = xmlTextReaderReadByteType(reader);
    if (_child_accessor == NULL) {
      //panic: unable to return the value for some reason.
      [NSException raise: @"XMLReadError"
                   format: @"Error reading element value."];
    }
    [self setTableId: *((unsigned char*) _child_accessor)];
    free(_child_accessor);
    return YES;
  }

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "durationSeconds", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

    _child_accessor = xmlTextReaderReadIntType(reader);
    if (_child_accessor == NULL) {
      //panic: unable to return the value for some reason.
      [NSException raise: @"XMLReadError"
                   format: @"Error reading element value."];
    }
    [self setDurationSeconds: *((int*) _child_accessor)];
    free(_child_accessor);
    return YES;
  }

  return NO;
}

//documentation inherited.
- (int) readUnknownJAXBChildElement: (xmlTextReaderPtr) reader
{
  return [super readUnknownJAXBChildElement: reader];
}

//documentation inherited.
- (void) readUnknownJAXBAttribute: (xmlTextReaderPtr) reader
{
  [super readUnknownJAXBAttribute: reader];
}

//documentation inherited.
- (void) writeJAXBAttributes: (xmlTextWriterPtr) writer
{
  int status;

  [super writeJAXBAttributes: writer];

}

//documentation inherited.
- (void) writeJAXBValue: (xmlTextWriterPtr) writer
{
  [super writeJAXBValue: writer];
}

/**
 * Method for writing the child elements.
 *
 * @param writer The writer.
 */
- (void) writeJAXBChildElements: (xmlTextWriterPtr) writer
{
  int status;
  id __item;
  NSEnumerator *__enumerator;

  [super writeJAXBChildElements: writer];

  if ([self flow]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "flow", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}flow."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}flow...");
#endif
    [[self flow] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}flow...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}flow."];
    }
  }
  if (YES) { //always write the primitive element...
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "packetCount", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}packetCount."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}packetCount...");
#endif
    status = xmlTextWriterWriteLongType(writer, &_packetCount);
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}packetCount...");
#endif
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing child element {}packetCount."];
    }

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}packetCount."];
    }
  }
  if (YES) { //always write the primitive element...
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "durationNanoseconds", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}durationNanoseconds."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}durationNanoseconds...");
#endif
    status = xmlTextWriterWriteIntType(writer, &_durationNanoseconds);
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}durationNanoseconds...");
#endif
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing child element {}durationNanoseconds."];
    }

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}durationNanoseconds."];
    }
  }
  if (YES) { //always write the primitive element...
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "byteCount", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}byteCount."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}byteCount...");
#endif
    status = xmlTextWriterWriteLongType(writer, &_byteCount);
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}byteCount...");
#endif
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing child element {}byteCount."];
    }

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}byteCount."];
    }
  }
  if (YES) { //always write the primitive element...
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "tableId", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}tableId."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}tableId...");
#endif
    status = xmlTextWriterWriteByteType(writer, &_tableId);
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}tableId...");
#endif
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing child element {}tableId."];
    }

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}tableId."];
    }
  }
  if (YES) { //always write the primitive element...
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "durationSeconds", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}durationSeconds."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}durationSeconds...");
#endif
    status = xmlTextWriterWriteIntType(writer, &_durationSeconds);
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}durationSeconds...");
#endif
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing child element {}durationSeconds."];
    }

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}durationSeconds."];
    }
  }
}
@end /* implementation FULLNS0FlowOnNode (JAXB) */

#endif /* DEF_FULLNS0FlowOnNode_M */
#ifndef DEF_FULLNS0Action_M
#define DEF_FULLNS0Action_M

/**
 * (no documentation provided)
 */
@implementation FULLNS0Action

- (void) dealloc
{
  [super dealloc];
}

//documentation inherited.
+ (id<EnunciateXML>) readFromXML: (NSData *) xml
{
  FULLNS0Action *_fULLNS0Action;
  xmlTextReaderPtr reader = xmlReaderForMemory([xml bytes], [xml length], NULL, NULL, 0);
  if (reader == NULL) {
    [NSException raise: @"XMLReadError"
                 format: @"Error instantiating an XML reader."];
    return nil;
  }

  _fULLNS0Action = (FULLNS0Action *) [FULLNS0Action readXMLElement: reader];
  xmlFreeTextReader(reader); //free the reader
  return _fULLNS0Action;
}

//documentation inherited.
- (NSData *) writeToXML
{
  xmlBufferPtr buf;
  xmlTextWriterPtr writer;
  int rc;
  NSData *data;

  buf = xmlBufferCreate();
  if (buf == NULL) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error creating an XML buffer."];
    return nil;
  }

  writer = xmlNewTextWriterMemory(buf, 0);
  if (writer == NULL) {
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error creating an XML writer."];
    return nil;
  }

  rc = xmlTextWriterStartDocument(writer, NULL, "utf-8", NULL);
  if (rc < 0) {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing XML start document."];
    return nil;
  }

  NS_DURING
  {
    [self writeXMLElement: writer];
  }
  NS_HANDLER
  {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [localException raise];
  }
  NS_ENDHANDLER

  rc = xmlTextWriterEndDocument(writer);
  if (rc < 0) {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing XML end document."];
    return nil;
  }

  xmlFreeTextWriter(writer);
  data = [NSData dataWithBytes: buf->content length: buf->use];
  xmlBufferFree(buf);
  return data;
}
@end /* implementation FULLNS0Action */

/**
 * Internal, private interface for JAXB reading and writing.
 */
@interface FULLNS0Action (JAXB) <JAXBReading, JAXBWriting, JAXBType, JAXBElement>

@end /*interface FULLNS0Action (JAXB)*/

/**
 * Internal, private implementation for JAXB reading and writing.
 */
@implementation FULLNS0Action (JAXB)

/**
 * Read an instance of FULLNS0Action from an XML reader.
 *
 * @param reader The reader.
 * @return An instance of FULLNS0Action defined by the XML reader.
 */
+ (id<JAXBType>) readXMLType: (xmlTextReaderPtr) reader
{
  FULLNS0Action *_fULLNS0Action = [[FULLNS0Action alloc] init];
  NS_DURING
  {
    [_fULLNS0Action initWithReader: reader];
  }
  NS_HANDLER
  {
    _fULLNS0Action = nil;
    [localException raise];
  }
  NS_ENDHANDLER

  [_fULLNS0Action autorelease];
  return _fULLNS0Action;
}

/**
 * Initialize this instance of FULLNS0Action according to
 * the XML being read from the reader.
 *
 * @param reader The reader.
 */
- (id) initWithReader: (xmlTextReaderPtr) reader
{
  return [super initWithReader: reader];
}

/**
 * Write the XML for this instance of FULLNS0Action to the writer.
 * Note that since we're only writing the XML type,
 * No start/end element will be written.
 *
 * @param reader The reader.
 */
- (void) writeXMLType: (xmlTextWriterPtr) writer
{
  [super writeXMLType:writer];
}

/**
 * Reads a FULLNS0Action from an XML reader. The element to be read is
 * "action".
 *
 * @param reader The XML reader.
 * @return The FULLNS0Action.
 */
+ (id<JAXBElement>) readXMLElement: (xmlTextReaderPtr) reader {
  int status;
  FULLNS0Action *_action = nil;

  if (xmlTextReaderNodeType(reader) != XML_READER_TYPE_ELEMENT) {
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
    if (status < 1) {
      [NSException raise: @"XMLReadError"
                   format: @"Error advancing the reader to start element action."];
    }
  }

  if (xmlStrcmp(BAD_CAST "action", xmlTextReaderConstLocalName(reader)) == 0
      && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read root element {}action.");
#endif
    _action = (FULLNS0Action *)[FULLNS0Action readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Successfully read root element {}action.");
#endif
  }
  else {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read FULLNS0Action. Expected element action. Current element: {}%s", xmlTextReaderConstLocalName(reader)];
    }
    else {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read FULLNS0Action. Expected element action. Current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader)];
    }
  }

  return _action;
}

/**
 * Writes this FULLNS0Action to XML under element name "action".
 * The namespace declarations for the element will be written.
 *
 * @param writer The XML writer.
 * @param _action The Action to write.
 * @return 1 if successful, 0 otherwise.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer
{
  [self writeXMLElement: writer writeNamespaces: YES];
}

/**
 * Writes this FULLNS0Action to an XML writer.
 *
 * @param writer The writer.
 * @param writeNs Whether to write the namespaces for this element to the xml writer.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer writeNamespaces: (BOOL) writeNs
{
  int rc = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "action", NULL);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing start element {}action. XML writer status: %i\n", rc];
  }

#if DEBUG_ENUNCIATE > 1
  NSLog(@"writing type {}action for root element {}action...");
#endif
  [self writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
  NSLog(@"successfully wrote type {}action for root element {}action...");
#endif
  rc = xmlTextWriterEndElement(writer);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing end element {}action. XML writer status: %i\n", rc];
  }
}

//documentation inherited.
- (BOOL) readJAXBAttribute: (xmlTextReaderPtr) reader
{
  void *_child_accessor;

  if ([super readJAXBAttribute: reader]) {
    return YES;
  }

  return NO;
}

//documentation inherited.
- (BOOL) readJAXBValue: (xmlTextReaderPtr) reader
{
  return [super readJAXBValue: reader];
}

//documentation inherited.
- (BOOL) readJAXBChildElement: (xmlTextReaderPtr) reader
{
  id __child;
  void *_child_accessor;
  int status, depth;

  if ([super readJAXBChildElement: reader]) {
    return YES;
  }

  return NO;
}

//documentation inherited.
- (int) readUnknownJAXBChildElement: (xmlTextReaderPtr) reader
{
  return [super readUnknownJAXBChildElement: reader];
}

//documentation inherited.
- (void) readUnknownJAXBAttribute: (xmlTextReaderPtr) reader
{
  [super readUnknownJAXBAttribute: reader];
}

//documentation inherited.
- (void) writeJAXBAttributes: (xmlTextWriterPtr) writer
{
  int status;

  [super writeJAXBAttributes: writer];

}

//documentation inherited.
- (void) writeJAXBValue: (xmlTextWriterPtr) writer
{
  [super writeJAXBValue: writer];
}

/**
 * Method for writing the child elements.
 *
 * @param writer The writer.
 */
- (void) writeJAXBChildElements: (xmlTextWriterPtr) writer
{
  int status;
  id __item;
  NSEnumerator *__enumerator;

  [super writeJAXBChildElements: writer];

}
@end /* implementation FULLNS0Action (JAXB) */

#endif /* DEF_FULLNS0Action_M */
#ifndef DEF_FULLNS0FloodAll_M
#define DEF_FULLNS0FloodAll_M

/**
 * (no documentation provided)
 */
@implementation FULLNS0FloodAll

- (void) dealloc
{
  [super dealloc];
}

//documentation inherited.
+ (id<EnunciateXML>) readFromXML: (NSData *) xml
{
  FULLNS0FloodAll *_fULLNS0FloodAll;
  xmlTextReaderPtr reader = xmlReaderForMemory([xml bytes], [xml length], NULL, NULL, 0);
  if (reader == NULL) {
    [NSException raise: @"XMLReadError"
                 format: @"Error instantiating an XML reader."];
    return nil;
  }

  _fULLNS0FloodAll = (FULLNS0FloodAll *) [FULLNS0FloodAll readXMLElement: reader];
  xmlFreeTextReader(reader); //free the reader
  return _fULLNS0FloodAll;
}

//documentation inherited.
- (NSData *) writeToXML
{
  xmlBufferPtr buf;
  xmlTextWriterPtr writer;
  int rc;
  NSData *data;

  buf = xmlBufferCreate();
  if (buf == NULL) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error creating an XML buffer."];
    return nil;
  }

  writer = xmlNewTextWriterMemory(buf, 0);
  if (writer == NULL) {
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error creating an XML writer."];
    return nil;
  }

  rc = xmlTextWriterStartDocument(writer, NULL, "utf-8", NULL);
  if (rc < 0) {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing XML start document."];
    return nil;
  }

  NS_DURING
  {
    [self writeXMLElement: writer];
  }
  NS_HANDLER
  {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [localException raise];
  }
  NS_ENDHANDLER

  rc = xmlTextWriterEndDocument(writer);
  if (rc < 0) {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing XML end document."];
    return nil;
  }

  xmlFreeTextWriter(writer);
  data = [NSData dataWithBytes: buf->content length: buf->use];
  xmlBufferFree(buf);
  return data;
}
@end /* implementation FULLNS0FloodAll */

/**
 * Internal, private interface for JAXB reading and writing.
 */
@interface FULLNS0FloodAll (JAXB) <JAXBReading, JAXBWriting, JAXBType, JAXBElement>

@end /*interface FULLNS0FloodAll (JAXB)*/

/**
 * Internal, private implementation for JAXB reading and writing.
 */
@implementation FULLNS0FloodAll (JAXB)

/**
 * Read an instance of FULLNS0FloodAll from an XML reader.
 *
 * @param reader The reader.
 * @return An instance of FULLNS0FloodAll defined by the XML reader.
 */
+ (id<JAXBType>) readXMLType: (xmlTextReaderPtr) reader
{
  FULLNS0FloodAll *_fULLNS0FloodAll = [[FULLNS0FloodAll alloc] init];
  NS_DURING
  {
    [_fULLNS0FloodAll initWithReader: reader];
  }
  NS_HANDLER
  {
    _fULLNS0FloodAll = nil;
    [localException raise];
  }
  NS_ENDHANDLER

  [_fULLNS0FloodAll autorelease];
  return _fULLNS0FloodAll;
}

/**
 * Initialize this instance of FULLNS0FloodAll according to
 * the XML being read from the reader.
 *
 * @param reader The reader.
 */
- (id) initWithReader: (xmlTextReaderPtr) reader
{
  return [super initWithReader: reader];
}

/**
 * Write the XML for this instance of FULLNS0FloodAll to the writer.
 * Note that since we're only writing the XML type,
 * No start/end element will be written.
 *
 * @param reader The reader.
 */
- (void) writeXMLType: (xmlTextWriterPtr) writer
{
  [super writeXMLType:writer];
}

/**
 * Reads a FULLNS0FloodAll from an XML reader. The element to be read is
 * "floodAll".
 *
 * @param reader The XML reader.
 * @return The FULLNS0FloodAll.
 */
+ (id<JAXBElement>) readXMLElement: (xmlTextReaderPtr) reader {
  int status;
  FULLNS0FloodAll *_floodAll = nil;

  if (xmlTextReaderNodeType(reader) != XML_READER_TYPE_ELEMENT) {
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
    if (status < 1) {
      [NSException raise: @"XMLReadError"
                   format: @"Error advancing the reader to start element floodAll."];
    }
  }

  if (xmlStrcmp(BAD_CAST "floodAll", xmlTextReaderConstLocalName(reader)) == 0
      && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read root element {}floodAll.");
#endif
    _floodAll = (FULLNS0FloodAll *)[FULLNS0FloodAll readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Successfully read root element {}floodAll.");
#endif
  }
  else {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read FULLNS0FloodAll. Expected element floodAll. Current element: {}%s", xmlTextReaderConstLocalName(reader)];
    }
    else {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read FULLNS0FloodAll. Expected element floodAll. Current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader)];
    }
  }

  return _floodAll;
}

/**
 * Writes this FULLNS0FloodAll to XML under element name "floodAll".
 * The namespace declarations for the element will be written.
 *
 * @param writer The XML writer.
 * @param _floodAll The FloodAll to write.
 * @return 1 if successful, 0 otherwise.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer
{
  [self writeXMLElement: writer writeNamespaces: YES];
}

/**
 * Writes this FULLNS0FloodAll to an XML writer.
 *
 * @param writer The writer.
 * @param writeNs Whether to write the namespaces for this element to the xml writer.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer writeNamespaces: (BOOL) writeNs
{
  int rc = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "floodAll", NULL);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing start element {}floodAll. XML writer status: %i\n", rc];
  }

#if DEBUG_ENUNCIATE > 1
  NSLog(@"writing type {}floodAll for root element {}floodAll...");
#endif
  [self writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
  NSLog(@"successfully wrote type {}floodAll for root element {}floodAll...");
#endif
  rc = xmlTextWriterEndElement(writer);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing end element {}floodAll. XML writer status: %i\n", rc];
  }
}

//documentation inherited.
- (BOOL) readJAXBAttribute: (xmlTextReaderPtr) reader
{
  void *_child_accessor;

  if ([super readJAXBAttribute: reader]) {
    return YES;
  }

  return NO;
}

//documentation inherited.
- (BOOL) readJAXBValue: (xmlTextReaderPtr) reader
{
  return [super readJAXBValue: reader];
}

//documentation inherited.
- (BOOL) readJAXBChildElement: (xmlTextReaderPtr) reader
{
  id __child;
  void *_child_accessor;
  int status, depth;

  if ([super readJAXBChildElement: reader]) {
    return YES;
  }

  return NO;
}

//documentation inherited.
- (int) readUnknownJAXBChildElement: (xmlTextReaderPtr) reader
{
  return [super readUnknownJAXBChildElement: reader];
}

//documentation inherited.
- (void) readUnknownJAXBAttribute: (xmlTextReaderPtr) reader
{
  [super readUnknownJAXBAttribute: reader];
}

//documentation inherited.
- (void) writeJAXBAttributes: (xmlTextWriterPtr) writer
{
  int status;

  [super writeJAXBAttributes: writer];

}

//documentation inherited.
- (void) writeJAXBValue: (xmlTextWriterPtr) writer
{
  [super writeJAXBValue: writer];
}

/**
 * Method for writing the child elements.
 *
 * @param writer The writer.
 */
- (void) writeJAXBChildElements: (xmlTextWriterPtr) writer
{
  int status;
  id __item;
  NSEnumerator *__enumerator;

  [super writeJAXBChildElements: writer];

}
@end /* implementation FULLNS0FloodAll (JAXB) */

#endif /* DEF_FULLNS0FloodAll_M */
#ifndef DEF_FULLNS0Loopback_M
#define DEF_FULLNS0Loopback_M

/**
 * (no documentation provided)
 */
@implementation FULLNS0Loopback

- (void) dealloc
{
  [super dealloc];
}

//documentation inherited.
+ (id<EnunciateXML>) readFromXML: (NSData *) xml
{
  FULLNS0Loopback *_fULLNS0Loopback;
  xmlTextReaderPtr reader = xmlReaderForMemory([xml bytes], [xml length], NULL, NULL, 0);
  if (reader == NULL) {
    [NSException raise: @"XMLReadError"
                 format: @"Error instantiating an XML reader."];
    return nil;
  }

  _fULLNS0Loopback = (FULLNS0Loopback *) [FULLNS0Loopback readXMLElement: reader];
  xmlFreeTextReader(reader); //free the reader
  return _fULLNS0Loopback;
}

//documentation inherited.
- (NSData *) writeToXML
{
  xmlBufferPtr buf;
  xmlTextWriterPtr writer;
  int rc;
  NSData *data;

  buf = xmlBufferCreate();
  if (buf == NULL) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error creating an XML buffer."];
    return nil;
  }

  writer = xmlNewTextWriterMemory(buf, 0);
  if (writer == NULL) {
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error creating an XML writer."];
    return nil;
  }

  rc = xmlTextWriterStartDocument(writer, NULL, "utf-8", NULL);
  if (rc < 0) {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing XML start document."];
    return nil;
  }

  NS_DURING
  {
    [self writeXMLElement: writer];
  }
  NS_HANDLER
  {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [localException raise];
  }
  NS_ENDHANDLER

  rc = xmlTextWriterEndDocument(writer);
  if (rc < 0) {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing XML end document."];
    return nil;
  }

  xmlFreeTextWriter(writer);
  data = [NSData dataWithBytes: buf->content length: buf->use];
  xmlBufferFree(buf);
  return data;
}
@end /* implementation FULLNS0Loopback */

/**
 * Internal, private interface for JAXB reading and writing.
 */
@interface FULLNS0Loopback (JAXB) <JAXBReading, JAXBWriting, JAXBType, JAXBElement>

@end /*interface FULLNS0Loopback (JAXB)*/

/**
 * Internal, private implementation for JAXB reading and writing.
 */
@implementation FULLNS0Loopback (JAXB)

/**
 * Read an instance of FULLNS0Loopback from an XML reader.
 *
 * @param reader The reader.
 * @return An instance of FULLNS0Loopback defined by the XML reader.
 */
+ (id<JAXBType>) readXMLType: (xmlTextReaderPtr) reader
{
  FULLNS0Loopback *_fULLNS0Loopback = [[FULLNS0Loopback alloc] init];
  NS_DURING
  {
    [_fULLNS0Loopback initWithReader: reader];
  }
  NS_HANDLER
  {
    _fULLNS0Loopback = nil;
    [localException raise];
  }
  NS_ENDHANDLER

  [_fULLNS0Loopback autorelease];
  return _fULLNS0Loopback;
}

/**
 * Initialize this instance of FULLNS0Loopback according to
 * the XML being read from the reader.
 *
 * @param reader The reader.
 */
- (id) initWithReader: (xmlTextReaderPtr) reader
{
  return [super initWithReader: reader];
}

/**
 * Write the XML for this instance of FULLNS0Loopback to the writer.
 * Note that since we're only writing the XML type,
 * No start/end element will be written.
 *
 * @param reader The reader.
 */
- (void) writeXMLType: (xmlTextWriterPtr) writer
{
  [super writeXMLType:writer];
}

/**
 * Reads a FULLNS0Loopback from an XML reader. The element to be read is
 * "loopback".
 *
 * @param reader The XML reader.
 * @return The FULLNS0Loopback.
 */
+ (id<JAXBElement>) readXMLElement: (xmlTextReaderPtr) reader {
  int status;
  FULLNS0Loopback *_loopback = nil;

  if (xmlTextReaderNodeType(reader) != XML_READER_TYPE_ELEMENT) {
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
    if (status < 1) {
      [NSException raise: @"XMLReadError"
                   format: @"Error advancing the reader to start element loopback."];
    }
  }

  if (xmlStrcmp(BAD_CAST "loopback", xmlTextReaderConstLocalName(reader)) == 0
      && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read root element {}loopback.");
#endif
    _loopback = (FULLNS0Loopback *)[FULLNS0Loopback readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Successfully read root element {}loopback.");
#endif
  }
  else {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read FULLNS0Loopback. Expected element loopback. Current element: {}%s", xmlTextReaderConstLocalName(reader)];
    }
    else {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read FULLNS0Loopback. Expected element loopback. Current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader)];
    }
  }

  return _loopback;
}

/**
 * Writes this FULLNS0Loopback to XML under element name "loopback".
 * The namespace declarations for the element will be written.
 *
 * @param writer The XML writer.
 * @param _loopback The Loopback to write.
 * @return 1 if successful, 0 otherwise.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer
{
  [self writeXMLElement: writer writeNamespaces: YES];
}

/**
 * Writes this FULLNS0Loopback to an XML writer.
 *
 * @param writer The writer.
 * @param writeNs Whether to write the namespaces for this element to the xml writer.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer writeNamespaces: (BOOL) writeNs
{
  int rc = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "loopback", NULL);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing start element {}loopback. XML writer status: %i\n", rc];
  }

#if DEBUG_ENUNCIATE > 1
  NSLog(@"writing type {}loopback for root element {}loopback...");
#endif
  [self writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
  NSLog(@"successfully wrote type {}loopback for root element {}loopback...");
#endif
  rc = xmlTextWriterEndElement(writer);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing end element {}loopback. XML writer status: %i\n", rc];
  }
}

//documentation inherited.
- (BOOL) readJAXBAttribute: (xmlTextReaderPtr) reader
{
  void *_child_accessor;

  if ([super readJAXBAttribute: reader]) {
    return YES;
  }

  return NO;
}

//documentation inherited.
- (BOOL) readJAXBValue: (xmlTextReaderPtr) reader
{
  return [super readJAXBValue: reader];
}

//documentation inherited.
- (BOOL) readJAXBChildElement: (xmlTextReaderPtr) reader
{
  id __child;
  void *_child_accessor;
  int status, depth;

  if ([super readJAXBChildElement: reader]) {
    return YES;
  }

  return NO;
}

//documentation inherited.
- (int) readUnknownJAXBChildElement: (xmlTextReaderPtr) reader
{
  return [super readUnknownJAXBChildElement: reader];
}

//documentation inherited.
- (void) readUnknownJAXBAttribute: (xmlTextReaderPtr) reader
{
  [super readUnknownJAXBAttribute: reader];
}

//documentation inherited.
- (void) writeJAXBAttributes: (xmlTextWriterPtr) writer
{
  int status;

  [super writeJAXBAttributes: writer];

}

//documentation inherited.
- (void) writeJAXBValue: (xmlTextWriterPtr) writer
{
  [super writeJAXBValue: writer];
}

/**
 * Method for writing the child elements.
 *
 * @param writer The writer.
 */
- (void) writeJAXBChildElements: (xmlTextWriterPtr) writer
{
  int status;
  id __item;
  NSEnumerator *__enumerator;

  [super writeJAXBChildElements: writer];

}
@end /* implementation FULLNS0Loopback (JAXB) */

#endif /* DEF_FULLNS0Loopback_M */
#ifndef DEF_FULLNS0PopVlan_M
#define DEF_FULLNS0PopVlan_M

/**
 * (no documentation provided)
 */
@implementation FULLNS0PopVlan

- (void) dealloc
{
  [super dealloc];
}

//documentation inherited.
+ (id<EnunciateXML>) readFromXML: (NSData *) xml
{
  FULLNS0PopVlan *_fULLNS0PopVlan;
  xmlTextReaderPtr reader = xmlReaderForMemory([xml bytes], [xml length], NULL, NULL, 0);
  if (reader == NULL) {
    [NSException raise: @"XMLReadError"
                 format: @"Error instantiating an XML reader."];
    return nil;
  }

  _fULLNS0PopVlan = (FULLNS0PopVlan *) [FULLNS0PopVlan readXMLElement: reader];
  xmlFreeTextReader(reader); //free the reader
  return _fULLNS0PopVlan;
}

//documentation inherited.
- (NSData *) writeToXML
{
  xmlBufferPtr buf;
  xmlTextWriterPtr writer;
  int rc;
  NSData *data;

  buf = xmlBufferCreate();
  if (buf == NULL) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error creating an XML buffer."];
    return nil;
  }

  writer = xmlNewTextWriterMemory(buf, 0);
  if (writer == NULL) {
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error creating an XML writer."];
    return nil;
  }

  rc = xmlTextWriterStartDocument(writer, NULL, "utf-8", NULL);
  if (rc < 0) {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing XML start document."];
    return nil;
  }

  NS_DURING
  {
    [self writeXMLElement: writer];
  }
  NS_HANDLER
  {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [localException raise];
  }
  NS_ENDHANDLER

  rc = xmlTextWriterEndDocument(writer);
  if (rc < 0) {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing XML end document."];
    return nil;
  }

  xmlFreeTextWriter(writer);
  data = [NSData dataWithBytes: buf->content length: buf->use];
  xmlBufferFree(buf);
  return data;
}
@end /* implementation FULLNS0PopVlan */

/**
 * Internal, private interface for JAXB reading and writing.
 */
@interface FULLNS0PopVlan (JAXB) <JAXBReading, JAXBWriting, JAXBType, JAXBElement>

@end /*interface FULLNS0PopVlan (JAXB)*/

/**
 * Internal, private implementation for JAXB reading and writing.
 */
@implementation FULLNS0PopVlan (JAXB)

/**
 * Read an instance of FULLNS0PopVlan from an XML reader.
 *
 * @param reader The reader.
 * @return An instance of FULLNS0PopVlan defined by the XML reader.
 */
+ (id<JAXBType>) readXMLType: (xmlTextReaderPtr) reader
{
  FULLNS0PopVlan *_fULLNS0PopVlan = [[FULLNS0PopVlan alloc] init];
  NS_DURING
  {
    [_fULLNS0PopVlan initWithReader: reader];
  }
  NS_HANDLER
  {
    _fULLNS0PopVlan = nil;
    [localException raise];
  }
  NS_ENDHANDLER

  [_fULLNS0PopVlan autorelease];
  return _fULLNS0PopVlan;
}

/**
 * Initialize this instance of FULLNS0PopVlan according to
 * the XML being read from the reader.
 *
 * @param reader The reader.
 */
- (id) initWithReader: (xmlTextReaderPtr) reader
{
  return [super initWithReader: reader];
}

/**
 * Write the XML for this instance of FULLNS0PopVlan to the writer.
 * Note that since we're only writing the XML type,
 * No start/end element will be written.
 *
 * @param reader The reader.
 */
- (void) writeXMLType: (xmlTextWriterPtr) writer
{
  [super writeXMLType:writer];
}

/**
 * Reads a FULLNS0PopVlan from an XML reader. The element to be read is
 * "popVlan".
 *
 * @param reader The XML reader.
 * @return The FULLNS0PopVlan.
 */
+ (id<JAXBElement>) readXMLElement: (xmlTextReaderPtr) reader {
  int status;
  FULLNS0PopVlan *_popVlan = nil;

  if (xmlTextReaderNodeType(reader) != XML_READER_TYPE_ELEMENT) {
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
    if (status < 1) {
      [NSException raise: @"XMLReadError"
                   format: @"Error advancing the reader to start element popVlan."];
    }
  }

  if (xmlStrcmp(BAD_CAST "popVlan", xmlTextReaderConstLocalName(reader)) == 0
      && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read root element {}popVlan.");
#endif
    _popVlan = (FULLNS0PopVlan *)[FULLNS0PopVlan readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Successfully read root element {}popVlan.");
#endif
  }
  else {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read FULLNS0PopVlan. Expected element popVlan. Current element: {}%s", xmlTextReaderConstLocalName(reader)];
    }
    else {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read FULLNS0PopVlan. Expected element popVlan. Current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader)];
    }
  }

  return _popVlan;
}

/**
 * Writes this FULLNS0PopVlan to XML under element name "popVlan".
 * The namespace declarations for the element will be written.
 *
 * @param writer The XML writer.
 * @param _popVlan The PopVlan to write.
 * @return 1 if successful, 0 otherwise.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer
{
  [self writeXMLElement: writer writeNamespaces: YES];
}

/**
 * Writes this FULLNS0PopVlan to an XML writer.
 *
 * @param writer The writer.
 * @param writeNs Whether to write the namespaces for this element to the xml writer.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer writeNamespaces: (BOOL) writeNs
{
  int rc = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "popVlan", NULL);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing start element {}popVlan. XML writer status: %i\n", rc];
  }

#if DEBUG_ENUNCIATE > 1
  NSLog(@"writing type {}popVlan for root element {}popVlan...");
#endif
  [self writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
  NSLog(@"successfully wrote type {}popVlan for root element {}popVlan...");
#endif
  rc = xmlTextWriterEndElement(writer);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing end element {}popVlan. XML writer status: %i\n", rc];
  }
}

//documentation inherited.
- (BOOL) readJAXBAttribute: (xmlTextReaderPtr) reader
{
  void *_child_accessor;

  if ([super readJAXBAttribute: reader]) {
    return YES;
  }

  return NO;
}

//documentation inherited.
- (BOOL) readJAXBValue: (xmlTextReaderPtr) reader
{
  return [super readJAXBValue: reader];
}

//documentation inherited.
- (BOOL) readJAXBChildElement: (xmlTextReaderPtr) reader
{
  id __child;
  void *_child_accessor;
  int status, depth;

  if ([super readJAXBChildElement: reader]) {
    return YES;
  }

  return NO;
}

//documentation inherited.
- (int) readUnknownJAXBChildElement: (xmlTextReaderPtr) reader
{
  return [super readUnknownJAXBChildElement: reader];
}

//documentation inherited.
- (void) readUnknownJAXBAttribute: (xmlTextReaderPtr) reader
{
  [super readUnknownJAXBAttribute: reader];
}

//documentation inherited.
- (void) writeJAXBAttributes: (xmlTextWriterPtr) writer
{
  int status;

  [super writeJAXBAttributes: writer];

}

//documentation inherited.
- (void) writeJAXBValue: (xmlTextWriterPtr) writer
{
  [super writeJAXBValue: writer];
}

/**
 * Method for writing the child elements.
 *
 * @param writer The writer.
 */
- (void) writeJAXBChildElements: (xmlTextWriterPtr) writer
{
  int status;
  id __item;
  NSEnumerator *__enumerator;

  [super writeJAXBChildElements: writer];

}
@end /* implementation FULLNS0PopVlan (JAXB) */

#endif /* DEF_FULLNS0PopVlan_M */
#ifndef DEF_FULLNS0SetDlDst_M
#define DEF_FULLNS0SetDlDst_M

/**
 * (no documentation provided)
 */
@implementation FULLNS0SetDlDst

/**
 * (no documentation provided)
 */
- (NSString *) dlAddressString
{
  return _dlAddressString;
}

/**
 * (no documentation provided)
 */
- (void) setDlAddressString: (NSString *) newDlAddressString
{
  [newDlAddressString retain];
  [_dlAddressString release];
  _dlAddressString = newDlAddressString;
}

- (void) dealloc
{
  [self setDlAddressString: nil];
  [super dealloc];
}

//documentation inherited.
+ (id<EnunciateXML>) readFromXML: (NSData *) xml
{
  FULLNS0SetDlDst *_fULLNS0SetDlDst;
  xmlTextReaderPtr reader = xmlReaderForMemory([xml bytes], [xml length], NULL, NULL, 0);
  if (reader == NULL) {
    [NSException raise: @"XMLReadError"
                 format: @"Error instantiating an XML reader."];
    return nil;
  }

  _fULLNS0SetDlDst = (FULLNS0SetDlDst *) [FULLNS0SetDlDst readXMLElement: reader];
  xmlFreeTextReader(reader); //free the reader
  return _fULLNS0SetDlDst;
}

//documentation inherited.
- (NSData *) writeToXML
{
  xmlBufferPtr buf;
  xmlTextWriterPtr writer;
  int rc;
  NSData *data;

  buf = xmlBufferCreate();
  if (buf == NULL) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error creating an XML buffer."];
    return nil;
  }

  writer = xmlNewTextWriterMemory(buf, 0);
  if (writer == NULL) {
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error creating an XML writer."];
    return nil;
  }

  rc = xmlTextWriterStartDocument(writer, NULL, "utf-8", NULL);
  if (rc < 0) {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing XML start document."];
    return nil;
  }

  NS_DURING
  {
    [self writeXMLElement: writer];
  }
  NS_HANDLER
  {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [localException raise];
  }
  NS_ENDHANDLER

  rc = xmlTextWriterEndDocument(writer);
  if (rc < 0) {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing XML end document."];
    return nil;
  }

  xmlFreeTextWriter(writer);
  data = [NSData dataWithBytes: buf->content length: buf->use];
  xmlBufferFree(buf);
  return data;
}
@end /* implementation FULLNS0SetDlDst */

/**
 * Internal, private interface for JAXB reading and writing.
 */
@interface FULLNS0SetDlDst (JAXB) <JAXBReading, JAXBWriting, JAXBType, JAXBElement>

@end /*interface FULLNS0SetDlDst (JAXB)*/

/**
 * Internal, private implementation for JAXB reading and writing.
 */
@implementation FULLNS0SetDlDst (JAXB)

/**
 * Read an instance of FULLNS0SetDlDst from an XML reader.
 *
 * @param reader The reader.
 * @return An instance of FULLNS0SetDlDst defined by the XML reader.
 */
+ (id<JAXBType>) readXMLType: (xmlTextReaderPtr) reader
{
  FULLNS0SetDlDst *_fULLNS0SetDlDst = [[FULLNS0SetDlDst alloc] init];
  NS_DURING
  {
    [_fULLNS0SetDlDst initWithReader: reader];
  }
  NS_HANDLER
  {
    _fULLNS0SetDlDst = nil;
    [localException raise];
  }
  NS_ENDHANDLER

  [_fULLNS0SetDlDst autorelease];
  return _fULLNS0SetDlDst;
}

/**
 * Initialize this instance of FULLNS0SetDlDst according to
 * the XML being read from the reader.
 *
 * @param reader The reader.
 */
- (id) initWithReader: (xmlTextReaderPtr) reader
{
  return [super initWithReader: reader];
}

/**
 * Write the XML for this instance of FULLNS0SetDlDst to the writer.
 * Note that since we're only writing the XML type,
 * No start/end element will be written.
 *
 * @param reader The reader.
 */
- (void) writeXMLType: (xmlTextWriterPtr) writer
{
  [super writeXMLType:writer];
}

/**
 * Reads a FULLNS0SetDlDst from an XML reader. The element to be read is
 * "setDlDst".
 *
 * @param reader The XML reader.
 * @return The FULLNS0SetDlDst.
 */
+ (id<JAXBElement>) readXMLElement: (xmlTextReaderPtr) reader {
  int status;
  FULLNS0SetDlDst *_setDlDst = nil;

  if (xmlTextReaderNodeType(reader) != XML_READER_TYPE_ELEMENT) {
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
    if (status < 1) {
      [NSException raise: @"XMLReadError"
                   format: @"Error advancing the reader to start element setDlDst."];
    }
  }

  if (xmlStrcmp(BAD_CAST "setDlDst", xmlTextReaderConstLocalName(reader)) == 0
      && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read root element {}setDlDst.");
#endif
    _setDlDst = (FULLNS0SetDlDst *)[FULLNS0SetDlDst readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Successfully read root element {}setDlDst.");
#endif
  }
  else {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read FULLNS0SetDlDst. Expected element setDlDst. Current element: {}%s", xmlTextReaderConstLocalName(reader)];
    }
    else {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read FULLNS0SetDlDst. Expected element setDlDst. Current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader)];
    }
  }

  return _setDlDst;
}

/**
 * Writes this FULLNS0SetDlDst to XML under element name "setDlDst".
 * The namespace declarations for the element will be written.
 *
 * @param writer The XML writer.
 * @param _setDlDst The SetDlDst to write.
 * @return 1 if successful, 0 otherwise.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer
{
  [self writeXMLElement: writer writeNamespaces: YES];
}

/**
 * Writes this FULLNS0SetDlDst to an XML writer.
 *
 * @param writer The writer.
 * @param writeNs Whether to write the namespaces for this element to the xml writer.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer writeNamespaces: (BOOL) writeNs
{
  int rc = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "setDlDst", NULL);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing start element {}setDlDst. XML writer status: %i\n", rc];
  }

#if DEBUG_ENUNCIATE > 1
  NSLog(@"writing type {}setDlDst for root element {}setDlDst...");
#endif
  [self writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
  NSLog(@"successfully wrote type {}setDlDst for root element {}setDlDst...");
#endif
  rc = xmlTextWriterEndElement(writer);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing end element {}setDlDst. XML writer status: %i\n", rc];
  }
}

//documentation inherited.
- (BOOL) readJAXBAttribute: (xmlTextReaderPtr) reader
{
  void *_child_accessor;

  if ([super readJAXBAttribute: reader]) {
    return YES;
  }

  return NO;
}

//documentation inherited.
- (BOOL) readJAXBValue: (xmlTextReaderPtr) reader
{
  return [super readJAXBValue: reader];
}

//documentation inherited.
- (BOOL) readJAXBChildElement: (xmlTextReaderPtr) reader
{
  id __child;
  void *_child_accessor;
  int status, depth;

  if ([super readJAXBChildElement: reader]) {
    return YES;
  }
  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "address", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}address of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}address of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setDlAddressString: __child];
    return YES;
  } //end "if choice"


  return NO;
}

//documentation inherited.
- (int) readUnknownJAXBChildElement: (xmlTextReaderPtr) reader
{
  return [super readUnknownJAXBChildElement: reader];
}

//documentation inherited.
- (void) readUnknownJAXBAttribute: (xmlTextReaderPtr) reader
{
  [super readUnknownJAXBAttribute: reader];
}

//documentation inherited.
- (void) writeJAXBAttributes: (xmlTextWriterPtr) writer
{
  int status;

  [super writeJAXBAttributes: writer];

}

//documentation inherited.
- (void) writeJAXBValue: (xmlTextWriterPtr) writer
{
  [super writeJAXBValue: writer];
}

/**
 * Method for writing the child elements.
 *
 * @param writer The writer.
 */
- (void) writeJAXBChildElements: (xmlTextWriterPtr) writer
{
  int status;
  id __item;
  NSEnumerator *__enumerator;

  [super writeJAXBChildElements: writer];

  if ([self dlAddressString]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "address", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}address."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}address...");
#endif
    [[self dlAddressString] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}address...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}address."];
    }
  }
}
@end /* implementation FULLNS0SetDlDst (JAXB) */

#endif /* DEF_FULLNS0SetDlDst_M */
#ifndef DEF_FULLNS0SetDlType_M
#define DEF_FULLNS0SetDlType_M

/**
 * (no documentation provided)
 */
@implementation FULLNS0SetDlType

/**
 * (no documentation provided)
 */
- (int) dlType
{
  return _dlType;
}

/**
 * (no documentation provided)
 */
- (void) setDlType: (int) newDlType
{
  _dlType = newDlType;
}

- (void) dealloc
{
  [super dealloc];
}

//documentation inherited.
+ (id<EnunciateXML>) readFromXML: (NSData *) xml
{
  FULLNS0SetDlType *_fULLNS0SetDlType;
  xmlTextReaderPtr reader = xmlReaderForMemory([xml bytes], [xml length], NULL, NULL, 0);
  if (reader == NULL) {
    [NSException raise: @"XMLReadError"
                 format: @"Error instantiating an XML reader."];
    return nil;
  }

  _fULLNS0SetDlType = (FULLNS0SetDlType *) [FULLNS0SetDlType readXMLElement: reader];
  xmlFreeTextReader(reader); //free the reader
  return _fULLNS0SetDlType;
}

//documentation inherited.
- (NSData *) writeToXML
{
  xmlBufferPtr buf;
  xmlTextWriterPtr writer;
  int rc;
  NSData *data;

  buf = xmlBufferCreate();
  if (buf == NULL) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error creating an XML buffer."];
    return nil;
  }

  writer = xmlNewTextWriterMemory(buf, 0);
  if (writer == NULL) {
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error creating an XML writer."];
    return nil;
  }

  rc = xmlTextWriterStartDocument(writer, NULL, "utf-8", NULL);
  if (rc < 0) {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing XML start document."];
    return nil;
  }

  NS_DURING
  {
    [self writeXMLElement: writer];
  }
  NS_HANDLER
  {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [localException raise];
  }
  NS_ENDHANDLER

  rc = xmlTextWriterEndDocument(writer);
  if (rc < 0) {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing XML end document."];
    return nil;
  }

  xmlFreeTextWriter(writer);
  data = [NSData dataWithBytes: buf->content length: buf->use];
  xmlBufferFree(buf);
  return data;
}
@end /* implementation FULLNS0SetDlType */

/**
 * Internal, private interface for JAXB reading and writing.
 */
@interface FULLNS0SetDlType (JAXB) <JAXBReading, JAXBWriting, JAXBType, JAXBElement>

@end /*interface FULLNS0SetDlType (JAXB)*/

/**
 * Internal, private implementation for JAXB reading and writing.
 */
@implementation FULLNS0SetDlType (JAXB)

/**
 * Read an instance of FULLNS0SetDlType from an XML reader.
 *
 * @param reader The reader.
 * @return An instance of FULLNS0SetDlType defined by the XML reader.
 */
+ (id<JAXBType>) readXMLType: (xmlTextReaderPtr) reader
{
  FULLNS0SetDlType *_fULLNS0SetDlType = [[FULLNS0SetDlType alloc] init];
  NS_DURING
  {
    [_fULLNS0SetDlType initWithReader: reader];
  }
  NS_HANDLER
  {
    _fULLNS0SetDlType = nil;
    [localException raise];
  }
  NS_ENDHANDLER

  [_fULLNS0SetDlType autorelease];
  return _fULLNS0SetDlType;
}

/**
 * Initialize this instance of FULLNS0SetDlType according to
 * the XML being read from the reader.
 *
 * @param reader The reader.
 */
- (id) initWithReader: (xmlTextReaderPtr) reader
{
  return [super initWithReader: reader];
}

/**
 * Write the XML for this instance of FULLNS0SetDlType to the writer.
 * Note that since we're only writing the XML type,
 * No start/end element will be written.
 *
 * @param reader The reader.
 */
- (void) writeXMLType: (xmlTextWriterPtr) writer
{
  [super writeXMLType:writer];
}

/**
 * Reads a FULLNS0SetDlType from an XML reader. The element to be read is
 * "setDlType".
 *
 * @param reader The XML reader.
 * @return The FULLNS0SetDlType.
 */
+ (id<JAXBElement>) readXMLElement: (xmlTextReaderPtr) reader {
  int status;
  FULLNS0SetDlType *_setDlType = nil;

  if (xmlTextReaderNodeType(reader) != XML_READER_TYPE_ELEMENT) {
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
    if (status < 1) {
      [NSException raise: @"XMLReadError"
                   format: @"Error advancing the reader to start element setDlType."];
    }
  }

  if (xmlStrcmp(BAD_CAST "setDlType", xmlTextReaderConstLocalName(reader)) == 0
      && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read root element {}setDlType.");
#endif
    _setDlType = (FULLNS0SetDlType *)[FULLNS0SetDlType readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Successfully read root element {}setDlType.");
#endif
  }
  else {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read FULLNS0SetDlType. Expected element setDlType. Current element: {}%s", xmlTextReaderConstLocalName(reader)];
    }
    else {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read FULLNS0SetDlType. Expected element setDlType. Current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader)];
    }
  }

  return _setDlType;
}

/**
 * Writes this FULLNS0SetDlType to XML under element name "setDlType".
 * The namespace declarations for the element will be written.
 *
 * @param writer The XML writer.
 * @param _setDlType The SetDlType to write.
 * @return 1 if successful, 0 otherwise.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer
{
  [self writeXMLElement: writer writeNamespaces: YES];
}

/**
 * Writes this FULLNS0SetDlType to an XML writer.
 *
 * @param writer The writer.
 * @param writeNs Whether to write the namespaces for this element to the xml writer.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer writeNamespaces: (BOOL) writeNs
{
  int rc = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "setDlType", NULL);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing start element {}setDlType. XML writer status: %i\n", rc];
  }

#if DEBUG_ENUNCIATE > 1
  NSLog(@"writing type {}setDlType for root element {}setDlType...");
#endif
  [self writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
  NSLog(@"successfully wrote type {}setDlType for root element {}setDlType...");
#endif
  rc = xmlTextWriterEndElement(writer);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing end element {}setDlType. XML writer status: %i\n", rc];
  }
}

//documentation inherited.
- (BOOL) readJAXBAttribute: (xmlTextReaderPtr) reader
{
  void *_child_accessor;

  if ([super readJAXBAttribute: reader]) {
    return YES;
  }

  return NO;
}

//documentation inherited.
- (BOOL) readJAXBValue: (xmlTextReaderPtr) reader
{
  return [super readJAXBValue: reader];
}

//documentation inherited.
- (BOOL) readJAXBChildElement: (xmlTextReaderPtr) reader
{
  id __child;
  void *_child_accessor;
  int status, depth;

  if ([super readJAXBChildElement: reader]) {
    return YES;
  }

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "dlType", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

    _child_accessor = xmlTextReaderReadIntType(reader);
    if (_child_accessor == NULL) {
      //panic: unable to return the value for some reason.
      [NSException raise: @"XMLReadError"
                   format: @"Error reading element value."];
    }
    [self setDlType: *((int*) _child_accessor)];
    free(_child_accessor);
    return YES;
  }

  return NO;
}

//documentation inherited.
- (int) readUnknownJAXBChildElement: (xmlTextReaderPtr) reader
{
  return [super readUnknownJAXBChildElement: reader];
}

//documentation inherited.
- (void) readUnknownJAXBAttribute: (xmlTextReaderPtr) reader
{
  [super readUnknownJAXBAttribute: reader];
}

//documentation inherited.
- (void) writeJAXBAttributes: (xmlTextWriterPtr) writer
{
  int status;

  [super writeJAXBAttributes: writer];

}

//documentation inherited.
- (void) writeJAXBValue: (xmlTextWriterPtr) writer
{
  [super writeJAXBValue: writer];
}

/**
 * Method for writing the child elements.
 *
 * @param writer The writer.
 */
- (void) writeJAXBChildElements: (xmlTextWriterPtr) writer
{
  int status;
  id __item;
  NSEnumerator *__enumerator;

  [super writeJAXBChildElements: writer];

  if (YES) { //always write the primitive element...
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "dlType", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}dlType."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}dlType...");
#endif
    status = xmlTextWriterWriteIntType(writer, &_dlType);
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}dlType...");
#endif
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing child element {}dlType."];
    }

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}dlType."];
    }
  }
}
@end /* implementation FULLNS0SetDlType (JAXB) */

#endif /* DEF_FULLNS0SetDlType_M */
#ifndef DEF_FULLNS0SetNwSrc_M
#define DEF_FULLNS0SetNwSrc_M

/**
 * (no documentation provided)
 */
@implementation FULLNS0SetNwSrc

/**
 * (no documentation provided)
 */
- (NSString *) addressAsString
{
  return _addressAsString;
}

/**
 * (no documentation provided)
 */
- (void) setAddressAsString: (NSString *) newAddressAsString
{
  [newAddressAsString retain];
  [_addressAsString release];
  _addressAsString = newAddressAsString;
}

- (void) dealloc
{
  [self setAddressAsString: nil];
  [super dealloc];
}

//documentation inherited.
+ (id<EnunciateXML>) readFromXML: (NSData *) xml
{
  FULLNS0SetNwSrc *_fULLNS0SetNwSrc;
  xmlTextReaderPtr reader = xmlReaderForMemory([xml bytes], [xml length], NULL, NULL, 0);
  if (reader == NULL) {
    [NSException raise: @"XMLReadError"
                 format: @"Error instantiating an XML reader."];
    return nil;
  }

  _fULLNS0SetNwSrc = (FULLNS0SetNwSrc *) [FULLNS0SetNwSrc readXMLElement: reader];
  xmlFreeTextReader(reader); //free the reader
  return _fULLNS0SetNwSrc;
}

//documentation inherited.
- (NSData *) writeToXML
{
  xmlBufferPtr buf;
  xmlTextWriterPtr writer;
  int rc;
  NSData *data;

  buf = xmlBufferCreate();
  if (buf == NULL) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error creating an XML buffer."];
    return nil;
  }

  writer = xmlNewTextWriterMemory(buf, 0);
  if (writer == NULL) {
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error creating an XML writer."];
    return nil;
  }

  rc = xmlTextWriterStartDocument(writer, NULL, "utf-8", NULL);
  if (rc < 0) {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing XML start document."];
    return nil;
  }

  NS_DURING
  {
    [self writeXMLElement: writer];
  }
  NS_HANDLER
  {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [localException raise];
  }
  NS_ENDHANDLER

  rc = xmlTextWriterEndDocument(writer);
  if (rc < 0) {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing XML end document."];
    return nil;
  }

  xmlFreeTextWriter(writer);
  data = [NSData dataWithBytes: buf->content length: buf->use];
  xmlBufferFree(buf);
  return data;
}
@end /* implementation FULLNS0SetNwSrc */

/**
 * Internal, private interface for JAXB reading and writing.
 */
@interface FULLNS0SetNwSrc (JAXB) <JAXBReading, JAXBWriting, JAXBType, JAXBElement>

@end /*interface FULLNS0SetNwSrc (JAXB)*/

/**
 * Internal, private implementation for JAXB reading and writing.
 */
@implementation FULLNS0SetNwSrc (JAXB)

/**
 * Read an instance of FULLNS0SetNwSrc from an XML reader.
 *
 * @param reader The reader.
 * @return An instance of FULLNS0SetNwSrc defined by the XML reader.
 */
+ (id<JAXBType>) readXMLType: (xmlTextReaderPtr) reader
{
  FULLNS0SetNwSrc *_fULLNS0SetNwSrc = [[FULLNS0SetNwSrc alloc] init];
  NS_DURING
  {
    [_fULLNS0SetNwSrc initWithReader: reader];
  }
  NS_HANDLER
  {
    _fULLNS0SetNwSrc = nil;
    [localException raise];
  }
  NS_ENDHANDLER

  [_fULLNS0SetNwSrc autorelease];
  return _fULLNS0SetNwSrc;
}

/**
 * Initialize this instance of FULLNS0SetNwSrc according to
 * the XML being read from the reader.
 *
 * @param reader The reader.
 */
- (id) initWithReader: (xmlTextReaderPtr) reader
{
  return [super initWithReader: reader];
}

/**
 * Write the XML for this instance of FULLNS0SetNwSrc to the writer.
 * Note that since we're only writing the XML type,
 * No start/end element will be written.
 *
 * @param reader The reader.
 */
- (void) writeXMLType: (xmlTextWriterPtr) writer
{
  [super writeXMLType:writer];
}

/**
 * Reads a FULLNS0SetNwSrc from an XML reader. The element to be read is
 * "setNwSrc".
 *
 * @param reader The XML reader.
 * @return The FULLNS0SetNwSrc.
 */
+ (id<JAXBElement>) readXMLElement: (xmlTextReaderPtr) reader {
  int status;
  FULLNS0SetNwSrc *_setNwSrc = nil;

  if (xmlTextReaderNodeType(reader) != XML_READER_TYPE_ELEMENT) {
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
    if (status < 1) {
      [NSException raise: @"XMLReadError"
                   format: @"Error advancing the reader to start element setNwSrc."];
    }
  }

  if (xmlStrcmp(BAD_CAST "setNwSrc", xmlTextReaderConstLocalName(reader)) == 0
      && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read root element {}setNwSrc.");
#endif
    _setNwSrc = (FULLNS0SetNwSrc *)[FULLNS0SetNwSrc readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Successfully read root element {}setNwSrc.");
#endif
  }
  else {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read FULLNS0SetNwSrc. Expected element setNwSrc. Current element: {}%s", xmlTextReaderConstLocalName(reader)];
    }
    else {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read FULLNS0SetNwSrc. Expected element setNwSrc. Current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader)];
    }
  }

  return _setNwSrc;
}

/**
 * Writes this FULLNS0SetNwSrc to XML under element name "setNwSrc".
 * The namespace declarations for the element will be written.
 *
 * @param writer The XML writer.
 * @param _setNwSrc The SetNwSrc to write.
 * @return 1 if successful, 0 otherwise.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer
{
  [self writeXMLElement: writer writeNamespaces: YES];
}

/**
 * Writes this FULLNS0SetNwSrc to an XML writer.
 *
 * @param writer The writer.
 * @param writeNs Whether to write the namespaces for this element to the xml writer.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer writeNamespaces: (BOOL) writeNs
{
  int rc = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "setNwSrc", NULL);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing start element {}setNwSrc. XML writer status: %i\n", rc];
  }

#if DEBUG_ENUNCIATE > 1
  NSLog(@"writing type {}setNwSrc for root element {}setNwSrc...");
#endif
  [self writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
  NSLog(@"successfully wrote type {}setNwSrc for root element {}setNwSrc...");
#endif
  rc = xmlTextWriterEndElement(writer);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing end element {}setNwSrc. XML writer status: %i\n", rc];
  }
}

//documentation inherited.
- (BOOL) readJAXBAttribute: (xmlTextReaderPtr) reader
{
  void *_child_accessor;

  if ([super readJAXBAttribute: reader]) {
    return YES;
  }

  return NO;
}

//documentation inherited.
- (BOOL) readJAXBValue: (xmlTextReaderPtr) reader
{
  return [super readJAXBValue: reader];
}

//documentation inherited.
- (BOOL) readJAXBChildElement: (xmlTextReaderPtr) reader
{
  id __child;
  void *_child_accessor;
  int status, depth;

  if ([super readJAXBChildElement: reader]) {
    return YES;
  }
  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "address", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}address of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}address of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setAddressAsString: __child];
    return YES;
  } //end "if choice"


  return NO;
}

//documentation inherited.
- (int) readUnknownJAXBChildElement: (xmlTextReaderPtr) reader
{
  return [super readUnknownJAXBChildElement: reader];
}

//documentation inherited.
- (void) readUnknownJAXBAttribute: (xmlTextReaderPtr) reader
{
  [super readUnknownJAXBAttribute: reader];
}

//documentation inherited.
- (void) writeJAXBAttributes: (xmlTextWriterPtr) writer
{
  int status;

  [super writeJAXBAttributes: writer];

}

//documentation inherited.
- (void) writeJAXBValue: (xmlTextWriterPtr) writer
{
  [super writeJAXBValue: writer];
}

/**
 * Method for writing the child elements.
 *
 * @param writer The writer.
 */
- (void) writeJAXBChildElements: (xmlTextWriterPtr) writer
{
  int status;
  id __item;
  NSEnumerator *__enumerator;

  [super writeJAXBChildElements: writer];

  if ([self addressAsString]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "address", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}address."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}address...");
#endif
    [[self addressAsString] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}address...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}address."];
    }
  }
}
@end /* implementation FULLNS0SetNwSrc (JAXB) */

#endif /* DEF_FULLNS0SetNwSrc_M */
#ifndef DEF_FULLNS0SetTpDst_M
#define DEF_FULLNS0SetTpDst_M

/**
 * (no documentation provided)
 */
@implementation FULLNS0SetTpDst

/**
 * (no documentation provided)
 */
- (int) port
{
  return _port;
}

/**
 * (no documentation provided)
 */
- (void) setPort: (int) newPort
{
  _port = newPort;
}

- (void) dealloc
{
  [super dealloc];
}

//documentation inherited.
+ (id<EnunciateXML>) readFromXML: (NSData *) xml
{
  FULLNS0SetTpDst *_fULLNS0SetTpDst;
  xmlTextReaderPtr reader = xmlReaderForMemory([xml bytes], [xml length], NULL, NULL, 0);
  if (reader == NULL) {
    [NSException raise: @"XMLReadError"
                 format: @"Error instantiating an XML reader."];
    return nil;
  }

  _fULLNS0SetTpDst = (FULLNS0SetTpDst *) [FULLNS0SetTpDst readXMLElement: reader];
  xmlFreeTextReader(reader); //free the reader
  return _fULLNS0SetTpDst;
}

//documentation inherited.
- (NSData *) writeToXML
{
  xmlBufferPtr buf;
  xmlTextWriterPtr writer;
  int rc;
  NSData *data;

  buf = xmlBufferCreate();
  if (buf == NULL) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error creating an XML buffer."];
    return nil;
  }

  writer = xmlNewTextWriterMemory(buf, 0);
  if (writer == NULL) {
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error creating an XML writer."];
    return nil;
  }

  rc = xmlTextWriterStartDocument(writer, NULL, "utf-8", NULL);
  if (rc < 0) {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing XML start document."];
    return nil;
  }

  NS_DURING
  {
    [self writeXMLElement: writer];
  }
  NS_HANDLER
  {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [localException raise];
  }
  NS_ENDHANDLER

  rc = xmlTextWriterEndDocument(writer);
  if (rc < 0) {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing XML end document."];
    return nil;
  }

  xmlFreeTextWriter(writer);
  data = [NSData dataWithBytes: buf->content length: buf->use];
  xmlBufferFree(buf);
  return data;
}
@end /* implementation FULLNS0SetTpDst */

/**
 * Internal, private interface for JAXB reading and writing.
 */
@interface FULLNS0SetTpDst (JAXB) <JAXBReading, JAXBWriting, JAXBType, JAXBElement>

@end /*interface FULLNS0SetTpDst (JAXB)*/

/**
 * Internal, private implementation for JAXB reading and writing.
 */
@implementation FULLNS0SetTpDst (JAXB)

/**
 * Read an instance of FULLNS0SetTpDst from an XML reader.
 *
 * @param reader The reader.
 * @return An instance of FULLNS0SetTpDst defined by the XML reader.
 */
+ (id<JAXBType>) readXMLType: (xmlTextReaderPtr) reader
{
  FULLNS0SetTpDst *_fULLNS0SetTpDst = [[FULLNS0SetTpDst alloc] init];
  NS_DURING
  {
    [_fULLNS0SetTpDst initWithReader: reader];
  }
  NS_HANDLER
  {
    _fULLNS0SetTpDst = nil;
    [localException raise];
  }
  NS_ENDHANDLER

  [_fULLNS0SetTpDst autorelease];
  return _fULLNS0SetTpDst;
}

/**
 * Initialize this instance of FULLNS0SetTpDst according to
 * the XML being read from the reader.
 *
 * @param reader The reader.
 */
- (id) initWithReader: (xmlTextReaderPtr) reader
{
  return [super initWithReader: reader];
}

/**
 * Write the XML for this instance of FULLNS0SetTpDst to the writer.
 * Note that since we're only writing the XML type,
 * No start/end element will be written.
 *
 * @param reader The reader.
 */
- (void) writeXMLType: (xmlTextWriterPtr) writer
{
  [super writeXMLType:writer];
}

/**
 * Reads a FULLNS0SetTpDst from an XML reader. The element to be read is
 * "setTpDst".
 *
 * @param reader The XML reader.
 * @return The FULLNS0SetTpDst.
 */
+ (id<JAXBElement>) readXMLElement: (xmlTextReaderPtr) reader {
  int status;
  FULLNS0SetTpDst *_setTpDst = nil;

  if (xmlTextReaderNodeType(reader) != XML_READER_TYPE_ELEMENT) {
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
    if (status < 1) {
      [NSException raise: @"XMLReadError"
                   format: @"Error advancing the reader to start element setTpDst."];
    }
  }

  if (xmlStrcmp(BAD_CAST "setTpDst", xmlTextReaderConstLocalName(reader)) == 0
      && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read root element {}setTpDst.");
#endif
    _setTpDst = (FULLNS0SetTpDst *)[FULLNS0SetTpDst readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Successfully read root element {}setTpDst.");
#endif
  }
  else {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read FULLNS0SetTpDst. Expected element setTpDst. Current element: {}%s", xmlTextReaderConstLocalName(reader)];
    }
    else {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read FULLNS0SetTpDst. Expected element setTpDst. Current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader)];
    }
  }

  return _setTpDst;
}

/**
 * Writes this FULLNS0SetTpDst to XML under element name "setTpDst".
 * The namespace declarations for the element will be written.
 *
 * @param writer The XML writer.
 * @param _setTpDst The SetTpDst to write.
 * @return 1 if successful, 0 otherwise.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer
{
  [self writeXMLElement: writer writeNamespaces: YES];
}

/**
 * Writes this FULLNS0SetTpDst to an XML writer.
 *
 * @param writer The writer.
 * @param writeNs Whether to write the namespaces for this element to the xml writer.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer writeNamespaces: (BOOL) writeNs
{
  int rc = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "setTpDst", NULL);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing start element {}setTpDst. XML writer status: %i\n", rc];
  }

#if DEBUG_ENUNCIATE > 1
  NSLog(@"writing type {}setTpDst for root element {}setTpDst...");
#endif
  [self writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
  NSLog(@"successfully wrote type {}setTpDst for root element {}setTpDst...");
#endif
  rc = xmlTextWriterEndElement(writer);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing end element {}setTpDst. XML writer status: %i\n", rc];
  }
}

//documentation inherited.
- (BOOL) readJAXBAttribute: (xmlTextReaderPtr) reader
{
  void *_child_accessor;

  if ([super readJAXBAttribute: reader]) {
    return YES;
  }

  return NO;
}

//documentation inherited.
- (BOOL) readJAXBValue: (xmlTextReaderPtr) reader
{
  return [super readJAXBValue: reader];
}

//documentation inherited.
- (BOOL) readJAXBChildElement: (xmlTextReaderPtr) reader
{
  id __child;
  void *_child_accessor;
  int status, depth;

  if ([super readJAXBChildElement: reader]) {
    return YES;
  }

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "port", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

    _child_accessor = xmlTextReaderReadIntType(reader);
    if (_child_accessor == NULL) {
      //panic: unable to return the value for some reason.
      [NSException raise: @"XMLReadError"
                   format: @"Error reading element value."];
    }
    [self setPort: *((int*) _child_accessor)];
    free(_child_accessor);
    return YES;
  }

  return NO;
}

//documentation inherited.
- (int) readUnknownJAXBChildElement: (xmlTextReaderPtr) reader
{
  return [super readUnknownJAXBChildElement: reader];
}

//documentation inherited.
- (void) readUnknownJAXBAttribute: (xmlTextReaderPtr) reader
{
  [super readUnknownJAXBAttribute: reader];
}

//documentation inherited.
- (void) writeJAXBAttributes: (xmlTextWriterPtr) writer
{
  int status;

  [super writeJAXBAttributes: writer];

}

//documentation inherited.
- (void) writeJAXBValue: (xmlTextWriterPtr) writer
{
  [super writeJAXBValue: writer];
}

/**
 * Method for writing the child elements.
 *
 * @param writer The writer.
 */
- (void) writeJAXBChildElements: (xmlTextWriterPtr) writer
{
  int status;
  id __item;
  NSEnumerator *__enumerator;

  [super writeJAXBChildElements: writer];

  if (YES) { //always write the primitive element...
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "port", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}port."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}port...");
#endif
    status = xmlTextWriterWriteIntType(writer, &_port);
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}port...");
#endif
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing child element {}port."];
    }

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}port."];
    }
  }
}
@end /* implementation FULLNS0SetTpDst (JAXB) */

#endif /* DEF_FULLNS0SetTpDst_M */
#ifndef DEF_FULLNS0SetVlanCfi_M
#define DEF_FULLNS0SetVlanCfi_M

/**
 * (no documentation provided)
 */
@implementation FULLNS0SetVlanCfi

/**
 * (no documentation provided)
 */
- (int) cfi
{
  return _cfi;
}

/**
 * (no documentation provided)
 */
- (void) setCfi: (int) newCfi
{
  _cfi = newCfi;
}

- (void) dealloc
{
  [super dealloc];
}

//documentation inherited.
+ (id<EnunciateXML>) readFromXML: (NSData *) xml
{
  FULLNS0SetVlanCfi *_fULLNS0SetVlanCfi;
  xmlTextReaderPtr reader = xmlReaderForMemory([xml bytes], [xml length], NULL, NULL, 0);
  if (reader == NULL) {
    [NSException raise: @"XMLReadError"
                 format: @"Error instantiating an XML reader."];
    return nil;
  }

  _fULLNS0SetVlanCfi = (FULLNS0SetVlanCfi *) [FULLNS0SetVlanCfi readXMLElement: reader];
  xmlFreeTextReader(reader); //free the reader
  return _fULLNS0SetVlanCfi;
}

//documentation inherited.
- (NSData *) writeToXML
{
  xmlBufferPtr buf;
  xmlTextWriterPtr writer;
  int rc;
  NSData *data;

  buf = xmlBufferCreate();
  if (buf == NULL) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error creating an XML buffer."];
    return nil;
  }

  writer = xmlNewTextWriterMemory(buf, 0);
  if (writer == NULL) {
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error creating an XML writer."];
    return nil;
  }

  rc = xmlTextWriterStartDocument(writer, NULL, "utf-8", NULL);
  if (rc < 0) {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing XML start document."];
    return nil;
  }

  NS_DURING
  {
    [self writeXMLElement: writer];
  }
  NS_HANDLER
  {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [localException raise];
  }
  NS_ENDHANDLER

  rc = xmlTextWriterEndDocument(writer);
  if (rc < 0) {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing XML end document."];
    return nil;
  }

  xmlFreeTextWriter(writer);
  data = [NSData dataWithBytes: buf->content length: buf->use];
  xmlBufferFree(buf);
  return data;
}
@end /* implementation FULLNS0SetVlanCfi */

/**
 * Internal, private interface for JAXB reading and writing.
 */
@interface FULLNS0SetVlanCfi (JAXB) <JAXBReading, JAXBWriting, JAXBType, JAXBElement>

@end /*interface FULLNS0SetVlanCfi (JAXB)*/

/**
 * Internal, private implementation for JAXB reading and writing.
 */
@implementation FULLNS0SetVlanCfi (JAXB)

/**
 * Read an instance of FULLNS0SetVlanCfi from an XML reader.
 *
 * @param reader The reader.
 * @return An instance of FULLNS0SetVlanCfi defined by the XML reader.
 */
+ (id<JAXBType>) readXMLType: (xmlTextReaderPtr) reader
{
  FULLNS0SetVlanCfi *_fULLNS0SetVlanCfi = [[FULLNS0SetVlanCfi alloc] init];
  NS_DURING
  {
    [_fULLNS0SetVlanCfi initWithReader: reader];
  }
  NS_HANDLER
  {
    _fULLNS0SetVlanCfi = nil;
    [localException raise];
  }
  NS_ENDHANDLER

  [_fULLNS0SetVlanCfi autorelease];
  return _fULLNS0SetVlanCfi;
}

/**
 * Initialize this instance of FULLNS0SetVlanCfi according to
 * the XML being read from the reader.
 *
 * @param reader The reader.
 */
- (id) initWithReader: (xmlTextReaderPtr) reader
{
  return [super initWithReader: reader];
}

/**
 * Write the XML for this instance of FULLNS0SetVlanCfi to the writer.
 * Note that since we're only writing the XML type,
 * No start/end element will be written.
 *
 * @param reader The reader.
 */
- (void) writeXMLType: (xmlTextWriterPtr) writer
{
  [super writeXMLType:writer];
}

/**
 * Reads a FULLNS0SetVlanCfi from an XML reader. The element to be read is
 * "setVlanCfi".
 *
 * @param reader The XML reader.
 * @return The FULLNS0SetVlanCfi.
 */
+ (id<JAXBElement>) readXMLElement: (xmlTextReaderPtr) reader {
  int status;
  FULLNS0SetVlanCfi *_setVlanCfi = nil;

  if (xmlTextReaderNodeType(reader) != XML_READER_TYPE_ELEMENT) {
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
    if (status < 1) {
      [NSException raise: @"XMLReadError"
                   format: @"Error advancing the reader to start element setVlanCfi."];
    }
  }

  if (xmlStrcmp(BAD_CAST "setVlanCfi", xmlTextReaderConstLocalName(reader)) == 0
      && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read root element {}setVlanCfi.");
#endif
    _setVlanCfi = (FULLNS0SetVlanCfi *)[FULLNS0SetVlanCfi readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Successfully read root element {}setVlanCfi.");
#endif
  }
  else {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read FULLNS0SetVlanCfi. Expected element setVlanCfi. Current element: {}%s", xmlTextReaderConstLocalName(reader)];
    }
    else {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read FULLNS0SetVlanCfi. Expected element setVlanCfi. Current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader)];
    }
  }

  return _setVlanCfi;
}

/**
 * Writes this FULLNS0SetVlanCfi to XML under element name "setVlanCfi".
 * The namespace declarations for the element will be written.
 *
 * @param writer The XML writer.
 * @param _setVlanCfi The SetVlanCfi to write.
 * @return 1 if successful, 0 otherwise.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer
{
  [self writeXMLElement: writer writeNamespaces: YES];
}

/**
 * Writes this FULLNS0SetVlanCfi to an XML writer.
 *
 * @param writer The writer.
 * @param writeNs Whether to write the namespaces for this element to the xml writer.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer writeNamespaces: (BOOL) writeNs
{
  int rc = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "setVlanCfi", NULL);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing start element {}setVlanCfi. XML writer status: %i\n", rc];
  }

#if DEBUG_ENUNCIATE > 1
  NSLog(@"writing type {}setVlanCfi for root element {}setVlanCfi...");
#endif
  [self writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
  NSLog(@"successfully wrote type {}setVlanCfi for root element {}setVlanCfi...");
#endif
  rc = xmlTextWriterEndElement(writer);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing end element {}setVlanCfi. XML writer status: %i\n", rc];
  }
}

//documentation inherited.
- (BOOL) readJAXBAttribute: (xmlTextReaderPtr) reader
{
  void *_child_accessor;

  if ([super readJAXBAttribute: reader]) {
    return YES;
  }

  return NO;
}

//documentation inherited.
- (BOOL) readJAXBValue: (xmlTextReaderPtr) reader
{
  return [super readJAXBValue: reader];
}

//documentation inherited.
- (BOOL) readJAXBChildElement: (xmlTextReaderPtr) reader
{
  id __child;
  void *_child_accessor;
  int status, depth;

  if ([super readJAXBChildElement: reader]) {
    return YES;
  }

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "cfi", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

    _child_accessor = xmlTextReaderReadIntType(reader);
    if (_child_accessor == NULL) {
      //panic: unable to return the value for some reason.
      [NSException raise: @"XMLReadError"
                   format: @"Error reading element value."];
    }
    [self setCfi: *((int*) _child_accessor)];
    free(_child_accessor);
    return YES;
  }

  return NO;
}

//documentation inherited.
- (int) readUnknownJAXBChildElement: (xmlTextReaderPtr) reader
{
  return [super readUnknownJAXBChildElement: reader];
}

//documentation inherited.
- (void) readUnknownJAXBAttribute: (xmlTextReaderPtr) reader
{
  [super readUnknownJAXBAttribute: reader];
}

//documentation inherited.
- (void) writeJAXBAttributes: (xmlTextWriterPtr) writer
{
  int status;

  [super writeJAXBAttributes: writer];

}

//documentation inherited.
- (void) writeJAXBValue: (xmlTextWriterPtr) writer
{
  [super writeJAXBValue: writer];
}

/**
 * Method for writing the child elements.
 *
 * @param writer The writer.
 */
- (void) writeJAXBChildElements: (xmlTextWriterPtr) writer
{
  int status;
  id __item;
  NSEnumerator *__enumerator;

  [super writeJAXBChildElements: writer];

  if (YES) { //always write the primitive element...
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "cfi", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}cfi."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}cfi...");
#endif
    status = xmlTextWriterWriteIntType(writer, &_cfi);
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}cfi...");
#endif
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing child element {}cfi."];
    }

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}cfi."];
    }
  }
}
@end /* implementation FULLNS0SetVlanCfi (JAXB) */

#endif /* DEF_FULLNS0SetVlanCfi_M */
#ifndef DEF_FULLNS0SetVlanPcp_M
#define DEF_FULLNS0SetVlanPcp_M

/**
 * (no documentation provided)
 */
@implementation FULLNS0SetVlanPcp

/**
 * (no documentation provided)
 */
- (int) pcp
{
  return _pcp;
}

/**
 * (no documentation provided)
 */
- (void) setPcp: (int) newPcp
{
  _pcp = newPcp;
}

- (void) dealloc
{
  [super dealloc];
}

//documentation inherited.
+ (id<EnunciateXML>) readFromXML: (NSData *) xml
{
  FULLNS0SetVlanPcp *_fULLNS0SetVlanPcp;
  xmlTextReaderPtr reader = xmlReaderForMemory([xml bytes], [xml length], NULL, NULL, 0);
  if (reader == NULL) {
    [NSException raise: @"XMLReadError"
                 format: @"Error instantiating an XML reader."];
    return nil;
  }

  _fULLNS0SetVlanPcp = (FULLNS0SetVlanPcp *) [FULLNS0SetVlanPcp readXMLElement: reader];
  xmlFreeTextReader(reader); //free the reader
  return _fULLNS0SetVlanPcp;
}

//documentation inherited.
- (NSData *) writeToXML
{
  xmlBufferPtr buf;
  xmlTextWriterPtr writer;
  int rc;
  NSData *data;

  buf = xmlBufferCreate();
  if (buf == NULL) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error creating an XML buffer."];
    return nil;
  }

  writer = xmlNewTextWriterMemory(buf, 0);
  if (writer == NULL) {
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error creating an XML writer."];
    return nil;
  }

  rc = xmlTextWriterStartDocument(writer, NULL, "utf-8", NULL);
  if (rc < 0) {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing XML start document."];
    return nil;
  }

  NS_DURING
  {
    [self writeXMLElement: writer];
  }
  NS_HANDLER
  {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [localException raise];
  }
  NS_ENDHANDLER

  rc = xmlTextWriterEndDocument(writer);
  if (rc < 0) {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing XML end document."];
    return nil;
  }

  xmlFreeTextWriter(writer);
  data = [NSData dataWithBytes: buf->content length: buf->use];
  xmlBufferFree(buf);
  return data;
}
@end /* implementation FULLNS0SetVlanPcp */

/**
 * Internal, private interface for JAXB reading and writing.
 */
@interface FULLNS0SetVlanPcp (JAXB) <JAXBReading, JAXBWriting, JAXBType, JAXBElement>

@end /*interface FULLNS0SetVlanPcp (JAXB)*/

/**
 * Internal, private implementation for JAXB reading and writing.
 */
@implementation FULLNS0SetVlanPcp (JAXB)

/**
 * Read an instance of FULLNS0SetVlanPcp from an XML reader.
 *
 * @param reader The reader.
 * @return An instance of FULLNS0SetVlanPcp defined by the XML reader.
 */
+ (id<JAXBType>) readXMLType: (xmlTextReaderPtr) reader
{
  FULLNS0SetVlanPcp *_fULLNS0SetVlanPcp = [[FULLNS0SetVlanPcp alloc] init];
  NS_DURING
  {
    [_fULLNS0SetVlanPcp initWithReader: reader];
  }
  NS_HANDLER
  {
    _fULLNS0SetVlanPcp = nil;
    [localException raise];
  }
  NS_ENDHANDLER

  [_fULLNS0SetVlanPcp autorelease];
  return _fULLNS0SetVlanPcp;
}

/**
 * Initialize this instance of FULLNS0SetVlanPcp according to
 * the XML being read from the reader.
 *
 * @param reader The reader.
 */
- (id) initWithReader: (xmlTextReaderPtr) reader
{
  return [super initWithReader: reader];
}

/**
 * Write the XML for this instance of FULLNS0SetVlanPcp to the writer.
 * Note that since we're only writing the XML type,
 * No start/end element will be written.
 *
 * @param reader The reader.
 */
- (void) writeXMLType: (xmlTextWriterPtr) writer
{
  [super writeXMLType:writer];
}

/**
 * Reads a FULLNS0SetVlanPcp from an XML reader. The element to be read is
 * "setVlanPcp".
 *
 * @param reader The XML reader.
 * @return The FULLNS0SetVlanPcp.
 */
+ (id<JAXBElement>) readXMLElement: (xmlTextReaderPtr) reader {
  int status;
  FULLNS0SetVlanPcp *_setVlanPcp = nil;

  if (xmlTextReaderNodeType(reader) != XML_READER_TYPE_ELEMENT) {
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
    if (status < 1) {
      [NSException raise: @"XMLReadError"
                   format: @"Error advancing the reader to start element setVlanPcp."];
    }
  }

  if (xmlStrcmp(BAD_CAST "setVlanPcp", xmlTextReaderConstLocalName(reader)) == 0
      && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read root element {}setVlanPcp.");
#endif
    _setVlanPcp = (FULLNS0SetVlanPcp *)[FULLNS0SetVlanPcp readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Successfully read root element {}setVlanPcp.");
#endif
  }
  else {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read FULLNS0SetVlanPcp. Expected element setVlanPcp. Current element: {}%s", xmlTextReaderConstLocalName(reader)];
    }
    else {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read FULLNS0SetVlanPcp. Expected element setVlanPcp. Current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader)];
    }
  }

  return _setVlanPcp;
}

/**
 * Writes this FULLNS0SetVlanPcp to XML under element name "setVlanPcp".
 * The namespace declarations for the element will be written.
 *
 * @param writer The XML writer.
 * @param _setVlanPcp The SetVlanPcp to write.
 * @return 1 if successful, 0 otherwise.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer
{
  [self writeXMLElement: writer writeNamespaces: YES];
}

/**
 * Writes this FULLNS0SetVlanPcp to an XML writer.
 *
 * @param writer The writer.
 * @param writeNs Whether to write the namespaces for this element to the xml writer.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer writeNamespaces: (BOOL) writeNs
{
  int rc = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "setVlanPcp", NULL);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing start element {}setVlanPcp. XML writer status: %i\n", rc];
  }

#if DEBUG_ENUNCIATE > 1
  NSLog(@"writing type {}setVlanPcp for root element {}setVlanPcp...");
#endif
  [self writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
  NSLog(@"successfully wrote type {}setVlanPcp for root element {}setVlanPcp...");
#endif
  rc = xmlTextWriterEndElement(writer);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing end element {}setVlanPcp. XML writer status: %i\n", rc];
  }
}

//documentation inherited.
- (BOOL) readJAXBAttribute: (xmlTextReaderPtr) reader
{
  void *_child_accessor;

  if ([super readJAXBAttribute: reader]) {
    return YES;
  }

  return NO;
}

//documentation inherited.
- (BOOL) readJAXBValue: (xmlTextReaderPtr) reader
{
  return [super readJAXBValue: reader];
}

//documentation inherited.
- (BOOL) readJAXBChildElement: (xmlTextReaderPtr) reader
{
  id __child;
  void *_child_accessor;
  int status, depth;

  if ([super readJAXBChildElement: reader]) {
    return YES;
  }

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "pcp", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

    _child_accessor = xmlTextReaderReadIntType(reader);
    if (_child_accessor == NULL) {
      //panic: unable to return the value for some reason.
      [NSException raise: @"XMLReadError"
                   format: @"Error reading element value."];
    }
    [self setPcp: *((int*) _child_accessor)];
    free(_child_accessor);
    return YES;
  }

  return NO;
}

//documentation inherited.
- (int) readUnknownJAXBChildElement: (xmlTextReaderPtr) reader
{
  return [super readUnknownJAXBChildElement: reader];
}

//documentation inherited.
- (void) readUnknownJAXBAttribute: (xmlTextReaderPtr) reader
{
  [super readUnknownJAXBAttribute: reader];
}

//documentation inherited.
- (void) writeJAXBAttributes: (xmlTextWriterPtr) writer
{
  int status;

  [super writeJAXBAttributes: writer];

}

//documentation inherited.
- (void) writeJAXBValue: (xmlTextWriterPtr) writer
{
  [super writeJAXBValue: writer];
}

/**
 * Method for writing the child elements.
 *
 * @param writer The writer.
 */
- (void) writeJAXBChildElements: (xmlTextWriterPtr) writer
{
  int status;
  id __item;
  NSEnumerator *__enumerator;

  [super writeJAXBChildElements: writer];

  if (YES) { //always write the primitive element...
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "pcp", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}pcp."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}pcp...");
#endif
    status = xmlTextWriterWriteIntType(writer, &_pcp);
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}pcp...");
#endif
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing child element {}pcp."];
    }

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}pcp."];
    }
  }
}
@end /* implementation FULLNS0SetVlanPcp (JAXB) */

#endif /* DEF_FULLNS0SetVlanPcp_M */
#ifndef DEF_FULLNS0SwPath_M
#define DEF_FULLNS0SwPath_M

/**
 * (no documentation provided)
 */
@implementation FULLNS0SwPath

- (void) dealloc
{
  [super dealloc];
}

//documentation inherited.
+ (id<EnunciateXML>) readFromXML: (NSData *) xml
{
  FULLNS0SwPath *_fULLNS0SwPath;
  xmlTextReaderPtr reader = xmlReaderForMemory([xml bytes], [xml length], NULL, NULL, 0);
  if (reader == NULL) {
    [NSException raise: @"XMLReadError"
                 format: @"Error instantiating an XML reader."];
    return nil;
  }

  _fULLNS0SwPath = (FULLNS0SwPath *) [FULLNS0SwPath readXMLElement: reader];
  xmlFreeTextReader(reader); //free the reader
  return _fULLNS0SwPath;
}

//documentation inherited.
- (NSData *) writeToXML
{
  xmlBufferPtr buf;
  xmlTextWriterPtr writer;
  int rc;
  NSData *data;

  buf = xmlBufferCreate();
  if (buf == NULL) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error creating an XML buffer."];
    return nil;
  }

  writer = xmlNewTextWriterMemory(buf, 0);
  if (writer == NULL) {
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error creating an XML writer."];
    return nil;
  }

  rc = xmlTextWriterStartDocument(writer, NULL, "utf-8", NULL);
  if (rc < 0) {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing XML start document."];
    return nil;
  }

  NS_DURING
  {
    [self writeXMLElement: writer];
  }
  NS_HANDLER
  {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [localException raise];
  }
  NS_ENDHANDLER

  rc = xmlTextWriterEndDocument(writer);
  if (rc < 0) {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing XML end document."];
    return nil;
  }

  xmlFreeTextWriter(writer);
  data = [NSData dataWithBytes: buf->content length: buf->use];
  xmlBufferFree(buf);
  return data;
}
@end /* implementation FULLNS0SwPath */

/**
 * Internal, private interface for JAXB reading and writing.
 */
@interface FULLNS0SwPath (JAXB) <JAXBReading, JAXBWriting, JAXBType, JAXBElement>

@end /*interface FULLNS0SwPath (JAXB)*/

/**
 * Internal, private implementation for JAXB reading and writing.
 */
@implementation FULLNS0SwPath (JAXB)

/**
 * Read an instance of FULLNS0SwPath from an XML reader.
 *
 * @param reader The reader.
 * @return An instance of FULLNS0SwPath defined by the XML reader.
 */
+ (id<JAXBType>) readXMLType: (xmlTextReaderPtr) reader
{
  FULLNS0SwPath *_fULLNS0SwPath = [[FULLNS0SwPath alloc] init];
  NS_DURING
  {
    [_fULLNS0SwPath initWithReader: reader];
  }
  NS_HANDLER
  {
    _fULLNS0SwPath = nil;
    [localException raise];
  }
  NS_ENDHANDLER

  [_fULLNS0SwPath autorelease];
  return _fULLNS0SwPath;
}

/**
 * Initialize this instance of FULLNS0SwPath according to
 * the XML being read from the reader.
 *
 * @param reader The reader.
 */
- (id) initWithReader: (xmlTextReaderPtr) reader
{
  return [super initWithReader: reader];
}

/**
 * Write the XML for this instance of FULLNS0SwPath to the writer.
 * Note that since we're only writing the XML type,
 * No start/end element will be written.
 *
 * @param reader The reader.
 */
- (void) writeXMLType: (xmlTextWriterPtr) writer
{
  [super writeXMLType:writer];
}

/**
 * Reads a FULLNS0SwPath from an XML reader. The element to be read is
 * "swPath".
 *
 * @param reader The XML reader.
 * @return The FULLNS0SwPath.
 */
+ (id<JAXBElement>) readXMLElement: (xmlTextReaderPtr) reader {
  int status;
  FULLNS0SwPath *_swPath = nil;

  if (xmlTextReaderNodeType(reader) != XML_READER_TYPE_ELEMENT) {
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
    if (status < 1) {
      [NSException raise: @"XMLReadError"
                   format: @"Error advancing the reader to start element swPath."];
    }
  }

  if (xmlStrcmp(BAD_CAST "swPath", xmlTextReaderConstLocalName(reader)) == 0
      && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read root element {}swPath.");
#endif
    _swPath = (FULLNS0SwPath *)[FULLNS0SwPath readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Successfully read root element {}swPath.");
#endif
  }
  else {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read FULLNS0SwPath. Expected element swPath. Current element: {}%s", xmlTextReaderConstLocalName(reader)];
    }
    else {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read FULLNS0SwPath. Expected element swPath. Current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader)];
    }
  }

  return _swPath;
}

/**
 * Writes this FULLNS0SwPath to XML under element name "swPath".
 * The namespace declarations for the element will be written.
 *
 * @param writer The XML writer.
 * @param _swPath The SwPath to write.
 * @return 1 if successful, 0 otherwise.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer
{
  [self writeXMLElement: writer writeNamespaces: YES];
}

/**
 * Writes this FULLNS0SwPath to an XML writer.
 *
 * @param writer The writer.
 * @param writeNs Whether to write the namespaces for this element to the xml writer.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer writeNamespaces: (BOOL) writeNs
{
  int rc = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "swPath", NULL);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing start element {}swPath. XML writer status: %i\n", rc];
  }

#if DEBUG_ENUNCIATE > 1
  NSLog(@"writing type {}swPath for root element {}swPath...");
#endif
  [self writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
  NSLog(@"successfully wrote type {}swPath for root element {}swPath...");
#endif
  rc = xmlTextWriterEndElement(writer);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing end element {}swPath. XML writer status: %i\n", rc];
  }
}

//documentation inherited.
- (BOOL) readJAXBAttribute: (xmlTextReaderPtr) reader
{
  void *_child_accessor;

  if ([super readJAXBAttribute: reader]) {
    return YES;
  }

  return NO;
}

//documentation inherited.
- (BOOL) readJAXBValue: (xmlTextReaderPtr) reader
{
  return [super readJAXBValue: reader];
}

//documentation inherited.
- (BOOL) readJAXBChildElement: (xmlTextReaderPtr) reader
{
  id __child;
  void *_child_accessor;
  int status, depth;

  if ([super readJAXBChildElement: reader]) {
    return YES;
  }

  return NO;
}

//documentation inherited.
- (int) readUnknownJAXBChildElement: (xmlTextReaderPtr) reader
{
  return [super readUnknownJAXBChildElement: reader];
}

//documentation inherited.
- (void) readUnknownJAXBAttribute: (xmlTextReaderPtr) reader
{
  [super readUnknownJAXBAttribute: reader];
}

//documentation inherited.
- (void) writeJAXBAttributes: (xmlTextWriterPtr) writer
{
  int status;

  [super writeJAXBAttributes: writer];

}

//documentation inherited.
- (void) writeJAXBValue: (xmlTextWriterPtr) writer
{
  [super writeJAXBValue: writer];
}

/**
 * Method for writing the child elements.
 *
 * @param writer The writer.
 */
- (void) writeJAXBChildElements: (xmlTextWriterPtr) writer
{
  int status;
  id __item;
  NSEnumerator *__enumerator;

  [super writeJAXBChildElements: writer];

}
@end /* implementation FULLNS0SwPath (JAXB) */

#endif /* DEF_FULLNS0SwPath_M */
#ifndef DEF_FULLNS0SetVlanId_M
#define DEF_FULLNS0SetVlanId_M

/**
 * (no documentation provided)
 */
@implementation FULLNS0SetVlanId

/**
 * (no documentation provided)
 */
- (int) vlanId
{
  return _vlanId;
}

/**
 * (no documentation provided)
 */
- (void) setVlanId: (int) newVlanId
{
  _vlanId = newVlanId;
}

- (void) dealloc
{
  [super dealloc];
}

//documentation inherited.
+ (id<EnunciateXML>) readFromXML: (NSData *) xml
{
  FULLNS0SetVlanId *_fULLNS0SetVlanId;
  xmlTextReaderPtr reader = xmlReaderForMemory([xml bytes], [xml length], NULL, NULL, 0);
  if (reader == NULL) {
    [NSException raise: @"XMLReadError"
                 format: @"Error instantiating an XML reader."];
    return nil;
  }

  _fULLNS0SetVlanId = (FULLNS0SetVlanId *) [FULLNS0SetVlanId readXMLElement: reader];
  xmlFreeTextReader(reader); //free the reader
  return _fULLNS0SetVlanId;
}

//documentation inherited.
- (NSData *) writeToXML
{
  xmlBufferPtr buf;
  xmlTextWriterPtr writer;
  int rc;
  NSData *data;

  buf = xmlBufferCreate();
  if (buf == NULL) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error creating an XML buffer."];
    return nil;
  }

  writer = xmlNewTextWriterMemory(buf, 0);
  if (writer == NULL) {
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error creating an XML writer."];
    return nil;
  }

  rc = xmlTextWriterStartDocument(writer, NULL, "utf-8", NULL);
  if (rc < 0) {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing XML start document."];
    return nil;
  }

  NS_DURING
  {
    [self writeXMLElement: writer];
  }
  NS_HANDLER
  {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [localException raise];
  }
  NS_ENDHANDLER

  rc = xmlTextWriterEndDocument(writer);
  if (rc < 0) {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing XML end document."];
    return nil;
  }

  xmlFreeTextWriter(writer);
  data = [NSData dataWithBytes: buf->content length: buf->use];
  xmlBufferFree(buf);
  return data;
}
@end /* implementation FULLNS0SetVlanId */

/**
 * Internal, private interface for JAXB reading and writing.
 */
@interface FULLNS0SetVlanId (JAXB) <JAXBReading, JAXBWriting, JAXBType, JAXBElement>

@end /*interface FULLNS0SetVlanId (JAXB)*/

/**
 * Internal, private implementation for JAXB reading and writing.
 */
@implementation FULLNS0SetVlanId (JAXB)

/**
 * Read an instance of FULLNS0SetVlanId from an XML reader.
 *
 * @param reader The reader.
 * @return An instance of FULLNS0SetVlanId defined by the XML reader.
 */
+ (id<JAXBType>) readXMLType: (xmlTextReaderPtr) reader
{
  FULLNS0SetVlanId *_fULLNS0SetVlanId = [[FULLNS0SetVlanId alloc] init];
  NS_DURING
  {
    [_fULLNS0SetVlanId initWithReader: reader];
  }
  NS_HANDLER
  {
    _fULLNS0SetVlanId = nil;
    [localException raise];
  }
  NS_ENDHANDLER

  [_fULLNS0SetVlanId autorelease];
  return _fULLNS0SetVlanId;
}

/**
 * Initialize this instance of FULLNS0SetVlanId according to
 * the XML being read from the reader.
 *
 * @param reader The reader.
 */
- (id) initWithReader: (xmlTextReaderPtr) reader
{
  return [super initWithReader: reader];
}

/**
 * Write the XML for this instance of FULLNS0SetVlanId to the writer.
 * Note that since we're only writing the XML type,
 * No start/end element will be written.
 *
 * @param reader The reader.
 */
- (void) writeXMLType: (xmlTextWriterPtr) writer
{
  [super writeXMLType:writer];
}

/**
 * Reads a FULLNS0SetVlanId from an XML reader. The element to be read is
 * "setVlanId".
 *
 * @param reader The XML reader.
 * @return The FULLNS0SetVlanId.
 */
+ (id<JAXBElement>) readXMLElement: (xmlTextReaderPtr) reader {
  int status;
  FULLNS0SetVlanId *_setVlanId = nil;

  if (xmlTextReaderNodeType(reader) != XML_READER_TYPE_ELEMENT) {
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
    if (status < 1) {
      [NSException raise: @"XMLReadError"
                   format: @"Error advancing the reader to start element setVlanId."];
    }
  }

  if (xmlStrcmp(BAD_CAST "setVlanId", xmlTextReaderConstLocalName(reader)) == 0
      && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read root element {}setVlanId.");
#endif
    _setVlanId = (FULLNS0SetVlanId *)[FULLNS0SetVlanId readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Successfully read root element {}setVlanId.");
#endif
  }
  else {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read FULLNS0SetVlanId. Expected element setVlanId. Current element: {}%s", xmlTextReaderConstLocalName(reader)];
    }
    else {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read FULLNS0SetVlanId. Expected element setVlanId. Current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader)];
    }
  }

  return _setVlanId;
}

/**
 * Writes this FULLNS0SetVlanId to XML under element name "setVlanId".
 * The namespace declarations for the element will be written.
 *
 * @param writer The XML writer.
 * @param _setVlanId The SetVlanId to write.
 * @return 1 if successful, 0 otherwise.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer
{
  [self writeXMLElement: writer writeNamespaces: YES];
}

/**
 * Writes this FULLNS0SetVlanId to an XML writer.
 *
 * @param writer The writer.
 * @param writeNs Whether to write the namespaces for this element to the xml writer.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer writeNamespaces: (BOOL) writeNs
{
  int rc = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "setVlanId", NULL);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing start element {}setVlanId. XML writer status: %i\n", rc];
  }

#if DEBUG_ENUNCIATE > 1
  NSLog(@"writing type {}setVlanId for root element {}setVlanId...");
#endif
  [self writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
  NSLog(@"successfully wrote type {}setVlanId for root element {}setVlanId...");
#endif
  rc = xmlTextWriterEndElement(writer);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing end element {}setVlanId. XML writer status: %i\n", rc];
  }
}

//documentation inherited.
- (BOOL) readJAXBAttribute: (xmlTextReaderPtr) reader
{
  void *_child_accessor;

  if ([super readJAXBAttribute: reader]) {
    return YES;
  }

  return NO;
}

//documentation inherited.
- (BOOL) readJAXBValue: (xmlTextReaderPtr) reader
{
  return [super readJAXBValue: reader];
}

//documentation inherited.
- (BOOL) readJAXBChildElement: (xmlTextReaderPtr) reader
{
  id __child;
  void *_child_accessor;
  int status, depth;

  if ([super readJAXBChildElement: reader]) {
    return YES;
  }

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "vlanId", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

    _child_accessor = xmlTextReaderReadIntType(reader);
    if (_child_accessor == NULL) {
      //panic: unable to return the value for some reason.
      [NSException raise: @"XMLReadError"
                   format: @"Error reading element value."];
    }
    [self setVlanId: *((int*) _child_accessor)];
    free(_child_accessor);
    return YES;
  }

  return NO;
}

//documentation inherited.
- (int) readUnknownJAXBChildElement: (xmlTextReaderPtr) reader
{
  return [super readUnknownJAXBChildElement: reader];
}

//documentation inherited.
- (void) readUnknownJAXBAttribute: (xmlTextReaderPtr) reader
{
  [super readUnknownJAXBAttribute: reader];
}

//documentation inherited.
- (void) writeJAXBAttributes: (xmlTextWriterPtr) writer
{
  int status;

  [super writeJAXBAttributes: writer];

}

//documentation inherited.
- (void) writeJAXBValue: (xmlTextWriterPtr) writer
{
  [super writeJAXBValue: writer];
}

/**
 * Method for writing the child elements.
 *
 * @param writer The writer.
 */
- (void) writeJAXBChildElements: (xmlTextWriterPtr) writer
{
  int status;
  id __item;
  NSEnumerator *__enumerator;

  [super writeJAXBChildElements: writer];

  if (YES) { //always write the primitive element...
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "vlanId", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}vlanId."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}vlanId...");
#endif
    status = xmlTextWriterWriteIntType(writer, &_vlanId);
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}vlanId...");
#endif
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing child element {}vlanId."];
    }

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}vlanId."];
    }
  }
}
@end /* implementation FULLNS0SetVlanId (JAXB) */

#endif /* DEF_FULLNS0SetVlanId_M */
#ifndef DEF_FULLNS0SetTpSrc_M
#define DEF_FULLNS0SetTpSrc_M

/**
 * (no documentation provided)
 */
@implementation FULLNS0SetTpSrc

/**
 * (no documentation provided)
 */
- (int) port
{
  return _port;
}

/**
 * (no documentation provided)
 */
- (void) setPort: (int) newPort
{
  _port = newPort;
}

- (void) dealloc
{
  [super dealloc];
}

//documentation inherited.
+ (id<EnunciateXML>) readFromXML: (NSData *) xml
{
  FULLNS0SetTpSrc *_fULLNS0SetTpSrc;
  xmlTextReaderPtr reader = xmlReaderForMemory([xml bytes], [xml length], NULL, NULL, 0);
  if (reader == NULL) {
    [NSException raise: @"XMLReadError"
                 format: @"Error instantiating an XML reader."];
    return nil;
  }

  _fULLNS0SetTpSrc = (FULLNS0SetTpSrc *) [FULLNS0SetTpSrc readXMLElement: reader];
  xmlFreeTextReader(reader); //free the reader
  return _fULLNS0SetTpSrc;
}

//documentation inherited.
- (NSData *) writeToXML
{
  xmlBufferPtr buf;
  xmlTextWriterPtr writer;
  int rc;
  NSData *data;

  buf = xmlBufferCreate();
  if (buf == NULL) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error creating an XML buffer."];
    return nil;
  }

  writer = xmlNewTextWriterMemory(buf, 0);
  if (writer == NULL) {
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error creating an XML writer."];
    return nil;
  }

  rc = xmlTextWriterStartDocument(writer, NULL, "utf-8", NULL);
  if (rc < 0) {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing XML start document."];
    return nil;
  }

  NS_DURING
  {
    [self writeXMLElement: writer];
  }
  NS_HANDLER
  {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [localException raise];
  }
  NS_ENDHANDLER

  rc = xmlTextWriterEndDocument(writer);
  if (rc < 0) {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing XML end document."];
    return nil;
  }

  xmlFreeTextWriter(writer);
  data = [NSData dataWithBytes: buf->content length: buf->use];
  xmlBufferFree(buf);
  return data;
}
@end /* implementation FULLNS0SetTpSrc */

/**
 * Internal, private interface for JAXB reading and writing.
 */
@interface FULLNS0SetTpSrc (JAXB) <JAXBReading, JAXBWriting, JAXBType, JAXBElement>

@end /*interface FULLNS0SetTpSrc (JAXB)*/

/**
 * Internal, private implementation for JAXB reading and writing.
 */
@implementation FULLNS0SetTpSrc (JAXB)

/**
 * Read an instance of FULLNS0SetTpSrc from an XML reader.
 *
 * @param reader The reader.
 * @return An instance of FULLNS0SetTpSrc defined by the XML reader.
 */
+ (id<JAXBType>) readXMLType: (xmlTextReaderPtr) reader
{
  FULLNS0SetTpSrc *_fULLNS0SetTpSrc = [[FULLNS0SetTpSrc alloc] init];
  NS_DURING
  {
    [_fULLNS0SetTpSrc initWithReader: reader];
  }
  NS_HANDLER
  {
    _fULLNS0SetTpSrc = nil;
    [localException raise];
  }
  NS_ENDHANDLER

  [_fULLNS0SetTpSrc autorelease];
  return _fULLNS0SetTpSrc;
}

/**
 * Initialize this instance of FULLNS0SetTpSrc according to
 * the XML being read from the reader.
 *
 * @param reader The reader.
 */
- (id) initWithReader: (xmlTextReaderPtr) reader
{
  return [super initWithReader: reader];
}

/**
 * Write the XML for this instance of FULLNS0SetTpSrc to the writer.
 * Note that since we're only writing the XML type,
 * No start/end element will be written.
 *
 * @param reader The reader.
 */
- (void) writeXMLType: (xmlTextWriterPtr) writer
{
  [super writeXMLType:writer];
}

/**
 * Reads a FULLNS0SetTpSrc from an XML reader. The element to be read is
 * "setTpSrc".
 *
 * @param reader The XML reader.
 * @return The FULLNS0SetTpSrc.
 */
+ (id<JAXBElement>) readXMLElement: (xmlTextReaderPtr) reader {
  int status;
  FULLNS0SetTpSrc *_setTpSrc = nil;

  if (xmlTextReaderNodeType(reader) != XML_READER_TYPE_ELEMENT) {
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
    if (status < 1) {
      [NSException raise: @"XMLReadError"
                   format: @"Error advancing the reader to start element setTpSrc."];
    }
  }

  if (xmlStrcmp(BAD_CAST "setTpSrc", xmlTextReaderConstLocalName(reader)) == 0
      && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read root element {}setTpSrc.");
#endif
    _setTpSrc = (FULLNS0SetTpSrc *)[FULLNS0SetTpSrc readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Successfully read root element {}setTpSrc.");
#endif
  }
  else {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read FULLNS0SetTpSrc. Expected element setTpSrc. Current element: {}%s", xmlTextReaderConstLocalName(reader)];
    }
    else {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read FULLNS0SetTpSrc. Expected element setTpSrc. Current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader)];
    }
  }

  return _setTpSrc;
}

/**
 * Writes this FULLNS0SetTpSrc to XML under element name "setTpSrc".
 * The namespace declarations for the element will be written.
 *
 * @param writer The XML writer.
 * @param _setTpSrc The SetTpSrc to write.
 * @return 1 if successful, 0 otherwise.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer
{
  [self writeXMLElement: writer writeNamespaces: YES];
}

/**
 * Writes this FULLNS0SetTpSrc to an XML writer.
 *
 * @param writer The writer.
 * @param writeNs Whether to write the namespaces for this element to the xml writer.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer writeNamespaces: (BOOL) writeNs
{
  int rc = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "setTpSrc", NULL);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing start element {}setTpSrc. XML writer status: %i\n", rc];
  }

#if DEBUG_ENUNCIATE > 1
  NSLog(@"writing type {}setTpSrc for root element {}setTpSrc...");
#endif
  [self writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
  NSLog(@"successfully wrote type {}setTpSrc for root element {}setTpSrc...");
#endif
  rc = xmlTextWriterEndElement(writer);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing end element {}setTpSrc. XML writer status: %i\n", rc];
  }
}

//documentation inherited.
- (BOOL) readJAXBAttribute: (xmlTextReaderPtr) reader
{
  void *_child_accessor;

  if ([super readJAXBAttribute: reader]) {
    return YES;
  }

  return NO;
}

//documentation inherited.
- (BOOL) readJAXBValue: (xmlTextReaderPtr) reader
{
  return [super readJAXBValue: reader];
}

//documentation inherited.
- (BOOL) readJAXBChildElement: (xmlTextReaderPtr) reader
{
  id __child;
  void *_child_accessor;
  int status, depth;

  if ([super readJAXBChildElement: reader]) {
    return YES;
  }

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "port", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

    _child_accessor = xmlTextReaderReadIntType(reader);
    if (_child_accessor == NULL) {
      //panic: unable to return the value for some reason.
      [NSException raise: @"XMLReadError"
                   format: @"Error reading element value."];
    }
    [self setPort: *((int*) _child_accessor)];
    free(_child_accessor);
    return YES;
  }

  return NO;
}

//documentation inherited.
- (int) readUnknownJAXBChildElement: (xmlTextReaderPtr) reader
{
  return [super readUnknownJAXBChildElement: reader];
}

//documentation inherited.
- (void) readUnknownJAXBAttribute: (xmlTextReaderPtr) reader
{
  [super readUnknownJAXBAttribute: reader];
}

//documentation inherited.
- (void) writeJAXBAttributes: (xmlTextWriterPtr) writer
{
  int status;

  [super writeJAXBAttributes: writer];

}

//documentation inherited.
- (void) writeJAXBValue: (xmlTextWriterPtr) writer
{
  [super writeJAXBValue: writer];
}

/**
 * Method for writing the child elements.
 *
 * @param writer The writer.
 */
- (void) writeJAXBChildElements: (xmlTextWriterPtr) writer
{
  int status;
  id __item;
  NSEnumerator *__enumerator;

  [super writeJAXBChildElements: writer];

  if (YES) { //always write the primitive element...
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "port", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}port."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}port...");
#endif
    status = xmlTextWriterWriteIntType(writer, &_port);
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}port...");
#endif
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing child element {}port."];
    }

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}port."];
    }
  }
}
@end /* implementation FULLNS0SetTpSrc (JAXB) */

#endif /* DEF_FULLNS0SetTpSrc_M */
#ifndef DEF_FULLNS0SetNwTos_M
#define DEF_FULLNS0SetNwTos_M

/**
 * (no documentation provided)
 */
@implementation FULLNS0SetNwTos

/**
 * (no documentation provided)
 */
- (int) tos
{
  return _tos;
}

/**
 * (no documentation provided)
 */
- (void) setTos: (int) newTos
{
  _tos = newTos;
}

- (void) dealloc
{
  [super dealloc];
}

//documentation inherited.
+ (id<EnunciateXML>) readFromXML: (NSData *) xml
{
  FULLNS0SetNwTos *_fULLNS0SetNwTos;
  xmlTextReaderPtr reader = xmlReaderForMemory([xml bytes], [xml length], NULL, NULL, 0);
  if (reader == NULL) {
    [NSException raise: @"XMLReadError"
                 format: @"Error instantiating an XML reader."];
    return nil;
  }

  _fULLNS0SetNwTos = (FULLNS0SetNwTos *) [FULLNS0SetNwTos readXMLElement: reader];
  xmlFreeTextReader(reader); //free the reader
  return _fULLNS0SetNwTos;
}

//documentation inherited.
- (NSData *) writeToXML
{
  xmlBufferPtr buf;
  xmlTextWriterPtr writer;
  int rc;
  NSData *data;

  buf = xmlBufferCreate();
  if (buf == NULL) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error creating an XML buffer."];
    return nil;
  }

  writer = xmlNewTextWriterMemory(buf, 0);
  if (writer == NULL) {
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error creating an XML writer."];
    return nil;
  }

  rc = xmlTextWriterStartDocument(writer, NULL, "utf-8", NULL);
  if (rc < 0) {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing XML start document."];
    return nil;
  }

  NS_DURING
  {
    [self writeXMLElement: writer];
  }
  NS_HANDLER
  {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [localException raise];
  }
  NS_ENDHANDLER

  rc = xmlTextWriterEndDocument(writer);
  if (rc < 0) {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing XML end document."];
    return nil;
  }

  xmlFreeTextWriter(writer);
  data = [NSData dataWithBytes: buf->content length: buf->use];
  xmlBufferFree(buf);
  return data;
}
@end /* implementation FULLNS0SetNwTos */

/**
 * Internal, private interface for JAXB reading and writing.
 */
@interface FULLNS0SetNwTos (JAXB) <JAXBReading, JAXBWriting, JAXBType, JAXBElement>

@end /*interface FULLNS0SetNwTos (JAXB)*/

/**
 * Internal, private implementation for JAXB reading and writing.
 */
@implementation FULLNS0SetNwTos (JAXB)

/**
 * Read an instance of FULLNS0SetNwTos from an XML reader.
 *
 * @param reader The reader.
 * @return An instance of FULLNS0SetNwTos defined by the XML reader.
 */
+ (id<JAXBType>) readXMLType: (xmlTextReaderPtr) reader
{
  FULLNS0SetNwTos *_fULLNS0SetNwTos = [[FULLNS0SetNwTos alloc] init];
  NS_DURING
  {
    [_fULLNS0SetNwTos initWithReader: reader];
  }
  NS_HANDLER
  {
    _fULLNS0SetNwTos = nil;
    [localException raise];
  }
  NS_ENDHANDLER

  [_fULLNS0SetNwTos autorelease];
  return _fULLNS0SetNwTos;
}

/**
 * Initialize this instance of FULLNS0SetNwTos according to
 * the XML being read from the reader.
 *
 * @param reader The reader.
 */
- (id) initWithReader: (xmlTextReaderPtr) reader
{
  return [super initWithReader: reader];
}

/**
 * Write the XML for this instance of FULLNS0SetNwTos to the writer.
 * Note that since we're only writing the XML type,
 * No start/end element will be written.
 *
 * @param reader The reader.
 */
- (void) writeXMLType: (xmlTextWriterPtr) writer
{
  [super writeXMLType:writer];
}

/**
 * Reads a FULLNS0SetNwTos from an XML reader. The element to be read is
 * "setNwTos".
 *
 * @param reader The XML reader.
 * @return The FULLNS0SetNwTos.
 */
+ (id<JAXBElement>) readXMLElement: (xmlTextReaderPtr) reader {
  int status;
  FULLNS0SetNwTos *_setNwTos = nil;

  if (xmlTextReaderNodeType(reader) != XML_READER_TYPE_ELEMENT) {
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
    if (status < 1) {
      [NSException raise: @"XMLReadError"
                   format: @"Error advancing the reader to start element setNwTos."];
    }
  }

  if (xmlStrcmp(BAD_CAST "setNwTos", xmlTextReaderConstLocalName(reader)) == 0
      && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read root element {}setNwTos.");
#endif
    _setNwTos = (FULLNS0SetNwTos *)[FULLNS0SetNwTos readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Successfully read root element {}setNwTos.");
#endif
  }
  else {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read FULLNS0SetNwTos. Expected element setNwTos. Current element: {}%s", xmlTextReaderConstLocalName(reader)];
    }
    else {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read FULLNS0SetNwTos. Expected element setNwTos. Current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader)];
    }
  }

  return _setNwTos;
}

/**
 * Writes this FULLNS0SetNwTos to XML under element name "setNwTos".
 * The namespace declarations for the element will be written.
 *
 * @param writer The XML writer.
 * @param _setNwTos The SetNwTos to write.
 * @return 1 if successful, 0 otherwise.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer
{
  [self writeXMLElement: writer writeNamespaces: YES];
}

/**
 * Writes this FULLNS0SetNwTos to an XML writer.
 *
 * @param writer The writer.
 * @param writeNs Whether to write the namespaces for this element to the xml writer.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer writeNamespaces: (BOOL) writeNs
{
  int rc = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "setNwTos", NULL);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing start element {}setNwTos. XML writer status: %i\n", rc];
  }

#if DEBUG_ENUNCIATE > 1
  NSLog(@"writing type {}setNwTos for root element {}setNwTos...");
#endif
  [self writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
  NSLog(@"successfully wrote type {}setNwTos for root element {}setNwTos...");
#endif
  rc = xmlTextWriterEndElement(writer);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing end element {}setNwTos. XML writer status: %i\n", rc];
  }
}

//documentation inherited.
- (BOOL) readJAXBAttribute: (xmlTextReaderPtr) reader
{
  void *_child_accessor;

  if ([super readJAXBAttribute: reader]) {
    return YES;
  }

  return NO;
}

//documentation inherited.
- (BOOL) readJAXBValue: (xmlTextReaderPtr) reader
{
  return [super readJAXBValue: reader];
}

//documentation inherited.
- (BOOL) readJAXBChildElement: (xmlTextReaderPtr) reader
{
  id __child;
  void *_child_accessor;
  int status, depth;

  if ([super readJAXBChildElement: reader]) {
    return YES;
  }

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "tos", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

    _child_accessor = xmlTextReaderReadIntType(reader);
    if (_child_accessor == NULL) {
      //panic: unable to return the value for some reason.
      [NSException raise: @"XMLReadError"
                   format: @"Error reading element value."];
    }
    [self setTos: *((int*) _child_accessor)];
    free(_child_accessor);
    return YES;
  }

  return NO;
}

//documentation inherited.
- (int) readUnknownJAXBChildElement: (xmlTextReaderPtr) reader
{
  return [super readUnknownJAXBChildElement: reader];
}

//documentation inherited.
- (void) readUnknownJAXBAttribute: (xmlTextReaderPtr) reader
{
  [super readUnknownJAXBAttribute: reader];
}

//documentation inherited.
- (void) writeJAXBAttributes: (xmlTextWriterPtr) writer
{
  int status;

  [super writeJAXBAttributes: writer];

}

//documentation inherited.
- (void) writeJAXBValue: (xmlTextWriterPtr) writer
{
  [super writeJAXBValue: writer];
}

/**
 * Method for writing the child elements.
 *
 * @param writer The writer.
 */
- (void) writeJAXBChildElements: (xmlTextWriterPtr) writer
{
  int status;
  id __item;
  NSEnumerator *__enumerator;

  [super writeJAXBChildElements: writer];

  if (YES) { //always write the primitive element...
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "tos", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}tos."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}tos...");
#endif
    status = xmlTextWriterWriteIntType(writer, &_tos);
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}tos...");
#endif
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing child element {}tos."];
    }

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}tos."];
    }
  }
}
@end /* implementation FULLNS0SetNwTos (JAXB) */

#endif /* DEF_FULLNS0SetNwTos_M */
#ifndef DEF_FULLNS0SetNwDst_M
#define DEF_FULLNS0SetNwDst_M

/**
 * (no documentation provided)
 */
@implementation FULLNS0SetNwDst

/**
 * (no documentation provided)
 */
- (NSString *) addressAsString
{
  return _addressAsString;
}

/**
 * (no documentation provided)
 */
- (void) setAddressAsString: (NSString *) newAddressAsString
{
  [newAddressAsString retain];
  [_addressAsString release];
  _addressAsString = newAddressAsString;
}

- (void) dealloc
{
  [self setAddressAsString: nil];
  [super dealloc];
}

//documentation inherited.
+ (id<EnunciateXML>) readFromXML: (NSData *) xml
{
  FULLNS0SetNwDst *_fULLNS0SetNwDst;
  xmlTextReaderPtr reader = xmlReaderForMemory([xml bytes], [xml length], NULL, NULL, 0);
  if (reader == NULL) {
    [NSException raise: @"XMLReadError"
                 format: @"Error instantiating an XML reader."];
    return nil;
  }

  _fULLNS0SetNwDst = (FULLNS0SetNwDst *) [FULLNS0SetNwDst readXMLElement: reader];
  xmlFreeTextReader(reader); //free the reader
  return _fULLNS0SetNwDst;
}

//documentation inherited.
- (NSData *) writeToXML
{
  xmlBufferPtr buf;
  xmlTextWriterPtr writer;
  int rc;
  NSData *data;

  buf = xmlBufferCreate();
  if (buf == NULL) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error creating an XML buffer."];
    return nil;
  }

  writer = xmlNewTextWriterMemory(buf, 0);
  if (writer == NULL) {
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error creating an XML writer."];
    return nil;
  }

  rc = xmlTextWriterStartDocument(writer, NULL, "utf-8", NULL);
  if (rc < 0) {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing XML start document."];
    return nil;
  }

  NS_DURING
  {
    [self writeXMLElement: writer];
  }
  NS_HANDLER
  {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [localException raise];
  }
  NS_ENDHANDLER

  rc = xmlTextWriterEndDocument(writer);
  if (rc < 0) {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing XML end document."];
    return nil;
  }

  xmlFreeTextWriter(writer);
  data = [NSData dataWithBytes: buf->content length: buf->use];
  xmlBufferFree(buf);
  return data;
}
@end /* implementation FULLNS0SetNwDst */

/**
 * Internal, private interface for JAXB reading and writing.
 */
@interface FULLNS0SetNwDst (JAXB) <JAXBReading, JAXBWriting, JAXBType, JAXBElement>

@end /*interface FULLNS0SetNwDst (JAXB)*/

/**
 * Internal, private implementation for JAXB reading and writing.
 */
@implementation FULLNS0SetNwDst (JAXB)

/**
 * Read an instance of FULLNS0SetNwDst from an XML reader.
 *
 * @param reader The reader.
 * @return An instance of FULLNS0SetNwDst defined by the XML reader.
 */
+ (id<JAXBType>) readXMLType: (xmlTextReaderPtr) reader
{
  FULLNS0SetNwDst *_fULLNS0SetNwDst = [[FULLNS0SetNwDst alloc] init];
  NS_DURING
  {
    [_fULLNS0SetNwDst initWithReader: reader];
  }
  NS_HANDLER
  {
    _fULLNS0SetNwDst = nil;
    [localException raise];
  }
  NS_ENDHANDLER

  [_fULLNS0SetNwDst autorelease];
  return _fULLNS0SetNwDst;
}

/**
 * Initialize this instance of FULLNS0SetNwDst according to
 * the XML being read from the reader.
 *
 * @param reader The reader.
 */
- (id) initWithReader: (xmlTextReaderPtr) reader
{
  return [super initWithReader: reader];
}

/**
 * Write the XML for this instance of FULLNS0SetNwDst to the writer.
 * Note that since we're only writing the XML type,
 * No start/end element will be written.
 *
 * @param reader The reader.
 */
- (void) writeXMLType: (xmlTextWriterPtr) writer
{
  [super writeXMLType:writer];
}

/**
 * Reads a FULLNS0SetNwDst from an XML reader. The element to be read is
 * "setNwDst".
 *
 * @param reader The XML reader.
 * @return The FULLNS0SetNwDst.
 */
+ (id<JAXBElement>) readXMLElement: (xmlTextReaderPtr) reader {
  int status;
  FULLNS0SetNwDst *_setNwDst = nil;

  if (xmlTextReaderNodeType(reader) != XML_READER_TYPE_ELEMENT) {
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
    if (status < 1) {
      [NSException raise: @"XMLReadError"
                   format: @"Error advancing the reader to start element setNwDst."];
    }
  }

  if (xmlStrcmp(BAD_CAST "setNwDst", xmlTextReaderConstLocalName(reader)) == 0
      && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read root element {}setNwDst.");
#endif
    _setNwDst = (FULLNS0SetNwDst *)[FULLNS0SetNwDst readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Successfully read root element {}setNwDst.");
#endif
  }
  else {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read FULLNS0SetNwDst. Expected element setNwDst. Current element: {}%s", xmlTextReaderConstLocalName(reader)];
    }
    else {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read FULLNS0SetNwDst. Expected element setNwDst. Current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader)];
    }
  }

  return _setNwDst;
}

/**
 * Writes this FULLNS0SetNwDst to XML under element name "setNwDst".
 * The namespace declarations for the element will be written.
 *
 * @param writer The XML writer.
 * @param _setNwDst The SetNwDst to write.
 * @return 1 if successful, 0 otherwise.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer
{
  [self writeXMLElement: writer writeNamespaces: YES];
}

/**
 * Writes this FULLNS0SetNwDst to an XML writer.
 *
 * @param writer The writer.
 * @param writeNs Whether to write the namespaces for this element to the xml writer.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer writeNamespaces: (BOOL) writeNs
{
  int rc = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "setNwDst", NULL);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing start element {}setNwDst. XML writer status: %i\n", rc];
  }

#if DEBUG_ENUNCIATE > 1
  NSLog(@"writing type {}setNwDst for root element {}setNwDst...");
#endif
  [self writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
  NSLog(@"successfully wrote type {}setNwDst for root element {}setNwDst...");
#endif
  rc = xmlTextWriterEndElement(writer);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing end element {}setNwDst. XML writer status: %i\n", rc];
  }
}

//documentation inherited.
- (BOOL) readJAXBAttribute: (xmlTextReaderPtr) reader
{
  void *_child_accessor;

  if ([super readJAXBAttribute: reader]) {
    return YES;
  }

  return NO;
}

//documentation inherited.
- (BOOL) readJAXBValue: (xmlTextReaderPtr) reader
{
  return [super readJAXBValue: reader];
}

//documentation inherited.
- (BOOL) readJAXBChildElement: (xmlTextReaderPtr) reader
{
  id __child;
  void *_child_accessor;
  int status, depth;

  if ([super readJAXBChildElement: reader]) {
    return YES;
  }
  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "address", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}address of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}address of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setAddressAsString: __child];
    return YES;
  } //end "if choice"


  return NO;
}

//documentation inherited.
- (int) readUnknownJAXBChildElement: (xmlTextReaderPtr) reader
{
  return [super readUnknownJAXBChildElement: reader];
}

//documentation inherited.
- (void) readUnknownJAXBAttribute: (xmlTextReaderPtr) reader
{
  [super readUnknownJAXBAttribute: reader];
}

//documentation inherited.
- (void) writeJAXBAttributes: (xmlTextWriterPtr) writer
{
  int status;

  [super writeJAXBAttributes: writer];

}

//documentation inherited.
- (void) writeJAXBValue: (xmlTextWriterPtr) writer
{
  [super writeJAXBValue: writer];
}

/**
 * Method for writing the child elements.
 *
 * @param writer The writer.
 */
- (void) writeJAXBChildElements: (xmlTextWriterPtr) writer
{
  int status;
  id __item;
  NSEnumerator *__enumerator;

  [super writeJAXBChildElements: writer];

  if ([self addressAsString]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "address", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}address."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}address...");
#endif
    [[self addressAsString] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}address...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}address."];
    }
  }
}
@end /* implementation FULLNS0SetNwDst (JAXB) */

#endif /* DEF_FULLNS0SetNwDst_M */
#ifndef DEF_FULLNS0SetDlSrc_M
#define DEF_FULLNS0SetDlSrc_M

/**
 * (no documentation provided)
 */
@implementation FULLNS0SetDlSrc

/**
 * (no documentation provided)
 */
- (NSString *) dlAddressString
{
  return _dlAddressString;
}

/**
 * (no documentation provided)
 */
- (void) setDlAddressString: (NSString *) newDlAddressString
{
  [newDlAddressString retain];
  [_dlAddressString release];
  _dlAddressString = newDlAddressString;
}

- (void) dealloc
{
  [self setDlAddressString: nil];
  [super dealloc];
}

//documentation inherited.
+ (id<EnunciateXML>) readFromXML: (NSData *) xml
{
  FULLNS0SetDlSrc *_fULLNS0SetDlSrc;
  xmlTextReaderPtr reader = xmlReaderForMemory([xml bytes], [xml length], NULL, NULL, 0);
  if (reader == NULL) {
    [NSException raise: @"XMLReadError"
                 format: @"Error instantiating an XML reader."];
    return nil;
  }

  _fULLNS0SetDlSrc = (FULLNS0SetDlSrc *) [FULLNS0SetDlSrc readXMLElement: reader];
  xmlFreeTextReader(reader); //free the reader
  return _fULLNS0SetDlSrc;
}

//documentation inherited.
- (NSData *) writeToXML
{
  xmlBufferPtr buf;
  xmlTextWriterPtr writer;
  int rc;
  NSData *data;

  buf = xmlBufferCreate();
  if (buf == NULL) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error creating an XML buffer."];
    return nil;
  }

  writer = xmlNewTextWriterMemory(buf, 0);
  if (writer == NULL) {
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error creating an XML writer."];
    return nil;
  }

  rc = xmlTextWriterStartDocument(writer, NULL, "utf-8", NULL);
  if (rc < 0) {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing XML start document."];
    return nil;
  }

  NS_DURING
  {
    [self writeXMLElement: writer];
  }
  NS_HANDLER
  {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [localException raise];
  }
  NS_ENDHANDLER

  rc = xmlTextWriterEndDocument(writer);
  if (rc < 0) {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing XML end document."];
    return nil;
  }

  xmlFreeTextWriter(writer);
  data = [NSData dataWithBytes: buf->content length: buf->use];
  xmlBufferFree(buf);
  return data;
}
@end /* implementation FULLNS0SetDlSrc */

/**
 * Internal, private interface for JAXB reading and writing.
 */
@interface FULLNS0SetDlSrc (JAXB) <JAXBReading, JAXBWriting, JAXBType, JAXBElement>

@end /*interface FULLNS0SetDlSrc (JAXB)*/

/**
 * Internal, private implementation for JAXB reading and writing.
 */
@implementation FULLNS0SetDlSrc (JAXB)

/**
 * Read an instance of FULLNS0SetDlSrc from an XML reader.
 *
 * @param reader The reader.
 * @return An instance of FULLNS0SetDlSrc defined by the XML reader.
 */
+ (id<JAXBType>) readXMLType: (xmlTextReaderPtr) reader
{
  FULLNS0SetDlSrc *_fULLNS0SetDlSrc = [[FULLNS0SetDlSrc alloc] init];
  NS_DURING
  {
    [_fULLNS0SetDlSrc initWithReader: reader];
  }
  NS_HANDLER
  {
    _fULLNS0SetDlSrc = nil;
    [localException raise];
  }
  NS_ENDHANDLER

  [_fULLNS0SetDlSrc autorelease];
  return _fULLNS0SetDlSrc;
}

/**
 * Initialize this instance of FULLNS0SetDlSrc according to
 * the XML being read from the reader.
 *
 * @param reader The reader.
 */
- (id) initWithReader: (xmlTextReaderPtr) reader
{
  return [super initWithReader: reader];
}

/**
 * Write the XML for this instance of FULLNS0SetDlSrc to the writer.
 * Note that since we're only writing the XML type,
 * No start/end element will be written.
 *
 * @param reader The reader.
 */
- (void) writeXMLType: (xmlTextWriterPtr) writer
{
  [super writeXMLType:writer];
}

/**
 * Reads a FULLNS0SetDlSrc from an XML reader. The element to be read is
 * "setDlSrc".
 *
 * @param reader The XML reader.
 * @return The FULLNS0SetDlSrc.
 */
+ (id<JAXBElement>) readXMLElement: (xmlTextReaderPtr) reader {
  int status;
  FULLNS0SetDlSrc *_setDlSrc = nil;

  if (xmlTextReaderNodeType(reader) != XML_READER_TYPE_ELEMENT) {
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
    if (status < 1) {
      [NSException raise: @"XMLReadError"
                   format: @"Error advancing the reader to start element setDlSrc."];
    }
  }

  if (xmlStrcmp(BAD_CAST "setDlSrc", xmlTextReaderConstLocalName(reader)) == 0
      && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read root element {}setDlSrc.");
#endif
    _setDlSrc = (FULLNS0SetDlSrc *)[FULLNS0SetDlSrc readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Successfully read root element {}setDlSrc.");
#endif
  }
  else {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read FULLNS0SetDlSrc. Expected element setDlSrc. Current element: {}%s", xmlTextReaderConstLocalName(reader)];
    }
    else {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read FULLNS0SetDlSrc. Expected element setDlSrc. Current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader)];
    }
  }

  return _setDlSrc;
}

/**
 * Writes this FULLNS0SetDlSrc to XML under element name "setDlSrc".
 * The namespace declarations for the element will be written.
 *
 * @param writer The XML writer.
 * @param _setDlSrc The SetDlSrc to write.
 * @return 1 if successful, 0 otherwise.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer
{
  [self writeXMLElement: writer writeNamespaces: YES];
}

/**
 * Writes this FULLNS0SetDlSrc to an XML writer.
 *
 * @param writer The writer.
 * @param writeNs Whether to write the namespaces for this element to the xml writer.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer writeNamespaces: (BOOL) writeNs
{
  int rc = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "setDlSrc", NULL);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing start element {}setDlSrc. XML writer status: %i\n", rc];
  }

#if DEBUG_ENUNCIATE > 1
  NSLog(@"writing type {}setDlSrc for root element {}setDlSrc...");
#endif
  [self writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
  NSLog(@"successfully wrote type {}setDlSrc for root element {}setDlSrc...");
#endif
  rc = xmlTextWriterEndElement(writer);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing end element {}setDlSrc. XML writer status: %i\n", rc];
  }
}

//documentation inherited.
- (BOOL) readJAXBAttribute: (xmlTextReaderPtr) reader
{
  void *_child_accessor;

  if ([super readJAXBAttribute: reader]) {
    return YES;
  }

  return NO;
}

//documentation inherited.
- (BOOL) readJAXBValue: (xmlTextReaderPtr) reader
{
  return [super readJAXBValue: reader];
}

//documentation inherited.
- (BOOL) readJAXBChildElement: (xmlTextReaderPtr) reader
{
  id __child;
  void *_child_accessor;
  int status, depth;

  if ([super readJAXBChildElement: reader]) {
    return YES;
  }
  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "address", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}address of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}address of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setDlAddressString: __child];
    return YES;
  } //end "if choice"


  return NO;
}

//documentation inherited.
- (int) readUnknownJAXBChildElement: (xmlTextReaderPtr) reader
{
  return [super readUnknownJAXBChildElement: reader];
}

//documentation inherited.
- (void) readUnknownJAXBAttribute: (xmlTextReaderPtr) reader
{
  [super readUnknownJAXBAttribute: reader];
}

//documentation inherited.
- (void) writeJAXBAttributes: (xmlTextWriterPtr) writer
{
  int status;

  [super writeJAXBAttributes: writer];

}

//documentation inherited.
- (void) writeJAXBValue: (xmlTextWriterPtr) writer
{
  [super writeJAXBValue: writer];
}

/**
 * Method for writing the child elements.
 *
 * @param writer The writer.
 */
- (void) writeJAXBChildElements: (xmlTextWriterPtr) writer
{
  int status;
  id __item;
  NSEnumerator *__enumerator;

  [super writeJAXBChildElements: writer];

  if ([self dlAddressString]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "address", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}address."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}address...");
#endif
    [[self dlAddressString] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}address...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}address."];
    }
  }
}
@end /* implementation FULLNS0SetDlSrc (JAXB) */

#endif /* DEF_FULLNS0SetDlSrc_M */
#ifndef DEF_FULLNS0PushVlan_M
#define DEF_FULLNS0PushVlan_M

/**
 * (no documentation provided)
 */
@implementation FULLNS0PushVlan

/**
 * (no documentation provided)
 */
- (int) header
{
  return _header;
}

/**
 * (no documentation provided)
 */
- (void) setHeader: (int) newHeader
{
  _header = newHeader;
}

- (void) dealloc
{
  [super dealloc];
}

//documentation inherited.
+ (id<EnunciateXML>) readFromXML: (NSData *) xml
{
  FULLNS0PushVlan *_fULLNS0PushVlan;
  xmlTextReaderPtr reader = xmlReaderForMemory([xml bytes], [xml length], NULL, NULL, 0);
  if (reader == NULL) {
    [NSException raise: @"XMLReadError"
                 format: @"Error instantiating an XML reader."];
    return nil;
  }

  _fULLNS0PushVlan = (FULLNS0PushVlan *) [FULLNS0PushVlan readXMLElement: reader];
  xmlFreeTextReader(reader); //free the reader
  return _fULLNS0PushVlan;
}

//documentation inherited.
- (NSData *) writeToXML
{
  xmlBufferPtr buf;
  xmlTextWriterPtr writer;
  int rc;
  NSData *data;

  buf = xmlBufferCreate();
  if (buf == NULL) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error creating an XML buffer."];
    return nil;
  }

  writer = xmlNewTextWriterMemory(buf, 0);
  if (writer == NULL) {
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error creating an XML writer."];
    return nil;
  }

  rc = xmlTextWriterStartDocument(writer, NULL, "utf-8", NULL);
  if (rc < 0) {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing XML start document."];
    return nil;
  }

  NS_DURING
  {
    [self writeXMLElement: writer];
  }
  NS_HANDLER
  {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [localException raise];
  }
  NS_ENDHANDLER

  rc = xmlTextWriterEndDocument(writer);
  if (rc < 0) {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing XML end document."];
    return nil;
  }

  xmlFreeTextWriter(writer);
  data = [NSData dataWithBytes: buf->content length: buf->use];
  xmlBufferFree(buf);
  return data;
}
@end /* implementation FULLNS0PushVlan */

/**
 * Internal, private interface for JAXB reading and writing.
 */
@interface FULLNS0PushVlan (JAXB) <JAXBReading, JAXBWriting, JAXBType, JAXBElement>

@end /*interface FULLNS0PushVlan (JAXB)*/

/**
 * Internal, private implementation for JAXB reading and writing.
 */
@implementation FULLNS0PushVlan (JAXB)

/**
 * Read an instance of FULLNS0PushVlan from an XML reader.
 *
 * @param reader The reader.
 * @return An instance of FULLNS0PushVlan defined by the XML reader.
 */
+ (id<JAXBType>) readXMLType: (xmlTextReaderPtr) reader
{
  FULLNS0PushVlan *_fULLNS0PushVlan = [[FULLNS0PushVlan alloc] init];
  NS_DURING
  {
    [_fULLNS0PushVlan initWithReader: reader];
  }
  NS_HANDLER
  {
    _fULLNS0PushVlan = nil;
    [localException raise];
  }
  NS_ENDHANDLER

  [_fULLNS0PushVlan autorelease];
  return _fULLNS0PushVlan;
}

/**
 * Initialize this instance of FULLNS0PushVlan according to
 * the XML being read from the reader.
 *
 * @param reader The reader.
 */
- (id) initWithReader: (xmlTextReaderPtr) reader
{
  return [super initWithReader: reader];
}

/**
 * Write the XML for this instance of FULLNS0PushVlan to the writer.
 * Note that since we're only writing the XML type,
 * No start/end element will be written.
 *
 * @param reader The reader.
 */
- (void) writeXMLType: (xmlTextWriterPtr) writer
{
  [super writeXMLType:writer];
}

/**
 * Reads a FULLNS0PushVlan from an XML reader. The element to be read is
 * "pushVlan".
 *
 * @param reader The XML reader.
 * @return The FULLNS0PushVlan.
 */
+ (id<JAXBElement>) readXMLElement: (xmlTextReaderPtr) reader {
  int status;
  FULLNS0PushVlan *_pushVlan = nil;

  if (xmlTextReaderNodeType(reader) != XML_READER_TYPE_ELEMENT) {
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
    if (status < 1) {
      [NSException raise: @"XMLReadError"
                   format: @"Error advancing the reader to start element pushVlan."];
    }
  }

  if (xmlStrcmp(BAD_CAST "pushVlan", xmlTextReaderConstLocalName(reader)) == 0
      && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read root element {}pushVlan.");
#endif
    _pushVlan = (FULLNS0PushVlan *)[FULLNS0PushVlan readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Successfully read root element {}pushVlan.");
#endif
  }
  else {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read FULLNS0PushVlan. Expected element pushVlan. Current element: {}%s", xmlTextReaderConstLocalName(reader)];
    }
    else {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read FULLNS0PushVlan. Expected element pushVlan. Current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader)];
    }
  }

  return _pushVlan;
}

/**
 * Writes this FULLNS0PushVlan to XML under element name "pushVlan".
 * The namespace declarations for the element will be written.
 *
 * @param writer The XML writer.
 * @param _pushVlan The PushVlan to write.
 * @return 1 if successful, 0 otherwise.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer
{
  [self writeXMLElement: writer writeNamespaces: YES];
}

/**
 * Writes this FULLNS0PushVlan to an XML writer.
 *
 * @param writer The writer.
 * @param writeNs Whether to write the namespaces for this element to the xml writer.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer writeNamespaces: (BOOL) writeNs
{
  int rc = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "pushVlan", NULL);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing start element {}pushVlan. XML writer status: %i\n", rc];
  }

#if DEBUG_ENUNCIATE > 1
  NSLog(@"writing type {}pushVlan for root element {}pushVlan...");
#endif
  [self writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
  NSLog(@"successfully wrote type {}pushVlan for root element {}pushVlan...");
#endif
  rc = xmlTextWriterEndElement(writer);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing end element {}pushVlan. XML writer status: %i\n", rc];
  }
}

//documentation inherited.
- (BOOL) readJAXBAttribute: (xmlTextReaderPtr) reader
{
  void *_child_accessor;

  if ([super readJAXBAttribute: reader]) {
    return YES;
  }

  return NO;
}

//documentation inherited.
- (BOOL) readJAXBValue: (xmlTextReaderPtr) reader
{
  return [super readJAXBValue: reader];
}

//documentation inherited.
- (BOOL) readJAXBChildElement: (xmlTextReaderPtr) reader
{
  id __child;
  void *_child_accessor;
  int status, depth;

  if ([super readJAXBChildElement: reader]) {
    return YES;
  }

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "VlanHeader", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

    _child_accessor = xmlTextReaderReadIntType(reader);
    if (_child_accessor == NULL) {
      //panic: unable to return the value for some reason.
      [NSException raise: @"XMLReadError"
                   format: @"Error reading element value."];
    }
    [self setHeader: *((int*) _child_accessor)];
    free(_child_accessor);
    return YES;
  }

  return NO;
}

//documentation inherited.
- (int) readUnknownJAXBChildElement: (xmlTextReaderPtr) reader
{
  return [super readUnknownJAXBChildElement: reader];
}

//documentation inherited.
- (void) readUnknownJAXBAttribute: (xmlTextReaderPtr) reader
{
  [super readUnknownJAXBAttribute: reader];
}

//documentation inherited.
- (void) writeJAXBAttributes: (xmlTextWriterPtr) writer
{
  int status;

  [super writeJAXBAttributes: writer];

}

//documentation inherited.
- (void) writeJAXBValue: (xmlTextWriterPtr) writer
{
  [super writeJAXBValue: writer];
}

/**
 * Method for writing the child elements.
 *
 * @param writer The writer.
 */
- (void) writeJAXBChildElements: (xmlTextWriterPtr) writer
{
  int status;
  id __item;
  NSEnumerator *__enumerator;

  [super writeJAXBChildElements: writer];

  if (YES) { //always write the primitive element...
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "VlanHeader", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}VlanHeader."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}VlanHeader...");
#endif
    status = xmlTextWriterWriteIntType(writer, &_header);
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}VlanHeader...");
#endif
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing child element {}VlanHeader."];
    }

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}VlanHeader."];
    }
  }
}
@end /* implementation FULLNS0PushVlan (JAXB) */

#endif /* DEF_FULLNS0PushVlan_M */
#ifndef DEF_FULLNS0Output_M
#define DEF_FULLNS0Output_M

/**
 * (no documentation provided)
 */
@implementation FULLNS0Output

/**
 * (no documentation provided)
 */
- (FULLNS0NodeConnector *) port
{
  return _port;
}

/**
 * (no documentation provided)
 */
- (void) setPort: (FULLNS0NodeConnector *) newPort
{
  [newPort retain];
  [_port release];
  _port = newPort;
}

- (void) dealloc
{
  [self setPort: nil];
  [super dealloc];
}

//documentation inherited.
+ (id<EnunciateXML>) readFromXML: (NSData *) xml
{
  FULLNS0Output *_fULLNS0Output;
  xmlTextReaderPtr reader = xmlReaderForMemory([xml bytes], [xml length], NULL, NULL, 0);
  if (reader == NULL) {
    [NSException raise: @"XMLReadError"
                 format: @"Error instantiating an XML reader."];
    return nil;
  }

  _fULLNS0Output = (FULLNS0Output *) [FULLNS0Output readXMLElement: reader];
  xmlFreeTextReader(reader); //free the reader
  return _fULLNS0Output;
}

//documentation inherited.
- (NSData *) writeToXML
{
  xmlBufferPtr buf;
  xmlTextWriterPtr writer;
  int rc;
  NSData *data;

  buf = xmlBufferCreate();
  if (buf == NULL) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error creating an XML buffer."];
    return nil;
  }

  writer = xmlNewTextWriterMemory(buf, 0);
  if (writer == NULL) {
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error creating an XML writer."];
    return nil;
  }

  rc = xmlTextWriterStartDocument(writer, NULL, "utf-8", NULL);
  if (rc < 0) {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing XML start document."];
    return nil;
  }

  NS_DURING
  {
    [self writeXMLElement: writer];
  }
  NS_HANDLER
  {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [localException raise];
  }
  NS_ENDHANDLER

  rc = xmlTextWriterEndDocument(writer);
  if (rc < 0) {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing XML end document."];
    return nil;
  }

  xmlFreeTextWriter(writer);
  data = [NSData dataWithBytes: buf->content length: buf->use];
  xmlBufferFree(buf);
  return data;
}
@end /* implementation FULLNS0Output */

/**
 * Internal, private interface for JAXB reading and writing.
 */
@interface FULLNS0Output (JAXB) <JAXBReading, JAXBWriting, JAXBType, JAXBElement>

@end /*interface FULLNS0Output (JAXB)*/

/**
 * Internal, private implementation for JAXB reading and writing.
 */
@implementation FULLNS0Output (JAXB)

/**
 * Read an instance of FULLNS0Output from an XML reader.
 *
 * @param reader The reader.
 * @return An instance of FULLNS0Output defined by the XML reader.
 */
+ (id<JAXBType>) readXMLType: (xmlTextReaderPtr) reader
{
  FULLNS0Output *_fULLNS0Output = [[FULLNS0Output alloc] init];
  NS_DURING
  {
    [_fULLNS0Output initWithReader: reader];
  }
  NS_HANDLER
  {
    _fULLNS0Output = nil;
    [localException raise];
  }
  NS_ENDHANDLER

  [_fULLNS0Output autorelease];
  return _fULLNS0Output;
}

/**
 * Initialize this instance of FULLNS0Output according to
 * the XML being read from the reader.
 *
 * @param reader The reader.
 */
- (id) initWithReader: (xmlTextReaderPtr) reader
{
  return [super initWithReader: reader];
}

/**
 * Write the XML for this instance of FULLNS0Output to the writer.
 * Note that since we're only writing the XML type,
 * No start/end element will be written.
 *
 * @param reader The reader.
 */
- (void) writeXMLType: (xmlTextWriterPtr) writer
{
  [super writeXMLType:writer];
}

/**
 * Reads a FULLNS0Output from an XML reader. The element to be read is
 * "output".
 *
 * @param reader The XML reader.
 * @return The FULLNS0Output.
 */
+ (id<JAXBElement>) readXMLElement: (xmlTextReaderPtr) reader {
  int status;
  FULLNS0Output *_output = nil;

  if (xmlTextReaderNodeType(reader) != XML_READER_TYPE_ELEMENT) {
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
    if (status < 1) {
      [NSException raise: @"XMLReadError"
                   format: @"Error advancing the reader to start element output."];
    }
  }

  if (xmlStrcmp(BAD_CAST "output", xmlTextReaderConstLocalName(reader)) == 0
      && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read root element {}output.");
#endif
    _output = (FULLNS0Output *)[FULLNS0Output readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Successfully read root element {}output.");
#endif
  }
  else {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read FULLNS0Output. Expected element output. Current element: {}%s", xmlTextReaderConstLocalName(reader)];
    }
    else {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read FULLNS0Output. Expected element output. Current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader)];
    }
  }

  return _output;
}

/**
 * Writes this FULLNS0Output to XML under element name "output".
 * The namespace declarations for the element will be written.
 *
 * @param writer The XML writer.
 * @param _output The Output to write.
 * @return 1 if successful, 0 otherwise.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer
{
  [self writeXMLElement: writer writeNamespaces: YES];
}

/**
 * Writes this FULLNS0Output to an XML writer.
 *
 * @param writer The writer.
 * @param writeNs Whether to write the namespaces for this element to the xml writer.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer writeNamespaces: (BOOL) writeNs
{
  int rc = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "output", NULL);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing start element {}output. XML writer status: %i\n", rc];
  }

#if DEBUG_ENUNCIATE > 1
  NSLog(@"writing type {}output for root element {}output...");
#endif
  [self writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
  NSLog(@"successfully wrote type {}output for root element {}output...");
#endif
  rc = xmlTextWriterEndElement(writer);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing end element {}output. XML writer status: %i\n", rc];
  }
}

//documentation inherited.
- (BOOL) readJAXBAttribute: (xmlTextReaderPtr) reader
{
  void *_child_accessor;

  if ([super readJAXBAttribute: reader]) {
    return YES;
  }

  return NO;
}

//documentation inherited.
- (BOOL) readJAXBValue: (xmlTextReaderPtr) reader
{
  return [super readJAXBValue: reader];
}

//documentation inherited.
- (BOOL) readJAXBChildElement: (xmlTextReaderPtr) reader
{
  id __child;
  void *_child_accessor;
  int status, depth;

  if ([super readJAXBChildElement: reader]) {
    return YES;
  }
  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "port", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}port of type {}nodeConnector.");
#endif
    __child = [FULLNS0NodeConnector readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}port of type {}nodeConnector.");
#endif

    [self setPort: __child];
    return YES;
  } //end "if choice"


  return NO;
}

//documentation inherited.
- (int) readUnknownJAXBChildElement: (xmlTextReaderPtr) reader
{
  return [super readUnknownJAXBChildElement: reader];
}

//documentation inherited.
- (void) readUnknownJAXBAttribute: (xmlTextReaderPtr) reader
{
  [super readUnknownJAXBAttribute: reader];
}

//documentation inherited.
- (void) writeJAXBAttributes: (xmlTextWriterPtr) writer
{
  int status;

  [super writeJAXBAttributes: writer];

}

//documentation inherited.
- (void) writeJAXBValue: (xmlTextWriterPtr) writer
{
  [super writeJAXBValue: writer];
}

/**
 * Method for writing the child elements.
 *
 * @param writer The writer.
 */
- (void) writeJAXBChildElements: (xmlTextWriterPtr) writer
{
  int status;
  id __item;
  NSEnumerator *__enumerator;

  [super writeJAXBChildElements: writer];

  if ([self port]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "port", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}port."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}port...");
#endif
    [[self port] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}port...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}port."];
    }
  }
}
@end /* implementation FULLNS0Output (JAXB) */

#endif /* DEF_FULLNS0Output_M */
#ifndef DEF_FULLNS0HwPath_M
#define DEF_FULLNS0HwPath_M

/**
 * (no documentation provided)
 */
@implementation FULLNS0HwPath

- (void) dealloc
{
  [super dealloc];
}

//documentation inherited.
+ (id<EnunciateXML>) readFromXML: (NSData *) xml
{
  FULLNS0HwPath *_fULLNS0HwPath;
  xmlTextReaderPtr reader = xmlReaderForMemory([xml bytes], [xml length], NULL, NULL, 0);
  if (reader == NULL) {
    [NSException raise: @"XMLReadError"
                 format: @"Error instantiating an XML reader."];
    return nil;
  }

  _fULLNS0HwPath = (FULLNS0HwPath *) [FULLNS0HwPath readXMLElement: reader];
  xmlFreeTextReader(reader); //free the reader
  return _fULLNS0HwPath;
}

//documentation inherited.
- (NSData *) writeToXML
{
  xmlBufferPtr buf;
  xmlTextWriterPtr writer;
  int rc;
  NSData *data;

  buf = xmlBufferCreate();
  if (buf == NULL) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error creating an XML buffer."];
    return nil;
  }

  writer = xmlNewTextWriterMemory(buf, 0);
  if (writer == NULL) {
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error creating an XML writer."];
    return nil;
  }

  rc = xmlTextWriterStartDocument(writer, NULL, "utf-8", NULL);
  if (rc < 0) {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing XML start document."];
    return nil;
  }

  NS_DURING
  {
    [self writeXMLElement: writer];
  }
  NS_HANDLER
  {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [localException raise];
  }
  NS_ENDHANDLER

  rc = xmlTextWriterEndDocument(writer);
  if (rc < 0) {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing XML end document."];
    return nil;
  }

  xmlFreeTextWriter(writer);
  data = [NSData dataWithBytes: buf->content length: buf->use];
  xmlBufferFree(buf);
  return data;
}
@end /* implementation FULLNS0HwPath */

/**
 * Internal, private interface for JAXB reading and writing.
 */
@interface FULLNS0HwPath (JAXB) <JAXBReading, JAXBWriting, JAXBType, JAXBElement>

@end /*interface FULLNS0HwPath (JAXB)*/

/**
 * Internal, private implementation for JAXB reading and writing.
 */
@implementation FULLNS0HwPath (JAXB)

/**
 * Read an instance of FULLNS0HwPath from an XML reader.
 *
 * @param reader The reader.
 * @return An instance of FULLNS0HwPath defined by the XML reader.
 */
+ (id<JAXBType>) readXMLType: (xmlTextReaderPtr) reader
{
  FULLNS0HwPath *_fULLNS0HwPath = [[FULLNS0HwPath alloc] init];
  NS_DURING
  {
    [_fULLNS0HwPath initWithReader: reader];
  }
  NS_HANDLER
  {
    _fULLNS0HwPath = nil;
    [localException raise];
  }
  NS_ENDHANDLER

  [_fULLNS0HwPath autorelease];
  return _fULLNS0HwPath;
}

/**
 * Initialize this instance of FULLNS0HwPath according to
 * the XML being read from the reader.
 *
 * @param reader The reader.
 */
- (id) initWithReader: (xmlTextReaderPtr) reader
{
  return [super initWithReader: reader];
}

/**
 * Write the XML for this instance of FULLNS0HwPath to the writer.
 * Note that since we're only writing the XML type,
 * No start/end element will be written.
 *
 * @param reader The reader.
 */
- (void) writeXMLType: (xmlTextWriterPtr) writer
{
  [super writeXMLType:writer];
}

/**
 * Reads a FULLNS0HwPath from an XML reader. The element to be read is
 * "hwPath".
 *
 * @param reader The XML reader.
 * @return The FULLNS0HwPath.
 */
+ (id<JAXBElement>) readXMLElement: (xmlTextReaderPtr) reader {
  int status;
  FULLNS0HwPath *_hwPath = nil;

  if (xmlTextReaderNodeType(reader) != XML_READER_TYPE_ELEMENT) {
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
    if (status < 1) {
      [NSException raise: @"XMLReadError"
                   format: @"Error advancing the reader to start element hwPath."];
    }
  }

  if (xmlStrcmp(BAD_CAST "hwPath", xmlTextReaderConstLocalName(reader)) == 0
      && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read root element {}hwPath.");
#endif
    _hwPath = (FULLNS0HwPath *)[FULLNS0HwPath readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Successfully read root element {}hwPath.");
#endif
  }
  else {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read FULLNS0HwPath. Expected element hwPath. Current element: {}%s", xmlTextReaderConstLocalName(reader)];
    }
    else {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read FULLNS0HwPath. Expected element hwPath. Current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader)];
    }
  }

  return _hwPath;
}

/**
 * Writes this FULLNS0HwPath to XML under element name "hwPath".
 * The namespace declarations for the element will be written.
 *
 * @param writer The XML writer.
 * @param _hwPath The HwPath to write.
 * @return 1 if successful, 0 otherwise.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer
{
  [self writeXMLElement: writer writeNamespaces: YES];
}

/**
 * Writes this FULLNS0HwPath to an XML writer.
 *
 * @param writer The writer.
 * @param writeNs Whether to write the namespaces for this element to the xml writer.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer writeNamespaces: (BOOL) writeNs
{
  int rc = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "hwPath", NULL);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing start element {}hwPath. XML writer status: %i\n", rc];
  }

#if DEBUG_ENUNCIATE > 1
  NSLog(@"writing type {}hwPath for root element {}hwPath...");
#endif
  [self writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
  NSLog(@"successfully wrote type {}hwPath for root element {}hwPath...");
#endif
  rc = xmlTextWriterEndElement(writer);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing end element {}hwPath. XML writer status: %i\n", rc];
  }
}

//documentation inherited.
- (BOOL) readJAXBAttribute: (xmlTextReaderPtr) reader
{
  void *_child_accessor;

  if ([super readJAXBAttribute: reader]) {
    return YES;
  }

  return NO;
}

//documentation inherited.
- (BOOL) readJAXBValue: (xmlTextReaderPtr) reader
{
  return [super readJAXBValue: reader];
}

//documentation inherited.
- (BOOL) readJAXBChildElement: (xmlTextReaderPtr) reader
{
  id __child;
  void *_child_accessor;
  int status, depth;

  if ([super readJAXBChildElement: reader]) {
    return YES;
  }

  return NO;
}

//documentation inherited.
- (int) readUnknownJAXBChildElement: (xmlTextReaderPtr) reader
{
  return [super readUnknownJAXBChildElement: reader];
}

//documentation inherited.
- (void) readUnknownJAXBAttribute: (xmlTextReaderPtr) reader
{
  [super readUnknownJAXBAttribute: reader];
}

//documentation inherited.
- (void) writeJAXBAttributes: (xmlTextWriterPtr) writer
{
  int status;

  [super writeJAXBAttributes: writer];

}

//documentation inherited.
- (void) writeJAXBValue: (xmlTextWriterPtr) writer
{
  [super writeJAXBValue: writer];
}

/**
 * Method for writing the child elements.
 *
 * @param writer The writer.
 */
- (void) writeJAXBChildElements: (xmlTextWriterPtr) writer
{
  int status;
  id __item;
  NSEnumerator *__enumerator;

  [super writeJAXBChildElements: writer];

}
@end /* implementation FULLNS0HwPath (JAXB) */

#endif /* DEF_FULLNS0HwPath_M */
#ifndef DEF_FULLNS0Flood_M
#define DEF_FULLNS0Flood_M

/**
 * (no documentation provided)
 */
@implementation FULLNS0Flood

- (void) dealloc
{
  [super dealloc];
}

//documentation inherited.
+ (id<EnunciateXML>) readFromXML: (NSData *) xml
{
  FULLNS0Flood *_fULLNS0Flood;
  xmlTextReaderPtr reader = xmlReaderForMemory([xml bytes], [xml length], NULL, NULL, 0);
  if (reader == NULL) {
    [NSException raise: @"XMLReadError"
                 format: @"Error instantiating an XML reader."];
    return nil;
  }

  _fULLNS0Flood = (FULLNS0Flood *) [FULLNS0Flood readXMLElement: reader];
  xmlFreeTextReader(reader); //free the reader
  return _fULLNS0Flood;
}

//documentation inherited.
- (NSData *) writeToXML
{
  xmlBufferPtr buf;
  xmlTextWriterPtr writer;
  int rc;
  NSData *data;

  buf = xmlBufferCreate();
  if (buf == NULL) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error creating an XML buffer."];
    return nil;
  }

  writer = xmlNewTextWriterMemory(buf, 0);
  if (writer == NULL) {
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error creating an XML writer."];
    return nil;
  }

  rc = xmlTextWriterStartDocument(writer, NULL, "utf-8", NULL);
  if (rc < 0) {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing XML start document."];
    return nil;
  }

  NS_DURING
  {
    [self writeXMLElement: writer];
  }
  NS_HANDLER
  {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [localException raise];
  }
  NS_ENDHANDLER

  rc = xmlTextWriterEndDocument(writer);
  if (rc < 0) {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing XML end document."];
    return nil;
  }

  xmlFreeTextWriter(writer);
  data = [NSData dataWithBytes: buf->content length: buf->use];
  xmlBufferFree(buf);
  return data;
}
@end /* implementation FULLNS0Flood */

/**
 * Internal, private interface for JAXB reading and writing.
 */
@interface FULLNS0Flood (JAXB) <JAXBReading, JAXBWriting, JAXBType, JAXBElement>

@end /*interface FULLNS0Flood (JAXB)*/

/**
 * Internal, private implementation for JAXB reading and writing.
 */
@implementation FULLNS0Flood (JAXB)

/**
 * Read an instance of FULLNS0Flood from an XML reader.
 *
 * @param reader The reader.
 * @return An instance of FULLNS0Flood defined by the XML reader.
 */
+ (id<JAXBType>) readXMLType: (xmlTextReaderPtr) reader
{
  FULLNS0Flood *_fULLNS0Flood = [[FULLNS0Flood alloc] init];
  NS_DURING
  {
    [_fULLNS0Flood initWithReader: reader];
  }
  NS_HANDLER
  {
    _fULLNS0Flood = nil;
    [localException raise];
  }
  NS_ENDHANDLER

  [_fULLNS0Flood autorelease];
  return _fULLNS0Flood;
}

/**
 * Initialize this instance of FULLNS0Flood according to
 * the XML being read from the reader.
 *
 * @param reader The reader.
 */
- (id) initWithReader: (xmlTextReaderPtr) reader
{
  return [super initWithReader: reader];
}

/**
 * Write the XML for this instance of FULLNS0Flood to the writer.
 * Note that since we're only writing the XML type,
 * No start/end element will be written.
 *
 * @param reader The reader.
 */
- (void) writeXMLType: (xmlTextWriterPtr) writer
{
  [super writeXMLType:writer];
}

/**
 * Reads a FULLNS0Flood from an XML reader. The element to be read is
 * "flood".
 *
 * @param reader The XML reader.
 * @return The FULLNS0Flood.
 */
+ (id<JAXBElement>) readXMLElement: (xmlTextReaderPtr) reader {
  int status;
  FULLNS0Flood *_flood = nil;

  if (xmlTextReaderNodeType(reader) != XML_READER_TYPE_ELEMENT) {
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
    if (status < 1) {
      [NSException raise: @"XMLReadError"
                   format: @"Error advancing the reader to start element flood."];
    }
  }

  if (xmlStrcmp(BAD_CAST "flood", xmlTextReaderConstLocalName(reader)) == 0
      && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read root element {}flood.");
#endif
    _flood = (FULLNS0Flood *)[FULLNS0Flood readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Successfully read root element {}flood.");
#endif
  }
  else {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read FULLNS0Flood. Expected element flood. Current element: {}%s", xmlTextReaderConstLocalName(reader)];
    }
    else {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read FULLNS0Flood. Expected element flood. Current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader)];
    }
  }

  return _flood;
}

/**
 * Writes this FULLNS0Flood to XML under element name "flood".
 * The namespace declarations for the element will be written.
 *
 * @param writer The XML writer.
 * @param _flood The Flood to write.
 * @return 1 if successful, 0 otherwise.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer
{
  [self writeXMLElement: writer writeNamespaces: YES];
}

/**
 * Writes this FULLNS0Flood to an XML writer.
 *
 * @param writer The writer.
 * @param writeNs Whether to write the namespaces for this element to the xml writer.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer writeNamespaces: (BOOL) writeNs
{
  int rc = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "flood", NULL);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing start element {}flood. XML writer status: %i\n", rc];
  }

#if DEBUG_ENUNCIATE > 1
  NSLog(@"writing type {}flood for root element {}flood...");
#endif
  [self writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
  NSLog(@"successfully wrote type {}flood for root element {}flood...");
#endif
  rc = xmlTextWriterEndElement(writer);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing end element {}flood. XML writer status: %i\n", rc];
  }
}

//documentation inherited.
- (BOOL) readJAXBAttribute: (xmlTextReaderPtr) reader
{
  void *_child_accessor;

  if ([super readJAXBAttribute: reader]) {
    return YES;
  }

  return NO;
}

//documentation inherited.
- (BOOL) readJAXBValue: (xmlTextReaderPtr) reader
{
  return [super readJAXBValue: reader];
}

//documentation inherited.
- (BOOL) readJAXBChildElement: (xmlTextReaderPtr) reader
{
  id __child;
  void *_child_accessor;
  int status, depth;

  if ([super readJAXBChildElement: reader]) {
    return YES;
  }

  return NO;
}

//documentation inherited.
- (int) readUnknownJAXBChildElement: (xmlTextReaderPtr) reader
{
  return [super readUnknownJAXBChildElement: reader];
}

//documentation inherited.
- (void) readUnknownJAXBAttribute: (xmlTextReaderPtr) reader
{
  [super readUnknownJAXBAttribute: reader];
}

//documentation inherited.
- (void) writeJAXBAttributes: (xmlTextWriterPtr) writer
{
  int status;

  [super writeJAXBAttributes: writer];

}

//documentation inherited.
- (void) writeJAXBValue: (xmlTextWriterPtr) writer
{
  [super writeJAXBValue: writer];
}

/**
 * Method for writing the child elements.
 *
 * @param writer The writer.
 */
- (void) writeJAXBChildElements: (xmlTextWriterPtr) writer
{
  int status;
  id __item;
  NSEnumerator *__enumerator;

  [super writeJAXBChildElements: writer];

}
@end /* implementation FULLNS0Flood (JAXB) */

#endif /* DEF_FULLNS0Flood_M */
#ifndef DEF_FULLNS0Drop_M
#define DEF_FULLNS0Drop_M

/**
 * (no documentation provided)
 */
@implementation FULLNS0Drop

- (void) dealloc
{
  [super dealloc];
}

//documentation inherited.
+ (id<EnunciateXML>) readFromXML: (NSData *) xml
{
  FULLNS0Drop *_fULLNS0Drop;
  xmlTextReaderPtr reader = xmlReaderForMemory([xml bytes], [xml length], NULL, NULL, 0);
  if (reader == NULL) {
    [NSException raise: @"XMLReadError"
                 format: @"Error instantiating an XML reader."];
    return nil;
  }

  _fULLNS0Drop = (FULLNS0Drop *) [FULLNS0Drop readXMLElement: reader];
  xmlFreeTextReader(reader); //free the reader
  return _fULLNS0Drop;
}

//documentation inherited.
- (NSData *) writeToXML
{
  xmlBufferPtr buf;
  xmlTextWriterPtr writer;
  int rc;
  NSData *data;

  buf = xmlBufferCreate();
  if (buf == NULL) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error creating an XML buffer."];
    return nil;
  }

  writer = xmlNewTextWriterMemory(buf, 0);
  if (writer == NULL) {
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error creating an XML writer."];
    return nil;
  }

  rc = xmlTextWriterStartDocument(writer, NULL, "utf-8", NULL);
  if (rc < 0) {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing XML start document."];
    return nil;
  }

  NS_DURING
  {
    [self writeXMLElement: writer];
  }
  NS_HANDLER
  {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [localException raise];
  }
  NS_ENDHANDLER

  rc = xmlTextWriterEndDocument(writer);
  if (rc < 0) {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing XML end document."];
    return nil;
  }

  xmlFreeTextWriter(writer);
  data = [NSData dataWithBytes: buf->content length: buf->use];
  xmlBufferFree(buf);
  return data;
}
@end /* implementation FULLNS0Drop */

/**
 * Internal, private interface for JAXB reading and writing.
 */
@interface FULLNS0Drop (JAXB) <JAXBReading, JAXBWriting, JAXBType, JAXBElement>

@end /*interface FULLNS0Drop (JAXB)*/

/**
 * Internal, private implementation for JAXB reading and writing.
 */
@implementation FULLNS0Drop (JAXB)

/**
 * Read an instance of FULLNS0Drop from an XML reader.
 *
 * @param reader The reader.
 * @return An instance of FULLNS0Drop defined by the XML reader.
 */
+ (id<JAXBType>) readXMLType: (xmlTextReaderPtr) reader
{
  FULLNS0Drop *_fULLNS0Drop = [[FULLNS0Drop alloc] init];
  NS_DURING
  {
    [_fULLNS0Drop initWithReader: reader];
  }
  NS_HANDLER
  {
    _fULLNS0Drop = nil;
    [localException raise];
  }
  NS_ENDHANDLER

  [_fULLNS0Drop autorelease];
  return _fULLNS0Drop;
}

/**
 * Initialize this instance of FULLNS0Drop according to
 * the XML being read from the reader.
 *
 * @param reader The reader.
 */
- (id) initWithReader: (xmlTextReaderPtr) reader
{
  return [super initWithReader: reader];
}

/**
 * Write the XML for this instance of FULLNS0Drop to the writer.
 * Note that since we're only writing the XML type,
 * No start/end element will be written.
 *
 * @param reader The reader.
 */
- (void) writeXMLType: (xmlTextWriterPtr) writer
{
  [super writeXMLType:writer];
}

/**
 * Reads a FULLNS0Drop from an XML reader. The element to be read is
 * "drop".
 *
 * @param reader The XML reader.
 * @return The FULLNS0Drop.
 */
+ (id<JAXBElement>) readXMLElement: (xmlTextReaderPtr) reader {
  int status;
  FULLNS0Drop *_drop = nil;

  if (xmlTextReaderNodeType(reader) != XML_READER_TYPE_ELEMENT) {
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
    if (status < 1) {
      [NSException raise: @"XMLReadError"
                   format: @"Error advancing the reader to start element drop."];
    }
  }

  if (xmlStrcmp(BAD_CAST "drop", xmlTextReaderConstLocalName(reader)) == 0
      && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read root element {}drop.");
#endif
    _drop = (FULLNS0Drop *)[FULLNS0Drop readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Successfully read root element {}drop.");
#endif
  }
  else {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read FULLNS0Drop. Expected element drop. Current element: {}%s", xmlTextReaderConstLocalName(reader)];
    }
    else {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read FULLNS0Drop. Expected element drop. Current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader)];
    }
  }

  return _drop;
}

/**
 * Writes this FULLNS0Drop to XML under element name "drop".
 * The namespace declarations for the element will be written.
 *
 * @param writer The XML writer.
 * @param _drop The Drop to write.
 * @return 1 if successful, 0 otherwise.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer
{
  [self writeXMLElement: writer writeNamespaces: YES];
}

/**
 * Writes this FULLNS0Drop to an XML writer.
 *
 * @param writer The writer.
 * @param writeNs Whether to write the namespaces for this element to the xml writer.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer writeNamespaces: (BOOL) writeNs
{
  int rc = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "drop", NULL);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing start element {}drop. XML writer status: %i\n", rc];
  }

#if DEBUG_ENUNCIATE > 1
  NSLog(@"writing type {}drop for root element {}drop...");
#endif
  [self writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
  NSLog(@"successfully wrote type {}drop for root element {}drop...");
#endif
  rc = xmlTextWriterEndElement(writer);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing end element {}drop. XML writer status: %i\n", rc];
  }
}

//documentation inherited.
- (BOOL) readJAXBAttribute: (xmlTextReaderPtr) reader
{
  void *_child_accessor;

  if ([super readJAXBAttribute: reader]) {
    return YES;
  }

  return NO;
}

//documentation inherited.
- (BOOL) readJAXBValue: (xmlTextReaderPtr) reader
{
  return [super readJAXBValue: reader];
}

//documentation inherited.
- (BOOL) readJAXBChildElement: (xmlTextReaderPtr) reader
{
  id __child;
  void *_child_accessor;
  int status, depth;

  if ([super readJAXBChildElement: reader]) {
    return YES;
  }

  return NO;
}

//documentation inherited.
- (int) readUnknownJAXBChildElement: (xmlTextReaderPtr) reader
{
  return [super readUnknownJAXBChildElement: reader];
}

//documentation inherited.
- (void) readUnknownJAXBAttribute: (xmlTextReaderPtr) reader
{
  [super readUnknownJAXBAttribute: reader];
}

//documentation inherited.
- (void) writeJAXBAttributes: (xmlTextWriterPtr) writer
{
  int status;

  [super writeJAXBAttributes: writer];

}

//documentation inherited.
- (void) writeJAXBValue: (xmlTextWriterPtr) writer
{
  [super writeJAXBValue: writer];
}

/**
 * Method for writing the child elements.
 *
 * @param writer The writer.
 */
- (void) writeJAXBChildElements: (xmlTextWriterPtr) writer
{
  int status;
  id __item;
  NSEnumerator *__enumerator;

  [super writeJAXBChildElements: writer];

}
@end /* implementation FULLNS0Drop (JAXB) */

#endif /* DEF_FULLNS0Drop_M */
#ifndef DEF_FULLNS0Controller_M
#define DEF_FULLNS0Controller_M

/**
 * (no documentation provided)
 */
@implementation FULLNS0Controller

- (void) dealloc
{
  [super dealloc];
}

//documentation inherited.
+ (id<EnunciateXML>) readFromXML: (NSData *) xml
{
  FULLNS0Controller *_fULLNS0Controller;
  xmlTextReaderPtr reader = xmlReaderForMemory([xml bytes], [xml length], NULL, NULL, 0);
  if (reader == NULL) {
    [NSException raise: @"XMLReadError"
                 format: @"Error instantiating an XML reader."];
    return nil;
  }

  _fULLNS0Controller = (FULLNS0Controller *) [FULLNS0Controller readXMLElement: reader];
  xmlFreeTextReader(reader); //free the reader
  return _fULLNS0Controller;
}

//documentation inherited.
- (NSData *) writeToXML
{
  xmlBufferPtr buf;
  xmlTextWriterPtr writer;
  int rc;
  NSData *data;

  buf = xmlBufferCreate();
  if (buf == NULL) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error creating an XML buffer."];
    return nil;
  }

  writer = xmlNewTextWriterMemory(buf, 0);
  if (writer == NULL) {
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error creating an XML writer."];
    return nil;
  }

  rc = xmlTextWriterStartDocument(writer, NULL, "utf-8", NULL);
  if (rc < 0) {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing XML start document."];
    return nil;
  }

  NS_DURING
  {
    [self writeXMLElement: writer];
  }
  NS_HANDLER
  {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [localException raise];
  }
  NS_ENDHANDLER

  rc = xmlTextWriterEndDocument(writer);
  if (rc < 0) {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing XML end document."];
    return nil;
  }

  xmlFreeTextWriter(writer);
  data = [NSData dataWithBytes: buf->content length: buf->use];
  xmlBufferFree(buf);
  return data;
}
@end /* implementation FULLNS0Controller */

/**
 * Internal, private interface for JAXB reading and writing.
 */
@interface FULLNS0Controller (JAXB) <JAXBReading, JAXBWriting, JAXBType, JAXBElement>

@end /*interface FULLNS0Controller (JAXB)*/

/**
 * Internal, private implementation for JAXB reading and writing.
 */
@implementation FULLNS0Controller (JAXB)

/**
 * Read an instance of FULLNS0Controller from an XML reader.
 *
 * @param reader The reader.
 * @return An instance of FULLNS0Controller defined by the XML reader.
 */
+ (id<JAXBType>) readXMLType: (xmlTextReaderPtr) reader
{
  FULLNS0Controller *_fULLNS0Controller = [[FULLNS0Controller alloc] init];
  NS_DURING
  {
    [_fULLNS0Controller initWithReader: reader];
  }
  NS_HANDLER
  {
    _fULLNS0Controller = nil;
    [localException raise];
  }
  NS_ENDHANDLER

  [_fULLNS0Controller autorelease];
  return _fULLNS0Controller;
}

/**
 * Initialize this instance of FULLNS0Controller according to
 * the XML being read from the reader.
 *
 * @param reader The reader.
 */
- (id) initWithReader: (xmlTextReaderPtr) reader
{
  return [super initWithReader: reader];
}

/**
 * Write the XML for this instance of FULLNS0Controller to the writer.
 * Note that since we're only writing the XML type,
 * No start/end element will be written.
 *
 * @param reader The reader.
 */
- (void) writeXMLType: (xmlTextWriterPtr) writer
{
  [super writeXMLType:writer];
}

/**
 * Reads a FULLNS0Controller from an XML reader. The element to be read is
 * "controller".
 *
 * @param reader The XML reader.
 * @return The FULLNS0Controller.
 */
+ (id<JAXBElement>) readXMLElement: (xmlTextReaderPtr) reader {
  int status;
  FULLNS0Controller *_controller = nil;

  if (xmlTextReaderNodeType(reader) != XML_READER_TYPE_ELEMENT) {
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
    if (status < 1) {
      [NSException raise: @"XMLReadError"
                   format: @"Error advancing the reader to start element controller."];
    }
  }

  if (xmlStrcmp(BAD_CAST "controller", xmlTextReaderConstLocalName(reader)) == 0
      && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read root element {}controller.");
#endif
    _controller = (FULLNS0Controller *)[FULLNS0Controller readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Successfully read root element {}controller.");
#endif
  }
  else {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read FULLNS0Controller. Expected element controller. Current element: {}%s", xmlTextReaderConstLocalName(reader)];
    }
    else {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read FULLNS0Controller. Expected element controller. Current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader)];
    }
  }

  return _controller;
}

/**
 * Writes this FULLNS0Controller to XML under element name "controller".
 * The namespace declarations for the element will be written.
 *
 * @param writer The XML writer.
 * @param _controller The Controller to write.
 * @return 1 if successful, 0 otherwise.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer
{
  [self writeXMLElement: writer writeNamespaces: YES];
}

/**
 * Writes this FULLNS0Controller to an XML writer.
 *
 * @param writer The writer.
 * @param writeNs Whether to write the namespaces for this element to the xml writer.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer writeNamespaces: (BOOL) writeNs
{
  int rc = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "controller", NULL);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing start element {}controller. XML writer status: %i\n", rc];
  }

#if DEBUG_ENUNCIATE > 1
  NSLog(@"writing type {}controller for root element {}controller...");
#endif
  [self writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
  NSLog(@"successfully wrote type {}controller for root element {}controller...");
#endif
  rc = xmlTextWriterEndElement(writer);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing end element {}controller. XML writer status: %i\n", rc];
  }
}

//documentation inherited.
- (BOOL) readJAXBAttribute: (xmlTextReaderPtr) reader
{
  void *_child_accessor;

  if ([super readJAXBAttribute: reader]) {
    return YES;
  }

  return NO;
}

//documentation inherited.
- (BOOL) readJAXBValue: (xmlTextReaderPtr) reader
{
  return [super readJAXBValue: reader];
}

//documentation inherited.
- (BOOL) readJAXBChildElement: (xmlTextReaderPtr) reader
{
  id __child;
  void *_child_accessor;
  int status, depth;

  if ([super readJAXBChildElement: reader]) {
    return YES;
  }

  return NO;
}

//documentation inherited.
- (int) readUnknownJAXBChildElement: (xmlTextReaderPtr) reader
{
  return [super readUnknownJAXBChildElement: reader];
}

//documentation inherited.
- (void) readUnknownJAXBAttribute: (xmlTextReaderPtr) reader
{
  [super readUnknownJAXBAttribute: reader];
}

//documentation inherited.
- (void) writeJAXBAttributes: (xmlTextWriterPtr) writer
{
  int status;

  [super writeJAXBAttributes: writer];

}

//documentation inherited.
- (void) writeJAXBValue: (xmlTextWriterPtr) writer
{
  [super writeJAXBValue: writer];
}

/**
 * Method for writing the child elements.
 *
 * @param writer The writer.
 */
- (void) writeJAXBChildElements: (xmlTextWriterPtr) writer
{
  int status;
  id __item;
  NSEnumerator *__enumerator;

  [super writeJAXBChildElements: writer];

}
@end /* implementation FULLNS0Controller (JAXB) */

#endif /* DEF_FULLNS0Controller_M */
