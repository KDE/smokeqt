//Auto-generated by kalyptus. DO NOT EDIT.
#include <smoke.h>
#include <qt_smoke.h>
#include <qstring.h>
#include <qxml.h>

class x_QXmlAttributes : public QXmlAttributes {
public:
    static void x_0(Smoke::Stack x) {
	// QXmlAttributes()
	x_QXmlAttributes* xret = new x_QXmlAttributes();
	x[0].s_class = (void*)xret;
    }
    x_QXmlAttributes() : QXmlAttributes() {
    }
    void x_1(Smoke::Stack x) const {
	// index(const QString&)
	int xret = this->QXmlAttributes::index(*(const QString *)x[1].s_voidp);
	x[0].s_int = xret;
    }
    void x_2(Smoke::Stack x) const {
	// index(const QString&, const QString&)
	int xret = this->QXmlAttributes::index(*(const QString *)x[1].s_voidp,*(const QString *)x[2].s_voidp);
	x[0].s_int = xret;
    }
    void x_3(Smoke::Stack x) const {
	// length()
	int xret = this->QXmlAttributes::length();
	x[0].s_int = xret;
    }
    void x_4(Smoke::Stack x) const {
	// count()
	int xret = this->QXmlAttributes::count();
	x[0].s_int = xret;
    }
    void x_5(Smoke::Stack x) const {
	// localName(int)
	QString xret = this->QXmlAttributes::localName((int)x[1].s_int);
	x[0].s_voidp = (void*)new QString(xret);
    }
    void x_6(Smoke::Stack x) const {
	// qName(int)
	QString xret = this->QXmlAttributes::qName((int)x[1].s_int);
	x[0].s_voidp = (void*)new QString(xret);
    }
    void x_7(Smoke::Stack x) const {
	// uri(int)
	QString xret = this->QXmlAttributes::uri((int)x[1].s_int);
	x[0].s_voidp = (void*)new QString(xret);
    }
    void x_8(Smoke::Stack x) const {
	// type(int)
	QString xret = this->QXmlAttributes::type((int)x[1].s_int);
	x[0].s_voidp = (void*)new QString(xret);
    }
    void x_9(Smoke::Stack x) const {
	// type(const QString&)
	QString xret = this->QXmlAttributes::type(*(const QString *)x[1].s_voidp);
	x[0].s_voidp = (void*)new QString(xret);
    }
    void x_10(Smoke::Stack x) const {
	// type(const QString&, const QString&)
	QString xret = this->QXmlAttributes::type(*(const QString *)x[1].s_voidp,*(const QString *)x[2].s_voidp);
	x[0].s_voidp = (void*)new QString(xret);
    }
    void x_11(Smoke::Stack x) const {
	// value(int)
	QString xret = this->QXmlAttributes::value((int)x[1].s_int);
	x[0].s_voidp = (void*)new QString(xret);
    }
    void x_12(Smoke::Stack x) const {
	// value(const QString&)
	QString xret = this->QXmlAttributes::value(*(const QString *)x[1].s_voidp);
	x[0].s_voidp = (void*)new QString(xret);
    }
    void x_13(Smoke::Stack x) const {
	// value(const QString&, const QString&)
	QString xret = this->QXmlAttributes::value(*(const QString *)x[1].s_voidp,*(const QString *)x[2].s_voidp);
	x[0].s_voidp = (void*)new QString(xret);
    }
    void x_14(Smoke::Stack x) {
	// clear()
	this->QXmlAttributes::clear();
	(void)x; // noop (for compiler warning)
    }
    void x_15(Smoke::Stack x) {
	// append(const QString&, const QString&, const QString&, const QString&)
	this->QXmlAttributes::append(*(const QString *)x[1].s_voidp,*(const QString *)x[2].s_voidp,*(const QString *)x[3].s_voidp,*(const QString *)x[4].s_voidp);
	(void)x; // noop (for compiler warning)
    }
    static void x_16(Smoke::Stack x) {
	// QXmlAttributes(const QXmlAttributes&)
	x_QXmlAttributes* xret = new x_QXmlAttributes(*(const QXmlAttributes *)x[1].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QXmlAttributes(const QXmlAttributes& x1) : QXmlAttributes(x1) {
    }
    ~x_QXmlAttributes() { qt_Smoke->binding->deleted(377, (void*)this); }
};
void xcall_QXmlAttributes(Smoke::Index xi, void *obj, Smoke::Stack args) {
    x_QXmlAttributes *xself = (x_QXmlAttributes*)obj;
    switch(xi) {
	case 0: x_QXmlAttributes::x_0(args);	break;
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
	case 16: x_QXmlAttributes::x_16(args);	break;
	case 17: delete (QXmlAttributes*)xself;	break;
    }
}
