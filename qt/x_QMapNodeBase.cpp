//Auto-generated by kalyptus. DO NOT EDIT.
#include <smoke.h>
#include <qt_smoke.h>
#include <qmap.h>

class x_QMapNodeBase {
private:
    QMapNodeBase *xthis;
public:
    x_QMapNodeBase(void *x) : xthis((QMapNodeBase*)x) {}
    static void x_0(Smoke::Stack x) {
	x[0].s_enum = (long)QMapNodeBase::Red;
    }
    static void x_1(Smoke::Stack x) {
	x[0].s_enum = (long)QMapNodeBase::Black;
    }
    void x_2(Smoke::Stack x) {
	// minimum()
	QMapNodeBase* xret = xthis->QMapNodeBase::minimum();
	x[0].s_class = (void*)xret;
    }
    void x_3(Smoke::Stack x) {
	// maximum()
	QMapNodeBase* xret = xthis->QMapNodeBase::maximum();
	x[0].s_class = (void*)xret;
    }
    ~x_QMapNodeBase() {}
};
void xcall_QMapNodeBase(Smoke::Index xi, void *obj, Smoke::Stack args) {
    x_QMapNodeBase xtmp(obj), *xself = &xtmp;
    switch(xi) {
	case 0: x_QMapNodeBase::x_0(args);	break;
	case 1: x_QMapNodeBase::x_1(args);	break;
	case 2: xself->x_2(args);	break;
	case 3: xself->x_3(args);	break;
    }
}
