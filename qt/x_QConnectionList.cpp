//Auto-generated by kalyptus. DO NOT EDIT.
#include <smoke.h>
#include <qt_smoke.h>
#include <qsignalslotimp.h>

class x_QConnectionList : public QConnectionList {
public:
    static void x_0(Smoke::Stack x) {
	// QConnectionList()
	x_QConnectionList* xret = new x_QConnectionList();
	x[0].s_class = (void*)xret;
    }
    x_QConnectionList() : QConnectionList() {
    }
    static void x_1(Smoke::Stack x) {
	// QConnectionList(const QConnectionList&)
	x_QConnectionList* xret = new x_QConnectionList(*(const QConnectionList *)x[1].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QConnectionList(const QConnectionList& x1) : QConnectionList(x1) {
    }
    void x_2(Smoke::Stack x) {
	// operator=(const QConnectionList&)
	QConnectionList& xret = this->QConnectionList::operator=(*(const QConnectionList *)x[1].s_class);
	x[0].s_class = (void*)&xret;
    }
    ~x_QConnectionList() {}
};
void xcall_QConnectionList(Smoke::Index xi, void *obj, Smoke::Stack args) {
    x_QConnectionList *xself = (x_QConnectionList*)obj;
    switch(xi) {
	case 0: x_QConnectionList::x_0(args);	break;
	case 1: x_QConnectionList::x_1(args);	break;
	case 2: xself->x_2(args);	break;
	case 3: delete (QConnectionList*)xself;	break;
    }
}
