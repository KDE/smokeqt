//Auto-generated by kalyptus. DO NOT EDIT.
#include <smoke.h>
#include <qt_smoke.h>
#include <qstring.h>
#include <qxml.h>

class x_QXmlContentHandler : public QXmlContentHandler {
public:
    static void x_0(Smoke::Stack x) {
	// QXmlContentHandler()
	x_QXmlContentHandler* xret = new x_QXmlContentHandler();
	x[0].s_class = (void*)xret;
    }
    x_QXmlContentHandler() : QXmlContentHandler() {
    }
    static void x_1(Smoke::Stack x) {
	// QXmlContentHandler(const QXmlContentHandler&)
	x_QXmlContentHandler* xret = new x_QXmlContentHandler(*(const QXmlContentHandler *)x[1].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QXmlContentHandler(const QXmlContentHandler& x1) : QXmlContentHandler(x1) {
    }
    virtual bool characters(const QString& x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)&x1;
	qt_Smoke->binding->callMethod(11900, (void*)this, x, true /*pure virtual*/);
	return (bool)x[0].s_bool;
	// ABSTRACT
    }
    virtual bool endDocument() {
	Smoke::StackItem x[1];
	qt_Smoke->binding->callMethod(11895, (void*)this, x, true /*pure virtual*/);
	return (bool)x[0].s_bool;
	// ABSTRACT
    }
    virtual bool endElement(const QString& x1, const QString& x2, const QString& x3) {
	Smoke::StackItem x[4];
	x[1].s_voidp = (void*)&x1;
	x[2].s_voidp = (void*)&x2;
	x[3].s_voidp = (void*)&x3;
	qt_Smoke->binding->callMethod(11899, (void*)this, x, true /*pure virtual*/);
	return (bool)x[0].s_bool;
	// ABSTRACT
    }
    virtual bool endPrefixMapping(const QString& x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)&x1;
	qt_Smoke->binding->callMethod(11897, (void*)this, x, true /*pure virtual*/);
	return (bool)x[0].s_bool;
	// ABSTRACT
    }
    virtual QString errorString() {
	Smoke::StackItem x[1];
	qt_Smoke->binding->callMethod(11904, (void*)this, x, true /*pure virtual*/);
	QString *xptr = (QString *)x[0].s_class;
	QString xret(*xptr);
	delete xptr;
	return xret;
	// ABSTRACT
    }
    virtual bool ignorableWhitespace(const QString& x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)&x1;
	qt_Smoke->binding->callMethod(11901, (void*)this, x, true /*pure virtual*/);
	return (bool)x[0].s_bool;
	// ABSTRACT
    }
    virtual bool processingInstruction(const QString& x1, const QString& x2) {
	Smoke::StackItem x[3];
	x[1].s_voidp = (void*)&x1;
	x[2].s_voidp = (void*)&x2;
	qt_Smoke->binding->callMethod(11902, (void*)this, x, true /*pure virtual*/);
	return (bool)x[0].s_bool;
	// ABSTRACT
    }
    virtual void setDocumentLocator(QXmlLocator* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	qt_Smoke->binding->callMethod(11893, (void*)this, x, true /*pure virtual*/);
	return;
	// ABSTRACT
    }
    virtual bool skippedEntity(const QString& x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)&x1;
	qt_Smoke->binding->callMethod(11903, (void*)this, x, true /*pure virtual*/);
	return (bool)x[0].s_bool;
	// ABSTRACT
    }
    virtual bool startDocument() {
	Smoke::StackItem x[1];
	qt_Smoke->binding->callMethod(11894, (void*)this, x, true /*pure virtual*/);
	return (bool)x[0].s_bool;
	// ABSTRACT
    }
    virtual bool startElement(const QString& x1, const QString& x2, const QString& x3, const QXmlAttributes& x4) {
	Smoke::StackItem x[5];
	x[1].s_voidp = (void*)&x1;
	x[2].s_voidp = (void*)&x2;
	x[3].s_voidp = (void*)&x3;
	x[4].s_class = (void*)&x4;
	qt_Smoke->binding->callMethod(11898, (void*)this, x, true /*pure virtual*/);
	return (bool)x[0].s_bool;
	// ABSTRACT
    }
    virtual bool startPrefixMapping(const QString& x1, const QString& x2) {
	Smoke::StackItem x[3];
	x[1].s_voidp = (void*)&x1;
	x[2].s_voidp = (void*)&x2;
	qt_Smoke->binding->callMethod(11896, (void*)this, x, true /*pure virtual*/);
	return (bool)x[0].s_bool;
	// ABSTRACT
    }
    ~x_QXmlContentHandler() { qt_Smoke->binding->deleted(370, (void*)this); }
};
void xcall_QXmlContentHandler(Smoke::Index xi, void *obj, Smoke::Stack args) {
    x_QXmlContentHandler *xself = (x_QXmlContentHandler*)obj;
    switch(xi) {
	case 0: x_QXmlContentHandler::x_0(args);	break;
	case 1: x_QXmlContentHandler::x_1(args);	break;
	case 2: delete (QXmlContentHandler*)xself;	break;
    }
}
