//Auto-generated by kalyptus. DO NOT EDIT.
#include <smoke.h>
#include <qt_smoke.h>
#include <qmetaobject.h>

class x_QMetaEnum__Item : public QMetaEnum::Item {
public:
    static void x_0(Smoke::Stack x) {
	// Item()
	x_QMetaEnum__Item* xret = new x_QMetaEnum__Item();
	x[0].s_class = (void*)xret;
    }
    x_QMetaEnum__Item() : QMetaEnum::Item() {
    }
    static void x_1(Smoke::Stack x) {
	// Item(const QMetaEnum::Item&)
	x_QMetaEnum__Item* xret = new x_QMetaEnum__Item(*(const QMetaEnum::Item *)x[1].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QMetaEnum__Item(const QMetaEnum::Item& x1) : QMetaEnum::Item(x1) {
    }
    ~x_QMetaEnum__Item() { qt_Smoke->binding->deleted(204, (void*)this); }
};
void xcall_QMetaEnum__Item(Smoke::Index xi, void *obj, Smoke::Stack args) {
    x_QMetaEnum__Item *xself = (x_QMetaEnum__Item*)obj;
    switch(xi) {
	case 0: x_QMetaEnum__Item::x_0(args);	break;
	case 1: x_QMetaEnum__Item::x_1(args);	break;
	case 2: delete (QMetaEnum::Item*)xself;	break;
    }
}
