//Auto-generated by kalyptus. DO NOT EDIT.
#include <smoke.h>
#include <qshared.h>

class x_QShared : public QShared {
public:
    static void x_0(Smoke::Stack x) {
	// QShared()
	x_QShared* xret = new x_QShared();
	x[0].s_voidp = (void*)xret;
    }
    x_QShared() : QShared() {
    }
    void x_1(Smoke::Stack x) {
	// ref()
	this->QShared::ref();
    }
    void x_2(Smoke::Stack x) {
	// deref()
	bool xret = this->QShared::deref();
	x[0].s_bool = (bool)xret;
    }
    ~x_QShared() {}
};
void xcall_QShared(Smoke::Index xi, void *obj, Smoke::Stack args) {
    x_QShared *xself = (x_QShared*)obj;
    switch(xi) {
	case 0: x_QShared::x_0(args);	break;
	case 1: xself->x_1(args);	break;
	case 2: xself->x_2(args);	break;
    }
}
