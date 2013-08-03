#include <enunciate-common.c>
#ifndef DEF_full_ns0_subnetConfigs_H
#define DEF_full_ns0_subnetConfigs_H

/**
 * (no documentation provided)
 */
struct full_ns0_subnetConfigs {


  /**
   * (no documentation provided)
   */
  struct full_ns0_subnetConfig *subnetConfig;

  /**
   * Size of the subnetConfig array.
   */
  int _sizeof_subnetConfig;
};

/**
 * Reads a SubnetConfigs element from XML. The element to be read is "subnetConfigs", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The SubnetConfigs, or NULL in case of error.
 */
struct full_ns0_subnetConfigs *xml_read_full_ns0_subnetConfigs(xmlTextReaderPtr reader);

/**
 * Writes a SubnetConfigs to XML under element name "subnetConfigs".
 *
 * @param writer The XML writer.
 * @param _subnetConfigs The SubnetConfigs to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
int xml_write_full_ns0_subnetConfigs(xmlTextWriterPtr writer, struct full_ns0_subnetConfigs *_subnetConfigs);

/**
 * Frees a SubnetConfigs.
 *
 * @param _subnetConfigs The SubnetConfigs to free.
 */
void free_full_ns0_subnetConfigs(struct full_ns0_subnetConfigs *_subnetConfigs);

/**
 * Reads a SubnetConfigs element from XML. The element to be read is "subnetConfigs", and
 * it is assumed that the reader is already pointing to the element.
 *
 * @param reader The XML reader.
 * @return The SubnetConfigs, or NULL in case of error.
 */
struct full_ns0_subnetConfigs *xmlTextReaderReadNs0SubnetConfigsElement(xmlTextReaderPtr reader);

/**
 * Writes a SubnetConfigs to XML under element name "subnetConfigs".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _subnetConfigs The SubnetConfigs to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0SubnetConfigsElement(xmlTextWriterPtr writer, struct full_ns0_subnetConfigs *_subnetConfigs);

/**
 * Writes a SubnetConfigs to XML under element name "subnetConfigs".
 *
 * @param writer The XML writer.
 * @param _subnetConfigs The SubnetConfigs to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0SubnetConfigsElementNS(xmlTextWriterPtr writer, struct full_ns0_subnetConfigs *_subnetConfigs, int writeNamespaces);

/**
 * Frees the children of a SubnetConfigs.
 *
 * @param _subnetConfigs The SubnetConfigs whose children are to be free.
 */
static void freeNs0SubnetConfigsElement(struct full_ns0_subnetConfigs *_subnetConfigs);

/**
 * Reads a SubnetConfigs from XML. The reader is assumed to be at the start element.
 *
 * @param reader The XML reader.
 * @return The SubnetConfigs, or NULL in case of error.
 */
static struct full_ns0_subnetConfigs *xmlTextReaderReadNs0SubnetConfigsType(xmlTextReaderPtr reader);

/**
 * Writes a SubnetConfigs to XML.
 *
 * @param writer The XML writer.
 * @param _subnetConfigs The SubnetConfigs to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0SubnetConfigsType(xmlTextWriterPtr writer, struct full_ns0_subnetConfigs *_subnetConfigs);

/**
 * Frees the elements of a SubnetConfigs.
 *
 * @param _subnetConfigs The SubnetConfigs to free.
 */
static void freeNs0SubnetConfigsType(struct full_ns0_subnetConfigs *_subnetConfigs);

#endif /* DEF_full_ns0_subnetConfigs_H */
#ifndef DEF_full_ns0_subnetConfig_H
#define DEF_full_ns0_subnetConfig_H

/**
 * (no documentation provided)
 */
struct full_ns0_subnetConfig {


  /**
   * (no documentation provided)
   */
  xmlChar *name;

  /**
   * (no documentation provided)
   */
  xmlChar *subnet;

  /**
   * (no documentation provided)
   */
  xmlChar *nodePorts;

  /**
   * Size of the nodePorts array.
   */
  int _sizeof_nodePorts;
};

/**
 * Reads a SubnetConfig element from XML. The element to be read is "subnetConfig", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The SubnetConfig, or NULL in case of error.
 */
struct full_ns0_subnetConfig *xml_read_full_ns0_subnetConfig(xmlTextReaderPtr reader);

/**
 * Writes a SubnetConfig to XML under element name "subnetConfig".
 *
 * @param writer The XML writer.
 * @param _subnetConfig The SubnetConfig to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
int xml_write_full_ns0_subnetConfig(xmlTextWriterPtr writer, struct full_ns0_subnetConfig *_subnetConfig);

/**
 * Frees a SubnetConfig.
 *
 * @param _subnetConfig The SubnetConfig to free.
 */
void free_full_ns0_subnetConfig(struct full_ns0_subnetConfig *_subnetConfig);

/**
 * Reads a SubnetConfig element from XML. The element to be read is "subnetConfig", and
 * it is assumed that the reader is already pointing to the element.
 *
 * @param reader The XML reader.
 * @return The SubnetConfig, or NULL in case of error.
 */
struct full_ns0_subnetConfig *xmlTextReaderReadNs0SubnetConfigElement(xmlTextReaderPtr reader);

/**
 * Writes a SubnetConfig to XML under element name "subnetConfig".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _subnetConfig The SubnetConfig to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0SubnetConfigElement(xmlTextWriterPtr writer, struct full_ns0_subnetConfig *_subnetConfig);

/**
 * Writes a SubnetConfig to XML under element name "subnetConfig".
 *
 * @param writer The XML writer.
 * @param _subnetConfig The SubnetConfig to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0SubnetConfigElementNS(xmlTextWriterPtr writer, struct full_ns0_subnetConfig *_subnetConfig, int writeNamespaces);

/**
 * Frees the children of a SubnetConfig.
 *
 * @param _subnetConfig The SubnetConfig whose children are to be free.
 */
static void freeNs0SubnetConfigElement(struct full_ns0_subnetConfig *_subnetConfig);

/**
 * Reads a SubnetConfig from XML. The reader is assumed to be at the start element.
 *
 * @param reader The XML reader.
 * @return The SubnetConfig, or NULL in case of error.
 */
static struct full_ns0_subnetConfig *xmlTextReaderReadNs0SubnetConfigType(xmlTextReaderPtr reader);

/**
 * Writes a SubnetConfig to XML.
 *
 * @param writer The XML writer.
 * @param _subnetConfig The SubnetConfig to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0SubnetConfigType(xmlTextWriterPtr writer, struct full_ns0_subnetConfig *_subnetConfig);

/**
 * Frees the elements of a SubnetConfig.
 *
 * @param _subnetConfig The SubnetConfig to free.
 */
static void freeNs0SubnetConfigType(struct full_ns0_subnetConfig *_subnetConfig);

#endif /* DEF_full_ns0_subnetConfig_H */
#ifndef DEF_full_ns0_subnetConfigs_M
#define DEF_full_ns0_subnetConfigs_M

/**
 * Reads a SubnetConfigs element from XML. The element to be read is "subnetConfigs", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The SubnetConfigs, or NULL in case of error.
 */
struct full_ns0_subnetConfigs *xml_read_full_ns0_subnetConfigs(xmlTextReaderPtr reader) {
  int status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
  return xmlTextReaderReadNs0SubnetConfigsElement(reader);
}

/**
 * Writes a SubnetConfigs to XML under element name "subnetConfigs".
 *
 * @param writer The XML writer.
 * @param _subnetConfigs The SubnetConfigs to write.
 * @return 1 if successful, 0 otherwise.
 */
int xml_write_full_ns0_subnetConfigs(xmlTextWriterPtr writer, struct full_ns0_subnetConfigs *_subnetConfigs) {
  return xmlTextWriterWriteNs0SubnetConfigsElementNS(writer, _subnetConfigs, 1);
}

/**
 * Frees a SubnetConfigs.
 *
 * @param _subnetConfigs The SubnetConfigs to free.
 */
void free_full_ns0_subnetConfigs(struct full_ns0_subnetConfigs *_subnetConfigs) {
  freeNs0SubnetConfigsType(_subnetConfigs);
  free(_subnetConfigs);
}

/**
 * Reads a SubnetConfigs element from XML. The element to be read is "subnetConfigs", and
 * it is assumed that the reader is pointing to that element.
 *
 * @param reader The XML reader.
 * @return The SubnetConfigs, or NULL in case of error.
 */
struct full_ns0_subnetConfigs *xmlTextReaderReadNs0SubnetConfigsElement(xmlTextReaderPtr reader) {
  struct full_ns0_subnetConfigs *_subnetConfigs = NULL;

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "subnetConfigs", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Attempting to read root element {}subnetConfigs.\n");
#endif
    _subnetConfigs = xmlTextReaderReadNs0SubnetConfigsType(reader);
  }
#if DEBUG_ENUNCIATE
  if (_subnetConfigs == NULL) {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      printf("attempt to read {}subnetConfigs failed. current element: {}%s\n",  xmlTextReaderConstLocalName(reader));
    }
    else {
      printf("attempt to read {}subnetConfigs failed. current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
    }
  }
#endif

  return _subnetConfigs;
}

/**
 * Writes a SubnetConfigs to XML under element name "subnetConfigs".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _subnetConfigs The SubnetConfigs to write.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0SubnetConfigsElement(xmlTextWriterPtr writer, struct full_ns0_subnetConfigs *_subnetConfigs) {
  return xmlTextWriterWriteNs0SubnetConfigsElementNS(writer, _subnetConfigs, 0);
}

/**
 * Writes a SubnetConfigs to XML under element name "subnetConfigs".
 *
 * @param writer The XML writer.
 * @param _subnetConfigs The SubnetConfigs to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0SubnetConfigsElementNS(xmlTextWriterPtr writer, struct full_ns0_subnetConfigs *_subnetConfigs, int writeNamespaces) {
  int totalBytes = 0;
  int status;

  status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "subnetConfigs", NULL);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write start element {}subnetConfigs. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

#if DEBUG_ENUNCIATE > 1
  printf("writing type {}subnetConfigs for root element {}subnetConfigs...\n");
#endif
  status = xmlTextWriterWriteNs0SubnetConfigsType(writer, _subnetConfigs);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write type for start element {}subnetConfigs. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  status = xmlTextWriterEndElement(writer);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to end element {}subnetConfigs. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  return totalBytes;
}

/**
 * Frees the children of a SubnetConfigs.
 *
 * @param _subnetConfigs The SubnetConfigs whose children are to be free.
 */
static void freeNs0SubnetConfigsElement(struct full_ns0_subnetConfigs *_subnetConfigs) {
  freeNs0SubnetConfigsType(_subnetConfigs);
}

/**
 * Reads a SubnetConfigs from XML. The reader is assumed to be at the start element.
 *
 * @return the SubnetConfigs, or NULL in case of error.
 */
static struct full_ns0_subnetConfigs *xmlTextReaderReadNs0SubnetConfigsType(xmlTextReaderPtr reader) {
  int status, depth;
  void *_child_accessor;
  struct full_ns0_subnetConfigs *_subnetConfigs = calloc(1, sizeof(struct full_ns0_subnetConfigs));



  if (xmlTextReaderIsEmptyElement(reader) == 0) {
    depth = xmlTextReaderDepth(reader);//track the depth.
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);

    while (xmlTextReaderDepth(reader) > depth) {
      if (status < 1) {
        //panic: XML read error.
#if DEBUG_ENUNCIATE
        printf("Failure to advance to next child element.\n");
#endif
        freeNs0SubnetConfigsType(_subnetConfigs);
        free(_subnetConfigs);
        return NULL;
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "subnetConfig", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}subnetConfig of type {}subnetConfig.\n");
#endif
        _child_accessor = xmlTextReaderReadNs0SubnetConfigType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}subnetConfig of type {}subnetConfig.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0SubnetConfigsType(_subnetConfigs);
          free(_subnetConfigs);
          return NULL;
        }

        _subnetConfigs->subnetConfig = realloc(_subnetConfigs->subnetConfig, (_subnetConfigs->_sizeof_subnetConfig + 1) * sizeof(struct full_ns0_subnetConfig));
        memcpy(&(_subnetConfigs->subnetConfig[_subnetConfigs->_sizeof_subnetConfig++]), _child_accessor, sizeof(struct full_ns0_subnetConfig));
        free(_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else {
#if DEBUG_ENUNCIATE > 1
        if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
          printf("unknown child element {}%s for type {}subnetConfigs.  Skipping...\n",  xmlTextReaderConstLocalName(reader));
        }
        else {
          printf("unknown child element {%s}%s for type {}subnetConfigs. Skipping...\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
        }
#endif
        status = xmlTextReaderSkipElement(reader);
      }
    }
  }

  return _subnetConfigs;
}

/**
 * Writes a SubnetConfigs to XML.
 *
 * @param writer The XML writer.
 * @param _subnetConfigs The SubnetConfigs to write.
 * @return The total bytes written, or -1 on error;
 */
static int xmlTextWriterWriteNs0SubnetConfigsType(xmlTextWriterPtr writer, struct full_ns0_subnetConfigs *_subnetConfigs) {
  int status, totalBytes = 0, i;
  xmlChar *binaryData;
  for (i = 0; i < _subnetConfigs->_sizeof_subnetConfig; i++) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "subnetConfig", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}subnetConfig. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {}subnetConfig for element {}subnetConfig...\n");
#endif
    status = xmlTextWriterWriteNs0SubnetConfigType(writer, &(_subnetConfigs->subnetConfig[i]));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {}subnetConfig for element {}subnetConfig. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}subnetConfig. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }

  return totalBytes;
}

/**
 * Frees the elements of a SubnetConfigs.
 *
 * @param _subnetConfigs The SubnetConfigs to free.
 */
static void freeNs0SubnetConfigsType(struct full_ns0_subnetConfigs *_subnetConfigs) {
  int i;
  if (_subnetConfigs->subnetConfig != NULL) {
    for (i = 0; i < _subnetConfigs->_sizeof_subnetConfig; i++) {
#if DEBUG_ENUNCIATE > 1
      printf("Freeing accessor subnetConfig[%i] of type full_ns0_subnetConfigs...\n", i);
#endif
      freeNs0SubnetConfigType(&(_subnetConfigs->subnetConfig[i]));
    }
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor subnetConfig of type full_ns0_subnetConfigs...\n");
#endif
    free(_subnetConfigs->subnetConfig);
  }
}
#endif /* DEF_full_ns0_subnetConfigs_M */
#ifndef DEF_full_ns0_subnetConfig_M
#define DEF_full_ns0_subnetConfig_M

/**
 * Reads a SubnetConfig element from XML. The element to be read is "subnetConfig", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The SubnetConfig, or NULL in case of error.
 */
struct full_ns0_subnetConfig *xml_read_full_ns0_subnetConfig(xmlTextReaderPtr reader) {
  int status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
  return xmlTextReaderReadNs0SubnetConfigElement(reader);
}

/**
 * Writes a SubnetConfig to XML under element name "subnetConfig".
 *
 * @param writer The XML writer.
 * @param _subnetConfig The SubnetConfig to write.
 * @return 1 if successful, 0 otherwise.
 */
int xml_write_full_ns0_subnetConfig(xmlTextWriterPtr writer, struct full_ns0_subnetConfig *_subnetConfig) {
  return xmlTextWriterWriteNs0SubnetConfigElementNS(writer, _subnetConfig, 1);
}

/**
 * Frees a SubnetConfig.
 *
 * @param _subnetConfig The SubnetConfig to free.
 */
void free_full_ns0_subnetConfig(struct full_ns0_subnetConfig *_subnetConfig) {
  freeNs0SubnetConfigType(_subnetConfig);
  free(_subnetConfig);
}

/**
 * Reads a SubnetConfig element from XML. The element to be read is "subnetConfig", and
 * it is assumed that the reader is pointing to that element.
 *
 * @param reader The XML reader.
 * @return The SubnetConfig, or NULL in case of error.
 */
struct full_ns0_subnetConfig *xmlTextReaderReadNs0SubnetConfigElement(xmlTextReaderPtr reader) {
  struct full_ns0_subnetConfig *_subnetConfig = NULL;

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "subnetConfig", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Attempting to read root element {}subnetConfig.\n");
#endif
    _subnetConfig = xmlTextReaderReadNs0SubnetConfigType(reader);
  }
#if DEBUG_ENUNCIATE
  if (_subnetConfig == NULL) {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      printf("attempt to read {}subnetConfig failed. current element: {}%s\n",  xmlTextReaderConstLocalName(reader));
    }
    else {
      printf("attempt to read {}subnetConfig failed. current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
    }
  }
#endif

  return _subnetConfig;
}

/**
 * Writes a SubnetConfig to XML under element name "subnetConfig".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _subnetConfig The SubnetConfig to write.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0SubnetConfigElement(xmlTextWriterPtr writer, struct full_ns0_subnetConfig *_subnetConfig) {
  return xmlTextWriterWriteNs0SubnetConfigElementNS(writer, _subnetConfig, 0);
}

/**
 * Writes a SubnetConfig to XML under element name "subnetConfig".
 *
 * @param writer The XML writer.
 * @param _subnetConfig The SubnetConfig to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0SubnetConfigElementNS(xmlTextWriterPtr writer, struct full_ns0_subnetConfig *_subnetConfig, int writeNamespaces) {
  int totalBytes = 0;
  int status;

  status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "subnetConfig", NULL);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write start element {}subnetConfig. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

#if DEBUG_ENUNCIATE > 1
  printf("writing type {}subnetConfig for root element {}subnetConfig...\n");
#endif
  status = xmlTextWriterWriteNs0SubnetConfigType(writer, _subnetConfig);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write type for start element {}subnetConfig. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  status = xmlTextWriterEndElement(writer);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to end element {}subnetConfig. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  return totalBytes;
}

/**
 * Frees the children of a SubnetConfig.
 *
 * @param _subnetConfig The SubnetConfig whose children are to be free.
 */
static void freeNs0SubnetConfigElement(struct full_ns0_subnetConfig *_subnetConfig) {
  freeNs0SubnetConfigType(_subnetConfig);
}

/**
 * Reads a SubnetConfig from XML. The reader is assumed to be at the start element.
 *
 * @return the SubnetConfig, or NULL in case of error.
 */
static struct full_ns0_subnetConfig *xmlTextReaderReadNs0SubnetConfigType(xmlTextReaderPtr reader) {
  int status, depth;
  void *_child_accessor;
  struct full_ns0_subnetConfig *_subnetConfig = calloc(1, sizeof(struct full_ns0_subnetConfig));

  if (xmlTextReaderHasAttributes(reader)) {
    while (xmlTextReaderMoveToNextAttribute(reader)) {
      if ((xmlStrcmp(BAD_CAST "name", xmlTextReaderConstLocalName(reader)) == 0) && (xmlTextReaderConstNamespaceUri(reader) == NULL)) {
#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read type {http://www.w3.org/2001/XMLSchema}string from attribute {}name...\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
          //panic: unable to return the attribute value for some reason.
#if DEBUG_ENUNCIATE
          printf("Failed to read attribute {}name of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          freeNs0SubnetConfigType(_subnetConfig);
          free(_subnetConfig);
          return NULL;
        }
        _subnetConfig->name = ((xmlChar*)_child_accessor);
        continue;
      }
      if ((xmlStrcmp(BAD_CAST "subnet", xmlTextReaderConstLocalName(reader)) == 0) && (xmlTextReaderConstNamespaceUri(reader) == NULL)) {
#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read type {http://www.w3.org/2001/XMLSchema}string from attribute {}subnet...\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
          //panic: unable to return the attribute value for some reason.
#if DEBUG_ENUNCIATE
          printf("Failed to read attribute {}subnet of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          freeNs0SubnetConfigType(_subnetConfig);
          free(_subnetConfig);
          return NULL;
        }
        _subnetConfig->subnet = ((xmlChar*)_child_accessor);
        continue;
      }
    }

    status = xmlTextReaderMoveToElement(reader);
    if (status < 1) {
      //panic: unable to return to the element node.
#if DEBUG_ENUNCIATE
      printf("Unable to return to element node from attributes.\n");
#endif
      freeNs0SubnetConfigType(_subnetConfig);
      free(_subnetConfig);
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
        freeNs0SubnetConfigType(_subnetConfig);
        free(_subnetConfig);
        return NULL;
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "nodePorts", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}nodePorts of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}nodePorts of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0SubnetConfigType(_subnetConfig);
          free(_subnetConfig);
          return NULL;
        }

        _subnetConfig->nodePorts = realloc(_subnetConfig->nodePorts, (_subnetConfig->_sizeof_nodePorts + 1) * sizeof(xmlChar));
        memcpy(&(_subnetConfig->nodePorts[_subnetConfig->_sizeof_nodePorts++]), _child_accessor, sizeof(xmlChar));
        free(_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else {
#if DEBUG_ENUNCIATE > 1
        if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
          printf("unknown child element {}%s for type {}subnetConfig.  Skipping...\n",  xmlTextReaderConstLocalName(reader));
        }
        else {
          printf("unknown child element {%s}%s for type {}subnetConfig. Skipping...\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
        }
#endif
        status = xmlTextReaderSkipElement(reader);
      }
    }
  }

  return _subnetConfig;
}

/**
 * Writes a SubnetConfig to XML.
 *
 * @param writer The XML writer.
 * @param _subnetConfig The SubnetConfig to write.
 * @return The total bytes written, or -1 on error;
 */
static int xmlTextWriterWriteNs0SubnetConfigType(xmlTextWriterPtr writer, struct full_ns0_subnetConfig *_subnetConfig) {
  int status, totalBytes = 0, i;
  xmlChar *binaryData;

  if (_subnetConfig->name != NULL) {
    status = xmlTextWriterStartAttributeNS(writer, NULL, BAD_CAST "name", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start attribute {}name. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for attribute {}name...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_subnetConfig->name));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for attribute {}name. status: %i", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndAttribute(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end attribute {}name. status: %i", status);
#endif
      return status;
    }
    totalBytes += status;
  }

  if (_subnetConfig->subnet != NULL) {
    status = xmlTextWriterStartAttributeNS(writer, NULL, BAD_CAST "subnet", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start attribute {}subnet. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for attribute {}subnet...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_subnetConfig->subnet));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for attribute {}subnet. status: %i", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndAttribute(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end attribute {}subnet. status: %i", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  for (i = 0; i < _subnetConfig->_sizeof_nodePorts; i++) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "nodePorts", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}nodePorts. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}nodePorts...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, &(_subnetConfig->nodePorts[i]));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}nodePorts. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}nodePorts. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }

  return totalBytes;
}

/**
 * Frees the elements of a SubnetConfig.
 *
 * @param _subnetConfig The SubnetConfig to free.
 */
static void freeNs0SubnetConfigType(struct full_ns0_subnetConfig *_subnetConfig) {
  int i;
  if (_subnetConfig->name != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor name of type full_ns0_subnetConfig...\n");
#endif
    freeXsStringType(_subnetConfig->name);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor name of type full_ns0_subnetConfig...\n");
#endif
    free(_subnetConfig->name);
  }
  if (_subnetConfig->subnet != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor subnet of type full_ns0_subnetConfig...\n");
#endif
    freeXsStringType(_subnetConfig->subnet);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor subnet of type full_ns0_subnetConfig...\n");
#endif
    free(_subnetConfig->subnet);
  }
  if (_subnetConfig->nodePorts != NULL) {
    for (i = 0; i < _subnetConfig->_sizeof_nodePorts; i++) {
#if DEBUG_ENUNCIATE > 1
      printf("Freeing accessor nodePorts[%i] of type full_ns0_subnetConfig...\n", i);
#endif
      freeXsStringType(&(_subnetConfig->nodePorts[i]));
    }
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor nodePorts of type full_ns0_subnetConfig...\n");
#endif
    free(_subnetConfig->nodePorts);
  }
}
#endif /* DEF_full_ns0_subnetConfig_M */
