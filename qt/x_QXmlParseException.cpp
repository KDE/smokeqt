//Auto-generated by kalyptus. DO NOT EDIT.
#include <smoke.h>
#include <qt_smoke.h>
#include <qstring.h>
#include <qxml.h>

class x_QXmlParseException : public QXmlParseException {
public:
    static void x_0(Smoke::Stack x) {
	// QXmlParseException(const QString&, int, int, const QString&, const QString&)
	x_QXmlParseException* xret = new x_QXmlParseException(*(const QString *)x[1].s_class,(int)x[2].s_int,(int)x[3].s_int,*(const QString *)x[4].s_class,*(const QString *)x[5].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QXmlParseException(const QString& x1, int x2, int x3, const QString& x4, const QString& x5) : QXmlParseException(x1, x2, x3, x4, x5) {
    }
    static void x_1(Smoke::Stack x) {
	// QXmlParseException(const QString&, int, int, const QString&)
	x_QXmlParseException* xret = new x_QXmlParseException(*(const QString *)x[1].s_class,(int)x[2].s_int,(int)x[3].s_int,*(const QString *)x[4].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QXmlParseException(const QString& x1, int x2, int x3, const QString& x4) : QXmlParseException(x1, x2, x3, x4) {
    }
    static void x_2(Smoke::Stack x) {
	// QXmlParseException(const QString&, int, int)
	x_QXmlParseException* xret = new x_QXmlParseException(*(const QString *)x[1].s_class,(int)x[2].s_int,(int)x[3].s_int);
	x[0].s_class = (void*)xret;
    }
    x_QXmlParseException(const QString& x1, int x2, int x3) : QXmlParseException(x1, x2, x3) {
    }
    static void x_3(Smoke::Stack x) {
	// QXmlParseException(const QString&, int)
	x_QXmlParseException* xret = new x_QXmlParseException(*(const QString *)x[1].s_class,(int)x[2].s_int);
	x[0].s_class = (void*)xret;
    }
    x_QXmlParseException(const QString& x1, int x2) : QXmlParseException(x1, x2) {
    }
    static void x_4(Smoke::Stack x) {
	// QXmlParseException(const QString&)
	x_QXmlParseException* xret = new x_QXmlParseException(*(const QString *)x[1].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QXmlParseException(const QString& x1) : QXmlParseException(x1) {
    }
    static void x_5(Smoke::Stack x) {
	// QXmlParseException()
	x_QXmlParseException* xret = new x_QXmlParseException();
	x[0].s_class = (void*)xret;
    }
    x_QXmlParseException() : QXmlParseException() {
    }
    void x_6(Smoke::Stack x) const {
	// columnNumber()
	int xret = this->QXmlParseException::columnNumber();
	x[0].s_int = (int)xret;
    }
    void x_7(Smoke::Stack x) const {
	// lineNumber()
	int xret = this->QXmlParseException::lineNumber();
	x[0].s_int = (int)xret;
    }
    void x_8(Smoke::Stack x) const {
	// publicId()
	QString xret = this->QXmlParseException::publicId();
	x[0].s_class = (void*)new QString(xret);
    }
    void x_9(Smoke::Stack x) const {
	// systemId()
	QString xret = this->QXmlParseException::systemId();
	x[0].s_class = (void*)new QString(xret);
    }
    void x_10(Smoke::Stack x) const {
	// message()
	QString xret = this->QXmlParseException::message();
	x[0].s_class = (void*)new QString(xret);
    }
    ~x_QXmlParseException() {}
};
void xcall_QXmlParseException(Smoke::Index xi, void *obj, Smoke::Stack args) {
    x_QXmlParseException *xself = (x_QXmlParseException*)obj;
    switch(xi) {
	case 0: x_QXmlParseException::x_0(args);	break;
	case 1: x_QXmlParseException::x_1(args);	break;
	case 2: x_QXmlParseException::x_2(args);	break;
	case 3: x_QXmlParseException::x_3(args);	break;
	case 4: x_QXmlParseException::x_4(args);	break;
	case 5: x_QXmlParseException::x_5(args);	break;
	case 6: xself->x_6(args);	break;
	case 7: xself->x_7(args);	break;
	case 8: xself->x_8(args);	break;
	case 9: xself->x_9(args);	break;
	case 10: xself->x_10(args);	break;
    }
}
