//Auto-generated by kalyptus. DO NOT EDIT.
#include <smoke.h>
#include <qpoint.h>
#include <qpalette.h>
#include <qfont.h>
#include <qstring.h>
#include <qtooltip.h>
#include <qrect.h>

class x_QToolTip : public QToolTip {
public:
    static void x_0(Smoke::Stack x) {
	// QToolTip(QWidget*, QToolTipGroup*)
	x_QToolTip* xret = new x_QToolTip((QWidget*)x[1].s_voidp,(QToolTipGroup*)x[2].s_voidp);
	x[0].s_voidp = (void*)xret;
    }
    x_QToolTip(QWidget* x1, QToolTipGroup* x2) : QToolTip(x1, x2) {
    }
    static void x_1(Smoke::Stack x) {
	// QToolTip(QWidget*)
	x_QToolTip* xret = new x_QToolTip((QWidget*)x[1].s_voidp);
	x[0].s_voidp = (void*)xret;
    }
    x_QToolTip(QWidget* x1) : QToolTip(x1) {
    }
    void x_2(Smoke::Stack x) const {
	// parentWidget()
	QWidget* xret = this->QToolTip::parentWidget();
	x[0].s_voidp = (void*)xret;
    }
    void x_3(Smoke::Stack x) const {
	// group()
	QToolTipGroup* xret = this->QToolTip::group();
	x[0].s_voidp = (void*)xret;
    }
    static void x_4(Smoke::Stack x) {
	// add(QWidget*, const QString&)
	QToolTip::add((QWidget*)x[1].s_voidp,*(const QString *)x[2].s_voidp);
    }
    static void x_5(Smoke::Stack x) {
	// add(QWidget*, const QString&, QToolTipGroup*, const QString&)
	QToolTip::add((QWidget*)x[1].s_voidp,*(const QString *)x[2].s_voidp,(QToolTipGroup*)x[3].s_voidp,*(const QString *)x[4].s_voidp);
    }
    static void x_6(Smoke::Stack x) {
	// remove(QWidget*)
	QToolTip::remove((QWidget*)x[1].s_voidp);
    }
    static void x_7(Smoke::Stack x) {
	// add(QWidget*, const QRect&, const QString&)
	QToolTip::add((QWidget*)x[1].s_voidp,*(const QRect *)x[2].s_voidp,*(const QString *)x[3].s_voidp);
    }
    static void x_8(Smoke::Stack x) {
	// add(QWidget*, const QRect&, const QString&, QToolTipGroup*, const QString&)
	QToolTip::add((QWidget*)x[1].s_voidp,*(const QRect *)x[2].s_voidp,*(const QString *)x[3].s_voidp,(QToolTipGroup*)x[4].s_voidp,*(const QString *)x[5].s_voidp);
    }
    static void x_9(Smoke::Stack x) {
	// remove(QWidget*, const QRect&)
	QToolTip::remove((QWidget*)x[1].s_voidp,*(const QRect *)x[2].s_voidp);
    }
    static void x_10(Smoke::Stack x) {
	// textFor(QWidget*, const QPoint&)
	QString xret = QToolTip::textFor((QWidget*)x[1].s_voidp,*(const QPoint *)x[2].s_voidp);
	x[0].s_voidp = (void*)new QString(xret);
    }
    static void x_11(Smoke::Stack x) {
	// textFor(QWidget*)
	QString xret = QToolTip::textFor((QWidget*)x[1].s_voidp);
	x[0].s_voidp = (void*)new QString(xret);
    }
    static void x_12(Smoke::Stack x) {
	// hide()
	QToolTip::hide();
    }
    static void x_13(Smoke::Stack x) {
	// font()
	QFont xret = QToolTip::font();
	x[0].s_voidp = (void*)new QFont(xret);
    }
    static void x_14(Smoke::Stack x) {
	// setFont(const QFont&)
	QToolTip::setFont(*(const QFont *)x[1].s_voidp);
    }
    static void x_15(Smoke::Stack x) {
	// palette()
	QPalette xret = QToolTip::palette();
	x[0].s_voidp = (void*)new QPalette(xret);
    }
    static void x_16(Smoke::Stack x) {
	// setPalette(const QPalette&)
	QToolTip::setPalette(*(const QPalette *)x[1].s_voidp);
    }
    static void x_17(Smoke::Stack x) {
	// setEnabled(bool)
	QToolTip::setEnabled((bool)x[1].s_bool);
    }
    static void x_18(Smoke::Stack x) {
	// enabled()
	bool xret = QToolTip::enabled();
	x[0].s_bool = (bool)xret;
    }
    static void x_19(Smoke::Stack x) {
	// setGloballyEnabled(bool)
	QToolTip::setGloballyEnabled((bool)x[1].s_bool);
    }
    static void x_20(Smoke::Stack x) {
	// isGloballyEnabled()
	bool xret = QToolTip::isGloballyEnabled();
	x[0].s_bool = (bool)xret;
    }
    void x_21(Smoke::Stack x) {
	// maybeTip(const QPoint&)
	this->QToolTip::maybeTip(*(const QPoint *)x[1].s_voidp);
    }
    void x_22(Smoke::Stack x) {
	// tip(const QRect&, const QString&)
	this->QToolTip::tip(*(const QRect *)x[1].s_voidp,*(const QString *)x[2].s_voidp);
    }
    void x_23(Smoke::Stack x) {
	// tip(const QRect&, const QString&, const QString&)
	this->QToolTip::tip(*(const QRect *)x[1].s_voidp,*(const QString *)x[2].s_voidp,*(const QString *)x[3].s_voidp);
    }
    void x_24(Smoke::Stack x) {
	// clear()
	this->QToolTip::clear();
    }
    virtual void maybeTip(const QPoint& x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)&x1;
	call_method_abstract((void*)this, 8979, x);
	return;
	// ABSTRACT
    }
    ~x_QToolTip() {}
};
void xcall_QToolTip(Smoke::Index xi, void *obj, Smoke::Stack args) {
    x_QToolTip *xself = (x_QToolTip*)obj;
    switch(xi) {
	case 0: x_QToolTip::x_0(args);	break;
	case 1: x_QToolTip::x_1(args);	break;
	case 2: xself->x_2(args);	break;
	case 3: xself->x_3(args);	break;
	case 4: x_QToolTip::x_4(args);	break;
	case 5: x_QToolTip::x_5(args);	break;
	case 6: x_QToolTip::x_6(args);	break;
	case 7: x_QToolTip::x_7(args);	break;
	case 8: x_QToolTip::x_8(args);	break;
	case 9: x_QToolTip::x_9(args);	break;
	case 10: x_QToolTip::x_10(args);	break;
	case 11: x_QToolTip::x_11(args);	break;
	case 12: x_QToolTip::x_12(args);	break;
	case 13: x_QToolTip::x_13(args);	break;
	case 14: x_QToolTip::x_14(args);	break;
	case 15: x_QToolTip::x_15(args);	break;
	case 16: x_QToolTip::x_16(args);	break;
	case 17: x_QToolTip::x_17(args);	break;
	case 18: x_QToolTip::x_18(args);	break;
	case 19: x_QToolTip::x_19(args);	break;
	case 20: x_QToolTip::x_20(args);	break;
	case 21: xself->x_21(args);	break;
	case 22: xself->x_22(args);	break;
	case 23: xself->x_23(args);	break;
	case 24: xself->x_24(args);	break;
    }
}
