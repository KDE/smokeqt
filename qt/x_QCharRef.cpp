//Auto-generated by kalyptus. DO NOT EDIT.
#include <smoke.h>
#include <qstring.h>

class x_QCharRef {
private:
    QCharRef *xthis;
public:
    x_QCharRef(void *x) : xthis((QCharRef*)x) {}
    void x_0(Smoke::Stack x) const {
	// unicode()
	ushort xret = xthis->QCharRef::unicode();
	x[0].s_ushort = (ushort)xret;
    }
    void x_1(Smoke::Stack x) const {
	// latin1()
	char xret = xthis->QCharRef::latin1();
	x[0].s_char = (char)xret;
    }
    void x_2(Smoke::Stack x) {
	// operator=(char)
	QCharRef xret = xthis->QCharRef::operator=((char)x[1].s_char);
	x[0].s_voidp = (void*)new QCharRef(xret);
    }
    void x_3(Smoke::Stack x) {
	// operator=(uchar)
	QCharRef xret = xthis->QCharRef::operator=((uchar)x[1].s_uchar);
	x[0].s_voidp = (void*)new QCharRef(xret);
    }
    void x_4(Smoke::Stack x) {
	// operator=(QChar)
	QCharRef xret = xthis->QCharRef::operator=(*(QChar *)x[1].s_voidp);
	x[0].s_voidp = (void*)new QCharRef(xret);
    }
    void x_5(Smoke::Stack x) {
	// operator=(const QCharRef&)
	QCharRef xret = xthis->QCharRef::operator=(*(const QCharRef *)x[1].s_voidp);
	x[0].s_voidp = (void*)new QCharRef(xret);
    }
    void x_6(Smoke::Stack x) {
	// operator=(ushort)
	QCharRef xret = xthis->QCharRef::operator=((ushort)x[1].s_ushort);
	x[0].s_voidp = (void*)new QCharRef(xret);
    }
    void x_7(Smoke::Stack x) {
	// operator=(short)
	QCharRef xret = xthis->QCharRef::operator=((short)x[1].s_short);
	x[0].s_voidp = (void*)new QCharRef(xret);
    }
    void x_8(Smoke::Stack x) {
	// operator=(uint)
	QCharRef xret = xthis->QCharRef::operator=((uint)x[1].s_uint);
	x[0].s_voidp = (void*)new QCharRef(xret);
    }
    void x_9(Smoke::Stack x) {
	// operator=(int)
	QCharRef xret = xthis->QCharRef::operator=((int)x[1].s_int);
	x[0].s_voidp = (void*)new QCharRef(xret);
    }
    void x_10(Smoke::Stack x) const {
	// isNull()
	bool xret = xthis->QCharRef::isNull();
	x[0].s_bool = (bool)xret;
    }
    void x_11(Smoke::Stack x) const {
	// isPrint()
	bool xret = xthis->QCharRef::isPrint();
	x[0].s_bool = (bool)xret;
    }
    void x_12(Smoke::Stack x) const {
	// isPunct()
	bool xret = xthis->QCharRef::isPunct();
	x[0].s_bool = (bool)xret;
    }
    void x_13(Smoke::Stack x) const {
	// isSpace()
	bool xret = xthis->QCharRef::isSpace();
	x[0].s_bool = (bool)xret;
    }
    void x_14(Smoke::Stack x) const {
	// isMark()
	bool xret = xthis->QCharRef::isMark();
	x[0].s_bool = (bool)xret;
    }
    void x_15(Smoke::Stack x) const {
	// isLetter()
	bool xret = xthis->QCharRef::isLetter();
	x[0].s_bool = (bool)xret;
    }
    void x_16(Smoke::Stack x) const {
	// isNumber()
	bool xret = xthis->QCharRef::isNumber();
	x[0].s_bool = (bool)xret;
    }
    void x_17(Smoke::Stack x) {
	// isLetterOrNumber()
	bool xret = xthis->QCharRef::isLetterOrNumber();
	x[0].s_bool = (bool)xret;
    }
    void x_18(Smoke::Stack x) const {
	// isDigit()
	bool xret = xthis->QCharRef::isDigit();
	x[0].s_bool = (bool)xret;
    }
    void x_19(Smoke::Stack x) const {
	// digitValue()
	int xret = xthis->QCharRef::digitValue();
	x[0].s_int = (int)xret;
    }
    void x_20(Smoke::Stack x) const {
	// lower()
	QChar xret = xthis->QCharRef::lower();
	x[0].s_voidp = (void*)new QChar(xret);
    }
    void x_21(Smoke::Stack x) const {
	// upper()
	QChar xret = xthis->QCharRef::upper();
	x[0].s_voidp = (void*)new QChar(xret);
    }
    void x_22(Smoke::Stack x) const {
	// category()
	QChar::Category xret = xthis->QCharRef::category();
	x[0].s_voidp = (void*)new QChar::Category(xret);
    }
    void x_23(Smoke::Stack x) const {
	// direction()
	QChar::Direction xret = xthis->QCharRef::direction();
	x[0].s_voidp = (void*)new QChar::Direction(xret);
    }
    void x_24(Smoke::Stack x) const {
	// joining()
	QChar::Joining xret = xthis->QCharRef::joining();
	x[0].s_voidp = (void*)new QChar::Joining(xret);
    }
    void x_25(Smoke::Stack x) const {
	// mirrored()
	bool xret = xthis->QCharRef::mirrored();
	x[0].s_bool = (bool)xret;
    }
    void x_26(Smoke::Stack x) const {
	// mirroredChar()
	QChar xret = xthis->QCharRef::mirroredChar();
	x[0].s_voidp = (void*)new QChar(xret);
    }
    void x_27(Smoke::Stack x) const {
	// decomposition()
	const QString& xret = xthis->QCharRef::decomposition();
	x[0].s_voidp = (void*)&xret;
    }
    void x_28(Smoke::Stack x) const {
	// decompositionTag()
	QChar::Decomposition xret = xthis->QCharRef::decompositionTag();
	x[0].s_voidp = (void*)new QChar::Decomposition(xret);
    }
    void x_29(Smoke::Stack x) const {
	// combiningClass()
	unsigned char xret = xthis->QCharRef::combiningClass();
	x[0].s_voidp = (void*)new unsigned char(xret);
    }
    void x_30(Smoke::Stack x) const {
	// cell()
	uchar xret = xthis->QCharRef::cell();
	x[0].s_uchar = (uchar)xret;
    }
    void x_31(Smoke::Stack x) const {
	// row()
	uchar xret = xthis->QCharRef::row();
	x[0].s_uchar = (uchar)xret;
    }
    ~x_QCharRef() {}
};
void xcall_QCharRef(Smoke::Index xi, void *obj, Smoke::Stack args) {
    x_QCharRef xtmp(obj), *xself = &xtmp;
    switch(xi) {
	case 0: xself->x_0(args);	break;
	case 1: xself->x_1(args);	break;
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
    }
}
