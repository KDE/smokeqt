//Auto-generated by kalyptus. DO NOT EDIT.
#include <smoke.h>
#include <qt_smoke.h>
#include <qstrvec.h>

class x_QStrVec : public QStrVec {
public:
    static void x_0(Smoke::Stack x) {
	// QStrVec()
	x_QStrVec* xret = new x_QStrVec();
	x[0].s_class = (void*)xret;
    }
    x_QStrVec() : QStrVec() {
    }
    static void x_1(Smoke::Stack x) {
	// QStrVec(uint, bool)
	x_QStrVec* xret = new x_QStrVec((uint)x[1].s_uint,(bool)x[2].s_bool);
	x[0].s_class = (void*)xret;
    }
    x_QStrVec(uint x1, bool x2) : QStrVec(x1, x2) {
    }
    static void x_2(Smoke::Stack x) {
	// QStrVec(uint)
	x_QStrVec* xret = new x_QStrVec((uint)x[1].s_uint);
	x[0].s_class = (void*)xret;
    }
    x_QStrVec(uint x1) : QStrVec(x1) {
    }
    ~x_QStrVec() { qt_Smoke->binding->deleted(297, (void*)this); }
};
void xcall_QStrVec(Smoke::Index xi, void *obj, Smoke::Stack args) {
    x_QStrVec *xself = (x_QStrVec*)obj;
    switch(xi) {
	case 0: x_QStrVec::x_0(args);	break;
	case 1: x_QStrVec::x_1(args);	break;
	case 2: x_QStrVec::x_2(args);	break;
	case 3: delete (QStrVec*)xself;	break;
    }
}
