//Auto-generated by kalyptus. DO NOT EDIT.
#include <smoke.h>
#include <qt_smoke.h>
#include <qstring.h>
#include <qcstring.h>
#include <qeuckrcodec.h>

class x_QEucKrCodec : public QEucKrCodec {
public:
    void x_0(Smoke::Stack x) const {
	// mibEnum()
	int xret = this->QEucKrCodec::mibEnum();
	x[0].s_int = xret;
    }
    void x_1(Smoke::Stack x) const {
	// name()
	const char* xret = this->QEucKrCodec::name();
	x[0].s_voidp = (void*)xret;
    }
    void x_2(Smoke::Stack x) const {
	// mimeName()
	const char* xret = this->QEucKrCodec::mimeName();
	x[0].s_voidp = (void*)xret;
    }
    void x_3(Smoke::Stack x) const {
	// makeDecoder()
	QTextDecoder* xret = this->QEucKrCodec::makeDecoder();
	x[0].s_class = (void*)xret;
    }
    void x_4(Smoke::Stack x) const {
	// fromUnicode(const QString&, int&)
	QCString xret = this->QEucKrCodec::fromUnicode(*(const QString *)x[1].s_voidp,*(int *)x[2].s_voidp);
	x[0].s_voidp = (void*)new QCString(xret);
    }
    void x_5(Smoke::Stack x) const {
	// toUnicode(const char*, int)
	QString xret = this->QEucKrCodec::toUnicode((const char*)x[1].s_voidp,(int)x[2].s_int);
	x[0].s_voidp = (void*)new QString(xret);
    }
    void x_6(Smoke::Stack x) const {
	// heuristicContentMatch(const char*, int)
	int xret = this->QEucKrCodec::heuristicContentMatch((const char*)x[1].s_voidp,(int)x[2].s_int);
	x[0].s_int = xret;
    }
    void x_7(Smoke::Stack x) const {
	// heuristicNameMatch(const char*)
	int xret = this->QEucKrCodec::heuristicNameMatch((const char*)x[1].s_voidp);
	x[0].s_int = xret;
    }
    static void x_8(Smoke::Stack x) {
	// QEucKrCodec()
	x_QEucKrCodec* xret = new x_QEucKrCodec();
	x[0].s_class = (void*)xret;
    }
    x_QEucKrCodec() : QEucKrCodec() {
    }
    static void x_9(Smoke::Stack x) {
	// QEucKrCodec(const QEucKrCodec&)
	x_QEucKrCodec* xret = new x_QEucKrCodec(*(const QEucKrCodec *)x[1].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QEucKrCodec(const QEucKrCodec& x1) : QEucKrCodec(x1) {
    }
    virtual bool canEncode(QChar x1) const {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	if(qt_Smoke->binding->callMethod(10565, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QTextCodec::canEncode(x1);
    }
    virtual bool canEncode(const QString& x1) const {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)&x1;
	if(qt_Smoke->binding->callMethod(10566, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QTextCodec::canEncode(x1);
    }
    virtual unsigned short characterFromUnicode(const QString& x1, int x2) const {
	Smoke::StackItem x[3];
	x[1].s_voidp = (void*)&x1;
	x[2].s_int = x2;
	if(qt_Smoke->binding->callMethod(10570, (void*)this, x)) {
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
	if(qt_Smoke->binding->callMethod(2894, (void*)this, x)) {
	    QCString *xptr = (QCString *)x[0].s_class;
	    QCString xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QEucKrCodec::fromUnicode(x1, x2);
    }
    virtual QByteArray fromUnicode(const QString& x1, int x2, int x3) const {
	Smoke::StackItem x[4];
	x[1].s_voidp = (void*)&x1;
	x[2].s_int = x2;
	x[3].s_int = x3;
	if(qt_Smoke->binding->callMethod(10569, (void*)this, x)) {
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
	if(qt_Smoke->binding->callMethod(2896, (void*)this, x)) return (int)x[0].s_int;
	return this->QEucKrCodec::heuristicContentMatch(x1, x2);
    }
    virtual int heuristicNameMatch(const char* x1) const {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(qt_Smoke->binding->callMethod(2897, (void*)this, x)) return (int)x[0].s_int;
	return this->QEucKrCodec::heuristicNameMatch(x1);
    }
    virtual QTextDecoder* makeDecoder() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(2893, (void*)this, x)) return (QTextDecoder*)x[0].s_class;
	return this->QEucKrCodec::makeDecoder();
    }
    virtual QTextEncoder* makeEncoder() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(10556, (void*)this, x)) return (QTextEncoder*)x[0].s_class;
	return this->QTextCodec::makeEncoder();
    }
    virtual int mibEnum() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(2890, (void*)this, x)) return (int)x[0].s_int;
	return this->QEucKrCodec::mibEnum();
    }
    virtual const char* mimeName() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(2892, (void*)this, x)) return (const char*)x[0].s_class;
	return this->QEucKrCodec::mimeName();
    }
    virtual const char* name() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(2891, (void*)this, x)) return (const char*)x[0].s_class;
	return this->QEucKrCodec::name();
    }
    virtual QString toUnicode(const char* x1, int x2) const {
	Smoke::StackItem x[3];
	x[1].s_voidp = (void*)x1;
	x[2].s_int = x2;
	if(qt_Smoke->binding->callMethod(2895, (void*)this, x)) {
	    QString *xptr = (QString *)x[0].s_class;
	    QString xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QEucKrCodec::toUnicode(x1, x2);
    }
    ~x_QEucKrCodec() { qt_Smoke->binding->deleted(106, (void*)this); }
};
void xcall_QEucKrCodec(Smoke::Index xi, void *obj, Smoke::Stack args) {
    x_QEucKrCodec *xself = (x_QEucKrCodec*)obj;
    switch(xi) {
	case 0: xself->x_0(args);	break;
	case 1: xself->x_1(args);	break;
	case 2: xself->x_2(args);	break;
	case 3: xself->x_3(args);	break;
	case 4: xself->x_4(args);	break;
	case 5: xself->x_5(args);	break;
	case 6: xself->x_6(args);	break;
	case 7: xself->x_7(args);	break;
	case 8: x_QEucKrCodec::x_8(args);	break;
	case 9: x_QEucKrCodec::x_9(args);	break;
	case 10: delete (QEucKrCodec*)xself;	break;
    }
}
