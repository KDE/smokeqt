//Auto-generated by kalyptus. DO NOT EDIT.
#include <smoke.h>
#include <qstring.h>
#include <qxml.h>

class x_QXmlSimpleReader : public QXmlSimpleReader {
public:
    static void x_0(Smoke::Stack x) {
	// QXmlSimpleReader()
	x_QXmlSimpleReader* xret = new x_QXmlSimpleReader();
	x[0].s_voidp = (void*)xret;
    }
    x_QXmlSimpleReader() : QXmlSimpleReader() {
    }
    void x_1(Smoke::Stack x) const {
	// feature(const QString&, bool*)
	bool xret = this->QXmlSimpleReader::feature(*(const QString *)x[1].s_voidp,(bool*)x[2].s_voidp);
	x[0].s_bool = (bool)xret;
    }
    void x_2(Smoke::Stack x) const {
	// feature(const QString&)
	bool xret = this->QXmlSimpleReader::feature(*(const QString *)x[1].s_voidp);
	x[0].s_bool = (bool)xret;
    }
    void x_3(Smoke::Stack x) {
	// setFeature(const QString&, bool)
	this->QXmlSimpleReader::setFeature(*(const QString *)x[1].s_voidp,(bool)x[2].s_bool);
    }
    void x_4(Smoke::Stack x) const {
	// hasFeature(const QString&)
	bool xret = this->QXmlSimpleReader::hasFeature(*(const QString *)x[1].s_voidp);
	x[0].s_bool = (bool)xret;
    }
    void x_5(Smoke::Stack x) const {
	// property(const QString&, bool*)
	void* xret = this->QXmlSimpleReader::property(*(const QString *)x[1].s_voidp,(bool*)x[2].s_voidp);
	x[0].s_voidp = (void*)xret;
    }
    void x_6(Smoke::Stack x) const {
	// property(const QString&)
	void* xret = this->QXmlSimpleReader::property(*(const QString *)x[1].s_voidp);
	x[0].s_voidp = (void*)xret;
    }
    void x_7(Smoke::Stack x) {
	// setProperty(const QString&, void*)
	this->QXmlSimpleReader::setProperty(*(const QString *)x[1].s_voidp,(void*)x[2].s_voidp);
    }
    void x_8(Smoke::Stack x) const {
	// hasProperty(const QString&)
	bool xret = this->QXmlSimpleReader::hasProperty(*(const QString *)x[1].s_voidp);
	x[0].s_bool = (bool)xret;
    }
    void x_9(Smoke::Stack x) {
	// setEntityResolver(QXmlEntityResolver*)
	this->QXmlSimpleReader::setEntityResolver((QXmlEntityResolver*)x[1].s_voidp);
    }
    void x_10(Smoke::Stack x) const {
	// entityResolver()
	QXmlEntityResolver* xret = this->QXmlSimpleReader::entityResolver();
	x[0].s_voidp = (void*)xret;
    }
    void x_11(Smoke::Stack x) {
	// setDTDHandler(QXmlDTDHandler*)
	this->QXmlSimpleReader::setDTDHandler((QXmlDTDHandler*)x[1].s_voidp);
    }
    void x_12(Smoke::Stack x) const {
	// DTDHandler()
	QXmlDTDHandler* xret = this->QXmlSimpleReader::DTDHandler();
	x[0].s_voidp = (void*)xret;
    }
    void x_13(Smoke::Stack x) {
	// setContentHandler(QXmlContentHandler*)
	this->QXmlSimpleReader::setContentHandler((QXmlContentHandler*)x[1].s_voidp);
    }
    void x_14(Smoke::Stack x) const {
	// contentHandler()
	QXmlContentHandler* xret = this->QXmlSimpleReader::contentHandler();
	x[0].s_voidp = (void*)xret;
    }
    void x_15(Smoke::Stack x) {
	// setErrorHandler(QXmlErrorHandler*)
	this->QXmlSimpleReader::setErrorHandler((QXmlErrorHandler*)x[1].s_voidp);
    }
    void x_16(Smoke::Stack x) const {
	// errorHandler()
	QXmlErrorHandler* xret = this->QXmlSimpleReader::errorHandler();
	x[0].s_voidp = (void*)xret;
    }
    void x_17(Smoke::Stack x) {
	// setLexicalHandler(QXmlLexicalHandler*)
	this->QXmlSimpleReader::setLexicalHandler((QXmlLexicalHandler*)x[1].s_voidp);
    }
    void x_18(Smoke::Stack x) const {
	// lexicalHandler()
	QXmlLexicalHandler* xret = this->QXmlSimpleReader::lexicalHandler();
	x[0].s_voidp = (void*)xret;
    }
    void x_19(Smoke::Stack x) {
	// setDeclHandler(QXmlDeclHandler*)
	this->QXmlSimpleReader::setDeclHandler((QXmlDeclHandler*)x[1].s_voidp);
    }
    void x_20(Smoke::Stack x) const {
	// declHandler()
	QXmlDeclHandler* xret = this->QXmlSimpleReader::declHandler();
	x[0].s_voidp = (void*)xret;
    }
    void x_21(Smoke::Stack x) {
	// parse(const QXmlInputSource&)
	bool xret = this->QXmlSimpleReader::parse(*(const QXmlInputSource *)x[1].s_voidp);
	x[0].s_bool = (bool)xret;
    }
    void x_22(Smoke::Stack x) {
	// parse(const QXmlInputSource*)
	bool xret = this->QXmlSimpleReader::parse((const QXmlInputSource*)x[1].s_voidp);
	x[0].s_bool = (bool)xret;
    }
    void x_23(Smoke::Stack x) {
	// parse(const QXmlInputSource*, bool)
	bool xret = this->QXmlSimpleReader::parse((const QXmlInputSource*)x[1].s_voidp,(bool)x[2].s_bool);
	x[0].s_bool = (bool)xret;
    }
    void x_24(Smoke::Stack x) {
	// parseContinue()
	bool xret = this->QXmlSimpleReader::parseContinue();
	x[0].s_bool = (bool)xret;
    }
    virtual QXmlDTDHandler* DTDHandler() const {
	Smoke::StackItem x[1];
	if(call_method((void*)this, 10038, x)) 	return (QXmlDTDHandler*)x[0].s_voidp;
	return this->QXmlSimpleReader::DTDHandler();
    }
    virtual QXmlContentHandler* contentHandler() const {
	Smoke::StackItem x[1];
	if(call_method((void*)this, 10040, x)) 	return (QXmlContentHandler*)x[0].s_voidp;
	return this->QXmlSimpleReader::contentHandler();
    }
    virtual QXmlDeclHandler* declHandler() const {
	Smoke::StackItem x[1];
	if(call_method((void*)this, 10046, x)) 	return (QXmlDeclHandler*)x[0].s_voidp;
	return this->QXmlSimpleReader::declHandler();
    }
    virtual QXmlEntityResolver* entityResolver() const {
	Smoke::StackItem x[1];
	if(call_method((void*)this, 10036, x)) 	return (QXmlEntityResolver*)x[0].s_voidp;
	return this->QXmlSimpleReader::entityResolver();
    }
    virtual QXmlErrorHandler* errorHandler() const {
	Smoke::StackItem x[1];
	if(call_method((void*)this, 10042, x)) 	return (QXmlErrorHandler*)x[0].s_voidp;
	return this->QXmlSimpleReader::errorHandler();
    }
    virtual bool feature(const QString& x1, bool* x2) const {
	Smoke::StackItem x[3];
	x[1].s_voidp = (void*)&x1;
	x[2].s_voidp = (void*)x2;
	if(call_method((void*)this, 10027, x)) return (bool)x[0].s_bool;
	return this->QXmlSimpleReader::feature(x1, x2);
    }
    virtual bool hasFeature(const QString& x1) const {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)&x1;
	if(call_method((void*)this, 10030, x)) return (bool)x[0].s_bool;
	return this->QXmlSimpleReader::hasFeature(x1);
    }
    virtual bool hasProperty(const QString& x1) const {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)&x1;
	if(call_method((void*)this, 10034, x)) return (bool)x[0].s_bool;
	return this->QXmlSimpleReader::hasProperty(x1);
    }
    virtual QXmlLexicalHandler* lexicalHandler() const {
	Smoke::StackItem x[1];
	if(call_method((void*)this, 10044, x)) 	return (QXmlLexicalHandler*)x[0].s_voidp;
	return this->QXmlSimpleReader::lexicalHandler();
    }
    virtual bool parse(const QXmlInputSource& x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)&x1;
	if(call_method((void*)this, 10047, x)) return (bool)x[0].s_bool;
	return this->QXmlSimpleReader::parse(x1);
    }
    virtual bool parse(const QXmlInputSource* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(call_method((void*)this, 10048, x)) return (bool)x[0].s_bool;
	return this->QXmlSimpleReader::parse(x1);
    }
    virtual bool parse(const QXmlInputSource* x1, bool x2) {
	Smoke::StackItem x[3];
	x[1].s_voidp = (void*)x1;
	x[2].s_bool = (bool)x2;
	if(call_method((void*)this, 10049, x)) return (bool)x[0].s_bool;
	return this->QXmlSimpleReader::parse(x1, x2);
    }
    virtual bool parseContinue() {
	Smoke::StackItem x[1];
	if(call_method((void*)this, 10050, x)) return (bool)x[0].s_bool;
	return this->QXmlSimpleReader::parseContinue();
    }
    virtual void* property(const QString& x1, bool* x2) const {
	Smoke::StackItem x[3];
	x[1].s_voidp = (void*)&x1;
	x[2].s_voidp = (void*)x2;
	if(call_method((void*)this, 10031, x)) 	return (void*)x[0].s_voidp;
	return this->QXmlSimpleReader::property(x1, x2);
    }
    virtual void setContentHandler(QXmlContentHandler* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(call_method((void*)this, 10039, x)) return;
	this->QXmlSimpleReader::setContentHandler(x1);
    }
    virtual void setDTDHandler(QXmlDTDHandler* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(call_method((void*)this, 10037, x)) return;
	this->QXmlSimpleReader::setDTDHandler(x1);
    }
    virtual void setDeclHandler(QXmlDeclHandler* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(call_method((void*)this, 10045, x)) return;
	this->QXmlSimpleReader::setDeclHandler(x1);
    }
    virtual void setEntityResolver(QXmlEntityResolver* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(call_method((void*)this, 10035, x)) return;
	this->QXmlSimpleReader::setEntityResolver(x1);
    }
    virtual void setErrorHandler(QXmlErrorHandler* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(call_method((void*)this, 10041, x)) return;
	this->QXmlSimpleReader::setErrorHandler(x1);
    }
    virtual void setFeature(const QString& x1, bool x2) {
	Smoke::StackItem x[3];
	x[1].s_voidp = (void*)&x1;
	x[2].s_bool = (bool)x2;
	if(call_method((void*)this, 10029, x)) return;
	this->QXmlSimpleReader::setFeature(x1, x2);
    }
    virtual void setLexicalHandler(QXmlLexicalHandler* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(call_method((void*)this, 10043, x)) return;
	this->QXmlSimpleReader::setLexicalHandler(x1);
    }
    virtual void setProperty(const QString& x1, void* x2) {
	Smoke::StackItem x[3];
	x[1].s_voidp = (void*)&x1;
	x[2].s_voidp = (void*)x2;
	if(call_method((void*)this, 10033, x)) return;
	this->QXmlSimpleReader::setProperty(x1, x2);
    }
    ~x_QXmlSimpleReader() {}
};
void xcall_QXmlSimpleReader(Smoke::Index xi, void *obj, Smoke::Stack args) {
    x_QXmlSimpleReader *xself = (x_QXmlSimpleReader*)obj;
    switch(xi) {
	case 0: x_QXmlSimpleReader::x_0(args);	break;
	case 1: xself->x_1(args);	break;
	case 2: xself->x_2(args);	break;
	case 3: xself->x_3(args);	break;
	case 4: xself->x_4(args);	break;
	case 5: xself->x_5(args);	break;
	case 6: xself->x_6(args);	break;
	case 7: xself->x_7(args);	break;
	case 8: xself->x_8(args);	break;
	case 9: xself->x_9(args);	break;
	case 10: xself->x_10(args);	break;
	case 11: xself->x_11(args);	break;
	case 12: xself->x_12(args);	break;
	case 13: xself->x_13(args);	break;
	case 14: xself->x_14(args);	break;
	case 15: xself->x_15(args);	break;
	case 16: xself->x_16(args);	break;
	case 17: xself->x_17(args);	break;
	case 18: xself->x_18(args);	break;
	case 19: xself->x_19(args);	break;
	case 20: xself->x_20(args);	break;
	case 21: xself->x_21(args);	break;
	case 22: xself->x_22(args);	break;
	case 23: xself->x_23(args);	break;
	case 24: xself->x_24(args);	break;
	case 25: delete (QXmlSimpleReader*)xself;	break;
    }
}
