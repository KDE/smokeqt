//Auto-generated by kalyptus. DO NOT EDIT.
#include <smoke.h>
#include <qt_smoke.h>
#include <qurl.h>
#include <qstring.h>

class x_QUrl : public QUrl {
public:
    static void x_0(Smoke::Stack x) {
	// QUrl()
	x_QUrl* xret = new x_QUrl();
	x[0].s_class = (void*)xret;
    }
    x_QUrl() : QUrl() {
    }
    static void x_1(Smoke::Stack x) {
	// QUrl(const QString&)
	x_QUrl* xret = new x_QUrl(*(const QString *)x[1].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QUrl(const QString& x1) : QUrl(x1) {
    }
    static void x_2(Smoke::Stack x) {
	// QUrl(const QUrl&)
	x_QUrl* xret = new x_QUrl(*(const QUrl *)x[1].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QUrl(const QUrl& x1) : QUrl(x1) {
    }
    static void x_3(Smoke::Stack x) {
	// QUrl(const QUrl&, const QString&, bool)
	x_QUrl* xret = new x_QUrl(*(const QUrl *)x[1].s_class,*(const QString *)x[2].s_class,(bool)x[3].s_bool);
	x[0].s_class = (void*)xret;
    }
    x_QUrl(const QUrl& x1, const QString& x2, bool x3) : QUrl(x1, x2, x3) {
    }
    static void x_4(Smoke::Stack x) {
	// QUrl(const QUrl&, const QString&)
	x_QUrl* xret = new x_QUrl(*(const QUrl *)x[1].s_class,*(const QString *)x[2].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QUrl(const QUrl& x1, const QString& x2) : QUrl(x1, x2) {
    }
    void x_5(Smoke::Stack x) const {
	// protocol()
	QString xret = this->QUrl::protocol();
	x[0].s_class = (void*)new QString(xret);
    }
    void x_6(Smoke::Stack x) {
	// setProtocol(const QString&)
	this->QUrl::setProtocol(*(const QString *)x[1].s_class);
    }
    void x_7(Smoke::Stack x) const {
	// user()
	QString xret = this->QUrl::user();
	x[0].s_class = (void*)new QString(xret);
    }
    void x_8(Smoke::Stack x) {
	// setUser(const QString&)
	this->QUrl::setUser(*(const QString *)x[1].s_class);
    }
    void x_9(Smoke::Stack x) const {
	// hasUser()
	bool xret = this->QUrl::hasUser();
	x[0].s_bool = (bool)xret;
    }
    void x_10(Smoke::Stack x) const {
	// password()
	QString xret = this->QUrl::password();
	x[0].s_class = (void*)new QString(xret);
    }
    void x_11(Smoke::Stack x) {
	// setPassword(const QString&)
	this->QUrl::setPassword(*(const QString *)x[1].s_class);
    }
    void x_12(Smoke::Stack x) const {
	// hasPassword()
	bool xret = this->QUrl::hasPassword();
	x[0].s_bool = (bool)xret;
    }
    void x_13(Smoke::Stack x) const {
	// host()
	QString xret = this->QUrl::host();
	x[0].s_class = (void*)new QString(xret);
    }
    void x_14(Smoke::Stack x) {
	// setHost(const QString&)
	this->QUrl::setHost(*(const QString *)x[1].s_class);
    }
    void x_15(Smoke::Stack x) const {
	// hasHost()
	bool xret = this->QUrl::hasHost();
	x[0].s_bool = (bool)xret;
    }
    void x_16(Smoke::Stack x) const {
	// port()
	int xret = this->QUrl::port();
	x[0].s_int = (int)xret;
    }
    void x_17(Smoke::Stack x) {
	// setPort(int)
	this->QUrl::setPort((int)x[1].s_int);
    }
    void x_18(Smoke::Stack x) const {
	// hasPort()
	bool xret = this->QUrl::hasPort();
	x[0].s_bool = (bool)xret;
    }
    void x_19(Smoke::Stack x) const {
	// path(bool)
	QString xret = this->QUrl::path((bool)x[1].s_bool);
	x[0].s_class = (void*)new QString(xret);
    }
    void x_20(Smoke::Stack x) const {
	// path()
	QString xret = this->QUrl::path();
	x[0].s_class = (void*)new QString(xret);
    }
    void x_21(Smoke::Stack x) {
	// setPath(const QString&)
	this->QUrl::setPath(*(const QString *)x[1].s_class);
    }
    void x_22(Smoke::Stack x) const {
	// hasPath()
	bool xret = this->QUrl::hasPath();
	x[0].s_bool = (bool)xret;
    }
    void x_23(Smoke::Stack x) {
	// setEncodedPathAndQuery(const QString&)
	this->QUrl::setEncodedPathAndQuery(*(const QString *)x[1].s_class);
    }
    void x_24(Smoke::Stack x) {
	// encodedPathAndQuery()
	QString xret = this->QUrl::encodedPathAndQuery();
	x[0].s_class = (void*)new QString(xret);
    }
    void x_25(Smoke::Stack x) {
	// setQuery(const QString&)
	this->QUrl::setQuery(*(const QString *)x[1].s_class);
    }
    void x_26(Smoke::Stack x) const {
	// query()
	QString xret = this->QUrl::query();
	x[0].s_class = (void*)new QString(xret);
    }
    void x_27(Smoke::Stack x) const {
	// ref()
	QString xret = this->QUrl::ref();
	x[0].s_class = (void*)new QString(xret);
    }
    void x_28(Smoke::Stack x) {
	// setRef(const QString&)
	this->QUrl::setRef(*(const QString *)x[1].s_class);
    }
    void x_29(Smoke::Stack x) const {
	// hasRef()
	bool xret = this->QUrl::hasRef();
	x[0].s_bool = (bool)xret;
    }
    void x_30(Smoke::Stack x) const {
	// isValid()
	bool xret = this->QUrl::isValid();
	x[0].s_bool = (bool)xret;
    }
    void x_31(Smoke::Stack x) const {
	// isLocalFile()
	bool xret = this->QUrl::isLocalFile();
	x[0].s_bool = (bool)xret;
    }
    void x_32(Smoke::Stack x) {
	// addPath(const QString&)
	this->QUrl::addPath(*(const QString *)x[1].s_class);
    }
    void x_33(Smoke::Stack x) {
	// setFileName(const QString&)
	this->QUrl::setFileName(*(const QString *)x[1].s_class);
    }
    void x_34(Smoke::Stack x) const {
	// fileName()
	QString xret = this->QUrl::fileName();
	x[0].s_class = (void*)new QString(xret);
    }
    void x_35(Smoke::Stack x) const {
	// dirPath()
	QString xret = this->QUrl::dirPath();
	x[0].s_class = (void*)new QString(xret);
    }
    void x_36(Smoke::Stack x) {
	// operator=(const QUrl&)
	QUrl& xret = this->QUrl::operator=(*(const QUrl *)x[1].s_class);
	x[0].s_class = (void*)&xret;
    }
    void x_37(Smoke::Stack x) {
	// operator=(const QString&)
	QUrl& xret = this->QUrl::operator=(*(const QString *)x[1].s_class);
	x[0].s_class = (void*)&xret;
    }
    void x_38(Smoke::Stack x) const {
	// operator==(const QUrl&)
	bool xret = this->QUrl::operator==(*(const QUrl *)x[1].s_class);
	x[0].s_bool = (bool)xret;
    }
    void x_39(Smoke::Stack x) const {
	// operator==(const QString&)
	bool xret = this->QUrl::operator==(*(const QString *)x[1].s_class);
	x[0].s_bool = (bool)xret;
    }
    void x_40(Smoke::Stack x) const {
	// toString(bool, bool)
	QString xret = this->QUrl::toString((bool)x[1].s_bool,(bool)x[2].s_bool);
	x[0].s_class = (void*)new QString(xret);
    }
    void x_41(Smoke::Stack x) const {
	// toString(bool)
	QString xret = this->QUrl::toString((bool)x[1].s_bool);
	x[0].s_class = (void*)new QString(xret);
    }
    void x_42(Smoke::Stack x) const {
	// toString()
	QString xret = this->QUrl::toString();
	x[0].s_class = (void*)new QString(xret);
    }
    void x_43(Smoke::Stack x) {
	// cdUp()
	bool xret = this->QUrl::cdUp();
	x[0].s_bool = (bool)xret;
    }
    static void x_44(Smoke::Stack x) {
	// decode(QString&)
	QUrl::decode(*(QString *)x[1].s_class);
    }
    static void x_45(Smoke::Stack x) {
	// encode(QString&)
	QUrl::encode(*(QString *)x[1].s_class);
    }
    static void x_46(Smoke::Stack x) {
	// isRelativeUrl(const QString&)
	bool xret = QUrl::isRelativeUrl(*(const QString *)x[1].s_class);
	x[0].s_bool = (bool)xret;
    }
    void x_47(Smoke::Stack x) {
	// reset()
	this->QUrl::reset();
    }
    void x_48(Smoke::Stack x) {
	// parse(const QString&)
	bool xret = this->QUrl::parse(*(const QString *)x[1].s_class);
	x[0].s_bool = (bool)xret;
    }
    virtual void addPath(const QString& x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	if(qt_Smoke->callMethod(9182, (void*)this, x)) return;
	this->QUrl::addPath(x1);
    }
    virtual bool cdUp() {
	Smoke::StackItem x[1];
	if(qt_Smoke->callMethod(9194, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QUrl::cdUp();
    }
    virtual bool parse(const QString& x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	if(qt_Smoke->callMethod(9199, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QUrl::parse(x1);
    }
    virtual void reset() {
	Smoke::StackItem x[1];
	if(qt_Smoke->callMethod(9198, (void*)this, x)) return;
	this->QUrl::reset();
    }
    virtual void setEncodedPathAndQuery(const QString& x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	if(qt_Smoke->callMethod(9173, (void*)this, x)) return;
	this->QUrl::setEncodedPathAndQuery(x1);
    }
    virtual void setFileName(const QString& x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	if(qt_Smoke->callMethod(9183, (void*)this, x)) return;
	this->QUrl::setFileName(x1);
    }
    virtual void setHost(const QString& x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	if(qt_Smoke->callMethod(9164, (void*)this, x)) return;
	this->QUrl::setHost(x1);
    }
    virtual void setPassword(const QString& x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	if(qt_Smoke->callMethod(9161, (void*)this, x)) return;
	this->QUrl::setPassword(x1);
    }
    virtual void setPath(const QString& x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	if(qt_Smoke->callMethod(9171, (void*)this, x)) return;
	this->QUrl::setPath(x1);
    }
    virtual void setPort(int x1) {
	Smoke::StackItem x[2];
	x[1].s_int = (int)x1;
	if(qt_Smoke->callMethod(9167, (void*)this, x)) return;
	this->QUrl::setPort(x1);
    }
    virtual void setProtocol(const QString& x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	if(qt_Smoke->callMethod(9156, (void*)this, x)) return;
	this->QUrl::setProtocol(x1);
    }
    virtual void setQuery(const QString& x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	if(qt_Smoke->callMethod(9175, (void*)this, x)) return;
	this->QUrl::setQuery(x1);
    }
    virtual void setRef(const QString& x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	if(qt_Smoke->callMethod(9178, (void*)this, x)) return;
	this->QUrl::setRef(x1);
    }
    virtual void setUser(const QString& x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	if(qt_Smoke->callMethod(9158, (void*)this, x)) return;
	this->QUrl::setUser(x1);
    }
    virtual QString toString(bool x1, bool x2) const {
	Smoke::StackItem x[3];
	x[1].s_bool = (bool)x1;
	x[2].s_bool = (bool)x2;
	if(qt_Smoke->callMethod(9191, (void*)this, x)) {
	    QString *xptr = (QString *)x[0].s_class;
	    QString xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QUrl::toString(x1, x2);
    }
    ~x_QUrl() {}
};
void xcall_QUrl(Smoke::Index xi, void *obj, Smoke::Stack args) {
    x_QUrl *xself = (x_QUrl*)obj;
    switch(xi) {
	case 0: x_QUrl::x_0(args);	break;
	case 1: x_QUrl::x_1(args);	break;
	case 2: x_QUrl::x_2(args);	break;
	case 3: x_QUrl::x_3(args);	break;
	case 4: x_QUrl::x_4(args);	break;
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
	case 31: xself->x_31(args);	break;
	case 32: xself->x_32(args);	break;
	case 33: xself->x_33(args);	break;
	case 34: xself->x_34(args);	break;
	case 35: xself->x_35(args);	break;
	case 36: xself->x_36(args);	break;
	case 37: xself->x_37(args);	break;
	case 38: xself->x_38(args);	break;
	case 39: xself->x_39(args);	break;
	case 40: xself->x_40(args);	break;
	case 41: xself->x_41(args);	break;
	case 42: xself->x_42(args);	break;
	case 43: xself->x_43(args);	break;
	case 44: x_QUrl::x_44(args);	break;
	case 45: x_QUrl::x_45(args);	break;
	case 46: x_QUrl::x_46(args);	break;
	case 47: xself->x_47(args);	break;
	case 48: xself->x_48(args);	break;
	case 49: delete (QUrl*)xself;	break;
    }
}
