//Auto-generated by kalyptus. DO NOT EDIT.
#include <smoke.h>
#include <qt_smoke.h>
#include <qpoint.h>
#include <qregion.h>
#include <qpointarray.h>
#include <qbitmap.h>
#include <qrect.h>

class x_QRegion : public QRegion {
public:
    static void x_0(Smoke::Stack x) {
	x[0].s_enum = (long)QRegion::Rectangle;
    }
    static void x_1(Smoke::Stack x) {
	x[0].s_enum = (long)QRegion::Ellipse;
    }
    static void x_2(Smoke::Stack x) {
	// QRegion()
	x_QRegion* xret = new x_QRegion();
	x[0].s_class = (void*)xret;
    }
    x_QRegion() : QRegion() {
    }
    static void x_3(Smoke::Stack x) {
	// QRegion(int, int, int, int, QRegion::RegionType)
	x_QRegion* xret = new x_QRegion((int)x[1].s_int,(int)x[2].s_int,(int)x[3].s_int,(int)x[4].s_int,*(QRegion::RegionType *)x[5].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QRegion(int x1, int x2, int x3, int x4, QRegion::RegionType x5) : QRegion(x1, x2, x3, x4, x5) {
    }
    static void x_4(Smoke::Stack x) {
	// QRegion(int, int, int, int)
	x_QRegion* xret = new x_QRegion((int)x[1].s_int,(int)x[2].s_int,(int)x[3].s_int,(int)x[4].s_int);
	x[0].s_class = (void*)xret;
    }
    x_QRegion(int x1, int x2, int x3, int x4) : QRegion(x1, x2, x3, x4) {
    }
    static void x_5(Smoke::Stack x) {
	// QRegion(const QRect&, QRegion::RegionType)
	x_QRegion* xret = new x_QRegion(*(const QRect *)x[1].s_class,*(QRegion::RegionType *)x[2].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QRegion(const QRect& x1, QRegion::RegionType x2) : QRegion(x1, x2) {
    }
    static void x_6(Smoke::Stack x) {
	// QRegion(const QRect&)
	x_QRegion* xret = new x_QRegion(*(const QRect *)x[1].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QRegion(const QRect& x1) : QRegion(x1) {
    }
    static void x_7(Smoke::Stack x) {
	// QRegion(const QPointArray&, bool)
	x_QRegion* xret = new x_QRegion(*(const QPointArray *)x[1].s_class,(bool)x[2].s_bool);
	x[0].s_class = (void*)xret;
    }
    x_QRegion(const QPointArray& x1, bool x2) : QRegion(x1, x2) {
    }
    static void x_8(Smoke::Stack x) {
	// QRegion(const QPointArray&)
	x_QRegion* xret = new x_QRegion(*(const QPointArray *)x[1].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QRegion(const QPointArray& x1) : QRegion(x1) {
    }
    static void x_9(Smoke::Stack x) {
	// QRegion(const QRegion&)
	x_QRegion* xret = new x_QRegion(*(const QRegion *)x[1].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QRegion(const QRegion& x1) : QRegion(x1) {
    }
    static void x_10(Smoke::Stack x) {
	// QRegion(const QBitmap&)
	x_QRegion* xret = new x_QRegion(*(const QBitmap *)x[1].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QRegion(const QBitmap& x1) : QRegion(x1) {
    }
    void x_11(Smoke::Stack x) {
	// operator=(const QRegion&)
	QRegion& xret = this->QRegion::operator=(*(const QRegion *)x[1].s_class);
	x[0].s_class = (void*)&xret;
    }
    void x_12(Smoke::Stack x) const {
	// isNull()
	bool xret = this->QRegion::isNull();
	x[0].s_bool = (bool)xret;
    }
    void x_13(Smoke::Stack x) const {
	// isEmpty()
	bool xret = this->QRegion::isEmpty();
	x[0].s_bool = (bool)xret;
    }
    void x_14(Smoke::Stack x) const {
	// contains(const QPoint&)
	bool xret = this->QRegion::contains(*(const QPoint *)x[1].s_class);
	x[0].s_bool = (bool)xret;
    }
    void x_15(Smoke::Stack x) const {
	// contains(const QRect&)
	bool xret = this->QRegion::contains(*(const QRect *)x[1].s_class);
	x[0].s_bool = (bool)xret;
    }
    void x_16(Smoke::Stack x) {
	// translate(int, int)
	this->QRegion::translate((int)x[1].s_int,(int)x[2].s_int);
    }
    void x_17(Smoke::Stack x) const {
	// unite(const QRegion&)
	QRegion xret = this->QRegion::unite(*(const QRegion *)x[1].s_class);
	x[0].s_class = (void*)new QRegion(xret);
    }
    void x_18(Smoke::Stack x) const {
	// intersect(const QRegion&)
	QRegion xret = this->QRegion::intersect(*(const QRegion *)x[1].s_class);
	x[0].s_class = (void*)new QRegion(xret);
    }
    void x_19(Smoke::Stack x) const {
	// subtract(const QRegion&)
	QRegion xret = this->QRegion::subtract(*(const QRegion *)x[1].s_class);
	x[0].s_class = (void*)new QRegion(xret);
    }
    void x_20(Smoke::Stack x) const {
	// eor(const QRegion&)
	QRegion xret = this->QRegion::eor(*(const QRegion *)x[1].s_class);
	x[0].s_class = (void*)new QRegion(xret);
    }
    void x_21(Smoke::Stack x) const {
	// boundingRect()
	QRect xret = this->QRegion::boundingRect();
	x[0].s_class = (void*)new QRect(xret);
    }
    void x_22(Smoke::Stack x) const {
	// rects()
	QMemArray<QRect> xret = this->QRegion::rects();
	x[0].s_class = (void*)new QMemArray<QRect>(xret);
    }
    void x_23(Smoke::Stack x) {
	// setRects(const QRect*, int)
	this->QRegion::setRects((const QRect*)x[1].s_class,(int)x[2].s_int);
    }
    void x_24(Smoke::Stack x) const {
	// operator|(const QRegion&)
	const QRegion xret = this->QRegion::operator|(*(const QRegion *)x[1].s_class);
	x[0].s_class = (void*)new QRegion(xret);
    }
    void x_25(Smoke::Stack x) const {
	// operator+(const QRegion&)
	const QRegion xret = this->QRegion::operator+(*(const QRegion *)x[1].s_class);
	x[0].s_class = (void*)new QRegion(xret);
    }
    void x_26(Smoke::Stack x) const {
	// operator&(const QRegion&)
	const QRegion xret = this->QRegion::operator&(*(const QRegion *)x[1].s_class);
	x[0].s_class = (void*)new QRegion(xret);
    }
    void x_27(Smoke::Stack x) const {
	// operator-(const QRegion&)
	const QRegion xret = this->QRegion::operator-(*(const QRegion *)x[1].s_class);
	x[0].s_class = (void*)new QRegion(xret);
    }
    void x_28(Smoke::Stack x) const {
	// operator^(const QRegion&)
	const QRegion xret = this->QRegion::operator^(*(const QRegion *)x[1].s_class);
	x[0].s_class = (void*)new QRegion(xret);
    }
    void x_29(Smoke::Stack x) {
	// operator|=(const QRegion&)
	QRegion& xret = this->QRegion::operator|=(*(const QRegion *)x[1].s_class);
	x[0].s_class = (void*)&xret;
    }
    void x_30(Smoke::Stack x) {
	// operator+=(const QRegion&)
	QRegion& xret = this->QRegion::operator+=(*(const QRegion *)x[1].s_class);
	x[0].s_class = (void*)&xret;
    }
    void x_31(Smoke::Stack x) {
	// operator&=(const QRegion&)
	QRegion& xret = this->QRegion::operator&=(*(const QRegion *)x[1].s_class);
	x[0].s_class = (void*)&xret;
    }
    void x_32(Smoke::Stack x) {
	// operator-=(const QRegion&)
	QRegion& xret = this->QRegion::operator-=(*(const QRegion *)x[1].s_class);
	x[0].s_class = (void*)&xret;
    }
    void x_33(Smoke::Stack x) {
	// operator^=(const QRegion&)
	QRegion& xret = this->QRegion::operator^=(*(const QRegion *)x[1].s_class);
	x[0].s_class = (void*)&xret;
    }
    void x_34(Smoke::Stack x) const {
	// operator==(const QRegion&)
	bool xret = this->QRegion::operator==(*(const QRegion *)x[1].s_class);
	x[0].s_bool = (bool)xret;
    }
    void x_35(Smoke::Stack x) const {
	// operator!=(const QRegion&)
	bool xret = this->QRegion::operator!=(*(const QRegion *)x[1].s_class);
	x[0].s_bool = (bool)xret;
    }
    ~x_QRegion() {}
};
void xcall_QRegion(Smoke::Index xi, void *obj, Smoke::Stack args) {
    x_QRegion *xself = (x_QRegion*)obj;
    switch(xi) {
	case 0: x_QRegion::x_0(args);	break;
	case 1: x_QRegion::x_1(args);	break;
	case 2: x_QRegion::x_2(args);	break;
	case 3: x_QRegion::x_3(args);	break;
	case 4: x_QRegion::x_4(args);	break;
	case 5: x_QRegion::x_5(args);	break;
	case 6: x_QRegion::x_6(args);	break;
	case 7: x_QRegion::x_7(args);	break;
	case 8: x_QRegion::x_8(args);	break;
	case 9: x_QRegion::x_9(args);	break;
	case 10: x_QRegion::x_10(args);	break;
	case 11: xself->x_11(args);	break;
	case 12: xself->x_12(args);	break;
	case 13: xself->x_13(args);	break;
	case 14: xself->x_14(args);	break;
	case 15: xself->x_15(args);	break;
	case 16: xself->x_16(args);	break;
	case 17: xself->x_17(args);	break;
	case 18: xself->x_18(args);	break;
	case 19: xself->x_19(args);	break;
	case 20: xself->x_20(args);	break;
	case 21: xself->x_21(args);	break;
	case 22: xself->x_22(args);	break;
	case 23: xself->x_23(args);	break;
	case 24: xself->x_24(args);	break;
	case 25: xself->x_25(args);	break;
	case 26: xself->x_26(args);	break;
	case 27: xself->x_27(args);	break;
	case 28: xself->x_28(args);	break;
	case 29: xself->x_29(args);	break;
	case 30: xself->x_30(args);	break;
	case 31: xself->x_31(args);	break;
	case 32: xself->x_32(args);	break;
	case 33: xself->x_33(args);	break;
	case 34: xself->x_34(args);	break;
	case 35: xself->x_35(args);	break;
	case 36: delete (QRegion*)xself;	break;
    }
}
