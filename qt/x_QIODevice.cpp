//Auto-generated by kalyptus. DO NOT EDIT.
#include <smoke.h>
#include <qt_smoke.h>
#include <qglobal.h>
#include <qiodevice.h>
#include <qcstring.h>

class x_QIODevice : public QIODevice {
public:
    static void x_0(Smoke::Stack x) {
	// QIODevice()
	x_QIODevice* xret = new x_QIODevice();
	x[0].s_class = (void*)xret;
    }
    x_QIODevice() : QIODevice() {
    }
    void x_1(Smoke::Stack x) const {
	// flags()
	int xret = this->QIODevice::flags();
	x[0].s_int = xret;
    }
    void x_2(Smoke::Stack x) const {
	// mode()
	int xret = this->QIODevice::mode();
	x[0].s_int = xret;
    }
    void x_3(Smoke::Stack x) const {
	// state()
	int xret = this->QIODevice::state();
	x[0].s_int = xret;
    }
    void x_4(Smoke::Stack x) const {
	// isDirectAccess()
	bool xret = this->QIODevice::isDirectAccess();
	x[0].s_bool = xret;
    }
    void x_5(Smoke::Stack x) const {
	// isSequentialAccess()
	bool xret = this->QIODevice::isSequentialAccess();
	x[0].s_bool = xret;
    }
    void x_6(Smoke::Stack x) const {
	// isCombinedAccess()
	bool xret = this->QIODevice::isCombinedAccess();
	x[0].s_bool = xret;
    }
    void x_7(Smoke::Stack x) const {
	// isBuffered()
	bool xret = this->QIODevice::isBuffered();
	x[0].s_bool = xret;
    }
    void x_8(Smoke::Stack x) const {
	// isRaw()
	bool xret = this->QIODevice::isRaw();
	x[0].s_bool = xret;
    }
    void x_9(Smoke::Stack x) const {
	// isSynchronous()
	bool xret = this->QIODevice::isSynchronous();
	x[0].s_bool = xret;
    }
    void x_10(Smoke::Stack x) const {
	// isAsynchronous()
	bool xret = this->QIODevice::isAsynchronous();
	x[0].s_bool = xret;
    }
    void x_11(Smoke::Stack x) const {
	// isTranslated()
	bool xret = this->QIODevice::isTranslated();
	x[0].s_bool = xret;
    }
    void x_12(Smoke::Stack x) const {
	// isReadable()
	bool xret = this->QIODevice::isReadable();
	x[0].s_bool = xret;
    }
    void x_13(Smoke::Stack x) const {
	// isWritable()
	bool xret = this->QIODevice::isWritable();
	x[0].s_bool = xret;
    }
    void x_14(Smoke::Stack x) const {
	// isReadWrite()
	bool xret = this->QIODevice::isReadWrite();
	x[0].s_bool = xret;
    }
    void x_15(Smoke::Stack x) const {
	// isInactive()
	bool xret = this->QIODevice::isInactive();
	x[0].s_bool = xret;
    }
    void x_16(Smoke::Stack x) const {
	// isOpen()
	bool xret = this->QIODevice::isOpen();
	x[0].s_bool = xret;
    }
    void x_17(Smoke::Stack x) const {
	// status()
	int xret = this->QIODevice::status();
	x[0].s_int = xret;
    }
    void x_18(Smoke::Stack x) {
	// resetStatus()
	this->QIODevice::resetStatus();
	(void)x[0].s_int; // noop (for compiler warning)
    }
    void x_19(Smoke::Stack x) const {
	// at()
	QIODevice::Offset xret = this->QIODevice::at();
	x[0].s_ulong = xret;
    }
    void x_20(Smoke::Stack x) {
	// at(QIODevice::Offset)
	bool xret = this->QIODevice::at((QIODevice::Offset)x[1].s_ulong);
	x[0].s_bool = xret;
    }
    void x_21(Smoke::Stack x) const {
	// atEnd()
	bool xret = this->QIODevice::atEnd();
	x[0].s_bool = xret;
    }
    void x_22(Smoke::Stack x) {
	// reset()
	bool xret = this->QIODevice::reset();
	x[0].s_bool = xret;
    }
    void x_23(Smoke::Stack x) {
	// readLine(char*, Q_ULONG)
	Q_LONG xret = this->QIODevice::readLine((char*)x[1].s_voidp,(Q_ULONG)x[2].s_long);
	x[0].s_long = xret;
    }
    void x_24(Smoke::Stack x) {
	// writeBlock(const QByteArray&)
	Q_LONG xret = this->QIODevice::writeBlock(*(const QByteArray *)x[1].s_voidp);
	x[0].s_long = xret;
    }
    void x_25(Smoke::Stack x) {
	// readAll()
	QByteArray xret = this->QIODevice::readAll();
	x[0].s_voidp = (void*)new QByteArray(xret);
    }
    void x_26(Smoke::Stack x) {
	// setFlags(int)
	this->QIODevice::setFlags((int)x[1].s_int);
	(void)x[0].s_int; // noop (for compiler warning)
    }
    void x_27(Smoke::Stack x) {
	// setType(int)
	this->QIODevice::setType((int)x[1].s_int);
	(void)x[0].s_int; // noop (for compiler warning)
    }
    void x_28(Smoke::Stack x) {
	// setMode(int)
	this->QIODevice::setMode((int)x[1].s_int);
	(void)x[0].s_int; // noop (for compiler warning)
    }
    void x_29(Smoke::Stack x) {
	// setState(int)
	this->QIODevice::setState((int)x[1].s_int);
	(void)x[0].s_int; // noop (for compiler warning)
    }
    void x_30(Smoke::Stack x) {
	// setStatus(int)
	this->QIODevice::setStatus((int)x[1].s_int);
	(void)x[0].s_int; // noop (for compiler warning)
    }
    virtual QIODevice::Offset at() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(3380, (void*)this, x)) {
	    QIODevice::Offset *xptr = (QIODevice::Offset *)x[0].s_class;
	    QIODevice::Offset xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QIODevice::at();
    }
    virtual bool at(QIODevice::Offset x1) {
	Smoke::StackItem x[2];
	x[1].s_ulong = x1;
	if(qt_Smoke->binding->callMethod(3381, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QIODevice::at(x1);
    }
    virtual bool atEnd() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(3382, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QIODevice::atEnd();
    }
    virtual void close() {
	Smoke::StackItem x[1];
	qt_Smoke->binding->callMethod(3377, (void*)this, x, true /*pure virtual*/);
	return;
	// ABSTRACT
    }
    virtual void flush() {
	Smoke::StackItem x[1];
	qt_Smoke->binding->callMethod(3378, (void*)this, x, true /*pure virtual*/);
	return;
	// ABSTRACT
    }
    virtual int getch() {
	Smoke::StackItem x[1];
	qt_Smoke->binding->callMethod(3389, (void*)this, x, true /*pure virtual*/);
	return (int)x[0].s_int;
	// ABSTRACT
    }
    virtual bool open(int x1) {
	Smoke::StackItem x[2];
	x[1].s_int = x1;
	qt_Smoke->binding->callMethod(3376, (void*)this, x, true /*pure virtual*/);
	return (bool)x[0].s_bool;
	// ABSTRACT
    }
    virtual int putch(int x1) {
	Smoke::StackItem x[2];
	x[1].s_int = x1;
	qt_Smoke->binding->callMethod(3390, (void*)this, x, true /*pure virtual*/);
	return (int)x[0].s_int;
	// ABSTRACT
    }
    virtual QByteArray readAll() {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(3388, (void*)this, x)) {
	    QByteArray *xptr = (QByteArray *)x[0].s_class;
	    QByteArray xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QIODevice::readAll();
    }
    virtual Q_LONG readBlock(char* x1, Q_ULONG x2) {
	Smoke::StackItem x[3];
	x[1].s_voidp = (void*)x1;
	x[2].s_long = x2;
	qt_Smoke->binding->callMethod(3384, (void*)this, x, true /*pure virtual*/);
	Q_LONG *xptr = (Q_LONG *)x[0].s_class;
	Q_LONG xret(*xptr);
	delete xptr;
	return xret;
	// ABSTRACT
    }
    virtual Q_LONG readLine(char* x1, Q_ULONG x2) {
	Smoke::StackItem x[3];
	x[1].s_voidp = (void*)x1;
	x[2].s_long = x2;
	if(qt_Smoke->binding->callMethod(3386, (void*)this, x)) {
	    Q_LONG *xptr = (Q_LONG *)x[0].s_class;
	    Q_LONG xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QIODevice::readLine(x1, x2);
    }
    virtual QIODevice::Offset size() const {
	Smoke::StackItem x[1];
	qt_Smoke->binding->callMethod(3379, (void*)this, x, true /*pure virtual*/);
	QIODevice::Offset *xptr = (QIODevice::Offset *)x[0].s_class;
	QIODevice::Offset xret(*xptr);
	delete xptr;
	return xret;
	// ABSTRACT
    }
    virtual int ungetch(int x1) {
	Smoke::StackItem x[2];
	x[1].s_int = x1;
	qt_Smoke->binding->callMethod(3391, (void*)this, x, true /*pure virtual*/);
	return (int)x[0].s_int;
	// ABSTRACT
    }
    virtual Q_LONG writeBlock(const char* x1, Q_ULONG x2) {
	Smoke::StackItem x[3];
	x[1].s_voidp = (void*)x1;
	x[2].s_long = x2;
	qt_Smoke->binding->callMethod(3385, (void*)this, x, true /*pure virtual*/);
	Q_LONG *xptr = (Q_LONG *)x[0].s_class;
	Q_LONG xret(*xptr);
	delete xptr;
	return xret;
	// ABSTRACT
    }
    ~x_QIODevice() { qt_Smoke->binding->deleted(147, (void*)this); }
};
void xcall_QIODevice(Smoke::Index xi, void *obj, Smoke::Stack args) {
    x_QIODevice *xself = (x_QIODevice*)obj;
    switch(xi) {
	case 0: x_QIODevice::x_0(args);	break;
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
	case 25: xself->x_25(args);	break;
	case 26: xself->x_26(args);	break;
	case 27: xself->x_27(args);	break;
	case 28: xself->x_28(args);	break;
	case 29: xself->x_29(args);	break;
	case 30: xself->x_30(args);	break;
	case 31: delete (QIODevice*)xself;	break;
    }
}
