//Auto-generated by kalyptus. DO NOT EDIT.
#include <smoke.h>
#include <qt_smoke.h>
#include <qdom.h>

class x_QDomNodeList : public QDomNodeList {
public:
    static void x_0(Smoke::Stack x) {
	// QDomNodeList()
	x_QDomNodeList* xret = new x_QDomNodeList();
	x[0].s_class = (void*)xret;
    }
    x_QDomNodeList() : QDomNodeList() {
    }
    static void x_1(Smoke::Stack x) {
	// QDomNodeList(const QDomNodeList&)
	x_QDomNodeList* xret = new x_QDomNodeList(*(const QDomNodeList *)x[1].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QDomNodeList(const QDomNodeList& x1) : QDomNodeList(x1) {
    }
    void x_2(Smoke::Stack x) {
	// operator=(const QDomNodeList&)
	QDomNodeList& xret = this->QDomNodeList::operator=(*(const QDomNodeList *)x[1].s_class);
	x[0].s_class = (void*)&xret;
    }
    void x_3(Smoke::Stack x) const {
	// operator==(const QDomNodeList&)
	bool xret = this->QDomNodeList::operator==(*(const QDomNodeList *)x[1].s_class);
	x[0].s_bool = xret;
    }
    void x_4(Smoke::Stack x) const {
	// operator!=(const QDomNodeList&)
	bool xret = this->QDomNodeList::operator!=(*(const QDomNodeList *)x[1].s_class);
	x[0].s_bool = xret;
    }
    void x_5(Smoke::Stack x) const {
	// item(int)
	QDomNode xret = this->QDomNodeList::item((int)x[1].s_int);
	x[0].s_class = (void*)new QDomNode(xret);
    }
    void x_6(Smoke::Stack x) const {
	// length()
	uint xret = this->QDomNodeList::length();
	x[0].s_uint = xret;
    }
    void x_7(Smoke::Stack x) const {
	// count()
	uint xret = this->QDomNodeList::count();
	x[0].s_uint = xret;
    }
    virtual QDomNode item(int x1) const {
	Smoke::StackItem x[2];
	x[1].s_int = x1;
	if(qt_Smoke->binding->callMethod(2255, (void*)this, x)) {
	    QDomNode *xptr = (QDomNode *)x[0].s_class;
	    QDomNode xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QDomNodeList::item(x1);
    }
    virtual uint length() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(2256, (void*)this, x)) return (uint)x[0].s_uint;
	return this->QDomNodeList::length();
    }
    ~x_QDomNodeList() { qt_Smoke->binding->deleted(91, (void*)this); }
};
void xcall_QDomNodeList(Smoke::Index xi, void *obj, Smoke::Stack args) {
    x_QDomNodeList *xself = (x_QDomNodeList*)obj;
    switch(xi) {
	case 0: x_QDomNodeList::x_0(args);	break;
	case 1: x_QDomNodeList::x_1(args);	break;
	case 2: xself->x_2(args);	break;
	case 3: xself->x_3(args);	break;
	case 4: xself->x_4(args);	break;
	case 5: xself->x_5(args);	break;
	case 6: xself->x_6(args);	break;
	case 7: xself->x_7(args);	break;
	case 8: delete (QDomNodeList*)xself;	break;
    }
}
