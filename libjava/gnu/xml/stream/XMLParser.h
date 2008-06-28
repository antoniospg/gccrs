
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_xml_stream_XMLParser__
#define __gnu_xml_stream_XMLParser__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>

extern "Java"
{
  namespace gnu
  {
    namespace xml
    {
      namespace stream
      {
          class XMLParser;
          class XMLParser$Attribute;
          class XMLParser$ContentModel;
          class XMLParser$ContentParticle;
          class XMLParser$Doctype;
          class XMLParser$ElementContentModel;
          class XMLParser$ExternalIds;
          class XMLParser$Input;
      }
    }
  }
  namespace javax
  {
    namespace xml
    {
      namespace namespace
      {
          class NamespaceContext;
          class QName;
      }
      namespace stream
      {
          class Location;
          class XMLReporter;
          class XMLResolver;
      }
    }
  }
}

class gnu::xml::stream::XMLParser : public ::java::lang::Object
{

public:
  XMLParser(::java::io::InputStream *, ::java::lang::String *, jboolean, jboolean, jboolean, jboolean, jboolean, jboolean, jboolean, jboolean, jboolean, ::javax::xml::stream::XMLReporter *, ::javax::xml::stream::XMLResolver *);
  XMLParser(::java::io::Reader *, ::java::lang::String *, jboolean, jboolean, jboolean, jboolean, jboolean, jboolean, jboolean, jboolean, jboolean, ::javax::xml::stream::XMLReporter *, ::javax::xml::stream::XMLResolver *);
  virtual ::java::lang::String * getNamespaceURI(::java::lang::String *);
  virtual ::java::lang::String * getPrefix(::java::lang::String *);
  virtual ::java::util::Iterator * getPrefixes(::java::lang::String *);
  virtual void close();
  virtual ::javax::xml::namespace::NamespaceContext * getNamespaceContext();
  virtual jint getAttributeCount();
  virtual ::java::lang::String * getAttributeLocalName(jint);
  virtual ::java::lang::String * getAttributeNamespace(jint);
  virtual ::java::lang::String * getAttributePrefix(jint);
  virtual ::javax::xml::namespace::QName * getAttributeName(jint);
  virtual ::java::lang::String * getAttributeType(jint);
private:
  ::java::lang::String * getAttributeType(::java::lang::String *, ::java::lang::String *);
public:
  virtual ::java::lang::String * getAttributeValue(jint);
  virtual ::java::lang::String * getAttributeValue(::java::lang::String *, ::java::lang::String *);
public: // actually package-private
  virtual jboolean isAttributeDeclared(jint);
public:
  virtual ::java::lang::String * getCharacterEncodingScheme();
  virtual ::java::lang::String * getElementText();
  virtual ::java::lang::String * getEncoding();
  virtual jint getEventType();
  virtual ::java::lang::String * getLocalName();
  virtual ::javax::xml::stream::Location * getLocation();
  virtual ::javax::xml::namespace::QName * getName();
  virtual jint getNamespaceCount();
  virtual ::java::lang::String * getNamespacePrefix(jint);
  virtual ::java::lang::String * getNamespaceURI();
  virtual ::java::lang::String * getNamespaceURI(jint);
  virtual ::java::lang::String * getPIData();
  virtual ::java::lang::String * getPITarget();
  virtual ::java::lang::String * getPrefix();
  virtual ::java::lang::Object * getProperty(::java::lang::String *);
  virtual ::java::lang::String * getText();
  virtual JArray< jchar > * getTextCharacters();
  virtual jint getTextCharacters(jint, JArray< jchar > *, jint, jint);
  virtual jint getTextLength();
  virtual jint getTextStart();
  virtual ::java::lang::String * getVersion();
  virtual jboolean hasName();
  virtual jboolean hasText();
  virtual jboolean isAttributeSpecified(jint);
  virtual jboolean isCharacters();
  virtual jboolean isEndElement();
  virtual jboolean isStandalone();
  virtual jboolean isStartElement();
  virtual jboolean isWhiteSpace();
  virtual jint nextTag();
  virtual void require(jint, ::java::lang::String *, ::java::lang::String *);
  virtual jboolean standaloneSet();
  virtual jboolean hasNext();
  virtual jint next();
public: // actually package-private
  virtual ::java::lang::String * getCurrentElement();
private:
  void mark(jint);
  void reset();
  jint read();
  jint read(JArray< jint > *, jint, jint);
  jint readCh();
  void require(jchar);
  void require(::java::lang::String *);
  jboolean tryRead(jchar);
  jboolean tryRead(::java::lang::String *);
  void readUntil(::java::lang::String *);
  jboolean tryWhitespace();
  void skipWhitespace();
  void requireWhitespace();
public: // actually package-private
  virtual ::java::lang::String * getXMLBase();
private:
  void pushInput(::java::lang::String *, ::java::lang::String *, jboolean, jboolean);
  void pushInput(::java::lang::String *, ::gnu::xml::stream::XMLParser$ExternalIds *, jboolean, jboolean);
  void pushInput(::gnu::xml::stream::XMLParser$Input *);
public: // actually package-private
  static ::java::lang::String * canonicalize(::java::lang::String *);
public:
  static ::java::lang::String * absolutize(::java::lang::String *, ::java::lang::String *);
private:
  static jboolean isURLScheme(::java::lang::String *);
public: // actually package-private
  static ::java::io::InputStream * resolve(::java::lang::String *);
private:
  void popInput();
  void readTextDecl();
  void readXMLDecl();
  void readDoctypeDecl();
  void checkDoctype();
  void readMarkupdecl(jboolean);
  void readElementDecl();
  void readContentspec(::java::lang::String *);
  ::gnu::xml::stream::XMLParser$ElementContentModel * readElements(::java::lang::StringBuffer *);
  ::gnu::xml::stream::XMLParser$ContentParticle * readContentParticle(::java::lang::StringBuffer *);
  void readAttlistDecl();
  void readAttDef(::java::lang::String *);
  ::java::lang::String * readAttType(::java::lang::StringBuffer *, ::java::util::HashSet *);
  void readEnumeration(jboolean, ::java::lang::StringBuffer *, ::java::util::HashSet *);
  void readNotationType(::java::lang::StringBuffer *, ::java::util::HashSet *);
  void readDefault(::java::lang::String *, ::java::lang::String *, ::java::lang::String *, ::java::lang::String *, ::java::util::HashSet *);
  void readEntityDecl(jboolean);
  void readNotationDecl(jboolean);
  ::gnu::xml::stream::XMLParser$ExternalIds * readExternalIds(jboolean, jboolean);
  jint readStartElement();
  jboolean attributeSpecified(::java::lang::String *);
  void readAttribute(::java::lang::String *);
  jboolean addNamespace(::gnu::xml::stream::XMLParser$Attribute *);
  void readEndElement();
  void endElementValidationHook();
  void readComment(jboolean);
  void readPI(jboolean);
  void readReference();
  void readCDSect();
  jint readCharData(::java::lang::String *);
  void expandEntity(::java::lang::String *, jboolean, jboolean);
  jboolean isUnparsedEntity(::java::lang::String *);
  void readEq();
  jint literalReadCh(jboolean);
  ::java::lang::String * readLiteral(jint, jboolean);
  ::java::lang::StringBuffer * normalize(::java::lang::StringBuffer *);
  void normalizeCRLF(::java::lang::StringBuffer *);
  void expandPEReference();
  JArray< jchar > * readCharacterRef(jint);
  ::java::lang::String * readNmtoken(jboolean);
  ::java::lang::String * readNmtoken(jboolean, ::java::lang::StringBuffer *);
public:
  static jboolean isXML11Char(jint);
  static jboolean isXML11RestrictedChar(jint);
private:
  jboolean isNmtoken(::java::lang::String *, jboolean);
public:
  static jboolean isNameStartCharacter(jint, jboolean);
  static jboolean isNameCharacter(jint, jboolean);
  static jboolean isLetter(jint);
  static jboolean isDigit(jint);
  static jboolean isCombiningChar(jint);
  static jboolean isExtender(jint);
  static jboolean isChar(jint);
private:
  ::java::lang::String * intern(::java::lang::String *);
  void error(::java::lang::String *);
  void error(::java::lang::String *, ::java::lang::Object *);
  void validateStartElement(::java::lang::String *);
  void validateEndElement();
  void validatePCData(::java::lang::String *);
  void validateElementContent(::gnu::xml::stream::XMLParser$ElementContentModel *, ::java::util::LinkedList *);
  ::java::lang::String * createRegularExpression(::gnu::xml::stream::XMLParser$ElementContentModel *);
public: // actually package-private
  virtual void validateDoctype();
public:
  static void main(JArray< ::java::lang::String * > *);
private:
  static ::java::lang::String * encodeText(::java::lang::String *);
public: // actually package-private
  static ::java::lang::String * access$0(::gnu::xml::stream::XMLParser *, ::java::lang::String *);
  static jboolean access$1(::gnu::xml::stream::XMLParser *);
  static ::gnu::xml::stream::XMLParser$Input * access$2(::gnu::xml::stream::XMLParser *);
  static ::java::util::LinkedList * access$3(::gnu::xml::stream::XMLParser *);
private:
  static const jint INIT = 0;
  static const jint PROLOG = 1;
  static const jint CONTENT = 2;
  static const jint EMPTY_ELEMENT = 3;
  static const jint MISC = 4;
  static const jint LIT_ENTITY_REF = 2;
  static const jint LIT_NORMALIZE = 4;
  static const jint LIT_ATTRIBUTE = 8;
  static const jint LIT_DISABLE_PE = 16;
  static const jint LIT_DISABLE_CREF = 32;
  static const jint LIT_DISABLE_EREF = 64;
  static const jint LIT_PUBID = 256;
public: // actually package-private
  static const jint ATTRIBUTE_DEFAULT_UNDECLARED = 30;
  static const jint ATTRIBUTE_DEFAULT_SPECIFIED = 31;
  static const jint ATTRIBUTE_DEFAULT_IMPLIED = 32;
  static const jint ATTRIBUTE_DEFAULT_REQUIRED = 33;
  static const jint ATTRIBUTE_DEFAULT_FIXED = 34;
  static const jint START_ENTITY = 50;
  static const jint END_ENTITY = 51;
private:
  ::gnu::xml::stream::XMLParser$Input * __attribute__((aligned(__alignof__( ::java::lang::Object)))) input;
  ::java::util::LinkedList * inputStack;
  ::java::util::LinkedList * startEntityStack;
  ::java::util::LinkedList * endEntityStack;
  jint state;
  jint event;
  ::java::util::LinkedList * stack;
  ::java::util::LinkedList * namespaces;
  ::java::util::LinkedList * bases;
  ::java::util::ArrayList * attrs;
  ::java::lang::StringBuffer * buf;
  ::java::lang::StringBuffer * nmtokenBuf;
  ::java::lang::StringBuffer * literalBuf;
  JArray< jint > * tmpBuf;
  ::gnu::xml::stream::XMLParser$ContentModel * currentContentModel;
  ::java::util::LinkedList * validationStack;
  ::java::util::HashSet * ids;
  ::java::util::HashSet * idrefs;
  ::java::lang::String * piTarget;
  ::java::lang::String * piData;
  ::java::lang::String * xmlVersion;
  ::java::lang::String * xmlEncoding;
  ::java::lang::Boolean * xmlStandalone;
public: // actually package-private
  ::gnu::xml::stream::XMLParser$Doctype * doctype;
private:
  jboolean expandPE;
  jboolean peIsError;
  jboolean validating;
  jboolean stringInterning;
  jboolean coalescing;
  jboolean replaceERefs;
  jboolean externalEntities;
  jboolean supportDTD;
  jboolean namespaceAware;
  jboolean baseAware;
  jboolean extendedEventTypes;
public: // actually package-private
  ::javax::xml::stream::XMLReporter * reporter;
  ::javax::xml::stream::XMLResolver * resolver;
private:
  static ::java::lang::String * TEST_START_ELEMENT;
  static ::java::lang::String * TEST_END_ELEMENT;
  static ::java::lang::String * TEST_COMMENT;
  static ::java::lang::String * TEST_PI;
  static ::java::lang::String * TEST_CDATA;
  static ::java::lang::String * TEST_XML_DECL;
  static ::java::lang::String * TEST_DOCTYPE_DECL;
  static ::java::lang::String * TEST_ELEMENT_DECL;
  static ::java::lang::String * TEST_ATTLIST_DECL;
  static ::java::lang::String * TEST_ENTITY_DECL;
  static ::java::lang::String * TEST_NOTATION_DECL;
  static ::java::lang::String * TEST_KET;
  static ::java::lang::String * TEST_END_COMMENT;
  static ::java::lang::String * TEST_END_PI;
  static ::java::lang::String * TEST_END_CDATA;
  static ::java::util::LinkedHashMap * PREDEFINED_ENTITIES;
public:
  static ::java::lang::Class class$;
};

#endif // __gnu_xml_stream_XMLParser__
