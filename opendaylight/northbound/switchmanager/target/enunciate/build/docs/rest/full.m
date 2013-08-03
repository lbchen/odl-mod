#import "full.h"
#ifndef DEF_FULLNS0Property_M
#define DEF_FULLNS0Property_M

/**
 * (no documentation provided)
 */
@implementation FULLNS0Property

- (void) dealloc
{
  [super dealloc];
}

//documentation inherited.
+ (id<EnunciateXML>) readFromXML: (NSData *) xml
{
  FULLNS0Property *_fULLNS0Property;
  xmlTextReaderPtr reader = xmlReaderForMemory([xml bytes], [xml length], NULL, NULL, 0);
  if (reader == NULL) {
    [NSException raise: @"XMLReadError"
                 format: @"Error instantiating an XML reader."];
    return nil;
  }

  _fULLNS0Property = (FULLNS0Property *) [FULLNS0Property readXMLElement: reader];
  xmlFreeTextReader(reader); //free the reader
  return _fULLNS0Property;
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
@end /* implementation FULLNS0Property */

/**
 * Internal, private interface for JAXB reading and writing.
 */
@interface FULLNS0Property (JAXB) <JAXBReading, JAXBWriting, JAXBType, JAXBElement>

@end /*interface FULLNS0Property (JAXB)*/

/**
 * Internal, private implementation for JAXB reading and writing.
 */
@implementation FULLNS0Property (JAXB)

/**
 * Read an instance of FULLNS0Property from an XML reader.
 *
 * @param reader The reader.
 * @return An instance of FULLNS0Property defined by the XML reader.
 */
+ (id<JAXBType>) readXMLType: (xmlTextReaderPtr) reader
{
  FULLNS0Property *_fULLNS0Property = [[FULLNS0Property alloc] init];
  NS_DURING
  {
    [_fULLNS0Property initWithReader: reader];
  }
  NS_HANDLER
  {
    _fULLNS0Property = nil;
    [localException raise];
  }
  NS_ENDHANDLER

  [_fULLNS0Property autorelease];
  return _fULLNS0Property;
}

/**
 * Initialize this instance of FULLNS0Property according to
 * the XML being read from the reader.
 *
 * @param reader The reader.
 */
- (id) initWithReader: (xmlTextReaderPtr) reader
{
  return [super initWithReader: reader];
}

/**
 * Write the XML for this instance of FULLNS0Property to the writer.
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
 * Reads a FULLNS0Property from an XML reader. The element to be read is
 * "property".
 *
 * @param reader The XML reader.
 * @return The FULLNS0Property.
 */
+ (id<JAXBElement>) readXMLElement: (xmlTextReaderPtr) reader {
  int status;
  FULLNS0Property *_property = nil;

  if (xmlTextReaderNodeType(reader) != XML_READER_TYPE_ELEMENT) {
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
    if (status < 1) {
      [NSException raise: @"XMLReadError"
                   format: @"Error advancing the reader to start element property."];
    }
  }

  if (xmlStrcmp(BAD_CAST "property", xmlTextReaderConstLocalName(reader)) == 0
      && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read root element {}property.");
#endif
    _property = (FULLNS0Property *)[FULLNS0Property readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Successfully read root element {}property.");
#endif
  }
  else {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read FULLNS0Property. Expected element property. Current element: {}%s", xmlTextReaderConstLocalName(reader)];
    }
    else {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read FULLNS0Property. Expected element property. Current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader)];
    }
  }

  return _property;
}

/**
 * Writes this FULLNS0Property to XML under element name "property".
 * The namespace declarations for the element will be written.
 *
 * @param writer The XML writer.
 * @param _property The Property to write.
 * @return 1 if successful, 0 otherwise.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer
{
  [self writeXMLElement: writer writeNamespaces: YES];
}

/**
 * Writes this FULLNS0Property to an XML writer.
 *
 * @param writer The writer.
 * @param writeNs Whether to write the namespaces for this element to the xml writer.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer writeNamespaces: (BOOL) writeNs
{
  int rc = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "property", NULL);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing start element {}property. XML writer status: %i\n", rc];
  }

#if DEBUG_ENUNCIATE > 1
  NSLog(@"writing type {}property for root element {}property...");
#endif
  [self writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
  NSLog(@"successfully wrote type {}property for root element {}property...");
#endif
  rc = xmlTextWriterEndElement(writer);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing end element {}property. XML writer status: %i\n", rc];
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
@end /* implementation FULLNS0Property (JAXB) */

#endif /* DEF_FULLNS0Property_M */
#ifndef DEF_FULLNS0NodeConnectors_M
#define DEF_FULLNS0NodeConnectors_M

/**
 * (no documentation provided)
 */
@implementation FULLNS0NodeConnectors

/**
 * (no documentation provided)
 */
- (NSArray *) nodeConnectorProperties
{
  return _nodeConnectorProperties;
}

/**
 * (no documentation provided)
 */
- (void) setNodeConnectorProperties: (NSArray *) newNodeConnectorProperties
{
  [newNodeConnectorProperties retain];
  [_nodeConnectorProperties release];
  _nodeConnectorProperties = newNodeConnectorProperties;
}

- (void) dealloc
{
  [self setNodeConnectorProperties: nil];
  [super dealloc];
}

//documentation inherited.
+ (id<EnunciateXML>) readFromXML: (NSData *) xml
{
  FULLNS0NodeConnectors *_fULLNS0NodeConnectors;
  xmlTextReaderPtr reader = xmlReaderForMemory([xml bytes], [xml length], NULL, NULL, 0);
  if (reader == NULL) {
    [NSException raise: @"XMLReadError"
                 format: @"Error instantiating an XML reader."];
    return nil;
  }

  _fULLNS0NodeConnectors = (FULLNS0NodeConnectors *) [FULLNS0NodeConnectors readXMLElement: reader];
  xmlFreeTextReader(reader); //free the reader
  return _fULLNS0NodeConnectors;
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
@end /* implementation FULLNS0NodeConnectors */

/**
 * Internal, private interface for JAXB reading and writing.
 */
@interface FULLNS0NodeConnectors (JAXB) <JAXBReading, JAXBWriting, JAXBType, JAXBElement>

@end /*interface FULLNS0NodeConnectors (JAXB)*/

/**
 * Internal, private implementation for JAXB reading and writing.
 */
@implementation FULLNS0NodeConnectors (JAXB)

/**
 * Read an instance of FULLNS0NodeConnectors from an XML reader.
 *
 * @param reader The reader.
 * @return An instance of FULLNS0NodeConnectors defined by the XML reader.
 */
+ (id<JAXBType>) readXMLType: (xmlTextReaderPtr) reader
{
  FULLNS0NodeConnectors *_fULLNS0NodeConnectors = [[FULLNS0NodeConnectors alloc] init];
  NS_DURING
  {
    [_fULLNS0NodeConnectors initWithReader: reader];
  }
  NS_HANDLER
  {
    _fULLNS0NodeConnectors = nil;
    [localException raise];
  }
  NS_ENDHANDLER

  [_fULLNS0NodeConnectors autorelease];
  return _fULLNS0NodeConnectors;
}

/**
 * Initialize this instance of FULLNS0NodeConnectors according to
 * the XML being read from the reader.
 *
 * @param reader The reader.
 */
- (id) initWithReader: (xmlTextReaderPtr) reader
{
  return [super initWithReader: reader];
}

/**
 * Write the XML for this instance of FULLNS0NodeConnectors to the writer.
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
 * Reads a FULLNS0NodeConnectors from an XML reader. The element to be read is
 * "nodeConnectors".
 *
 * @param reader The XML reader.
 * @return The FULLNS0NodeConnectors.
 */
+ (id<JAXBElement>) readXMLElement: (xmlTextReaderPtr) reader {
  int status;
  FULLNS0NodeConnectors *_nodeConnectors = nil;

  if (xmlTextReaderNodeType(reader) != XML_READER_TYPE_ELEMENT) {
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
    if (status < 1) {
      [NSException raise: @"XMLReadError"
                   format: @"Error advancing the reader to start element nodeConnectors."];
    }
  }

  if (xmlStrcmp(BAD_CAST "nodeConnectors", xmlTextReaderConstLocalName(reader)) == 0
      && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read root element {}nodeConnectors.");
#endif
    _nodeConnectors = (FULLNS0NodeConnectors *)[FULLNS0NodeConnectors readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Successfully read root element {}nodeConnectors.");
#endif
  }
  else {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read FULLNS0NodeConnectors. Expected element nodeConnectors. Current element: {}%s", xmlTextReaderConstLocalName(reader)];
    }
    else {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read FULLNS0NodeConnectors. Expected element nodeConnectors. Current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader)];
    }
  }

  return _nodeConnectors;
}

/**
 * Writes this FULLNS0NodeConnectors to XML under element name "nodeConnectors".
 * The namespace declarations for the element will be written.
 *
 * @param writer The XML writer.
 * @param _nodeConnectors The NodeConnectors to write.
 * @return 1 if successful, 0 otherwise.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer
{
  [self writeXMLElement: writer writeNamespaces: YES];
}

/**
 * Writes this FULLNS0NodeConnectors to an XML writer.
 *
 * @param writer The writer.
 * @param writeNs Whether to write the namespaces for this element to the xml writer.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer writeNamespaces: (BOOL) writeNs
{
  int rc = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "nodeConnectors", NULL);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing start element {}nodeConnectors. XML writer status: %i\n", rc];
  }

#if DEBUG_ENUNCIATE > 1
  NSLog(@"writing type {}nodeConnectors for root element {}nodeConnectors...");
#endif
  [self writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
  NSLog(@"successfully wrote type {}nodeConnectors for root element {}nodeConnectors...");
#endif
  rc = xmlTextWriterEndElement(writer);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing end element {}nodeConnectors. XML writer status: %i\n", rc];
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
    && xmlStrcmp(BAD_CAST "nodeConnectorProperties", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}nodeConnectorProperties of type {}nodeConnectorProperties.");
#endif

    __child = [FULLNS0NodeConnectorProperties readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}nodeConnectorProperties of type {}nodeConnectorProperties.");
#endif

    if ([self nodeConnectorProperties]) {
      [self setNodeConnectorProperties: [[self nodeConnectorProperties] arrayByAddingObject: __child]];
    }
    else {
      [self setNodeConnectorProperties: [NSArray arrayWithObject: __child]];
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

  if ([self nodeConnectorProperties]) {
    __enumerator = [[self nodeConnectorProperties] objectEnumerator];

    while ( (__item = [__enumerator nextObject]) ) {
      status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "nodeConnectorProperties", NULL);
      if (status < 0) {
        [NSException raise: @"XMLWriteError"
                     format: @"Error writing start child element {}nodeConnectorProperties."];
      }

#if DEBUG_ENUNCIATE > 1
      NSLog(@"writing element {}nodeConnectorProperties...");
#endif
      [__item writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
      NSLog(@"successfully wrote element {}nodeConnectorProperties...");
#endif

      status = xmlTextWriterEndElement(writer);
      if (status < 0) {
        [NSException raise: @"XMLWriteError"
                     format: @"Error writing end child element {}nodeConnectorProperties."];
      }
    } //end item iterator.
  }
}
@end /* implementation FULLNS0NodeConnectors (JAXB) */

#endif /* DEF_FULLNS0NodeConnectors_M */
#ifndef DEF_FULLNS0NodeConnectorProperties_M
#define DEF_FULLNS0NodeConnectorProperties_M

/**
 *  The class describes set of properties attached to a node connector

 */
@implementation FULLNS0NodeConnectorProperties

/**
 * (no documentation provided)
 */
- (FULLNS0NodeConnector *) nodeconnector
{
  return _nodeconnector;
}

/**
 * (no documentation provided)
 */
- (void) setNodeconnector: (FULLNS0NodeConnector *) newNodeconnector
{
  [newNodeconnector retain];
  [_nodeconnector release];
  _nodeconnector = newNodeconnector;
}

/**
 * (no documentation provided)
 */
- (NSArray *) properties
{
  return _properties;
}

/**
 * (no documentation provided)
 */
- (void) setProperties: (NSArray *) newProperties
{
  [newProperties retain];
  [_properties release];
  _properties = newProperties;
}

- (void) dealloc
{
  [self setNodeconnector: nil];
  [self setProperties: nil];
  [super dealloc];
}

//documentation inherited.
+ (id<EnunciateXML>) readFromXML: (NSData *) xml
{
  FULLNS0NodeConnectorProperties *_fULLNS0NodeConnectorProperties;
  xmlTextReaderPtr reader = xmlReaderForMemory([xml bytes], [xml length], NULL, NULL, 0);
  if (reader == NULL) {
    [NSException raise: @"XMLReadError"
                 format: @"Error instantiating an XML reader."];
    return nil;
  }

  _fULLNS0NodeConnectorProperties = (FULLNS0NodeConnectorProperties *) [FULLNS0NodeConnectorProperties readXMLElement: reader];
  xmlFreeTextReader(reader); //free the reader
  return _fULLNS0NodeConnectorProperties;
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
@end /* implementation FULLNS0NodeConnectorProperties */

/**
 * Internal, private interface for JAXB reading and writing.
 */
@interface FULLNS0NodeConnectorProperties (JAXB) <JAXBReading, JAXBWriting, JAXBType, JAXBElement>

@end /*interface FULLNS0NodeConnectorProperties (JAXB)*/

/**
 * Internal, private implementation for JAXB reading and writing.
 */
@implementation FULLNS0NodeConnectorProperties (JAXB)

/**
 * Read an instance of FULLNS0NodeConnectorProperties from an XML reader.
 *
 * @param reader The reader.
 * @return An instance of FULLNS0NodeConnectorProperties defined by the XML reader.
 */
+ (id<JAXBType>) readXMLType: (xmlTextReaderPtr) reader
{
  FULLNS0NodeConnectorProperties *_fULLNS0NodeConnectorProperties = [[FULLNS0NodeConnectorProperties alloc] init];
  NS_DURING
  {
    [_fULLNS0NodeConnectorProperties initWithReader: reader];
  }
  NS_HANDLER
  {
    _fULLNS0NodeConnectorProperties = nil;
    [localException raise];
  }
  NS_ENDHANDLER

  [_fULLNS0NodeConnectorProperties autorelease];
  return _fULLNS0NodeConnectorProperties;
}

/**
 * Initialize this instance of FULLNS0NodeConnectorProperties according to
 * the XML being read from the reader.
 *
 * @param reader The reader.
 */
- (id) initWithReader: (xmlTextReaderPtr) reader
{
  return [super initWithReader: reader];
}

/**
 * Write the XML for this instance of FULLNS0NodeConnectorProperties to the writer.
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
 * Reads a FULLNS0NodeConnectorProperties from an XML reader. The element to be read is
 * "nodeConnectorProperties".
 *
 * @param reader The XML reader.
 * @return The FULLNS0NodeConnectorProperties.
 */
+ (id<JAXBElement>) readXMLElement: (xmlTextReaderPtr) reader {
  int status;
  FULLNS0NodeConnectorProperties *_nodeConnectorProperties = nil;

  if (xmlTextReaderNodeType(reader) != XML_READER_TYPE_ELEMENT) {
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
    if (status < 1) {
      [NSException raise: @"XMLReadError"
                   format: @"Error advancing the reader to start element nodeConnectorProperties."];
    }
  }

  if (xmlStrcmp(BAD_CAST "nodeConnectorProperties", xmlTextReaderConstLocalName(reader)) == 0
      && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read root element {}nodeConnectorProperties.");
#endif
    _nodeConnectorProperties = (FULLNS0NodeConnectorProperties *)[FULLNS0NodeConnectorProperties readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Successfully read root element {}nodeConnectorProperties.");
#endif
  }
  else {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read FULLNS0NodeConnectorProperties. Expected element nodeConnectorProperties. Current element: {}%s", xmlTextReaderConstLocalName(reader)];
    }
    else {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read FULLNS0NodeConnectorProperties. Expected element nodeConnectorProperties. Current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader)];
    }
  }

  return _nodeConnectorProperties;
}

/**
 * Writes this FULLNS0NodeConnectorProperties to XML under element name "nodeConnectorProperties".
 * The namespace declarations for the element will be written.
 *
 * @param writer The XML writer.
 * @param _nodeConnectorProperties The NodeConnectorProperties to write.
 * @return 1 if successful, 0 otherwise.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer
{
  [self writeXMLElement: writer writeNamespaces: YES];
}

/**
 * Writes this FULLNS0NodeConnectorProperties to an XML writer.
 *
 * @param writer The writer.
 * @param writeNs Whether to write the namespaces for this element to the xml writer.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer writeNamespaces: (BOOL) writeNs
{
  int rc = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "nodeConnectorProperties", NULL);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing start element {}nodeConnectorProperties. XML writer status: %i\n", rc];
  }

#if DEBUG_ENUNCIATE > 1
  NSLog(@"writing type {}nodeConnectorProperties for root element {}nodeConnectorProperties...");
#endif
  [self writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
  NSLog(@"successfully wrote type {}nodeConnectorProperties for root element {}nodeConnectorProperties...");
#endif
  rc = xmlTextWriterEndElement(writer);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing end element {}nodeConnectorProperties. XML writer status: %i\n", rc];
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
    && xmlStrcmp(BAD_CAST "nodeconnector", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}nodeconnector of type {}nodeConnector.");
#endif
    __child = [FULLNS0NodeConnector readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}nodeconnector of type {}nodeConnector.");
#endif

    [self setNodeconnector: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "properties", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

    if (xmlTextReaderIsEmptyElement(reader) == 0) {
#if DEBUG_ENUNCIATE > 1
      NSLog(@"Unwrapping wrapper element {}properties...");
#endif
      //start wrapper element "{}properties"
      depth = xmlTextReaderDepth(reader);
      status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      while (xmlTextReaderDepth(reader) > depth) {
        if (status < 1) {
          //panic: XML read error.
          [NSException raise: @"XMLReadError"
                       format: @"Failure to advance to next wrapped child element."];
        }
  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "actions", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}actions of element {}actions.");
#endif
    __child = [NSArray readXMLElement: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}actions of element {}actions.");
#endif

    if ([self properties]) {
      [self setProperties: [[self properties] arrayByAddingObject: __child]];
    }
    else {
      [self setProperties: [NSArray arrayWithObject: __child]];
    }
    continue; //continue "while in wrapper element" loop
  } //end "if choice"
  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "advertisedBandwidth", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}advertisedBandwidth of element {}advertisedBandwidth.");
#endif
    __child = [NSArray readXMLElement: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}advertisedBandwidth of element {}advertisedBandwidth.");
#endif

    if ([self properties]) {
      [self setProperties: [[self properties] arrayByAddingObject: __child]];
    }
    else {
      [self setProperties: [NSArray arrayWithObject: __child]];
    }
    continue; //continue "while in wrapper element" loop
  } //end "if choice"
  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "bandwidth", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}bandwidth of element {}bandwidth.");
#endif
    __child = [NSArray readXMLElement: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}bandwidth of element {}bandwidth.");
#endif

    if ([self properties]) {
      [self setProperties: [[self properties] arrayByAddingObject: __child]];
    }
    else {
      [self setProperties: [NSArray arrayWithObject: __child]];
    }
    continue; //continue "while in wrapper element" loop
  } //end "if choice"
  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "buffers", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}buffers of element {}buffers.");
#endif
    __child = [NSArray readXMLElement: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}buffers of element {}buffers.");
#endif

    if ([self properties]) {
      [self setProperties: [[self properties] arrayByAddingObject: __child]];
    }
    else {
      [self setProperties: [NSArray arrayWithObject: __child]];
    }
    continue; //continue "while in wrapper element" loop
  } //end "if choice"
  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "capabilities", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}capabilities of element {}capabilities.");
#endif
    __child = [NSArray readXMLElement: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}capabilities of element {}capabilities.");
#endif

    if ([self properties]) {
      [self setProperties: [[self properties] arrayByAddingObject: __child]];
    }
    else {
      [self setProperties: [NSArray arrayWithObject: __child]];
    }
    continue; //continue "while in wrapper element" loop
  } //end "if choice"
  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "config", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}config of element {}config.");
#endif
    __child = [NSArray readXMLElement: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}config of element {}config.");
#endif

    if ([self properties]) {
      [self setProperties: [[self properties] arrayByAddingObject: __child]];
    }
    else {
      [self setProperties: [NSArray arrayWithObject: __child]];
    }
    continue; //continue "while in wrapper element" loop
  } //end "if choice"
  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "latency", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}latency of element {}latency.");
#endif
    __child = [NSArray readXMLElement: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}latency of element {}latency.");
#endif

    if ([self properties]) {
      [self setProperties: [[self properties] arrayByAddingObject: __child]];
    }
    else {
      [self setProperties: [NSArray arrayWithObject: __child]];
    }
    continue; //continue "while in wrapper element" loop
  } //end "if choice"
  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "macAddress", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}macAddress of element {}macAddress.");
#endif
    __child = [NSArray readXMLElement: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}macAddress of element {}macAddress.");
#endif

    if ([self properties]) {
      [self setProperties: [[self properties] arrayByAddingObject: __child]];
    }
    else {
      [self setProperties: [NSArray arrayWithObject: __child]];
    }
    continue; //continue "while in wrapper element" loop
  } //end "if choice"
  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "name", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}name of element {}name.");
#endif
    __child = [NSArray readXMLElement: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}name of element {}name.");
#endif

    if ([self properties]) {
      [self setProperties: [[self properties] arrayByAddingObject: __child]];
    }
    else {
      [self setProperties: [NSArray arrayWithObject: __child]];
    }
    continue; //continue "while in wrapper element" loop
  } //end "if choice"
  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "peerBandwidth", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}peerBandwidth of element {}peerBandwidth.");
#endif
    __child = [NSArray readXMLElement: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}peerBandwidth of element {}peerBandwidth.");
#endif

    if ([self properties]) {
      [self setProperties: [[self properties] arrayByAddingObject: __child]];
    }
    else {
      [self setProperties: [NSArray arrayWithObject: __child]];
    }
    continue; //continue "while in wrapper element" loop
  } //end "if choice"
  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "property", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}property of element {}property.");
#endif
    __child = [NSArray readXMLElement: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}property of element {}property.");
#endif

    if ([self properties]) {
      [self setProperties: [[self properties] arrayByAddingObject: __child]];
    }
    else {
      [self setProperties: [NSArray arrayWithObject: __child]];
    }
    continue; //continue "while in wrapper element" loop
  } //end "if choice"
  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "state", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}state of element {}state.");
#endif
    __child = [NSArray readXMLElement: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}state of element {}state.");
#endif

    if ([self properties]) {
      [self setProperties: [[self properties] arrayByAddingObject: __child]];
    }
    else {
      [self setProperties: [NSArray arrayWithObject: __child]];
    }
    continue; //continue "while in wrapper element" loop
  } //end "if choice"
  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "supportedBandwidth", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}supportedBandwidth of element {}supportedBandwidth.");
#endif
    __child = [NSArray readXMLElement: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}supportedBandwidth of element {}supportedBandwidth.");
#endif

    if ([self properties]) {
      [self setProperties: [[self properties] arrayByAddingObject: __child]];
    }
    else {
      [self setProperties: [NSArray arrayWithObject: __child]];
    }
    continue; //continue "while in wrapper element" loop
  } //end "if choice"
  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "tables", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}tables of element {}tables.");
#endif
    __child = [NSArray readXMLElement: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}tables of element {}tables.");
#endif

    if ([self properties]) {
      [self setProperties: [[self properties] arrayByAddingObject: __child]];
    }
    else {
      [self setProperties: [NSArray arrayWithObject: __child]];
    }
    continue; //continue "while in wrapper element" loop
  } //end "if choice"
  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "tier", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}tier of element {}tier.");
#endif
    __child = [NSArray readXMLElement: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}tier of element {}tier.");
#endif

    if ([self properties]) {
      [self setProperties: [[self properties] arrayByAddingObject: __child]];
    }
    else {
      [self setProperties: [NSArray arrayWithObject: __child]];
    }
    continue; //continue "while in wrapper element" loop
  } //end "if choice"
  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "timeStamp", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}timeStamp of element {}timeStamp.");
#endif
    __child = [NSArray readXMLElement: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}timeStamp of element {}timeStamp.");
#endif

    if ([self properties]) {
      [self setProperties: [[self properties] arrayByAddingObject: __child]];
    }
    else {
      [self setProperties: [NSArray arrayWithObject: __child]];
    }
    continue; //continue "while in wrapper element" loop
  } //end "if choice"

        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
#if DEBUG_ENUNCIATE > 1
        NSLog(@"successfully unwrapped wrapper element {}properties...");
#endif
      } // end "while in wrapper element" loop

      if (status < 1) {
        //panic: XML read error.
        [NSException raise: @"XMLReadError"
                     format: @"Failure to advance to end wrapper element."];
      }
      else {
        //end wrapper element "{}properties"
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
    } //end "if empty element" clause
    else {
      __child = [NSArray array];
      [self setProperties: (NSArray*) __child];
    }

    return YES;
  } // end "if wrapper element" clause

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

  if ([self nodeconnector]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "nodeconnector", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}nodeconnector."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}nodeconnector...");
#endif
    [[self nodeconnector] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}nodeconnector...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}nodeconnector."];
    }
  }
  if ([self properties]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "properties", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start wrapper element {}properties."];
    }
    __enumerator = [[self properties] objectEnumerator];

    while ( (__item = [__enumerator nextObject]) ) {
      [__item writeXMLElement: writer writeNamespaces: NO];
    } //end item iterator.

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end wrapper element {}properties."];
    }
  }
}
@end /* implementation FULLNS0NodeConnectorProperties (JAXB) */

#endif /* DEF_FULLNS0NodeConnectorProperties_M */
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
#ifndef DEF_FULLNS0Nodes_M
#define DEF_FULLNS0Nodes_M

/**
 * (no documentation provided)
 */
@implementation FULLNS0Nodes

/**
 * (no documentation provided)
 */
- (NSArray *) nodeProperties
{
  return _nodeProperties;
}

/**
 * (no documentation provided)
 */
- (void) setNodeProperties: (NSArray *) newNodeProperties
{
  [newNodeProperties retain];
  [_nodeProperties release];
  _nodeProperties = newNodeProperties;
}

- (void) dealloc
{
  [self setNodeProperties: nil];
  [super dealloc];
}

//documentation inherited.
+ (id<EnunciateXML>) readFromXML: (NSData *) xml
{
  FULLNS0Nodes *_fULLNS0Nodes;
  xmlTextReaderPtr reader = xmlReaderForMemory([xml bytes], [xml length], NULL, NULL, 0);
  if (reader == NULL) {
    [NSException raise: @"XMLReadError"
                 format: @"Error instantiating an XML reader."];
    return nil;
  }

  _fULLNS0Nodes = (FULLNS0Nodes *) [FULLNS0Nodes readXMLElement: reader];
  xmlFreeTextReader(reader); //free the reader
  return _fULLNS0Nodes;
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
@end /* implementation FULLNS0Nodes */

/**
 * Internal, private interface for JAXB reading and writing.
 */
@interface FULLNS0Nodes (JAXB) <JAXBReading, JAXBWriting, JAXBType, JAXBElement>

@end /*interface FULLNS0Nodes (JAXB)*/

/**
 * Internal, private implementation for JAXB reading and writing.
 */
@implementation FULLNS0Nodes (JAXB)

/**
 * Read an instance of FULLNS0Nodes from an XML reader.
 *
 * @param reader The reader.
 * @return An instance of FULLNS0Nodes defined by the XML reader.
 */
+ (id<JAXBType>) readXMLType: (xmlTextReaderPtr) reader
{
  FULLNS0Nodes *_fULLNS0Nodes = [[FULLNS0Nodes alloc] init];
  NS_DURING
  {
    [_fULLNS0Nodes initWithReader: reader];
  }
  NS_HANDLER
  {
    _fULLNS0Nodes = nil;
    [localException raise];
  }
  NS_ENDHANDLER

  [_fULLNS0Nodes autorelease];
  return _fULLNS0Nodes;
}

/**
 * Initialize this instance of FULLNS0Nodes according to
 * the XML being read from the reader.
 *
 * @param reader The reader.
 */
- (id) initWithReader: (xmlTextReaderPtr) reader
{
  return [super initWithReader: reader];
}

/**
 * Write the XML for this instance of FULLNS0Nodes to the writer.
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
 * Reads a FULLNS0Nodes from an XML reader. The element to be read is
 * "nodes".
 *
 * @param reader The XML reader.
 * @return The FULLNS0Nodes.
 */
+ (id<JAXBElement>) readXMLElement: (xmlTextReaderPtr) reader {
  int status;
  FULLNS0Nodes *_nodes = nil;

  if (xmlTextReaderNodeType(reader) != XML_READER_TYPE_ELEMENT) {
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
    if (status < 1) {
      [NSException raise: @"XMLReadError"
                   format: @"Error advancing the reader to start element nodes."];
    }
  }

  if (xmlStrcmp(BAD_CAST "nodes", xmlTextReaderConstLocalName(reader)) == 0
      && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read root element {}nodes.");
#endif
    _nodes = (FULLNS0Nodes *)[FULLNS0Nodes readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Successfully read root element {}nodes.");
#endif
  }
  else {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read FULLNS0Nodes. Expected element nodes. Current element: {}%s", xmlTextReaderConstLocalName(reader)];
    }
    else {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read FULLNS0Nodes. Expected element nodes. Current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader)];
    }
  }

  return _nodes;
}

/**
 * Writes this FULLNS0Nodes to XML under element name "nodes".
 * The namespace declarations for the element will be written.
 *
 * @param writer The XML writer.
 * @param _nodes The Nodes to write.
 * @return 1 if successful, 0 otherwise.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer
{
  [self writeXMLElement: writer writeNamespaces: YES];
}

/**
 * Writes this FULLNS0Nodes to an XML writer.
 *
 * @param writer The writer.
 * @param writeNs Whether to write the namespaces for this element to the xml writer.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer writeNamespaces: (BOOL) writeNs
{
  int rc = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "nodes", NULL);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing start element {}nodes. XML writer status: %i\n", rc];
  }

#if DEBUG_ENUNCIATE > 1
  NSLog(@"writing type {}nodes for root element {}nodes...");
#endif
  [self writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
  NSLog(@"successfully wrote type {}nodes for root element {}nodes...");
#endif
  rc = xmlTextWriterEndElement(writer);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing end element {}nodes. XML writer status: %i\n", rc];
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
    && xmlStrcmp(BAD_CAST "nodeProperties", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}nodeProperties of type {}nodeProperties.");
#endif

    __child = [FULLNS0NodeProperties readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}nodeProperties of type {}nodeProperties.");
#endif

    if ([self nodeProperties]) {
      [self setNodeProperties: [[self nodeProperties] arrayByAddingObject: __child]];
    }
    else {
      [self setNodeProperties: [NSArray arrayWithObject: __child]];
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

  if ([self nodeProperties]) {
    __enumerator = [[self nodeProperties] objectEnumerator];

    while ( (__item = [__enumerator nextObject]) ) {
      status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "nodeProperties", NULL);
      if (status < 0) {
        [NSException raise: @"XMLWriteError"
                     format: @"Error writing start child element {}nodeProperties."];
      }

#if DEBUG_ENUNCIATE > 1
      NSLog(@"writing element {}nodeProperties...");
#endif
      [__item writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
      NSLog(@"successfully wrote element {}nodeProperties...");
#endif

      status = xmlTextWriterEndElement(writer);
      if (status < 0) {
        [NSException raise: @"XMLWriteError"
                     format: @"Error writing end child element {}nodeProperties."];
      }
    } //end item iterator.
  }
}
@end /* implementation FULLNS0Nodes (JAXB) */

#endif /* DEF_FULLNS0Nodes_M */
#ifndef DEF_FULLNS0NodeProperties_M
#define DEF_FULLNS0NodeProperties_M

/**
 *  The class describes set of properties attached to a node

 */
@implementation FULLNS0NodeProperties

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
- (NSArray *) properties
{
  return _properties;
}

/**
 * (no documentation provided)
 */
- (void) setProperties: (NSArray *) newProperties
{
  [newProperties retain];
  [_properties release];
  _properties = newProperties;
}

- (void) dealloc
{
  [self setNode: nil];
  [self setProperties: nil];
  [super dealloc];
}

//documentation inherited.
+ (id<EnunciateXML>) readFromXML: (NSData *) xml
{
  FULLNS0NodeProperties *_fULLNS0NodeProperties;
  xmlTextReaderPtr reader = xmlReaderForMemory([xml bytes], [xml length], NULL, NULL, 0);
  if (reader == NULL) {
    [NSException raise: @"XMLReadError"
                 format: @"Error instantiating an XML reader."];
    return nil;
  }

  _fULLNS0NodeProperties = (FULLNS0NodeProperties *) [FULLNS0NodeProperties readXMLElement: reader];
  xmlFreeTextReader(reader); //free the reader
  return _fULLNS0NodeProperties;
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
@end /* implementation FULLNS0NodeProperties */

/**
 * Internal, private interface for JAXB reading and writing.
 */
@interface FULLNS0NodeProperties (JAXB) <JAXBReading, JAXBWriting, JAXBType, JAXBElement>

@end /*interface FULLNS0NodeProperties (JAXB)*/

/**
 * Internal, private implementation for JAXB reading and writing.
 */
@implementation FULLNS0NodeProperties (JAXB)

/**
 * Read an instance of FULLNS0NodeProperties from an XML reader.
 *
 * @param reader The reader.
 * @return An instance of FULLNS0NodeProperties defined by the XML reader.
 */
+ (id<JAXBType>) readXMLType: (xmlTextReaderPtr) reader
{
  FULLNS0NodeProperties *_fULLNS0NodeProperties = [[FULLNS0NodeProperties alloc] init];
  NS_DURING
  {
    [_fULLNS0NodeProperties initWithReader: reader];
  }
  NS_HANDLER
  {
    _fULLNS0NodeProperties = nil;
    [localException raise];
  }
  NS_ENDHANDLER

  [_fULLNS0NodeProperties autorelease];
  return _fULLNS0NodeProperties;
}

/**
 * Initialize this instance of FULLNS0NodeProperties according to
 * the XML being read from the reader.
 *
 * @param reader The reader.
 */
- (id) initWithReader: (xmlTextReaderPtr) reader
{
  return [super initWithReader: reader];
}

/**
 * Write the XML for this instance of FULLNS0NodeProperties to the writer.
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
 * Reads a FULLNS0NodeProperties from an XML reader. The element to be read is
 * "nodeProperties".
 *
 * @param reader The XML reader.
 * @return The FULLNS0NodeProperties.
 */
+ (id<JAXBElement>) readXMLElement: (xmlTextReaderPtr) reader {
  int status;
  FULLNS0NodeProperties *_nodeProperties = nil;

  if (xmlTextReaderNodeType(reader) != XML_READER_TYPE_ELEMENT) {
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
    if (status < 1) {
      [NSException raise: @"XMLReadError"
                   format: @"Error advancing the reader to start element nodeProperties."];
    }
  }

  if (xmlStrcmp(BAD_CAST "nodeProperties", xmlTextReaderConstLocalName(reader)) == 0
      && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read root element {}nodeProperties.");
#endif
    _nodeProperties = (FULLNS0NodeProperties *)[FULLNS0NodeProperties readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Successfully read root element {}nodeProperties.");
#endif
  }
  else {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read FULLNS0NodeProperties. Expected element nodeProperties. Current element: {}%s", xmlTextReaderConstLocalName(reader)];
    }
    else {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read FULLNS0NodeProperties. Expected element nodeProperties. Current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader)];
    }
  }

  return _nodeProperties;
}

/**
 * Writes this FULLNS0NodeProperties to XML under element name "nodeProperties".
 * The namespace declarations for the element will be written.
 *
 * @param writer The XML writer.
 * @param _nodeProperties The NodeProperties to write.
 * @return 1 if successful, 0 otherwise.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer
{
  [self writeXMLElement: writer writeNamespaces: YES];
}

/**
 * Writes this FULLNS0NodeProperties to an XML writer.
 *
 * @param writer The writer.
 * @param writeNs Whether to write the namespaces for this element to the xml writer.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer writeNamespaces: (BOOL) writeNs
{
  int rc = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "nodeProperties", NULL);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing start element {}nodeProperties. XML writer status: %i\n", rc];
  }

#if DEBUG_ENUNCIATE > 1
  NSLog(@"writing type {}nodeProperties for root element {}nodeProperties...");
#endif
  [self writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
  NSLog(@"successfully wrote type {}nodeProperties for root element {}nodeProperties...");
#endif
  rc = xmlTextWriterEndElement(writer);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing end element {}nodeProperties. XML writer status: %i\n", rc];
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
    && xmlStrcmp(BAD_CAST "properties", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

    if (xmlTextReaderIsEmptyElement(reader) == 0) {
#if DEBUG_ENUNCIATE > 1
      NSLog(@"Unwrapping wrapper element {}properties...");
#endif
      //start wrapper element "{}properties"
      depth = xmlTextReaderDepth(reader);
      status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      while (xmlTextReaderDepth(reader) > depth) {
        if (status < 1) {
          //panic: XML read error.
          [NSException raise: @"XMLReadError"
                       format: @"Failure to advance to next wrapped child element."];
        }
  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "actions", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}actions of element {}actions.");
#endif
    __child = [NSArray readXMLElement: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}actions of element {}actions.");
#endif

    if ([self properties]) {
      [self setProperties: [[self properties] arrayByAddingObject: __child]];
    }
    else {
      [self setProperties: [NSArray arrayWithObject: __child]];
    }
    continue; //continue "while in wrapper element" loop
  } //end "if choice"
  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "advertisedBandwidth", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}advertisedBandwidth of element {}advertisedBandwidth.");
#endif
    __child = [NSArray readXMLElement: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}advertisedBandwidth of element {}advertisedBandwidth.");
#endif

    if ([self properties]) {
      [self setProperties: [[self properties] arrayByAddingObject: __child]];
    }
    else {
      [self setProperties: [NSArray arrayWithObject: __child]];
    }
    continue; //continue "while in wrapper element" loop
  } //end "if choice"
  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "bandwidth", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}bandwidth of element {}bandwidth.");
#endif
    __child = [NSArray readXMLElement: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}bandwidth of element {}bandwidth.");
#endif

    if ([self properties]) {
      [self setProperties: [[self properties] arrayByAddingObject: __child]];
    }
    else {
      [self setProperties: [NSArray arrayWithObject: __child]];
    }
    continue; //continue "while in wrapper element" loop
  } //end "if choice"
  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "buffers", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}buffers of element {}buffers.");
#endif
    __child = [NSArray readXMLElement: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}buffers of element {}buffers.");
#endif

    if ([self properties]) {
      [self setProperties: [[self properties] arrayByAddingObject: __child]];
    }
    else {
      [self setProperties: [NSArray arrayWithObject: __child]];
    }
    continue; //continue "while in wrapper element" loop
  } //end "if choice"
  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "capabilities", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}capabilities of element {}capabilities.");
#endif
    __child = [NSArray readXMLElement: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}capabilities of element {}capabilities.");
#endif

    if ([self properties]) {
      [self setProperties: [[self properties] arrayByAddingObject: __child]];
    }
    else {
      [self setProperties: [NSArray arrayWithObject: __child]];
    }
    continue; //continue "while in wrapper element" loop
  } //end "if choice"
  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "config", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}config of element {}config.");
#endif
    __child = [NSArray readXMLElement: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}config of element {}config.");
#endif

    if ([self properties]) {
      [self setProperties: [[self properties] arrayByAddingObject: __child]];
    }
    else {
      [self setProperties: [NSArray arrayWithObject: __child]];
    }
    continue; //continue "while in wrapper element" loop
  } //end "if choice"
  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "latency", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}latency of element {}latency.");
#endif
    __child = [NSArray readXMLElement: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}latency of element {}latency.");
#endif

    if ([self properties]) {
      [self setProperties: [[self properties] arrayByAddingObject: __child]];
    }
    else {
      [self setProperties: [NSArray arrayWithObject: __child]];
    }
    continue; //continue "while in wrapper element" loop
  } //end "if choice"
  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "macAddress", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}macAddress of element {}macAddress.");
#endif
    __child = [NSArray readXMLElement: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}macAddress of element {}macAddress.");
#endif

    if ([self properties]) {
      [self setProperties: [[self properties] arrayByAddingObject: __child]];
    }
    else {
      [self setProperties: [NSArray arrayWithObject: __child]];
    }
    continue; //continue "while in wrapper element" loop
  } //end "if choice"
  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "name", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}name of element {}name.");
#endif
    __child = [NSArray readXMLElement: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}name of element {}name.");
#endif

    if ([self properties]) {
      [self setProperties: [[self properties] arrayByAddingObject: __child]];
    }
    else {
      [self setProperties: [NSArray arrayWithObject: __child]];
    }
    continue; //continue "while in wrapper element" loop
  } //end "if choice"
  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "peerBandwidth", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}peerBandwidth of element {}peerBandwidth.");
#endif
    __child = [NSArray readXMLElement: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}peerBandwidth of element {}peerBandwidth.");
#endif

    if ([self properties]) {
      [self setProperties: [[self properties] arrayByAddingObject: __child]];
    }
    else {
      [self setProperties: [NSArray arrayWithObject: __child]];
    }
    continue; //continue "while in wrapper element" loop
  } //end "if choice"
  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "property", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}property of element {}property.");
#endif
    __child = [NSArray readXMLElement: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}property of element {}property.");
#endif

    if ([self properties]) {
      [self setProperties: [[self properties] arrayByAddingObject: __child]];
    }
    else {
      [self setProperties: [NSArray arrayWithObject: __child]];
    }
    continue; //continue "while in wrapper element" loop
  } //end "if choice"
  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "state", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}state of element {}state.");
#endif
    __child = [NSArray readXMLElement: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}state of element {}state.");
#endif

    if ([self properties]) {
      [self setProperties: [[self properties] arrayByAddingObject: __child]];
    }
    else {
      [self setProperties: [NSArray arrayWithObject: __child]];
    }
    continue; //continue "while in wrapper element" loop
  } //end "if choice"
  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "supportedBandwidth", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}supportedBandwidth of element {}supportedBandwidth.");
#endif
    __child = [NSArray readXMLElement: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}supportedBandwidth of element {}supportedBandwidth.");
#endif

    if ([self properties]) {
      [self setProperties: [[self properties] arrayByAddingObject: __child]];
    }
    else {
      [self setProperties: [NSArray arrayWithObject: __child]];
    }
    continue; //continue "while in wrapper element" loop
  } //end "if choice"
  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "tables", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}tables of element {}tables.");
#endif
    __child = [NSArray readXMLElement: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}tables of element {}tables.");
#endif

    if ([self properties]) {
      [self setProperties: [[self properties] arrayByAddingObject: __child]];
    }
    else {
      [self setProperties: [NSArray arrayWithObject: __child]];
    }
    continue; //continue "while in wrapper element" loop
  } //end "if choice"
  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "tier", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}tier of element {}tier.");
#endif
    __child = [NSArray readXMLElement: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}tier of element {}tier.");
#endif

    if ([self properties]) {
      [self setProperties: [[self properties] arrayByAddingObject: __child]];
    }
    else {
      [self setProperties: [NSArray arrayWithObject: __child]];
    }
    continue; //continue "while in wrapper element" loop
  } //end "if choice"
  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "timeStamp", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}timeStamp of element {}timeStamp.");
#endif
    __child = [NSArray readXMLElement: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}timeStamp of element {}timeStamp.");
#endif

    if ([self properties]) {
      [self setProperties: [[self properties] arrayByAddingObject: __child]];
    }
    else {
      [self setProperties: [NSArray arrayWithObject: __child]];
    }
    continue; //continue "while in wrapper element" loop
  } //end "if choice"

        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
#if DEBUG_ENUNCIATE > 1
        NSLog(@"successfully unwrapped wrapper element {}properties...");
#endif
      } // end "while in wrapper element" loop

      if (status < 1) {
        //panic: XML read error.
        [NSException raise: @"XMLReadError"
                     format: @"Failure to advance to end wrapper element."];
      }
      else {
        //end wrapper element "{}properties"
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
    } //end "if empty element" clause
    else {
      __child = [NSArray array];
      [self setProperties: (NSArray*) __child];
    }

    return YES;
  } // end "if wrapper element" clause

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
  if ([self properties]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "properties", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start wrapper element {}properties."];
    }
    __enumerator = [[self properties] objectEnumerator];

    while ( (__item = [__enumerator nextObject]) ) {
      [__item writeXMLElement: writer writeNamespaces: NO];
    } //end item iterator.

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end wrapper element {}properties."];
    }
  }
}
@end /* implementation FULLNS0NodeProperties (JAXB) */

#endif /* DEF_FULLNS0NodeProperties_M */
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
#ifndef DEF_FULLNS0Bandwidth_M
#define DEF_FULLNS0Bandwidth_M

/**
 * (no documentation provided)
 */
@implementation FULLNS0Bandwidth

/**
 * (no documentation provided)
 */
- (long) bandwidthValue
{
  return _bandwidthValue;
}

/**
 * (no documentation provided)
 */
- (void) setBandwidthValue: (long) newBandwidthValue
{
  _bandwidthValue = newBandwidthValue;
}

- (void) dealloc
{
  [super dealloc];
}

//documentation inherited.
+ (id<EnunciateXML>) readFromXML: (NSData *) xml
{
  FULLNS0Bandwidth *_fULLNS0Bandwidth;
  xmlTextReaderPtr reader = xmlReaderForMemory([xml bytes], [xml length], NULL, NULL, 0);
  if (reader == NULL) {
    [NSException raise: @"XMLReadError"
                 format: @"Error instantiating an XML reader."];
    return nil;
  }

  _fULLNS0Bandwidth = (FULLNS0Bandwidth *) [FULLNS0Bandwidth readXMLElement: reader];
  xmlFreeTextReader(reader); //free the reader
  return _fULLNS0Bandwidth;
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
@end /* implementation FULLNS0Bandwidth */

/**
 * Internal, private interface for JAXB reading and writing.
 */
@interface FULLNS0Bandwidth (JAXB) <JAXBReading, JAXBWriting, JAXBType, JAXBElement>

@end /*interface FULLNS0Bandwidth (JAXB)*/

/**
 * Internal, private implementation for JAXB reading and writing.
 */
@implementation FULLNS0Bandwidth (JAXB)

/**
 * Read an instance of FULLNS0Bandwidth from an XML reader.
 *
 * @param reader The reader.
 * @return An instance of FULLNS0Bandwidth defined by the XML reader.
 */
+ (id<JAXBType>) readXMLType: (xmlTextReaderPtr) reader
{
  FULLNS0Bandwidth *_fULLNS0Bandwidth = [[FULLNS0Bandwidth alloc] init];
  NS_DURING
  {
    [_fULLNS0Bandwidth initWithReader: reader];
  }
  NS_HANDLER
  {
    _fULLNS0Bandwidth = nil;
    [localException raise];
  }
  NS_ENDHANDLER

  [_fULLNS0Bandwidth autorelease];
  return _fULLNS0Bandwidth;
}

/**
 * Initialize this instance of FULLNS0Bandwidth according to
 * the XML being read from the reader.
 *
 * @param reader The reader.
 */
- (id) initWithReader: (xmlTextReaderPtr) reader
{
  return [super initWithReader: reader];
}

/**
 * Write the XML for this instance of FULLNS0Bandwidth to the writer.
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
 * Reads a FULLNS0Bandwidth from an XML reader. The element to be read is
 * "bandwidth".
 *
 * @param reader The XML reader.
 * @return The FULLNS0Bandwidth.
 */
+ (id<JAXBElement>) readXMLElement: (xmlTextReaderPtr) reader {
  int status;
  FULLNS0Bandwidth *_bandwidth = nil;

  if (xmlTextReaderNodeType(reader) != XML_READER_TYPE_ELEMENT) {
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
    if (status < 1) {
      [NSException raise: @"XMLReadError"
                   format: @"Error advancing the reader to start element bandwidth."];
    }
  }

  if (xmlStrcmp(BAD_CAST "bandwidth", xmlTextReaderConstLocalName(reader)) == 0
      && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read root element {}bandwidth.");
#endif
    _bandwidth = (FULLNS0Bandwidth *)[FULLNS0Bandwidth readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Successfully read root element {}bandwidth.");
#endif
  }
  else {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read FULLNS0Bandwidth. Expected element bandwidth. Current element: {}%s", xmlTextReaderConstLocalName(reader)];
    }
    else {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read FULLNS0Bandwidth. Expected element bandwidth. Current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader)];
    }
  }

  return _bandwidth;
}

/**
 * Writes this FULLNS0Bandwidth to XML under element name "bandwidth".
 * The namespace declarations for the element will be written.
 *
 * @param writer The XML writer.
 * @param _bandwidth The Bandwidth to write.
 * @return 1 if successful, 0 otherwise.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer
{
  [self writeXMLElement: writer writeNamespaces: YES];
}

/**
 * Writes this FULLNS0Bandwidth to an XML writer.
 *
 * @param writer The writer.
 * @param writeNs Whether to write the namespaces for this element to the xml writer.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer writeNamespaces: (BOOL) writeNs
{
  int rc = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "bandwidth", NULL);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing start element {}bandwidth. XML writer status: %i\n", rc];
  }

#if DEBUG_ENUNCIATE > 1
  NSLog(@"writing type {}bandwidth for root element {}bandwidth...");
#endif
  [self writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
  NSLog(@"successfully wrote type {}bandwidth for root element {}bandwidth...");
#endif
  rc = xmlTextWriterEndElement(writer);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing end element {}bandwidth. XML writer status: %i\n", rc];
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
    && xmlStrcmp(BAD_CAST "bandwidthValue", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

    _child_accessor = xmlTextReaderReadLongType(reader);
    if (_child_accessor == NULL) {
      //panic: unable to return the value for some reason.
      [NSException raise: @"XMLReadError"
                   format: @"Error reading element value."];
    }
    [self setBandwidthValue: *((long*) _child_accessor)];
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
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "bandwidthValue", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}bandwidthValue."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}bandwidthValue...");
#endif
    status = xmlTextWriterWriteLongType(writer, &_bandwidthValue);
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}bandwidthValue...");
#endif
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing child element {}bandwidthValue."];
    }

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}bandwidthValue."];
    }
  }
}
@end /* implementation FULLNS0Bandwidth (JAXB) */

#endif /* DEF_FULLNS0Bandwidth_M */
#ifndef DEF_FULLNS0Capabilities_M
#define DEF_FULLNS0Capabilities_M

/**
 * (no documentation provided)
 */
@implementation FULLNS0Capabilities

/**
 * (no documentation provided)
 */
- (int) capabilitiesValue
{
  return _capabilitiesValue;
}

/**
 * (no documentation provided)
 */
- (void) setCapabilitiesValue: (int) newCapabilitiesValue
{
  _capabilitiesValue = newCapabilitiesValue;
}

- (void) dealloc
{
  [super dealloc];
}

//documentation inherited.
+ (id<EnunciateXML>) readFromXML: (NSData *) xml
{
  FULLNS0Capabilities *_fULLNS0Capabilities;
  xmlTextReaderPtr reader = xmlReaderForMemory([xml bytes], [xml length], NULL, NULL, 0);
  if (reader == NULL) {
    [NSException raise: @"XMLReadError"
                 format: @"Error instantiating an XML reader."];
    return nil;
  }

  _fULLNS0Capabilities = (FULLNS0Capabilities *) [FULLNS0Capabilities readXMLElement: reader];
  xmlFreeTextReader(reader); //free the reader
  return _fULLNS0Capabilities;
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
@end /* implementation FULLNS0Capabilities */

/**
 * Internal, private interface for JAXB reading and writing.
 */
@interface FULLNS0Capabilities (JAXB) <JAXBReading, JAXBWriting, JAXBType, JAXBElement>

@end /*interface FULLNS0Capabilities (JAXB)*/

/**
 * Internal, private implementation for JAXB reading and writing.
 */
@implementation FULLNS0Capabilities (JAXB)

/**
 * Read an instance of FULLNS0Capabilities from an XML reader.
 *
 * @param reader The reader.
 * @return An instance of FULLNS0Capabilities defined by the XML reader.
 */
+ (id<JAXBType>) readXMLType: (xmlTextReaderPtr) reader
{
  FULLNS0Capabilities *_fULLNS0Capabilities = [[FULLNS0Capabilities alloc] init];
  NS_DURING
  {
    [_fULLNS0Capabilities initWithReader: reader];
  }
  NS_HANDLER
  {
    _fULLNS0Capabilities = nil;
    [localException raise];
  }
  NS_ENDHANDLER

  [_fULLNS0Capabilities autorelease];
  return _fULLNS0Capabilities;
}

/**
 * Initialize this instance of FULLNS0Capabilities according to
 * the XML being read from the reader.
 *
 * @param reader The reader.
 */
- (id) initWithReader: (xmlTextReaderPtr) reader
{
  return [super initWithReader: reader];
}

/**
 * Write the XML for this instance of FULLNS0Capabilities to the writer.
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
 * Reads a FULLNS0Capabilities from an XML reader. The element to be read is
 * "capabilities".
 *
 * @param reader The XML reader.
 * @return The FULLNS0Capabilities.
 */
+ (id<JAXBElement>) readXMLElement: (xmlTextReaderPtr) reader {
  int status;
  FULLNS0Capabilities *_capabilities = nil;

  if (xmlTextReaderNodeType(reader) != XML_READER_TYPE_ELEMENT) {
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
    if (status < 1) {
      [NSException raise: @"XMLReadError"
                   format: @"Error advancing the reader to start element capabilities."];
    }
  }

  if (xmlStrcmp(BAD_CAST "capabilities", xmlTextReaderConstLocalName(reader)) == 0
      && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read root element {}capabilities.");
#endif
    _capabilities = (FULLNS0Capabilities *)[FULLNS0Capabilities readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Successfully read root element {}capabilities.");
#endif
  }
  else {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read FULLNS0Capabilities. Expected element capabilities. Current element: {}%s", xmlTextReaderConstLocalName(reader)];
    }
    else {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read FULLNS0Capabilities. Expected element capabilities. Current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader)];
    }
  }

  return _capabilities;
}

/**
 * Writes this FULLNS0Capabilities to XML under element name "capabilities".
 * The namespace declarations for the element will be written.
 *
 * @param writer The XML writer.
 * @param _capabilities The Capabilities to write.
 * @return 1 if successful, 0 otherwise.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer
{
  [self writeXMLElement: writer writeNamespaces: YES];
}

/**
 * Writes this FULLNS0Capabilities to an XML writer.
 *
 * @param writer The writer.
 * @param writeNs Whether to write the namespaces for this element to the xml writer.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer writeNamespaces: (BOOL) writeNs
{
  int rc = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "capabilities", NULL);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing start element {}capabilities. XML writer status: %i\n", rc];
  }

#if DEBUG_ENUNCIATE > 1
  NSLog(@"writing type {}capabilities for root element {}capabilities...");
#endif
  [self writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
  NSLog(@"successfully wrote type {}capabilities for root element {}capabilities...");
#endif
  rc = xmlTextWriterEndElement(writer);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing end element {}capabilities. XML writer status: %i\n", rc];
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
    && xmlStrcmp(BAD_CAST "capabilitiesValue", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

    _child_accessor = xmlTextReaderReadIntType(reader);
    if (_child_accessor == NULL) {
      //panic: unable to return the value for some reason.
      [NSException raise: @"XMLReadError"
                   format: @"Error reading element value."];
    }
    [self setCapabilitiesValue: *((int*) _child_accessor)];
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
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "capabilitiesValue", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}capabilitiesValue."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}capabilitiesValue...");
#endif
    status = xmlTextWriterWriteIntType(writer, &_capabilitiesValue);
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}capabilitiesValue...");
#endif
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing child element {}capabilitiesValue."];
    }

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}capabilitiesValue."];
    }
  }
}
@end /* implementation FULLNS0Capabilities (JAXB) */

#endif /* DEF_FULLNS0Capabilities_M */
#ifndef DEF_FULLNS0Latency_M
#define DEF_FULLNS0Latency_M

/**
 * (no documentation provided)
 */
@implementation FULLNS0Latency

- (void) dealloc
{
  [super dealloc];
}

//documentation inherited.
+ (id<EnunciateXML>) readFromXML: (NSData *) xml
{
  FULLNS0Latency *_fULLNS0Latency;
  xmlTextReaderPtr reader = xmlReaderForMemory([xml bytes], [xml length], NULL, NULL, 0);
  if (reader == NULL) {
    [NSException raise: @"XMLReadError"
                 format: @"Error instantiating an XML reader."];
    return nil;
  }

  _fULLNS0Latency = (FULLNS0Latency *) [FULLNS0Latency readXMLElement: reader];
  xmlFreeTextReader(reader); //free the reader
  return _fULLNS0Latency;
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
@end /* implementation FULLNS0Latency */

/**
 * Internal, private interface for JAXB reading and writing.
 */
@interface FULLNS0Latency (JAXB) <JAXBReading, JAXBWriting, JAXBType, JAXBElement>

@end /*interface FULLNS0Latency (JAXB)*/

/**
 * Internal, private implementation for JAXB reading and writing.
 */
@implementation FULLNS0Latency (JAXB)

/**
 * Read an instance of FULLNS0Latency from an XML reader.
 *
 * @param reader The reader.
 * @return An instance of FULLNS0Latency defined by the XML reader.
 */
+ (id<JAXBType>) readXMLType: (xmlTextReaderPtr) reader
{
  FULLNS0Latency *_fULLNS0Latency = [[FULLNS0Latency alloc] init];
  NS_DURING
  {
    [_fULLNS0Latency initWithReader: reader];
  }
  NS_HANDLER
  {
    _fULLNS0Latency = nil;
    [localException raise];
  }
  NS_ENDHANDLER

  [_fULLNS0Latency autorelease];
  return _fULLNS0Latency;
}

/**
 * Initialize this instance of FULLNS0Latency according to
 * the XML being read from the reader.
 *
 * @param reader The reader.
 */
- (id) initWithReader: (xmlTextReaderPtr) reader
{
  return [super initWithReader: reader];
}

/**
 * Write the XML for this instance of FULLNS0Latency to the writer.
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
 * Reads a FULLNS0Latency from an XML reader. The element to be read is
 * "latency".
 *
 * @param reader The XML reader.
 * @return The FULLNS0Latency.
 */
+ (id<JAXBElement>) readXMLElement: (xmlTextReaderPtr) reader {
  int status;
  FULLNS0Latency *_latency = nil;

  if (xmlTextReaderNodeType(reader) != XML_READER_TYPE_ELEMENT) {
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
    if (status < 1) {
      [NSException raise: @"XMLReadError"
                   format: @"Error advancing the reader to start element latency."];
    }
  }

  if (xmlStrcmp(BAD_CAST "latency", xmlTextReaderConstLocalName(reader)) == 0
      && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read root element {}latency.");
#endif
    _latency = (FULLNS0Latency *)[FULLNS0Latency readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Successfully read root element {}latency.");
#endif
  }
  else {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read FULLNS0Latency. Expected element latency. Current element: {}%s", xmlTextReaderConstLocalName(reader)];
    }
    else {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read FULLNS0Latency. Expected element latency. Current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader)];
    }
  }

  return _latency;
}

/**
 * Writes this FULLNS0Latency to XML under element name "latency".
 * The namespace declarations for the element will be written.
 *
 * @param writer The XML writer.
 * @param _latency The Latency to write.
 * @return 1 if successful, 0 otherwise.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer
{
  [self writeXMLElement: writer writeNamespaces: YES];
}

/**
 * Writes this FULLNS0Latency to an XML writer.
 *
 * @param writer The writer.
 * @param writeNs Whether to write the namespaces for this element to the xml writer.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer writeNamespaces: (BOOL) writeNs
{
  int rc = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "latency", NULL);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing start element {}latency. XML writer status: %i\n", rc];
  }

#if DEBUG_ENUNCIATE > 1
  NSLog(@"writing type {}latency for root element {}latency...");
#endif
  [self writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
  NSLog(@"successfully wrote type {}latency for root element {}latency...");
#endif
  rc = xmlTextWriterEndElement(writer);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing end element {}latency. XML writer status: %i\n", rc];
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
@end /* implementation FULLNS0Latency (JAXB) */

#endif /* DEF_FULLNS0Latency_M */
#ifndef DEF_FULLNS0State_M
#define DEF_FULLNS0State_M

/**
 * (no documentation provided)
 */
@implementation FULLNS0State

/**
 * (no documentation provided)
 */
- (short) stateValue
{
  return _stateValue;
}

/**
 * (no documentation provided)
 */
- (void) setStateValue: (short) newStateValue
{
  _stateValue = newStateValue;
}

- (void) dealloc
{
  [super dealloc];
}

//documentation inherited.
+ (id<EnunciateXML>) readFromXML: (NSData *) xml
{
  FULLNS0State *_fULLNS0State;
  xmlTextReaderPtr reader = xmlReaderForMemory([xml bytes], [xml length], NULL, NULL, 0);
  if (reader == NULL) {
    [NSException raise: @"XMLReadError"
                 format: @"Error instantiating an XML reader."];
    return nil;
  }

  _fULLNS0State = (FULLNS0State *) [FULLNS0State readXMLElement: reader];
  xmlFreeTextReader(reader); //free the reader
  return _fULLNS0State;
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
@end /* implementation FULLNS0State */

/**
 * Internal, private interface for JAXB reading and writing.
 */
@interface FULLNS0State (JAXB) <JAXBReading, JAXBWriting, JAXBType, JAXBElement>

@end /*interface FULLNS0State (JAXB)*/

/**
 * Internal, private implementation for JAXB reading and writing.
 */
@implementation FULLNS0State (JAXB)

/**
 * Read an instance of FULLNS0State from an XML reader.
 *
 * @param reader The reader.
 * @return An instance of FULLNS0State defined by the XML reader.
 */
+ (id<JAXBType>) readXMLType: (xmlTextReaderPtr) reader
{
  FULLNS0State *_fULLNS0State = [[FULLNS0State alloc] init];
  NS_DURING
  {
    [_fULLNS0State initWithReader: reader];
  }
  NS_HANDLER
  {
    _fULLNS0State = nil;
    [localException raise];
  }
  NS_ENDHANDLER

  [_fULLNS0State autorelease];
  return _fULLNS0State;
}

/**
 * Initialize this instance of FULLNS0State according to
 * the XML being read from the reader.
 *
 * @param reader The reader.
 */
- (id) initWithReader: (xmlTextReaderPtr) reader
{
  return [super initWithReader: reader];
}

/**
 * Write the XML for this instance of FULLNS0State to the writer.
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
 * Reads a FULLNS0State from an XML reader. The element to be read is
 * "state".
 *
 * @param reader The XML reader.
 * @return The FULLNS0State.
 */
+ (id<JAXBElement>) readXMLElement: (xmlTextReaderPtr) reader {
  int status;
  FULLNS0State *_state = nil;

  if (xmlTextReaderNodeType(reader) != XML_READER_TYPE_ELEMENT) {
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
    if (status < 1) {
      [NSException raise: @"XMLReadError"
                   format: @"Error advancing the reader to start element state."];
    }
  }

  if (xmlStrcmp(BAD_CAST "state", xmlTextReaderConstLocalName(reader)) == 0
      && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read root element {}state.");
#endif
    _state = (FULLNS0State *)[FULLNS0State readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Successfully read root element {}state.");
#endif
  }
  else {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read FULLNS0State. Expected element state. Current element: {}%s", xmlTextReaderConstLocalName(reader)];
    }
    else {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read FULLNS0State. Expected element state. Current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader)];
    }
  }

  return _state;
}

/**
 * Writes this FULLNS0State to XML under element name "state".
 * The namespace declarations for the element will be written.
 *
 * @param writer The XML writer.
 * @param _state The State to write.
 * @return 1 if successful, 0 otherwise.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer
{
  [self writeXMLElement: writer writeNamespaces: YES];
}

/**
 * Writes this FULLNS0State to an XML writer.
 *
 * @param writer The writer.
 * @param writeNs Whether to write the namespaces for this element to the xml writer.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer writeNamespaces: (BOOL) writeNs
{
  int rc = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "state", NULL);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing start element {}state. XML writer status: %i\n", rc];
  }

#if DEBUG_ENUNCIATE > 1
  NSLog(@"writing type {}state for root element {}state...");
#endif
  [self writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
  NSLog(@"successfully wrote type {}state for root element {}state...");
#endif
  rc = xmlTextWriterEndElement(writer);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing end element {}state. XML writer status: %i\n", rc];
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
    && xmlStrcmp(BAD_CAST "stateValue", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

    _child_accessor = xmlTextReaderReadShortType(reader);
    if (_child_accessor == NULL) {
      //panic: unable to return the value for some reason.
      [NSException raise: @"XMLReadError"
                   format: @"Error reading element value."];
    }
    [self setStateValue: *((short*) _child_accessor)];
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
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "stateValue", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}stateValue."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}stateValue...");
#endif
    status = xmlTextWriterWriteShortType(writer, &_stateValue);
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}stateValue...");
#endif
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing child element {}stateValue."];
    }

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}stateValue."];
    }
  }
}
@end /* implementation FULLNS0State (JAXB) */

#endif /* DEF_FULLNS0State_M */
#ifndef DEF_FULLNS0Tier_M
#define DEF_FULLNS0Tier_M

/**
 * (no documentation provided)
 */
@implementation FULLNS0Tier

/**
 * (no documentation provided)
 */
- (int) tierValue
{
  return _tierValue;
}

/**
 * (no documentation provided)
 */
- (void) setTierValue: (int) newTierValue
{
  _tierValue = newTierValue;
}

- (void) dealloc
{
  [super dealloc];
}

//documentation inherited.
+ (id<EnunciateXML>) readFromXML: (NSData *) xml
{
  FULLNS0Tier *_fULLNS0Tier;
  xmlTextReaderPtr reader = xmlReaderForMemory([xml bytes], [xml length], NULL, NULL, 0);
  if (reader == NULL) {
    [NSException raise: @"XMLReadError"
                 format: @"Error instantiating an XML reader."];
    return nil;
  }

  _fULLNS0Tier = (FULLNS0Tier *) [FULLNS0Tier readXMLElement: reader];
  xmlFreeTextReader(reader); //free the reader
  return _fULLNS0Tier;
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
@end /* implementation FULLNS0Tier */

/**
 * Internal, private interface for JAXB reading and writing.
 */
@interface FULLNS0Tier (JAXB) <JAXBReading, JAXBWriting, JAXBType, JAXBElement>

@end /*interface FULLNS0Tier (JAXB)*/

/**
 * Internal, private implementation for JAXB reading and writing.
 */
@implementation FULLNS0Tier (JAXB)

/**
 * Read an instance of FULLNS0Tier from an XML reader.
 *
 * @param reader The reader.
 * @return An instance of FULLNS0Tier defined by the XML reader.
 */
+ (id<JAXBType>) readXMLType: (xmlTextReaderPtr) reader
{
  FULLNS0Tier *_fULLNS0Tier = [[FULLNS0Tier alloc] init];
  NS_DURING
  {
    [_fULLNS0Tier initWithReader: reader];
  }
  NS_HANDLER
  {
    _fULLNS0Tier = nil;
    [localException raise];
  }
  NS_ENDHANDLER

  [_fULLNS0Tier autorelease];
  return _fULLNS0Tier;
}

/**
 * Initialize this instance of FULLNS0Tier according to
 * the XML being read from the reader.
 *
 * @param reader The reader.
 */
- (id) initWithReader: (xmlTextReaderPtr) reader
{
  return [super initWithReader: reader];
}

/**
 * Write the XML for this instance of FULLNS0Tier to the writer.
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
 * Reads a FULLNS0Tier from an XML reader. The element to be read is
 * "tier".
 *
 * @param reader The XML reader.
 * @return The FULLNS0Tier.
 */
+ (id<JAXBElement>) readXMLElement: (xmlTextReaderPtr) reader {
  int status;
  FULLNS0Tier *_tier = nil;

  if (xmlTextReaderNodeType(reader) != XML_READER_TYPE_ELEMENT) {
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
    if (status < 1) {
      [NSException raise: @"XMLReadError"
                   format: @"Error advancing the reader to start element tier."];
    }
  }

  if (xmlStrcmp(BAD_CAST "tier", xmlTextReaderConstLocalName(reader)) == 0
      && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read root element {}tier.");
#endif
    _tier = (FULLNS0Tier *)[FULLNS0Tier readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Successfully read root element {}tier.");
#endif
  }
  else {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read FULLNS0Tier. Expected element tier. Current element: {}%s", xmlTextReaderConstLocalName(reader)];
    }
    else {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read FULLNS0Tier. Expected element tier. Current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader)];
    }
  }

  return _tier;
}

/**
 * Writes this FULLNS0Tier to XML under element name "tier".
 * The namespace declarations for the element will be written.
 *
 * @param writer The XML writer.
 * @param _tier The Tier to write.
 * @return 1 if successful, 0 otherwise.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer
{
  [self writeXMLElement: writer writeNamespaces: YES];
}

/**
 * Writes this FULLNS0Tier to an XML writer.
 *
 * @param writer The writer.
 * @param writeNs Whether to write the namespaces for this element to the xml writer.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer writeNamespaces: (BOOL) writeNs
{
  int rc = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "tier", NULL);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing start element {}tier. XML writer status: %i\n", rc];
  }

#if DEBUG_ENUNCIATE > 1
  NSLog(@"writing type {}tier for root element {}tier...");
#endif
  [self writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
  NSLog(@"successfully wrote type {}tier for root element {}tier...");
#endif
  rc = xmlTextWriterEndElement(writer);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing end element {}tier. XML writer status: %i\n", rc];
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
    && xmlStrcmp(BAD_CAST "tierValue", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

    _child_accessor = xmlTextReaderReadIntType(reader);
    if (_child_accessor == NULL) {
      //panic: unable to return the value for some reason.
      [NSException raise: @"XMLReadError"
                   format: @"Error reading element value."];
    }
    [self setTierValue: *((int*) _child_accessor)];
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
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "tierValue", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}tierValue."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}tierValue...");
#endif
    status = xmlTextWriterWriteIntType(writer, &_tierValue);
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}tierValue...");
#endif
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing child element {}tierValue."];
    }

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}tierValue."];
    }
  }
}
@end /* implementation FULLNS0Tier (JAXB) */

#endif /* DEF_FULLNS0Tier_M */
#ifndef DEF_FULLNS0TimeStamp_M
#define DEF_FULLNS0TimeStamp_M

/**
 * (no documentation provided)
 */
@implementation FULLNS0TimeStamp

/**
 * (no documentation provided)
 */
- (long) timestamp
{
  return _timestamp;
}

/**
 * (no documentation provided)
 */
- (void) setTimestamp: (long) newTimestamp
{
  _timestamp = newTimestamp;
}

/**
 * (no documentation provided)
 */
- (NSString *) timestampName
{
  return _timestampName;
}

/**
 * (no documentation provided)
 */
- (void) setTimestampName: (NSString *) newTimestampName
{
  [newTimestampName retain];
  [_timestampName release];
  _timestampName = newTimestampName;
}

- (void) dealloc
{
  [self setTimestampName: nil];
  [super dealloc];
}

//documentation inherited.
+ (id<EnunciateXML>) readFromXML: (NSData *) xml
{
  FULLNS0TimeStamp *_fULLNS0TimeStamp;
  xmlTextReaderPtr reader = xmlReaderForMemory([xml bytes], [xml length], NULL, NULL, 0);
  if (reader == NULL) {
    [NSException raise: @"XMLReadError"
                 format: @"Error instantiating an XML reader."];
    return nil;
  }

  _fULLNS0TimeStamp = (FULLNS0TimeStamp *) [FULLNS0TimeStamp readXMLElement: reader];
  xmlFreeTextReader(reader); //free the reader
  return _fULLNS0TimeStamp;
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
@end /* implementation FULLNS0TimeStamp */

/**
 * Internal, private interface for JAXB reading and writing.
 */
@interface FULLNS0TimeStamp (JAXB) <JAXBReading, JAXBWriting, JAXBType, JAXBElement>

@end /*interface FULLNS0TimeStamp (JAXB)*/

/**
 * Internal, private implementation for JAXB reading and writing.
 */
@implementation FULLNS0TimeStamp (JAXB)

/**
 * Read an instance of FULLNS0TimeStamp from an XML reader.
 *
 * @param reader The reader.
 * @return An instance of FULLNS0TimeStamp defined by the XML reader.
 */
+ (id<JAXBType>) readXMLType: (xmlTextReaderPtr) reader
{
  FULLNS0TimeStamp *_fULLNS0TimeStamp = [[FULLNS0TimeStamp alloc] init];
  NS_DURING
  {
    [_fULLNS0TimeStamp initWithReader: reader];
  }
  NS_HANDLER
  {
    _fULLNS0TimeStamp = nil;
    [localException raise];
  }
  NS_ENDHANDLER

  [_fULLNS0TimeStamp autorelease];
  return _fULLNS0TimeStamp;
}

/**
 * Initialize this instance of FULLNS0TimeStamp according to
 * the XML being read from the reader.
 *
 * @param reader The reader.
 */
- (id) initWithReader: (xmlTextReaderPtr) reader
{
  return [super initWithReader: reader];
}

/**
 * Write the XML for this instance of FULLNS0TimeStamp to the writer.
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
 * Reads a FULLNS0TimeStamp from an XML reader. The element to be read is
 * "timeStamp".
 *
 * @param reader The XML reader.
 * @return The FULLNS0TimeStamp.
 */
+ (id<JAXBElement>) readXMLElement: (xmlTextReaderPtr) reader {
  int status;
  FULLNS0TimeStamp *_timeStamp = nil;

  if (xmlTextReaderNodeType(reader) != XML_READER_TYPE_ELEMENT) {
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
    if (status < 1) {
      [NSException raise: @"XMLReadError"
                   format: @"Error advancing the reader to start element timeStamp."];
    }
  }

  if (xmlStrcmp(BAD_CAST "timeStamp", xmlTextReaderConstLocalName(reader)) == 0
      && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read root element {}timeStamp.");
#endif
    _timeStamp = (FULLNS0TimeStamp *)[FULLNS0TimeStamp readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Successfully read root element {}timeStamp.");
#endif
  }
  else {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read FULLNS0TimeStamp. Expected element timeStamp. Current element: {}%s", xmlTextReaderConstLocalName(reader)];
    }
    else {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read FULLNS0TimeStamp. Expected element timeStamp. Current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader)];
    }
  }

  return _timeStamp;
}

/**
 * Writes this FULLNS0TimeStamp to XML under element name "timeStamp".
 * The namespace declarations for the element will be written.
 *
 * @param writer The XML writer.
 * @param _timeStamp The TimeStamp to write.
 * @return 1 if successful, 0 otherwise.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer
{
  [self writeXMLElement: writer writeNamespaces: YES];
}

/**
 * Writes this FULLNS0TimeStamp to an XML writer.
 *
 * @param writer The writer.
 * @param writeNs Whether to write the namespaces for this element to the xml writer.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer writeNamespaces: (BOOL) writeNs
{
  int rc = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "timeStamp", NULL);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing start element {}timeStamp. XML writer status: %i\n", rc];
  }

#if DEBUG_ENUNCIATE > 1
  NSLog(@"writing type {}timeStamp for root element {}timeStamp...");
#endif
  [self writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
  NSLog(@"successfully wrote type {}timeStamp for root element {}timeStamp...");
#endif
  rc = xmlTextWriterEndElement(writer);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing end element {}timeStamp. XML writer status: %i\n", rc];
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
    && xmlStrcmp(BAD_CAST "timestamp", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

    _child_accessor = xmlTextReaderReadLongType(reader);
    if (_child_accessor == NULL) {
      //panic: unable to return the value for some reason.
      [NSException raise: @"XMLReadError"
                   format: @"Error reading element value."];
    }
    [self setTimestamp: *((long*) _child_accessor)];
    free(_child_accessor);
    return YES;
  }
  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "timestampName", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}timestampName of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}timestampName of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setTimestampName: __child];
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
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "timestamp", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}timestamp."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}timestamp...");
#endif
    status = xmlTextWriterWriteLongType(writer, &_timestamp);
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}timestamp...");
#endif
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing child element {}timestamp."];
    }

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}timestamp."];
    }
  }
  if ([self timestampName]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "timestampName", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}timestampName."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}timestampName...");
#endif
    [[self timestampName] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}timestampName...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}timestampName."];
    }
  }
}
@end /* implementation FULLNS0TimeStamp (JAXB) */

#endif /* DEF_FULLNS0TimeStamp_M */
#ifndef DEF_FULLNS0Tables_M
#define DEF_FULLNS0Tables_M

/**
 * (no documentation provided)
 */
@implementation FULLNS0Tables

/**
 * (no documentation provided)
 */
- (unsigned char) tablesValue
{
  return _tablesValue;
}

/**
 * (no documentation provided)
 */
- (void) setTablesValue: (unsigned char) newTablesValue
{
  _tablesValue = newTablesValue;
}

- (void) dealloc
{
  [super dealloc];
}

//documentation inherited.
+ (id<EnunciateXML>) readFromXML: (NSData *) xml
{
  FULLNS0Tables *_fULLNS0Tables;
  xmlTextReaderPtr reader = xmlReaderForMemory([xml bytes], [xml length], NULL, NULL, 0);
  if (reader == NULL) {
    [NSException raise: @"XMLReadError"
                 format: @"Error instantiating an XML reader."];
    return nil;
  }

  _fULLNS0Tables = (FULLNS0Tables *) [FULLNS0Tables readXMLElement: reader];
  xmlFreeTextReader(reader); //free the reader
  return _fULLNS0Tables;
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
@end /* implementation FULLNS0Tables */

/**
 * Internal, private interface for JAXB reading and writing.
 */
@interface FULLNS0Tables (JAXB) <JAXBReading, JAXBWriting, JAXBType, JAXBElement>

@end /*interface FULLNS0Tables (JAXB)*/

/**
 * Internal, private implementation for JAXB reading and writing.
 */
@implementation FULLNS0Tables (JAXB)

/**
 * Read an instance of FULLNS0Tables from an XML reader.
 *
 * @param reader The reader.
 * @return An instance of FULLNS0Tables defined by the XML reader.
 */
+ (id<JAXBType>) readXMLType: (xmlTextReaderPtr) reader
{
  FULLNS0Tables *_fULLNS0Tables = [[FULLNS0Tables alloc] init];
  NS_DURING
  {
    [_fULLNS0Tables initWithReader: reader];
  }
  NS_HANDLER
  {
    _fULLNS0Tables = nil;
    [localException raise];
  }
  NS_ENDHANDLER

  [_fULLNS0Tables autorelease];
  return _fULLNS0Tables;
}

/**
 * Initialize this instance of FULLNS0Tables according to
 * the XML being read from the reader.
 *
 * @param reader The reader.
 */
- (id) initWithReader: (xmlTextReaderPtr) reader
{
  return [super initWithReader: reader];
}

/**
 * Write the XML for this instance of FULLNS0Tables to the writer.
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
 * Reads a FULLNS0Tables from an XML reader. The element to be read is
 * "tables".
 *
 * @param reader The XML reader.
 * @return The FULLNS0Tables.
 */
+ (id<JAXBElement>) readXMLElement: (xmlTextReaderPtr) reader {
  int status;
  FULLNS0Tables *_tables = nil;

  if (xmlTextReaderNodeType(reader) != XML_READER_TYPE_ELEMENT) {
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
    if (status < 1) {
      [NSException raise: @"XMLReadError"
                   format: @"Error advancing the reader to start element tables."];
    }
  }

  if (xmlStrcmp(BAD_CAST "tables", xmlTextReaderConstLocalName(reader)) == 0
      && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read root element {}tables.");
#endif
    _tables = (FULLNS0Tables *)[FULLNS0Tables readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Successfully read root element {}tables.");
#endif
  }
  else {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read FULLNS0Tables. Expected element tables. Current element: {}%s", xmlTextReaderConstLocalName(reader)];
    }
    else {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read FULLNS0Tables. Expected element tables. Current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader)];
    }
  }

  return _tables;
}

/**
 * Writes this FULLNS0Tables to XML under element name "tables".
 * The namespace declarations for the element will be written.
 *
 * @param writer The XML writer.
 * @param _tables The Tables to write.
 * @return 1 if successful, 0 otherwise.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer
{
  [self writeXMLElement: writer writeNamespaces: YES];
}

/**
 * Writes this FULLNS0Tables to an XML writer.
 *
 * @param writer The writer.
 * @param writeNs Whether to write the namespaces for this element to the xml writer.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer writeNamespaces: (BOOL) writeNs
{
  int rc = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "tables", NULL);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing start element {}tables. XML writer status: %i\n", rc];
  }

#if DEBUG_ENUNCIATE > 1
  NSLog(@"writing type {}tables for root element {}tables...");
#endif
  [self writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
  NSLog(@"successfully wrote type {}tables for root element {}tables...");
#endif
  rc = xmlTextWriterEndElement(writer);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing end element {}tables. XML writer status: %i\n", rc];
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
    && xmlStrcmp(BAD_CAST "tablesValue", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

    _child_accessor = xmlTextReaderReadByteType(reader);
    if (_child_accessor == NULL) {
      //panic: unable to return the value for some reason.
      [NSException raise: @"XMLReadError"
                   format: @"Error reading element value."];
    }
    [self setTablesValue: *((unsigned char*) _child_accessor)];
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
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "tablesValue", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}tablesValue."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}tablesValue...");
#endif
    status = xmlTextWriterWriteByteType(writer, &_tablesValue);
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}tablesValue...");
#endif
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing child element {}tablesValue."];
    }

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}tablesValue."];
    }
  }
}
@end /* implementation FULLNS0Tables (JAXB) */

#endif /* DEF_FULLNS0Tables_M */
#ifndef DEF_FULLNS0Name_M
#define DEF_FULLNS0Name_M

/**
 * (no documentation provided)
 */
@implementation FULLNS0Name

/**
 * (no documentation provided)
 */
- (NSString *) nameValue
{
  return _nameValue;
}

/**
 * (no documentation provided)
 */
- (void) setNameValue: (NSString *) newNameValue
{
  [newNameValue retain];
  [_nameValue release];
  _nameValue = newNameValue;
}

- (void) dealloc
{
  [self setNameValue: nil];
  [super dealloc];
}

//documentation inherited.
+ (id<EnunciateXML>) readFromXML: (NSData *) xml
{
  FULLNS0Name *_fULLNS0Name;
  xmlTextReaderPtr reader = xmlReaderForMemory([xml bytes], [xml length], NULL, NULL, 0);
  if (reader == NULL) {
    [NSException raise: @"XMLReadError"
                 format: @"Error instantiating an XML reader."];
    return nil;
  }

  _fULLNS0Name = (FULLNS0Name *) [FULLNS0Name readXMLElement: reader];
  xmlFreeTextReader(reader); //free the reader
  return _fULLNS0Name;
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
@end /* implementation FULLNS0Name */

/**
 * Internal, private interface for JAXB reading and writing.
 */
@interface FULLNS0Name (JAXB) <JAXBReading, JAXBWriting, JAXBType, JAXBElement>

@end /*interface FULLNS0Name (JAXB)*/

/**
 * Internal, private implementation for JAXB reading and writing.
 */
@implementation FULLNS0Name (JAXB)

/**
 * Read an instance of FULLNS0Name from an XML reader.
 *
 * @param reader The reader.
 * @return An instance of FULLNS0Name defined by the XML reader.
 */
+ (id<JAXBType>) readXMLType: (xmlTextReaderPtr) reader
{
  FULLNS0Name *_fULLNS0Name = [[FULLNS0Name alloc] init];
  NS_DURING
  {
    [_fULLNS0Name initWithReader: reader];
  }
  NS_HANDLER
  {
    _fULLNS0Name = nil;
    [localException raise];
  }
  NS_ENDHANDLER

  [_fULLNS0Name autorelease];
  return _fULLNS0Name;
}

/**
 * Initialize this instance of FULLNS0Name according to
 * the XML being read from the reader.
 *
 * @param reader The reader.
 */
- (id) initWithReader: (xmlTextReaderPtr) reader
{
  return [super initWithReader: reader];
}

/**
 * Write the XML for this instance of FULLNS0Name to the writer.
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
 * Reads a FULLNS0Name from an XML reader. The element to be read is
 * "name".
 *
 * @param reader The XML reader.
 * @return The FULLNS0Name.
 */
+ (id<JAXBElement>) readXMLElement: (xmlTextReaderPtr) reader {
  int status;
  FULLNS0Name *_name = nil;

  if (xmlTextReaderNodeType(reader) != XML_READER_TYPE_ELEMENT) {
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
    if (status < 1) {
      [NSException raise: @"XMLReadError"
                   format: @"Error advancing the reader to start element name."];
    }
  }

  if (xmlStrcmp(BAD_CAST "name", xmlTextReaderConstLocalName(reader)) == 0
      && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read root element {}name.");
#endif
    _name = (FULLNS0Name *)[FULLNS0Name readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Successfully read root element {}name.");
#endif
  }
  else {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read FULLNS0Name. Expected element name. Current element: {}%s", xmlTextReaderConstLocalName(reader)];
    }
    else {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read FULLNS0Name. Expected element name. Current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader)];
    }
  }

  return _name;
}

/**
 * Writes this FULLNS0Name to XML under element name "name".
 * The namespace declarations for the element will be written.
 *
 * @param writer The XML writer.
 * @param _name The Name to write.
 * @return 1 if successful, 0 otherwise.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer
{
  [self writeXMLElement: writer writeNamespaces: YES];
}

/**
 * Writes this FULLNS0Name to an XML writer.
 *
 * @param writer The writer.
 * @param writeNs Whether to write the namespaces for this element to the xml writer.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer writeNamespaces: (BOOL) writeNs
{
  int rc = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "name", NULL);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing start element {}name. XML writer status: %i\n", rc];
  }

#if DEBUG_ENUNCIATE > 1
  NSLog(@"writing type {}name for root element {}name...");
#endif
  [self writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
  NSLog(@"successfully wrote type {}name for root element {}name...");
#endif
  rc = xmlTextWriterEndElement(writer);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing end element {}name. XML writer status: %i\n", rc];
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
    && xmlStrcmp(BAD_CAST "nameValue", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}nameValue of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}nameValue of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setNameValue: __child];
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

  if ([self nameValue]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "nameValue", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}nameValue."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}nameValue...");
#endif
    [[self nameValue] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}nameValue...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}nameValue."];
    }
  }
}
@end /* implementation FULLNS0Name (JAXB) */

#endif /* DEF_FULLNS0Name_M */
#ifndef DEF_FULLNS0MacAddress_M
#define DEF_FULLNS0MacAddress_M

/**
 * (no documentation provided)
 */
@implementation FULLNS0MacAddress

/**
 * (no documentation provided)
 */
- (NSData *) address
{
  return _address;
}

/**
 * (no documentation provided)
 */
- (void) setAddress: (NSData *) newAddress
{
  [newAddress retain];
  [_address release];
  _address = newAddress;
}

- (void) dealloc
{
  [self setAddress: nil];
  [super dealloc];
}

//documentation inherited.
+ (id<EnunciateXML>) readFromXML: (NSData *) xml
{
  FULLNS0MacAddress *_fULLNS0MacAddress;
  xmlTextReaderPtr reader = xmlReaderForMemory([xml bytes], [xml length], NULL, NULL, 0);
  if (reader == NULL) {
    [NSException raise: @"XMLReadError"
                 format: @"Error instantiating an XML reader."];
    return nil;
  }

  _fULLNS0MacAddress = (FULLNS0MacAddress *) [FULLNS0MacAddress readXMLElement: reader];
  xmlFreeTextReader(reader); //free the reader
  return _fULLNS0MacAddress;
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
@end /* implementation FULLNS0MacAddress */

/**
 * Internal, private interface for JAXB reading and writing.
 */
@interface FULLNS0MacAddress (JAXB) <JAXBReading, JAXBWriting, JAXBType, JAXBElement>

@end /*interface FULLNS0MacAddress (JAXB)*/

/**
 * Internal, private implementation for JAXB reading and writing.
 */
@implementation FULLNS0MacAddress (JAXB)

/**
 * Read an instance of FULLNS0MacAddress from an XML reader.
 *
 * @param reader The reader.
 * @return An instance of FULLNS0MacAddress defined by the XML reader.
 */
+ (id<JAXBType>) readXMLType: (xmlTextReaderPtr) reader
{
  FULLNS0MacAddress *_fULLNS0MacAddress = [[FULLNS0MacAddress alloc] init];
  NS_DURING
  {
    [_fULLNS0MacAddress initWithReader: reader];
  }
  NS_HANDLER
  {
    _fULLNS0MacAddress = nil;
    [localException raise];
  }
  NS_ENDHANDLER

  [_fULLNS0MacAddress autorelease];
  return _fULLNS0MacAddress;
}

/**
 * Initialize this instance of FULLNS0MacAddress according to
 * the XML being read from the reader.
 *
 * @param reader The reader.
 */
- (id) initWithReader: (xmlTextReaderPtr) reader
{
  return [super initWithReader: reader];
}

/**
 * Write the XML for this instance of FULLNS0MacAddress to the writer.
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
 * Reads a FULLNS0MacAddress from an XML reader. The element to be read is
 * "macAddress".
 *
 * @param reader The XML reader.
 * @return The FULLNS0MacAddress.
 */
+ (id<JAXBElement>) readXMLElement: (xmlTextReaderPtr) reader {
  int status;
  FULLNS0MacAddress *_macAddress = nil;

  if (xmlTextReaderNodeType(reader) != XML_READER_TYPE_ELEMENT) {
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
    if (status < 1) {
      [NSException raise: @"XMLReadError"
                   format: @"Error advancing the reader to start element macAddress."];
    }
  }

  if (xmlStrcmp(BAD_CAST "macAddress", xmlTextReaderConstLocalName(reader)) == 0
      && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read root element {}macAddress.");
#endif
    _macAddress = (FULLNS0MacAddress *)[FULLNS0MacAddress readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Successfully read root element {}macAddress.");
#endif
  }
  else {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read FULLNS0MacAddress. Expected element macAddress. Current element: {}%s", xmlTextReaderConstLocalName(reader)];
    }
    else {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read FULLNS0MacAddress. Expected element macAddress. Current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader)];
    }
  }

  return _macAddress;
}

/**
 * Writes this FULLNS0MacAddress to XML under element name "macAddress".
 * The namespace declarations for the element will be written.
 *
 * @param writer The XML writer.
 * @param _macAddress The MacAddress to write.
 * @return 1 if successful, 0 otherwise.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer
{
  [self writeXMLElement: writer writeNamespaces: YES];
}

/**
 * Writes this FULLNS0MacAddress to an XML writer.
 *
 * @param writer The writer.
 * @param writeNs Whether to write the namespaces for this element to the xml writer.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer writeNamespaces: (BOOL) writeNs
{
  int rc = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "macAddress", NULL);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing start element {}macAddress. XML writer status: %i\n", rc];
  }

#if DEBUG_ENUNCIATE > 1
  NSLog(@"writing type {}macAddress for root element {}macAddress...");
#endif
  [self writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
  NSLog(@"successfully wrote type {}macAddress for root element {}macAddress...");
#endif
  rc = xmlTextWriterEndElement(writer);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing end element {}macAddress. XML writer status: %i\n", rc];
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
    && xmlStrcmp(BAD_CAST "macAddress", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}macAddress of type {http://www.w3.org/2001/XMLSchema}base64Binary.");
#endif
    __child = [NSData readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}macAddress of type {http://www.w3.org/2001/XMLSchema}base64Binary.");
#endif

    [self setAddress: __child];
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

  if ([self address]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "macAddress", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}macAddress."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}macAddress...");
#endif
    [[self address] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}macAddress...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}macAddress."];
    }
  }
}
@end /* implementation FULLNS0MacAddress (JAXB) */

#endif /* DEF_FULLNS0MacAddress_M */
#ifndef DEF_FULLNS0Config_M
#define DEF_FULLNS0Config_M

/**
 * (no documentation provided)
 */
@implementation FULLNS0Config

/**
 * (no documentation provided)
 */
- (short) configValue
{
  return _configValue;
}

/**
 * (no documentation provided)
 */
- (void) setConfigValue: (short) newConfigValue
{
  _configValue = newConfigValue;
}

- (void) dealloc
{
  [super dealloc];
}

//documentation inherited.
+ (id<EnunciateXML>) readFromXML: (NSData *) xml
{
  FULLNS0Config *_fULLNS0Config;
  xmlTextReaderPtr reader = xmlReaderForMemory([xml bytes], [xml length], NULL, NULL, 0);
  if (reader == NULL) {
    [NSException raise: @"XMLReadError"
                 format: @"Error instantiating an XML reader."];
    return nil;
  }

  _fULLNS0Config = (FULLNS0Config *) [FULLNS0Config readXMLElement: reader];
  xmlFreeTextReader(reader); //free the reader
  return _fULLNS0Config;
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
@end /* implementation FULLNS0Config */

/**
 * Internal, private interface for JAXB reading and writing.
 */
@interface FULLNS0Config (JAXB) <JAXBReading, JAXBWriting, JAXBType, JAXBElement>

@end /*interface FULLNS0Config (JAXB)*/

/**
 * Internal, private implementation for JAXB reading and writing.
 */
@implementation FULLNS0Config (JAXB)

/**
 * Read an instance of FULLNS0Config from an XML reader.
 *
 * @param reader The reader.
 * @return An instance of FULLNS0Config defined by the XML reader.
 */
+ (id<JAXBType>) readXMLType: (xmlTextReaderPtr) reader
{
  FULLNS0Config *_fULLNS0Config = [[FULLNS0Config alloc] init];
  NS_DURING
  {
    [_fULLNS0Config initWithReader: reader];
  }
  NS_HANDLER
  {
    _fULLNS0Config = nil;
    [localException raise];
  }
  NS_ENDHANDLER

  [_fULLNS0Config autorelease];
  return _fULLNS0Config;
}

/**
 * Initialize this instance of FULLNS0Config according to
 * the XML being read from the reader.
 *
 * @param reader The reader.
 */
- (id) initWithReader: (xmlTextReaderPtr) reader
{
  return [super initWithReader: reader];
}

/**
 * Write the XML for this instance of FULLNS0Config to the writer.
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
 * Reads a FULLNS0Config from an XML reader. The element to be read is
 * "config".
 *
 * @param reader The XML reader.
 * @return The FULLNS0Config.
 */
+ (id<JAXBElement>) readXMLElement: (xmlTextReaderPtr) reader {
  int status;
  FULLNS0Config *_config = nil;

  if (xmlTextReaderNodeType(reader) != XML_READER_TYPE_ELEMENT) {
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
    if (status < 1) {
      [NSException raise: @"XMLReadError"
                   format: @"Error advancing the reader to start element config."];
    }
  }

  if (xmlStrcmp(BAD_CAST "config", xmlTextReaderConstLocalName(reader)) == 0
      && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read root element {}config.");
#endif
    _config = (FULLNS0Config *)[FULLNS0Config readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Successfully read root element {}config.");
#endif
  }
  else {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read FULLNS0Config. Expected element config. Current element: {}%s", xmlTextReaderConstLocalName(reader)];
    }
    else {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read FULLNS0Config. Expected element config. Current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader)];
    }
  }

  return _config;
}

/**
 * Writes this FULLNS0Config to XML under element name "config".
 * The namespace declarations for the element will be written.
 *
 * @param writer The XML writer.
 * @param _config The Config to write.
 * @return 1 if successful, 0 otherwise.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer
{
  [self writeXMLElement: writer writeNamespaces: YES];
}

/**
 * Writes this FULLNS0Config to an XML writer.
 *
 * @param writer The writer.
 * @param writeNs Whether to write the namespaces for this element to the xml writer.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer writeNamespaces: (BOOL) writeNs
{
  int rc = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "config", NULL);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing start element {}config. XML writer status: %i\n", rc];
  }

#if DEBUG_ENUNCIATE > 1
  NSLog(@"writing type {}config for root element {}config...");
#endif
  [self writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
  NSLog(@"successfully wrote type {}config for root element {}config...");
#endif
  rc = xmlTextWriterEndElement(writer);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing end element {}config. XML writer status: %i\n", rc];
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
    && xmlStrcmp(BAD_CAST "configValue", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

    _child_accessor = xmlTextReaderReadShortType(reader);
    if (_child_accessor == NULL) {
      //panic: unable to return the value for some reason.
      [NSException raise: @"XMLReadError"
                   format: @"Error reading element value."];
    }
    [self setConfigValue: *((short*) _child_accessor)];
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
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "configValue", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}configValue."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}configValue...");
#endif
    status = xmlTextWriterWriteShortType(writer, &_configValue);
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}configValue...");
#endif
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing child element {}configValue."];
    }

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}configValue."];
    }
  }
}
@end /* implementation FULLNS0Config (JAXB) */

#endif /* DEF_FULLNS0Config_M */
#ifndef DEF_FULLNS0Buffers_M
#define DEF_FULLNS0Buffers_M

/**
 * (no documentation provided)
 */
@implementation FULLNS0Buffers

/**
 * (no documentation provided)
 */
- (int) buffersValue
{
  return _buffersValue;
}

/**
 * (no documentation provided)
 */
- (void) setBuffersValue: (int) newBuffersValue
{
  _buffersValue = newBuffersValue;
}

- (void) dealloc
{
  [super dealloc];
}

//documentation inherited.
+ (id<EnunciateXML>) readFromXML: (NSData *) xml
{
  FULLNS0Buffers *_fULLNS0Buffers;
  xmlTextReaderPtr reader = xmlReaderForMemory([xml bytes], [xml length], NULL, NULL, 0);
  if (reader == NULL) {
    [NSException raise: @"XMLReadError"
                 format: @"Error instantiating an XML reader."];
    return nil;
  }

  _fULLNS0Buffers = (FULLNS0Buffers *) [FULLNS0Buffers readXMLElement: reader];
  xmlFreeTextReader(reader); //free the reader
  return _fULLNS0Buffers;
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
@end /* implementation FULLNS0Buffers */

/**
 * Internal, private interface for JAXB reading and writing.
 */
@interface FULLNS0Buffers (JAXB) <JAXBReading, JAXBWriting, JAXBType, JAXBElement>

@end /*interface FULLNS0Buffers (JAXB)*/

/**
 * Internal, private implementation for JAXB reading and writing.
 */
@implementation FULLNS0Buffers (JAXB)

/**
 * Read an instance of FULLNS0Buffers from an XML reader.
 *
 * @param reader The reader.
 * @return An instance of FULLNS0Buffers defined by the XML reader.
 */
+ (id<JAXBType>) readXMLType: (xmlTextReaderPtr) reader
{
  FULLNS0Buffers *_fULLNS0Buffers = [[FULLNS0Buffers alloc] init];
  NS_DURING
  {
    [_fULLNS0Buffers initWithReader: reader];
  }
  NS_HANDLER
  {
    _fULLNS0Buffers = nil;
    [localException raise];
  }
  NS_ENDHANDLER

  [_fULLNS0Buffers autorelease];
  return _fULLNS0Buffers;
}

/**
 * Initialize this instance of FULLNS0Buffers according to
 * the XML being read from the reader.
 *
 * @param reader The reader.
 */
- (id) initWithReader: (xmlTextReaderPtr) reader
{
  return [super initWithReader: reader];
}

/**
 * Write the XML for this instance of FULLNS0Buffers to the writer.
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
 * Reads a FULLNS0Buffers from an XML reader. The element to be read is
 * "buffers".
 *
 * @param reader The XML reader.
 * @return The FULLNS0Buffers.
 */
+ (id<JAXBElement>) readXMLElement: (xmlTextReaderPtr) reader {
  int status;
  FULLNS0Buffers *_buffers = nil;

  if (xmlTextReaderNodeType(reader) != XML_READER_TYPE_ELEMENT) {
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
    if (status < 1) {
      [NSException raise: @"XMLReadError"
                   format: @"Error advancing the reader to start element buffers."];
    }
  }

  if (xmlStrcmp(BAD_CAST "buffers", xmlTextReaderConstLocalName(reader)) == 0
      && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read root element {}buffers.");
#endif
    _buffers = (FULLNS0Buffers *)[FULLNS0Buffers readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Successfully read root element {}buffers.");
#endif
  }
  else {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read FULLNS0Buffers. Expected element buffers. Current element: {}%s", xmlTextReaderConstLocalName(reader)];
    }
    else {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read FULLNS0Buffers. Expected element buffers. Current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader)];
    }
  }

  return _buffers;
}

/**
 * Writes this FULLNS0Buffers to XML under element name "buffers".
 * The namespace declarations for the element will be written.
 *
 * @param writer The XML writer.
 * @param _buffers The Buffers to write.
 * @return 1 if successful, 0 otherwise.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer
{
  [self writeXMLElement: writer writeNamespaces: YES];
}

/**
 * Writes this FULLNS0Buffers to an XML writer.
 *
 * @param writer The writer.
 * @param writeNs Whether to write the namespaces for this element to the xml writer.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer writeNamespaces: (BOOL) writeNs
{
  int rc = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "buffers", NULL);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing start element {}buffers. XML writer status: %i\n", rc];
  }

#if DEBUG_ENUNCIATE > 1
  NSLog(@"writing type {}buffers for root element {}buffers...");
#endif
  [self writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
  NSLog(@"successfully wrote type {}buffers for root element {}buffers...");
#endif
  rc = xmlTextWriterEndElement(writer);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing end element {}buffers. XML writer status: %i\n", rc];
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
    && xmlStrcmp(BAD_CAST "buffersValue", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

    _child_accessor = xmlTextReaderReadIntType(reader);
    if (_child_accessor == NULL) {
      //panic: unable to return the value for some reason.
      [NSException raise: @"XMLReadError"
                   format: @"Error reading element value."];
    }
    [self setBuffersValue: *((int*) _child_accessor)];
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
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "buffersValue", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}buffersValue."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}buffersValue...");
#endif
    status = xmlTextWriterWriteIntType(writer, &_buffersValue);
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}buffersValue...");
#endif
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing child element {}buffersValue."];
    }

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}buffersValue."];
    }
  }
}
@end /* implementation FULLNS0Buffers (JAXB) */

#endif /* DEF_FULLNS0Buffers_M */
#ifndef DEF_FULLNS0Actions_M
#define DEF_FULLNS0Actions_M

/**
 * (no documentation provided)
 */
@implementation FULLNS0Actions

/**
 * (no documentation provided)
 */
- (int) actionsValue
{
  return _actionsValue;
}

/**
 * (no documentation provided)
 */
- (void) setActionsValue: (int) newActionsValue
{
  _actionsValue = newActionsValue;
}

- (void) dealloc
{
  [super dealloc];
}

//documentation inherited.
+ (id<EnunciateXML>) readFromXML: (NSData *) xml
{
  FULLNS0Actions *_fULLNS0Actions;
  xmlTextReaderPtr reader = xmlReaderForMemory([xml bytes], [xml length], NULL, NULL, 0);
  if (reader == NULL) {
    [NSException raise: @"XMLReadError"
                 format: @"Error instantiating an XML reader."];
    return nil;
  }

  _fULLNS0Actions = (FULLNS0Actions *) [FULLNS0Actions readXMLElement: reader];
  xmlFreeTextReader(reader); //free the reader
  return _fULLNS0Actions;
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
@end /* implementation FULLNS0Actions */

/**
 * Internal, private interface for JAXB reading and writing.
 */
@interface FULLNS0Actions (JAXB) <JAXBReading, JAXBWriting, JAXBType, JAXBElement>

@end /*interface FULLNS0Actions (JAXB)*/

/**
 * Internal, private implementation for JAXB reading and writing.
 */
@implementation FULLNS0Actions (JAXB)

/**
 * Read an instance of FULLNS0Actions from an XML reader.
 *
 * @param reader The reader.
 * @return An instance of FULLNS0Actions defined by the XML reader.
 */
+ (id<JAXBType>) readXMLType: (xmlTextReaderPtr) reader
{
  FULLNS0Actions *_fULLNS0Actions = [[FULLNS0Actions alloc] init];
  NS_DURING
  {
    [_fULLNS0Actions initWithReader: reader];
  }
  NS_HANDLER
  {
    _fULLNS0Actions = nil;
    [localException raise];
  }
  NS_ENDHANDLER

  [_fULLNS0Actions autorelease];
  return _fULLNS0Actions;
}

/**
 * Initialize this instance of FULLNS0Actions according to
 * the XML being read from the reader.
 *
 * @param reader The reader.
 */
- (id) initWithReader: (xmlTextReaderPtr) reader
{
  return [super initWithReader: reader];
}

/**
 * Write the XML for this instance of FULLNS0Actions to the writer.
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
 * Reads a FULLNS0Actions from an XML reader. The element to be read is
 * "actions".
 *
 * @param reader The XML reader.
 * @return The FULLNS0Actions.
 */
+ (id<JAXBElement>) readXMLElement: (xmlTextReaderPtr) reader {
  int status;
  FULLNS0Actions *_actions = nil;

  if (xmlTextReaderNodeType(reader) != XML_READER_TYPE_ELEMENT) {
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
    if (status < 1) {
      [NSException raise: @"XMLReadError"
                   format: @"Error advancing the reader to start element actions."];
    }
  }

  if (xmlStrcmp(BAD_CAST "actions", xmlTextReaderConstLocalName(reader)) == 0
      && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read root element {}actions.");
#endif
    _actions = (FULLNS0Actions *)[FULLNS0Actions readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Successfully read root element {}actions.");
#endif
  }
  else {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read FULLNS0Actions. Expected element actions. Current element: {}%s", xmlTextReaderConstLocalName(reader)];
    }
    else {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read FULLNS0Actions. Expected element actions. Current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader)];
    }
  }

  return _actions;
}

/**
 * Writes this FULLNS0Actions to XML under element name "actions".
 * The namespace declarations for the element will be written.
 *
 * @param writer The XML writer.
 * @param _actions The Actions to write.
 * @return 1 if successful, 0 otherwise.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer
{
  [self writeXMLElement: writer writeNamespaces: YES];
}

/**
 * Writes this FULLNS0Actions to an XML writer.
 *
 * @param writer The writer.
 * @param writeNs Whether to write the namespaces for this element to the xml writer.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer writeNamespaces: (BOOL) writeNs
{
  int rc = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "actions", NULL);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing start element {}actions. XML writer status: %i\n", rc];
  }

#if DEBUG_ENUNCIATE > 1
  NSLog(@"writing type {}actions for root element {}actions...");
#endif
  [self writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
  NSLog(@"successfully wrote type {}actions for root element {}actions...");
#endif
  rc = xmlTextWriterEndElement(writer);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing end element {}actions. XML writer status: %i\n", rc];
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
    && xmlStrcmp(BAD_CAST "actionsValue", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

    _child_accessor = xmlTextReaderReadIntType(reader);
    if (_child_accessor == NULL) {
      //panic: unable to return the value for some reason.
      [NSException raise: @"XMLReadError"
                   format: @"Error reading element value."];
    }
    [self setActionsValue: *((int*) _child_accessor)];
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
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "actionsValue", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}actionsValue."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}actionsValue...");
#endif
    status = xmlTextWriterWriteIntType(writer, &_actionsValue);
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}actionsValue...");
#endif
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing child element {}actionsValue."];
    }

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}actionsValue."];
    }
  }
}
@end /* implementation FULLNS0Actions (JAXB) */

#endif /* DEF_FULLNS0Actions_M */
#ifndef DEF_FULLNS0SupportedBandwidth_M
#define DEF_FULLNS0SupportedBandwidth_M

/**
 * (no documentation provided)
 */
@implementation FULLNS0SupportedBandwidth

- (void) dealloc
{
  [super dealloc];
}

//documentation inherited.
+ (id<EnunciateXML>) readFromXML: (NSData *) xml
{
  FULLNS0SupportedBandwidth *_fULLNS0SupportedBandwidth;
  xmlTextReaderPtr reader = xmlReaderForMemory([xml bytes], [xml length], NULL, NULL, 0);
  if (reader == NULL) {
    [NSException raise: @"XMLReadError"
                 format: @"Error instantiating an XML reader."];
    return nil;
  }

  _fULLNS0SupportedBandwidth = (FULLNS0SupportedBandwidth *) [FULLNS0SupportedBandwidth readXMLElement: reader];
  xmlFreeTextReader(reader); //free the reader
  return _fULLNS0SupportedBandwidth;
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
@end /* implementation FULLNS0SupportedBandwidth */

/**
 * Internal, private interface for JAXB reading and writing.
 */
@interface FULLNS0SupportedBandwidth (JAXB) <JAXBReading, JAXBWriting, JAXBType, JAXBElement>

@end /*interface FULLNS0SupportedBandwidth (JAXB)*/

/**
 * Internal, private implementation for JAXB reading and writing.
 */
@implementation FULLNS0SupportedBandwidth (JAXB)

/**
 * Read an instance of FULLNS0SupportedBandwidth from an XML reader.
 *
 * @param reader The reader.
 * @return An instance of FULLNS0SupportedBandwidth defined by the XML reader.
 */
+ (id<JAXBType>) readXMLType: (xmlTextReaderPtr) reader
{
  FULLNS0SupportedBandwidth *_fULLNS0SupportedBandwidth = [[FULLNS0SupportedBandwidth alloc] init];
  NS_DURING
  {
    [_fULLNS0SupportedBandwidth initWithReader: reader];
  }
  NS_HANDLER
  {
    _fULLNS0SupportedBandwidth = nil;
    [localException raise];
  }
  NS_ENDHANDLER

  [_fULLNS0SupportedBandwidth autorelease];
  return _fULLNS0SupportedBandwidth;
}

/**
 * Initialize this instance of FULLNS0SupportedBandwidth according to
 * the XML being read from the reader.
 *
 * @param reader The reader.
 */
- (id) initWithReader: (xmlTextReaderPtr) reader
{
  return [super initWithReader: reader];
}

/**
 * Write the XML for this instance of FULLNS0SupportedBandwidth to the writer.
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
 * Reads a FULLNS0SupportedBandwidth from an XML reader. The element to be read is
 * "supportedBandwidth".
 *
 * @param reader The XML reader.
 * @return The FULLNS0SupportedBandwidth.
 */
+ (id<JAXBElement>) readXMLElement: (xmlTextReaderPtr) reader {
  int status;
  FULLNS0SupportedBandwidth *_supportedBandwidth = nil;

  if (xmlTextReaderNodeType(reader) != XML_READER_TYPE_ELEMENT) {
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
    if (status < 1) {
      [NSException raise: @"XMLReadError"
                   format: @"Error advancing the reader to start element supportedBandwidth."];
    }
  }

  if (xmlStrcmp(BAD_CAST "supportedBandwidth", xmlTextReaderConstLocalName(reader)) == 0
      && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read root element {}supportedBandwidth.");
#endif
    _supportedBandwidth = (FULLNS0SupportedBandwidth *)[FULLNS0SupportedBandwidth readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Successfully read root element {}supportedBandwidth.");
#endif
  }
  else {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read FULLNS0SupportedBandwidth. Expected element supportedBandwidth. Current element: {}%s", xmlTextReaderConstLocalName(reader)];
    }
    else {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read FULLNS0SupportedBandwidth. Expected element supportedBandwidth. Current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader)];
    }
  }

  return _supportedBandwidth;
}

/**
 * Writes this FULLNS0SupportedBandwidth to XML under element name "supportedBandwidth".
 * The namespace declarations for the element will be written.
 *
 * @param writer The XML writer.
 * @param _supportedBandwidth The SupportedBandwidth to write.
 * @return 1 if successful, 0 otherwise.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer
{
  [self writeXMLElement: writer writeNamespaces: YES];
}

/**
 * Writes this FULLNS0SupportedBandwidth to an XML writer.
 *
 * @param writer The writer.
 * @param writeNs Whether to write the namespaces for this element to the xml writer.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer writeNamespaces: (BOOL) writeNs
{
  int rc = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "supportedBandwidth", NULL);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing start element {}supportedBandwidth. XML writer status: %i\n", rc];
  }

#if DEBUG_ENUNCIATE > 1
  NSLog(@"writing type {}supportedBandwidth for root element {}supportedBandwidth...");
#endif
  [self writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
  NSLog(@"successfully wrote type {}supportedBandwidth for root element {}supportedBandwidth...");
#endif
  rc = xmlTextWriterEndElement(writer);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing end element {}supportedBandwidth. XML writer status: %i\n", rc];
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
@end /* implementation FULLNS0SupportedBandwidth (JAXB) */

#endif /* DEF_FULLNS0SupportedBandwidth_M */
#ifndef DEF_FULLNS0PeerBandwidth_M
#define DEF_FULLNS0PeerBandwidth_M

/**
 * (no documentation provided)
 */
@implementation FULLNS0PeerBandwidth

- (void) dealloc
{
  [super dealloc];
}

//documentation inherited.
+ (id<EnunciateXML>) readFromXML: (NSData *) xml
{
  FULLNS0PeerBandwidth *_fULLNS0PeerBandwidth;
  xmlTextReaderPtr reader = xmlReaderForMemory([xml bytes], [xml length], NULL, NULL, 0);
  if (reader == NULL) {
    [NSException raise: @"XMLReadError"
                 format: @"Error instantiating an XML reader."];
    return nil;
  }

  _fULLNS0PeerBandwidth = (FULLNS0PeerBandwidth *) [FULLNS0PeerBandwidth readXMLElement: reader];
  xmlFreeTextReader(reader); //free the reader
  return _fULLNS0PeerBandwidth;
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
@end /* implementation FULLNS0PeerBandwidth */

/**
 * Internal, private interface for JAXB reading and writing.
 */
@interface FULLNS0PeerBandwidth (JAXB) <JAXBReading, JAXBWriting, JAXBType, JAXBElement>

@end /*interface FULLNS0PeerBandwidth (JAXB)*/

/**
 * Internal, private implementation for JAXB reading and writing.
 */
@implementation FULLNS0PeerBandwidth (JAXB)

/**
 * Read an instance of FULLNS0PeerBandwidth from an XML reader.
 *
 * @param reader The reader.
 * @return An instance of FULLNS0PeerBandwidth defined by the XML reader.
 */
+ (id<JAXBType>) readXMLType: (xmlTextReaderPtr) reader
{
  FULLNS0PeerBandwidth *_fULLNS0PeerBandwidth = [[FULLNS0PeerBandwidth alloc] init];
  NS_DURING
  {
    [_fULLNS0PeerBandwidth initWithReader: reader];
  }
  NS_HANDLER
  {
    _fULLNS0PeerBandwidth = nil;
    [localException raise];
  }
  NS_ENDHANDLER

  [_fULLNS0PeerBandwidth autorelease];
  return _fULLNS0PeerBandwidth;
}

/**
 * Initialize this instance of FULLNS0PeerBandwidth according to
 * the XML being read from the reader.
 *
 * @param reader The reader.
 */
- (id) initWithReader: (xmlTextReaderPtr) reader
{
  return [super initWithReader: reader];
}

/**
 * Write the XML for this instance of FULLNS0PeerBandwidth to the writer.
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
 * Reads a FULLNS0PeerBandwidth from an XML reader. The element to be read is
 * "peerBandwidth".
 *
 * @param reader The XML reader.
 * @return The FULLNS0PeerBandwidth.
 */
+ (id<JAXBElement>) readXMLElement: (xmlTextReaderPtr) reader {
  int status;
  FULLNS0PeerBandwidth *_peerBandwidth = nil;

  if (xmlTextReaderNodeType(reader) != XML_READER_TYPE_ELEMENT) {
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
    if (status < 1) {
      [NSException raise: @"XMLReadError"
                   format: @"Error advancing the reader to start element peerBandwidth."];
    }
  }

  if (xmlStrcmp(BAD_CAST "peerBandwidth", xmlTextReaderConstLocalName(reader)) == 0
      && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read root element {}peerBandwidth.");
#endif
    _peerBandwidth = (FULLNS0PeerBandwidth *)[FULLNS0PeerBandwidth readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Successfully read root element {}peerBandwidth.");
#endif
  }
  else {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read FULLNS0PeerBandwidth. Expected element peerBandwidth. Current element: {}%s", xmlTextReaderConstLocalName(reader)];
    }
    else {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read FULLNS0PeerBandwidth. Expected element peerBandwidth. Current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader)];
    }
  }

  return _peerBandwidth;
}

/**
 * Writes this FULLNS0PeerBandwidth to XML under element name "peerBandwidth".
 * The namespace declarations for the element will be written.
 *
 * @param writer The XML writer.
 * @param _peerBandwidth The PeerBandwidth to write.
 * @return 1 if successful, 0 otherwise.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer
{
  [self writeXMLElement: writer writeNamespaces: YES];
}

/**
 * Writes this FULLNS0PeerBandwidth to an XML writer.
 *
 * @param writer The writer.
 * @param writeNs Whether to write the namespaces for this element to the xml writer.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer writeNamespaces: (BOOL) writeNs
{
  int rc = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "peerBandwidth", NULL);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing start element {}peerBandwidth. XML writer status: %i\n", rc];
  }

#if DEBUG_ENUNCIATE > 1
  NSLog(@"writing type {}peerBandwidth for root element {}peerBandwidth...");
#endif
  [self writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
  NSLog(@"successfully wrote type {}peerBandwidth for root element {}peerBandwidth...");
#endif
  rc = xmlTextWriterEndElement(writer);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing end element {}peerBandwidth. XML writer status: %i\n", rc];
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
@end /* implementation FULLNS0PeerBandwidth (JAXB) */

#endif /* DEF_FULLNS0PeerBandwidth_M */
#ifndef DEF_FULLNS0AdvertisedBandwidth_M
#define DEF_FULLNS0AdvertisedBandwidth_M

/**
 * (no documentation provided)
 */
@implementation FULLNS0AdvertisedBandwidth

- (void) dealloc
{
  [super dealloc];
}

//documentation inherited.
+ (id<EnunciateXML>) readFromXML: (NSData *) xml
{
  FULLNS0AdvertisedBandwidth *_fULLNS0AdvertisedBandwidth;
  xmlTextReaderPtr reader = xmlReaderForMemory([xml bytes], [xml length], NULL, NULL, 0);
  if (reader == NULL) {
    [NSException raise: @"XMLReadError"
                 format: @"Error instantiating an XML reader."];
    return nil;
  }

  _fULLNS0AdvertisedBandwidth = (FULLNS0AdvertisedBandwidth *) [FULLNS0AdvertisedBandwidth readXMLElement: reader];
  xmlFreeTextReader(reader); //free the reader
  return _fULLNS0AdvertisedBandwidth;
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
@end /* implementation FULLNS0AdvertisedBandwidth */

/**
 * Internal, private interface for JAXB reading and writing.
 */
@interface FULLNS0AdvertisedBandwidth (JAXB) <JAXBReading, JAXBWriting, JAXBType, JAXBElement>

@end /*interface FULLNS0AdvertisedBandwidth (JAXB)*/

/**
 * Internal, private implementation for JAXB reading and writing.
 */
@implementation FULLNS0AdvertisedBandwidth (JAXB)

/**
 * Read an instance of FULLNS0AdvertisedBandwidth from an XML reader.
 *
 * @param reader The reader.
 * @return An instance of FULLNS0AdvertisedBandwidth defined by the XML reader.
 */
+ (id<JAXBType>) readXMLType: (xmlTextReaderPtr) reader
{
  FULLNS0AdvertisedBandwidth *_fULLNS0AdvertisedBandwidth = [[FULLNS0AdvertisedBandwidth alloc] init];
  NS_DURING
  {
    [_fULLNS0AdvertisedBandwidth initWithReader: reader];
  }
  NS_HANDLER
  {
    _fULLNS0AdvertisedBandwidth = nil;
    [localException raise];
  }
  NS_ENDHANDLER

  [_fULLNS0AdvertisedBandwidth autorelease];
  return _fULLNS0AdvertisedBandwidth;
}

/**
 * Initialize this instance of FULLNS0AdvertisedBandwidth according to
 * the XML being read from the reader.
 *
 * @param reader The reader.
 */
- (id) initWithReader: (xmlTextReaderPtr) reader
{
  return [super initWithReader: reader];
}

/**
 * Write the XML for this instance of FULLNS0AdvertisedBandwidth to the writer.
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
 * Reads a FULLNS0AdvertisedBandwidth from an XML reader. The element to be read is
 * "advertisedBandwidth".
 *
 * @param reader The XML reader.
 * @return The FULLNS0AdvertisedBandwidth.
 */
+ (id<JAXBElement>) readXMLElement: (xmlTextReaderPtr) reader {
  int status;
  FULLNS0AdvertisedBandwidth *_advertisedBandwidth = nil;

  if (xmlTextReaderNodeType(reader) != XML_READER_TYPE_ELEMENT) {
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
    if (status < 1) {
      [NSException raise: @"XMLReadError"
                   format: @"Error advancing the reader to start element advertisedBandwidth."];
    }
  }

  if (xmlStrcmp(BAD_CAST "advertisedBandwidth", xmlTextReaderConstLocalName(reader)) == 0
      && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read root element {}advertisedBandwidth.");
#endif
    _advertisedBandwidth = (FULLNS0AdvertisedBandwidth *)[FULLNS0AdvertisedBandwidth readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Successfully read root element {}advertisedBandwidth.");
#endif
  }
  else {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read FULLNS0AdvertisedBandwidth. Expected element advertisedBandwidth. Current element: {}%s", xmlTextReaderConstLocalName(reader)];
    }
    else {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read FULLNS0AdvertisedBandwidth. Expected element advertisedBandwidth. Current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader)];
    }
  }

  return _advertisedBandwidth;
}

/**
 * Writes this FULLNS0AdvertisedBandwidth to XML under element name "advertisedBandwidth".
 * The namespace declarations for the element will be written.
 *
 * @param writer The XML writer.
 * @param _advertisedBandwidth The AdvertisedBandwidth to write.
 * @return 1 if successful, 0 otherwise.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer
{
  [self writeXMLElement: writer writeNamespaces: YES];
}

/**
 * Writes this FULLNS0AdvertisedBandwidth to an XML writer.
 *
 * @param writer The writer.
 * @param writeNs Whether to write the namespaces for this element to the xml writer.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer writeNamespaces: (BOOL) writeNs
{
  int rc = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "advertisedBandwidth", NULL);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing start element {}advertisedBandwidth. XML writer status: %i\n", rc];
  }

#if DEBUG_ENUNCIATE > 1
  NSLog(@"writing type {}advertisedBandwidth for root element {}advertisedBandwidth...");
#endif
  [self writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
  NSLog(@"successfully wrote type {}advertisedBandwidth for root element {}advertisedBandwidth...");
#endif
  rc = xmlTextWriterEndElement(writer);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing end element {}advertisedBandwidth. XML writer status: %i\n", rc];
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
@end /* implementation FULLNS0AdvertisedBandwidth (JAXB) */

#endif /* DEF_FULLNS0AdvertisedBandwidth_M */
