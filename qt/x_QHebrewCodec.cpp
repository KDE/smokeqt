//Auto-generated by kalyptus. DO NOT EDIT.
#include <smoke.h>
#include <qt_smoke.h>
#include <qrtlcodec.h>
#include <qstring.h>
#include <qcstring.h>

class x_QHebrewCodec : public QHebrewCodec {
public:
    void x_0(Smoke::Stack x) const {
	// mibEnum()
	int xret = this->QHebrewCodec::mibEnum();
	x[0].s_int = xret;
    }
    void x_1(Smoke::Stack x) const {
	// name()
	const char* xret = this->QHebrewCodec::name();
	x[0].s_voidp = (void*)xret;
    }
    void x_2(Smoke::Stack x) const {
	// mimeName()
	const char* xret = this->QHebrewCodec::mimeName();
	x[0].s_voidp = (void*)xret;
    }
    void x_3(Smoke::Stack x) const {
	// fromUnicode(const QString&, int&)
	QCString xret = this->QHebrewCodec::fromUnicode(*(const QString *)x[1].s_voidp,*(int *)x[2].s_voidp);
	x[0].s_voidp = (void*)new QCString(xret);
    }
    void x_4(Smoke::Stack x) const {
	// toUnicode(const char*, int)
	QString xret = this->QHebrewCodec::toUnicode((const char*)x[1].s_voidp,(int)x[2].s_int);
	x[0].s_voidp = (void*)new QString(xret);
    }
    void x_5(Smoke::Stack x) const {
	// heuristicContentMatch(const char*, int)
	int xret = this->QHebrewCodec::heuristicContentMatch((const char*)x[1].s_voidp,(int)x[2].s_int);
	x[0].s_int = xret;
    }
    static void x_6(Smoke::Stack x) {
	// QHebrewCodec()
	x_QHebrewCodec* xret = new x_QHebrewCodec();
	x[0].s_class = (void*)xret;
    }
    x_QHebrewCodec() : QHebrewCodec() {
    }
    virtual bool canEncode(QChar x1) const {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	if(qt_Smoke->binding->callMethod(8538, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QTextCodec::canEncode(x1);
    }
    virtual bool canEncode(const QString& x1) const {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)&x1;
	if(qt_Smoke->binding->callMethod(8539, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QTextCodec::canEncode(x1);
    }
    virtual unsigned short characterFromUnicode(const QString& x1, int x2) const {
	Smoke::StackItem x[3];
	x[1].s_voidp = (void*)&x1;
	x[2].s_int = x2;
	if(qt_Smoke->binding->callMethod(8543, (void*)this, x)) {
	    unsigned short *xptr = (unsigned short *)x[0].s_class;
	    unsigned short xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QTextCodec::characterFromUnicode(x1, x2);
    }
    virtual QCString fromUnicode(const QString& x1, int& x2) const {
	Smoke::StackItem x[3];
	x[1].s_voidp = (void*)&x1;
	x[2].s_voidp = (void*)&x2;
	if(qt_Smoke->binding->callMethod(3327, (void*)this, x)) {
	    QCString *xptr = (QCString *)x[0].s_class;
	    QCString xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QHebrewCodec::fromUnicode(x1, x2);
    }
    virtual QByteArray fromUnicode(const QString& x1, int x2, int x3) const {
	Smoke::StackItem x[4];
	x[1].s_voidp = (void*)&x1;
	x[2].s_int = x2;
	x[3].s_int = x3;
	if(qt_Smoke->binding->callMethod(8542, (void*)this, x)) {
	    QByteArray *xptr = (QByteArray *)x[0].s_class;
	    QByteArray xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QTextCodec::fromUnicode(x1, x2, x3);
    }
    virtual int heuristicContentMatch(const char* x1, int x2) const {
	Smoke::StackItem x[3];
	x[1].s_voidp = (void*)x1;
	x[2].s_int = x2;
	if(qt_Smoke->binding->callMethod(3329, (void*)this, x)) return (int)x[0].s_int;
	return this->QHebrewCodec::heuristicContentMatch(x1, x2);
    }
    virtual int heuristicNameMatch(const char* x1) const {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(qt_Smoke->binding->callMethod(8541, (void*)this, x)) return (int)x[0].s_int;
	return this->QTextCodec::heuristicNameMatch(x1);
    }
    virtual QTextDecoder* makeDecoder() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(8528, (void*)this, x)) return (QTextDecoder*)x[0].s_class;
	return this->QTextCodec::makeDecoder();
    }
    virtual QTextEncoder* makeEncoder() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(8529, (void*)this, x)) return (QTextEncoder*)x[0].s_class;
	return this->QTextCodec::makeEncoder();
    }
    virtual int mibEnum() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(3324, (void*)this, x)) return (int)x[0].s_int;
	return this->QHebrewCodec::mibEnum();
    }
    virtual const char* mimeName() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(3326, (void*)this, x)) return (const char*)x[0].s_class;
	return this->QHebrewCodec::mimeName();
    }
    virtual const char* name() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(3325, (void*)this, x)) return (const char*)x[0].s_class;
	return this->QHebrewCodec::name();
    }
    virtual QString toUnicode(const char* x1, int x2) const {
	Smoke::StackItem x[3];
	x[1].s_voidp = (void*)x1;
	x[2].s_int = x2;
	if(qt_Smoke->binding->callMethod(3328, (void*)this, x)) {
	    QString *xptr = (QString *)x[0].s_class;
	    QString xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QHebrewCodec::toUnicode(x1, x2);
    }
    ~x_QHebrewCodec() { qt_Smoke->binding->deleted(142, (void*)this); }
};
void xcall_QHebrewCodec(Smoke::Index xi, void *obj, Smoke::Stack args) {
    x_QHebrewCodec *xself = (x_QHebrewCodec*)obj;
    switch(xi) {
	case 0: xself->x_0(args);	break;
	case 1: xself->x_1(args);	break;
	case 2: xself->x_2(args);	break;
	case 3: xself->x_3(args);	break;
	case 4: xself->x_4(args);	break;
	case 5: xself->x_5(args);	break;
	case 6: x_QHebrewCodec::x_6(args);	break;
	case 7: delete (QHebrewCodec*)xself;	break;
    }
}
