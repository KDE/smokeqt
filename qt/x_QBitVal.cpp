//Auto-generated by kalyptus. DO NOT EDIT.
#include <smoke.h>
#include <qt_smoke.h>
#include <qbitarray.h>

class x_QBitVal : public QBitVal {
public:
    static void x_0(Smoke::Stack x) {
	// QBitVal(QBitArray*, uint)
	x_QBitVal* xret = new x_QBitVal((QBitArray*)x[1].s_voidp,(uint)x[2].s_uint);
	x[0].s_class = (void*)xret;
    }
    x_QBitVal(QBitArray* x1, uint x2) : QBitVal(x1, x2) {
    }
    void x_1(Smoke::Stack x) {
	// operator int()
	this->QBitVal::operator int();
	(void)x; // noop (for compiler warning)
    }
    void x_2(Smoke::Stack x) {
	// operator=(const QBitVal&)
	QBitVal& xret = this->QBitVal::operator=(*(const QBitVal *)x[1].s_class);
	x[0].s_class = (void*)&xret;
    }
    void x_3(Smoke::Stack x) {
	// operator=(bool)
	QBitVal& xret = this->QBitVal::operator=((bool)x[1].s_bool);
	x[0].s_class = (void*)&xret;
    }
    static void x_4(Smoke::Stack x) {
	// QBitVal(const QBitVal&)
	x_QBitVal* xret = new x_QBitVal(*(const QBitVal *)x[1].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QBitVal(const QBitVal& x1) : QBitVal(x1) {
    }
    ~x_QBitVal() { qt_Smoke->binding->deleted(12, (void*)this); }
};
void xcall_QBitVal(Smoke::Index xi, void *obj, Smoke::Stack args) {
    x_QBitVal *xself = (x_QBitVal*)obj;
    switch(xi) {
	case 0: x_QBitVal::x_0(args);	break;
	case 1: xself->x_1(args);	break;
	case 2: xself->x_2(args);	break;
	case 3: xself->x_3(args);	break;
	case 4: x_QBitVal::x_4(args);	break;
	case 5: delete (QBitVal*)xself;	break;
    }
}
