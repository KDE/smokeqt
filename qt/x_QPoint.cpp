//Auto-generated by kalyptus. DO NOT EDIT.
#include <smoke.h>
#include <qpoint.h>
#include <qwindowdefs.h>

class x_QPoint : public QPoint {
public:
    static void x_0(Smoke::Stack x) {
	// QPoint()
	x_QPoint* xret = new x_QPoint();
	x[0].s_voidp = (void*)xret;
    }
    x_QPoint() : QPoint() {
    }
    static void x_1(Smoke::Stack x) {
	// QPoint(int, int)
	x_QPoint* xret = new x_QPoint((int)x[1].s_int,(int)x[2].s_int);
	x[0].s_voidp = (void*)xret;
    }
    x_QPoint(int x1, int x2) : QPoint(x1, x2) {
    }
    void x_2(Smoke::Stack x) const {
	// isNull()
	bool xret = this->QPoint::isNull();
	x[0].s_bool = (bool)xret;
    }
    void x_3(Smoke::Stack x) const {
	// x()
	int xret = this->QPoint::x();
	x[0].s_int = (int)xret;
    }
    void x_4(Smoke::Stack x) const {
	// y()
	int xret = this->QPoint::y();
	x[0].s_int = (int)xret;
    }
    void x_5(Smoke::Stack x) {
	// setX(int)
	this->QPoint::setX((int)x[1].s_int);
    }
    void x_6(Smoke::Stack x) {
	// setY(int)
	this->QPoint::setY((int)x[1].s_int);
    }
    void x_7(Smoke::Stack x) const {
	// manhattanLength()
	int xret = this->QPoint::manhattanLength();
	x[0].s_int = (int)xret;
    }
    void x_8(Smoke::Stack x) {
	// rx()
	QCOORD& xret = this->QPoint::rx();
	x[0].s_voidp = (void*)&xret;
    }
    void x_9(Smoke::Stack x) {
	// ry()
	QCOORD& xret = this->QPoint::ry();
	x[0].s_voidp = (void*)&xret;
    }
    void x_10(Smoke::Stack x) {
	// operator+=(const QPoint&)
	QPoint& xret = this->QPoint::operator+=(*(const QPoint *)x[1].s_voidp);
	x[0].s_voidp = (void*)&xret;
    }
    void x_11(Smoke::Stack x) {
	// operator-=(const QPoint&)
	QPoint& xret = this->QPoint::operator-=(*(const QPoint *)x[1].s_voidp);
	x[0].s_voidp = (void*)&xret;
    }
    void x_12(Smoke::Stack x) {
	// operator*=(int)
	QPoint& xret = this->QPoint::operator*=((int)x[1].s_int);
	x[0].s_voidp = (void*)&xret;
    }
    void x_13(Smoke::Stack x) {
	// operator*=(double)
	QPoint& xret = this->QPoint::operator*=((double)x[1].s_double);
	x[0].s_voidp = (void*)&xret;
    }
    void x_14(Smoke::Stack x) {
	// operator/=(int)
	QPoint& xret = this->QPoint::operator/=((int)x[1].s_int);
	x[0].s_voidp = (void*)&xret;
    }
    void x_15(Smoke::Stack x) {
	// operator/=(double)
	QPoint& xret = this->QPoint::operator/=((double)x[1].s_double);
	x[0].s_voidp = (void*)&xret;
    }
    ~x_QPoint() {}
};
void xcall_QPoint(Smoke::Index xi, void *obj, Smoke::Stack args) {
    x_QPoint *xself = (x_QPoint*)obj;
    switch(xi) {
	case 0: x_QPoint::x_0(args);	break;
	case 1: x_QPoint::x_1(args);	break;
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
    }
}
