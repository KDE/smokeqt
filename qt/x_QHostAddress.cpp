//Auto-generated by kalyptus. DO NOT EDIT.
#include <smoke.h>
#include <qt_smoke.h>
#include <qglobal.h>
#include <qstring.h>
#include <qhostaddress.h>

class x_QHostAddress : public QHostAddress {
public:
    static void x_0(Smoke::Stack x) {
	// QHostAddress()
	x_QHostAddress* xret = new x_QHostAddress();
	x[0].s_class = (void*)xret;
    }
    x_QHostAddress() : QHostAddress() {
    }
    static void x_1(Smoke::Stack x) {
	// QHostAddress(Q_UINT32)
	x_QHostAddress* xret = new x_QHostAddress((Q_UINT32)x[1].s_uint);
	x[0].s_class = (void*)xret;
    }
    x_QHostAddress(Q_UINT32 x1) : QHostAddress(x1) {
    }
    static void x_2(Smoke::Stack x) {
	// QHostAddress(Q_UINT8*)
	x_QHostAddress* xret = new x_QHostAddress((Q_UINT8*)x[1].s_voidp);
	x[0].s_class = (void*)xret;
    }
    x_QHostAddress(Q_UINT8* x1) : QHostAddress(x1) {
    }
    static void x_3(Smoke::Stack x) {
	// QHostAddress(const QHostAddress&)
	x_QHostAddress* xret = new x_QHostAddress(*(const QHostAddress *)x[1].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QHostAddress(const QHostAddress& x1) : QHostAddress(x1) {
    }
    void x_4(Smoke::Stack x) {
	// operator=(const QHostAddress&)
	QHostAddress& xret = this->QHostAddress::operator=(*(const QHostAddress *)x[1].s_class);
	x[0].s_class = (void*)&xret;
    }
    void x_5(Smoke::Stack x) {
	// setAddress(Q_UINT32)
	this->QHostAddress::setAddress((Q_UINT32)x[1].s_uint);
	(void)x[0].s_int; // noop (for compiler warning)
    }
    void x_6(Smoke::Stack x) {
	// setAddress(Q_UINT8*)
	this->QHostAddress::setAddress((Q_UINT8*)x[1].s_voidp);
	(void)x[0].s_int; // noop (for compiler warning)
    }
    void x_7(Smoke::Stack x) {
	// setAddress(const QString&)
	bool xret = this->QHostAddress::setAddress(*(const QString *)x[1].s_voidp);
	x[0].s_bool = xret;
    }
    void x_8(Smoke::Stack x) const {
	// isIp4Addr()
	bool xret = this->QHostAddress::isIp4Addr();
	x[0].s_bool = xret;
    }
    void x_9(Smoke::Stack x) const {
	// ip4Addr()
	Q_UINT32 xret = this->QHostAddress::ip4Addr();
	x[0].s_uint = xret;
    }
    void x_10(Smoke::Stack x) const {
	// toString()
	QString xret = this->QHostAddress::toString();
	x[0].s_voidp = (void*)new QString(xret);
    }
    void x_11(Smoke::Stack x) const {
	// operator==(const QHostAddress&)
	bool xret = this->QHostAddress::operator==(*(const QHostAddress *)x[1].s_class);
	x[0].s_bool = xret;
    }
    ~x_QHostAddress() { qt_Smoke->binding->deleted(144, (void*)this); }
};
void xcall_QHostAddress(Smoke::Index xi, void *obj, Smoke::Stack args) {
    x_QHostAddress *xself = (x_QHostAddress*)obj;
    switch(xi) {
	case 0: x_QHostAddress::x_0(args);	break;
	case 1: x_QHostAddress::x_1(args);	break;
	case 2: x_QHostAddress::x_2(args);	break;
	case 3: x_QHostAddress::x_3(args);	break;
	case 4: xself->x_4(args);	break;
	case 5: xself->x_5(args);	break;
	case 6: xself->x_6(args);	break;
	case 7: xself->x_7(args);	break;
	case 8: xself->x_8(args);	break;
	case 9: xself->x_9(args);	break;
	case 10: xself->x_10(args);	break;
	case 11: xself->x_11(args);	break;
	case 12: delete (QHostAddress*)xself;	break;
    }
}
