//Auto-generated by kalyptus. DO NOT EDIT.
#include <smoke.h>
#include <qiconset.h>
#include <qstring.h>
#include <qpixmap.h>
#include <qsize.h>

class x_QIconSet : public QIconSet {
public:
    static void x_0(Smoke::Stack x) {
	x[0].s_long = (long)QIconSet::Automatic;
    }
    static void x_1(Smoke::Stack x) {
	x[0].s_long = (long)QIconSet::Small;
    }
    static void x_2(Smoke::Stack x) {
	x[0].s_long = (long)QIconSet::Large;
    }
    static void x_3(Smoke::Stack x) {
	x[0].s_long = (long)QIconSet::Normal;
    }
    static void x_4(Smoke::Stack x) {
	x[0].s_long = (long)QIconSet::Disabled;
    }
    static void x_5(Smoke::Stack x) {
	x[0].s_long = (long)QIconSet::Active;
    }
    static void x_6(Smoke::Stack x) {
	x[0].s_long = (long)QIconSet::On;
    }
    static void x_7(Smoke::Stack x) {
	x[0].s_long = (long)QIconSet::Off;
    }
    static void x_8(Smoke::Stack x) {
	// QIconSet()
	x_QIconSet* xret = new x_QIconSet();
	x[0].s_voidp = (void*)xret;
    }
    x_QIconSet() : QIconSet() {
    }
    static void x_9(Smoke::Stack x) {
	// QIconSet(const QPixmap&, QIconSet::Size)
	x_QIconSet* xret = new x_QIconSet(*(const QPixmap *)x[1].s_voidp,*(QIconSet::Size *)x[2].s_voidp);
	x[0].s_voidp = (void*)xret;
    }
    x_QIconSet(const QPixmap& x1, QIconSet::Size x2) : QIconSet(x1, x2) {
    }
    static void x_10(Smoke::Stack x) {
	// QIconSet(const QPixmap&)
	x_QIconSet* xret = new x_QIconSet(*(const QPixmap *)x[1].s_voidp);
	x[0].s_voidp = (void*)xret;
    }
    x_QIconSet(const QPixmap& x1) : QIconSet(x1) {
    }
    static void x_11(Smoke::Stack x) {
	// QIconSet(const QPixmap&, const QPixmap&)
	x_QIconSet* xret = new x_QIconSet(*(const QPixmap *)x[1].s_voidp,*(const QPixmap *)x[2].s_voidp);
	x[0].s_voidp = (void*)xret;
    }
    x_QIconSet(const QPixmap& x1, const QPixmap& x2) : QIconSet(x1, x2) {
    }
    static void x_12(Smoke::Stack x) {
	// QIconSet(const QIconSet&)
	x_QIconSet* xret = new x_QIconSet(*(const QIconSet *)x[1].s_voidp);
	x[0].s_voidp = (void*)xret;
    }
    x_QIconSet(const QIconSet& x1) : QIconSet(x1) {
    }
    void x_13(Smoke::Stack x) {
	// reset(const QPixmap&, QIconSet::Size)
	this->QIconSet::reset(*(const QPixmap *)x[1].s_voidp,*(QIconSet::Size *)x[2].s_voidp);
    }
    void x_14(Smoke::Stack x) {
	// setPixmap(const QPixmap&, QIconSet::Size, QIconSet::Mode, QIconSet::State)
	this->QIconSet::setPixmap(*(const QPixmap *)x[1].s_voidp,*(QIconSet::Size *)x[2].s_voidp,*(QIconSet::Mode *)x[3].s_voidp,*(QIconSet::State *)x[4].s_voidp);
    }
    void x_15(Smoke::Stack x) {
	// setPixmap(const QPixmap&, QIconSet::Size, QIconSet::Mode)
	this->QIconSet::setPixmap(*(const QPixmap *)x[1].s_voidp,*(QIconSet::Size *)x[2].s_voidp,*(QIconSet::Mode *)x[3].s_voidp);
    }
    void x_16(Smoke::Stack x) {
	// setPixmap(const QPixmap&, QIconSet::Size)
	this->QIconSet::setPixmap(*(const QPixmap *)x[1].s_voidp,*(QIconSet::Size *)x[2].s_voidp);
    }
    void x_17(Smoke::Stack x) {
	// setPixmap(const QString&, QIconSet::Size, QIconSet::Mode, QIconSet::State)
	this->QIconSet::setPixmap(*(const QString *)x[1].s_voidp,*(QIconSet::Size *)x[2].s_voidp,*(QIconSet::Mode *)x[3].s_voidp,*(QIconSet::State *)x[4].s_voidp);
    }
    void x_18(Smoke::Stack x) {
	// setPixmap(const QString&, QIconSet::Size, QIconSet::Mode)
	this->QIconSet::setPixmap(*(const QString *)x[1].s_voidp,*(QIconSet::Size *)x[2].s_voidp,*(QIconSet::Mode *)x[3].s_voidp);
    }
    void x_19(Smoke::Stack x) {
	// setPixmap(const QString&, QIconSet::Size)
	this->QIconSet::setPixmap(*(const QString *)x[1].s_voidp,*(QIconSet::Size *)x[2].s_voidp);
    }
    void x_20(Smoke::Stack x) const {
	// pixmap(QIconSet::Size, QIconSet::Mode, QIconSet::State)
	QPixmap xret = this->QIconSet::pixmap(*(QIconSet::Size *)x[1].s_voidp,*(QIconSet::Mode *)x[2].s_voidp,*(QIconSet::State *)x[3].s_voidp);
	x[0].s_voidp = (void*)new QPixmap(xret);
    }
    void x_21(Smoke::Stack x) const {
	// pixmap(QIconSet::Size, QIconSet::Mode)
	QPixmap xret = this->QIconSet::pixmap(*(QIconSet::Size *)x[1].s_voidp,*(QIconSet::Mode *)x[2].s_voidp);
	x[0].s_voidp = (void*)new QPixmap(xret);
    }
    void x_22(Smoke::Stack x) const {
	// pixmap(QIconSet::Size, bool, QIconSet::State)
	QPixmap xret = this->QIconSet::pixmap(*(QIconSet::Size *)x[1].s_voidp,(bool)x[2].s_bool,*(QIconSet::State *)x[3].s_voidp);
	x[0].s_voidp = (void*)new QPixmap(xret);
    }
    void x_23(Smoke::Stack x) const {
	// pixmap(QIconSet::Size, bool)
	QPixmap xret = this->QIconSet::pixmap(*(QIconSet::Size *)x[1].s_voidp,(bool)x[2].s_bool);
	x[0].s_voidp = (void*)new QPixmap(xret);
    }
    void x_24(Smoke::Stack x) const {
	// pixmap()
	QPixmap xret = this->QIconSet::pixmap();
	x[0].s_voidp = (void*)new QPixmap(xret);
    }
    void x_25(Smoke::Stack x) const {
	// isGenerated(QIconSet::Size, QIconSet::Mode, QIconSet::State)
	bool xret = this->QIconSet::isGenerated(*(QIconSet::Size *)x[1].s_voidp,*(QIconSet::Mode *)x[2].s_voidp,*(QIconSet::State *)x[3].s_voidp);
	x[0].s_bool = (bool)xret;
    }
    void x_26(Smoke::Stack x) const {
	// isGenerated(QIconSet::Size, QIconSet::Mode)
	bool xret = this->QIconSet::isGenerated(*(QIconSet::Size *)x[1].s_voidp,*(QIconSet::Mode *)x[2].s_voidp);
	x[0].s_bool = (bool)xret;
    }
    void x_27(Smoke::Stack x) {
	// clearGenerated()
	this->QIconSet::clearGenerated();
    }
    void x_28(Smoke::Stack x) const {
	// isNull()
	bool xret = this->QIconSet::isNull();
	x[0].s_bool = (bool)xret;
    }
    void x_29(Smoke::Stack x) {
	// detach()
	this->QIconSet::detach();
    }
    void x_30(Smoke::Stack x) {
	// operator=(const QIconSet&)
	QIconSet& xret = this->QIconSet::operator=(*(const QIconSet *)x[1].s_voidp);
	x[0].s_voidp = (void*)&xret;
    }
    static void x_31(Smoke::Stack x) {
	// setIconSize(QIconSet::Size, const QSize&)
	QIconSet::setIconSize(*(QIconSet::Size *)x[1].s_voidp,*(const QSize *)x[2].s_voidp);
    }
    static void x_32(Smoke::Stack x) {
	// iconSize(QIconSet::Size)
	const QSize& xret = QIconSet::iconSize(*(QIconSet::Size *)x[1].s_voidp);
	x[0].s_voidp = (void*)&xret;
    }
    virtual void setPixmap(const QPixmap& x1, QIconSet::Size x2, QIconSet::Mode x3, QIconSet::State x4) {
	Smoke::StackItem x[5];
	x[1].s_voidp = (void*)&x1;
	x[2].s_voidp = (void*)&x2;
	x[3].s_voidp = (void*)&x3;
	x[4].s_voidp = (void*)&x4;
	if(call_method((void*)this, 3440, x)) return;
	this->QIconSet::setPixmap(x1, x2, x3, x4);
    }
    virtual void setPixmap(const QString& x1, QIconSet::Size x2, QIconSet::Mode x3, QIconSet::State x4) {
	Smoke::StackItem x[5];
	x[1].s_voidp = (void*)&x1;
	x[2].s_voidp = (void*)&x2;
	x[3].s_voidp = (void*)&x3;
	x[4].s_voidp = (void*)&x4;
	if(call_method((void*)this, 3443, x)) return;
	this->QIconSet::setPixmap(x1, x2, x3, x4);
    }
    ~x_QIconSet() {}
};
void xcall_QIconSet(Smoke::Index xi, void *obj, Smoke::Stack args) {
    x_QIconSet *xself = (x_QIconSet*)obj;
    switch(xi) {
	case 0: x_QIconSet::x_0(args);	break;
	case 1: x_QIconSet::x_1(args);	break;
	case 2: x_QIconSet::x_2(args);	break;
	case 3: x_QIconSet::x_3(args);	break;
	case 4: x_QIconSet::x_4(args);	break;
	case 5: x_QIconSet::x_5(args);	break;
	case 6: x_QIconSet::x_6(args);	break;
	case 7: x_QIconSet::x_7(args);	break;
	case 8: x_QIconSet::x_8(args);	break;
	case 9: x_QIconSet::x_9(args);	break;
	case 10: x_QIconSet::x_10(args);	break;
	case 11: x_QIconSet::x_11(args);	break;
	case 12: x_QIconSet::x_12(args);	break;
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
	case 31: x_QIconSet::x_31(args);	break;
	case 32: x_QIconSet::x_32(args);	break;
	case 33: delete (QIconSet*)xself;	break;
    }
}
