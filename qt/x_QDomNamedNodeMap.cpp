//Auto-generated by kalyptus. DO NOT EDIT.
#include <smoke.h>
#include <qt_smoke.h>
#include <qstring.h>
#include <qdom.h>

class x_QDomNamedNodeMap : public QDomNamedNodeMap {
public:
    static void x_0(Smoke::Stack x) {
	// QDomNamedNodeMap()
	x_QDomNamedNodeMap* xret = new x_QDomNamedNodeMap();
	x[0].s_class = (void*)xret;
    }
    x_QDomNamedNodeMap() : QDomNamedNodeMap() {
    }
    static void x_1(Smoke::Stack x) {
	// QDomNamedNodeMap(const QDomNamedNodeMap&)
	x_QDomNamedNodeMap* xret = new x_QDomNamedNodeMap(*(const QDomNamedNodeMap *)x[1].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QDomNamedNodeMap(const QDomNamedNodeMap& x1) : QDomNamedNodeMap(x1) {
    }
    void x_2(Smoke::Stack x) {
	// operator=(const QDomNamedNodeMap&)
	QDomNamedNodeMap& xret = this->QDomNamedNodeMap::operator=(*(const QDomNamedNodeMap *)x[1].s_class);
	x[0].s_class = (void*)&xret;
    }
    void x_3(Smoke::Stack x) const {
	// operator==(const QDomNamedNodeMap&)
	bool xret = this->QDomNamedNodeMap::operator==(*(const QDomNamedNodeMap *)x[1].s_class);
	x[0].s_bool = xret;
    }
    void x_4(Smoke::Stack x) const {
	// operator!=(const QDomNamedNodeMap&)
	bool xret = this->QDomNamedNodeMap::operator!=(*(const QDomNamedNodeMap *)x[1].s_class);
	x[0].s_bool = xret;
    }
    void x_5(Smoke::Stack x) const {
	// namedItem(const QString&)
	QDomNode xret = this->QDomNamedNodeMap::namedItem(*(const QString *)x[1].s_voidp);
	x[0].s_class = (void*)new QDomNode(xret);
    }
    void x_6(Smoke::Stack x) {
	// setNamedItem(const QDomNode&)
	QDomNode xret = this->QDomNamedNodeMap::setNamedItem(*(const QDomNode *)x[1].s_class);
	x[0].s_class = (void*)new QDomNode(xret);
    }
    void x_7(Smoke::Stack x) {
	// removeNamedItem(const QString&)
	QDomNode xret = this->QDomNamedNodeMap::removeNamedItem(*(const QString *)x[1].s_voidp);
	x[0].s_class = (void*)new QDomNode(xret);
    }
    void x_8(Smoke::Stack x) const {
	// item(int)
	QDomNode xret = this->QDomNamedNodeMap::item((int)x[1].s_int);
	x[0].s_class = (void*)new QDomNode(xret);
    }
    void x_9(Smoke::Stack x) const {
	// namedItemNS(const QString&, const QString&)
	QDomNode xret = this->QDomNamedNodeMap::namedItemNS(*(const QString *)x[1].s_voidp,*(const QString *)x[2].s_voidp);
	x[0].s_class = (void*)new QDomNode(xret);
    }
    void x_10(Smoke::Stack x) {
	// setNamedItemNS(const QDomNode&)
	QDomNode xret = this->QDomNamedNodeMap::setNamedItemNS(*(const QDomNode *)x[1].s_class);
	x[0].s_class = (void*)new QDomNode(xret);
    }
    void x_11(Smoke::Stack x) {
	// removeNamedItemNS(const QString&, const QString&)
	QDomNode xret = this->QDomNamedNodeMap::removeNamedItemNS(*(const QString *)x[1].s_voidp,*(const QString *)x[2].s_voidp);
	x[0].s_class = (void*)new QDomNode(xret);
    }
    void x_12(Smoke::Stack x) const {
	// length()
	uint xret = this->QDomNamedNodeMap::length();
	x[0].s_uint = xret;
    }
    void x_13(Smoke::Stack x) const {
	// count()
	uint xret = this->QDomNamedNodeMap::count();
	x[0].s_uint = xret;
    }
    void x_14(Smoke::Stack x) const {
	// contains(const QString&)
	bool xret = this->QDomNamedNodeMap::contains(*(const QString *)x[1].s_voidp);
	x[0].s_bool = xret;
    }
    ~x_QDomNamedNodeMap() { qt_Smoke->binding->deleted(89, (void*)this); }
};
void xcall_QDomNamedNodeMap(Smoke::Index xi, void *obj, Smoke::Stack args) {
    x_QDomNamedNodeMap *xself = (x_QDomNamedNodeMap*)obj;
    switch(xi) {
	case 0: x_QDomNamedNodeMap::x_0(args);	break;
	case 1: x_QDomNamedNodeMap::x_1(args);	break;
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
	case 15: delete (QDomNamedNodeMap*)xself;	break;
    }
}
