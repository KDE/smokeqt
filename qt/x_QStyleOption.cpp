//Auto-generated by kalyptus. DO NOT EDIT.
#include <smoke.h>
#include <qt_smoke.h>
#include <qcolor.h>
#include <qnamespace.h>
#include <qrect.h>
#include <qstyle.h>

class x_QStyleOption : public QStyleOption {
public:
    static void x_0(Smoke::Stack x) {
	x[0].s_enum = (long)QStyleOption::Default;
    }
    static void x_1(Smoke::Stack x) {
	// QStyleOption(QStyleOption::StyleOptionDefault)
	x_QStyleOption* xret = new x_QStyleOption((QStyleOption::StyleOptionDefault)x[1].s_enum);
	x[0].s_class = (void*)xret;
    }
    x_QStyleOption(QStyleOption::StyleOptionDefault x1) : QStyleOption(x1) {
    }
    static void x_2(Smoke::Stack x) {
	// QStyleOption()
	x_QStyleOption* xret = new x_QStyleOption();
	x[0].s_class = (void*)xret;
    }
    x_QStyleOption() : QStyleOption() {
    }
    static void x_3(Smoke::Stack x) {
	// QStyleOption(int, int)
	x_QStyleOption* xret = new x_QStyleOption((int)x[1].s_int,(int)x[2].s_int);
	x[0].s_class = (void*)xret;
    }
    x_QStyleOption(int x1, int x2) : QStyleOption(x1, x2) {
    }
    static void x_4(Smoke::Stack x) {
	// QStyleOption(int, int, int, int)
	x_QStyleOption* xret = new x_QStyleOption((int)x[1].s_int,(int)x[2].s_int,(int)x[3].s_int,(int)x[4].s_int);
	x[0].s_class = (void*)xret;
    }
    x_QStyleOption(int x1, int x2, int x3, int x4) : QStyleOption(x1, x2, x3, x4) {
    }
    static void x_5(Smoke::Stack x) {
	// QStyleOption(QMenuItem*)
	x_QStyleOption* xret = new x_QStyleOption((QMenuItem*)x[1].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QStyleOption(QMenuItem* x1) : QStyleOption(x1) {
    }
    static void x_6(Smoke::Stack x) {
	// QStyleOption(QMenuItem*, int)
	x_QStyleOption* xret = new x_QStyleOption((QMenuItem*)x[1].s_class,(int)x[2].s_int);
	x[0].s_class = (void*)xret;
    }
    x_QStyleOption(QMenuItem* x1, int x2) : QStyleOption(x1, x2) {
    }
    static void x_7(Smoke::Stack x) {
	// QStyleOption(QMenuItem*, int, int)
	x_QStyleOption* xret = new x_QStyleOption((QMenuItem*)x[1].s_class,(int)x[2].s_int,(int)x[3].s_int);
	x[0].s_class = (void*)xret;
    }
    x_QStyleOption(QMenuItem* x1, int x2, int x3) : QStyleOption(x1, x2, x3) {
    }
    static void x_8(Smoke::Stack x) {
	// QStyleOption(const QColor&)
	x_QStyleOption* xret = new x_QStyleOption(*(const QColor *)x[1].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QStyleOption(const QColor& x1) : QStyleOption(x1) {
    }
    static void x_9(Smoke::Stack x) {
	// QStyleOption(QTab*)
	x_QStyleOption* xret = new x_QStyleOption((QTab*)x[1].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QStyleOption(QTab* x1) : QStyleOption(x1) {
    }
    static void x_10(Smoke::Stack x) {
	// QStyleOption(QListViewItem*)
	x_QStyleOption* xret = new x_QStyleOption((QListViewItem*)x[1].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QStyleOption(QListViewItem* x1) : QStyleOption(x1) {
    }
    static void x_11(Smoke::Stack x) {
	// QStyleOption(QCheckListItem*)
	x_QStyleOption* xret = new x_QStyleOption((QCheckListItem*)x[1].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QStyleOption(QCheckListItem* x1) : QStyleOption(x1) {
    }
    static void x_12(Smoke::Stack x) {
	// QStyleOption(Qt::ArrowType)
	x_QStyleOption* xret = new x_QStyleOption((Qt::ArrowType)x[1].s_enum);
	x[0].s_class = (void*)xret;
    }
    x_QStyleOption(Qt::ArrowType x1) : QStyleOption(x1) {
    }
    static void x_13(Smoke::Stack x) {
	// QStyleOption(const QRect&)
	x_QStyleOption* xret = new x_QStyleOption(*(const QRect *)x[1].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QStyleOption(const QRect& x1) : QStyleOption(x1) {
    }
    static void x_14(Smoke::Stack x) {
	// QStyleOption(QWidget*)
	x_QStyleOption* xret = new x_QStyleOption((QWidget*)x[1].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QStyleOption(QWidget* x1) : QStyleOption(x1) {
    }
    void x_15(Smoke::Stack x) const {
	// isDefault()
	bool xret = this->QStyleOption::isDefault();
	x[0].s_bool = xret;
    }
    void x_16(Smoke::Stack x) const {
	// lineWidth()
	int xret = this->QStyleOption::lineWidth();
	x[0].s_int = xret;
    }
    void x_17(Smoke::Stack x) const {
	// midLineWidth()
	int xret = this->QStyleOption::midLineWidth();
	x[0].s_int = xret;
    }
    void x_18(Smoke::Stack x) const {
	// frameShape()
	int xret = this->QStyleOption::frameShape();
	x[0].s_int = xret;
    }
    void x_19(Smoke::Stack x) const {
	// frameShadow()
	int xret = this->QStyleOption::frameShadow();
	x[0].s_int = xret;
    }
    void x_20(Smoke::Stack x) const {
	// menuItem()
	QMenuItem* xret = this->QStyleOption::menuItem();
	x[0].s_class = (void*)xret;
    }
    void x_21(Smoke::Stack x) const {
	// maxIconWidth()
	int xret = this->QStyleOption::maxIconWidth();
	x[0].s_int = xret;
    }
    void x_22(Smoke::Stack x) const {
	// tabWidth()
	int xret = this->QStyleOption::tabWidth();
	x[0].s_int = xret;
    }
    void x_23(Smoke::Stack x) const {
	// color()
	const QColor& xret = this->QStyleOption::color();
	x[0].s_class = (void*)&xret;
    }
    void x_24(Smoke::Stack x) const {
	// tab()
	QTab* xret = this->QStyleOption::tab();
	x[0].s_class = (void*)xret;
    }
    void x_25(Smoke::Stack x) const {
	// checkListItem()
	QCheckListItem* xret = this->QStyleOption::checkListItem();
	x[0].s_class = (void*)xret;
    }
    void x_26(Smoke::Stack x) const {
	// listViewItem()
	QListViewItem* xret = this->QStyleOption::listViewItem();
	x[0].s_class = (void*)xret;
    }
    void x_27(Smoke::Stack x) const {
	// arrowType()
	Qt::ArrowType xret = this->QStyleOption::arrowType();
	x[0].s_enum = xret;
    }
    void x_28(Smoke::Stack x) const {
	// rect()
	QRect xret = this->QStyleOption::rect();
	x[0].s_class = (void*)new QRect(xret);
    }
    void x_29(Smoke::Stack x) const {
	// widget()
	QWidget* xret = this->QStyleOption::widget();
	x[0].s_class = (void*)xret;
    }
    static void x_30(Smoke::Stack x) {
	// QStyleOption(const QStyleOption&)
	x_QStyleOption* xret = new x_QStyleOption(*(const QStyleOption *)x[1].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QStyleOption(const QStyleOption& x1) : QStyleOption(x1) {
    }
    static void xenum_operation(Smoke::EnumOperation xop, Smoke::Index xtype, void *&xdata, long &xvalue) {
	switch(xtype) {
	  case 624: //QStyleOption::StyleOptionDefault
	    switch(xop) {
	      case Smoke::EnumNew:
		xdata = (void*)new QStyleOption::StyleOptionDefault;
		break;
	      case Smoke::EnumDelete:
		delete (QStyleOption::StyleOptionDefault*)xdata;
		break;
	      case Smoke::EnumFromLong:
		*(QStyleOption::StyleOptionDefault*)xdata = (QStyleOption::StyleOptionDefault)xvalue;
		break;
	      case Smoke::EnumToLong:
		xvalue = (long)*(QStyleOption::StyleOptionDefault*)xdata;
		break;
	    }
	    break;
	}
    }
    ~x_QStyleOption() { qt_Smoke->binding->deleted(309, (void*)this); }
};
void xenum_QStyleOption(Smoke::EnumOperation xop, Smoke::Index xtype, void *&xdata, long &xvalue) {
    x_QStyleOption::xenum_operation(xop, xtype, xdata, xvalue);
}
void xcall_QStyleOption(Smoke::Index xi, void *obj, Smoke::Stack args) {
    x_QStyleOption *xself = (x_QStyleOption*)obj;
    switch(xi) {
	case 0: x_QStyleOption::x_0(args);	break;
	case 1: x_QStyleOption::x_1(args);	break;
	case 2: x_QStyleOption::x_2(args);	break;
	case 3: x_QStyleOption::x_3(args);	break;
	case 4: x_QStyleOption::x_4(args);	break;
	case 5: x_QStyleOption::x_5(args);	break;
	case 6: x_QStyleOption::x_6(args);	break;
	case 7: x_QStyleOption::x_7(args);	break;
	case 8: x_QStyleOption::x_8(args);	break;
	case 9: x_QStyleOption::x_9(args);	break;
	case 10: x_QStyleOption::x_10(args);	break;
	case 11: x_QStyleOption::x_11(args);	break;
	case 12: x_QStyleOption::x_12(args);	break;
	case 13: x_QStyleOption::x_13(args);	break;
	case 14: x_QStyleOption::x_14(args);	break;
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
	case 30: x_QStyleOption::x_30(args);	break;
	case 31: delete (QStyleOption*)xself;	break;
    }
}
