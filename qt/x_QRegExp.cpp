//Auto-generated by kalyptus. DO NOT EDIT.
#include <smoke.h>
#include <qstring.h>
#include <qstringlist.h>
#include <qregexp.h>

class x_QRegExp : public QRegExp {
public:
    static void x_0(Smoke::Stack x) {
	// QRegExp()
	x_QRegExp* xret = new x_QRegExp();
	x[0].s_voidp = (void*)xret;
    }
    x_QRegExp() : QRegExp() {
    }
    static void x_1(Smoke::Stack x) {
	// QRegExp(const QString&, bool, bool)
	x_QRegExp* xret = new x_QRegExp(*(const QString *)x[1].s_voidp,(bool)x[2].s_bool,(bool)x[3].s_bool);
	x[0].s_voidp = (void*)xret;
    }
    x_QRegExp(const QString& x1, bool x2, bool x3) : QRegExp(x1, x2, x3) {
    }
    static void x_2(Smoke::Stack x) {
	// QRegExp(const QString&, bool)
	x_QRegExp* xret = new x_QRegExp(*(const QString *)x[1].s_voidp,(bool)x[2].s_bool);
	x[0].s_voidp = (void*)xret;
    }
    x_QRegExp(const QString& x1, bool x2) : QRegExp(x1, x2) {
    }
    static void x_3(Smoke::Stack x) {
	// QRegExp(const QString&)
	x_QRegExp* xret = new x_QRegExp(*(const QString *)x[1].s_voidp);
	x[0].s_voidp = (void*)xret;
    }
    x_QRegExp(const QString& x1) : QRegExp(x1) {
    }
    static void x_4(Smoke::Stack x) {
	// QRegExp(const QRegExp&)
	x_QRegExp* xret = new x_QRegExp(*(const QRegExp *)x[1].s_voidp);
	x[0].s_voidp = (void*)xret;
    }
    x_QRegExp(const QRegExp& x1) : QRegExp(x1) {
    }
    void x_5(Smoke::Stack x) {
	// operator=(const QRegExp&)
	QRegExp& xret = this->QRegExp::operator=(*(const QRegExp *)x[1].s_voidp);
	x[0].s_voidp = (void*)&xret;
    }
    void x_6(Smoke::Stack x) const {
	// operator==(const QRegExp&)
	bool xret = this->QRegExp::operator==(*(const QRegExp *)x[1].s_voidp);
	x[0].s_bool = (bool)xret;
    }
    void x_7(Smoke::Stack x) const {
	// operator!=(const QRegExp&)
	bool xret = this->QRegExp::operator!=(*(const QRegExp *)x[1].s_voidp);
	x[0].s_bool = (bool)xret;
    }
    void x_8(Smoke::Stack x) const {
	// isEmpty()
	bool xret = this->QRegExp::isEmpty();
	x[0].s_bool = (bool)xret;
    }
    void x_9(Smoke::Stack x) const {
	// isValid()
	bool xret = this->QRegExp::isValid();
	x[0].s_bool = (bool)xret;
    }
    void x_10(Smoke::Stack x) const {
	// pattern()
	QString xret = this->QRegExp::pattern();
	x[0].s_voidp = (void*)new QString(xret);
    }
    void x_11(Smoke::Stack x) {
	// setPattern(const QString&)
	this->QRegExp::setPattern(*(const QString *)x[1].s_voidp);
    }
    void x_12(Smoke::Stack x) const {
	// caseSensitive()
	bool xret = this->QRegExp::caseSensitive();
	x[0].s_bool = (bool)xret;
    }
    void x_13(Smoke::Stack x) {
	// setCaseSensitive(bool)
	this->QRegExp::setCaseSensitive((bool)x[1].s_bool);
    }
    void x_14(Smoke::Stack x) const {
	// wildcard()
	bool xret = this->QRegExp::wildcard();
	x[0].s_bool = (bool)xret;
    }
    void x_15(Smoke::Stack x) {
	// setWildcard(bool)
	this->QRegExp::setWildcard((bool)x[1].s_bool);
    }
    void x_16(Smoke::Stack x) const {
	// minimal()
	bool xret = this->QRegExp::minimal();
	x[0].s_bool = (bool)xret;
    }
    void x_17(Smoke::Stack x) {
	// setMinimal(bool)
	this->QRegExp::setMinimal((bool)x[1].s_bool);
    }
    void x_18(Smoke::Stack x) const {
	// exactMatch(const QString&)
	bool xret = this->QRegExp::exactMatch(*(const QString *)x[1].s_voidp);
	x[0].s_bool = (bool)xret;
    }
    void x_19(Smoke::Stack x) const {
	// match(const QString&, int, int*, bool)
	int xret = this->QRegExp::match(*(const QString *)x[1].s_voidp,(int)x[2].s_int,(int*)x[3].s_voidp,(bool)x[4].s_bool);
	x[0].s_int = (int)xret;
    }
    void x_20(Smoke::Stack x) const {
	// match(const QString&, int, int*)
	int xret = this->QRegExp::match(*(const QString *)x[1].s_voidp,(int)x[2].s_int,(int*)x[3].s_voidp);
	x[0].s_int = (int)xret;
    }
    void x_21(Smoke::Stack x) const {
	// match(const QString&, int)
	int xret = this->QRegExp::match(*(const QString *)x[1].s_voidp,(int)x[2].s_int);
	x[0].s_int = (int)xret;
    }
    void x_22(Smoke::Stack x) const {
	// match(const QString&)
	int xret = this->QRegExp::match(*(const QString *)x[1].s_voidp);
	x[0].s_int = (int)xret;
    }
    void x_23(Smoke::Stack x) const {
	// search(const QString&, int)
	int xret = this->QRegExp::search(*(const QString *)x[1].s_voidp,(int)x[2].s_int);
	x[0].s_int = (int)xret;
    }
    void x_24(Smoke::Stack x) const {
	// search(const QString&)
	int xret = this->QRegExp::search(*(const QString *)x[1].s_voidp);
	x[0].s_int = (int)xret;
    }
    void x_25(Smoke::Stack x) const {
	// searchRev(const QString&, int)
	int xret = this->QRegExp::searchRev(*(const QString *)x[1].s_voidp,(int)x[2].s_int);
	x[0].s_int = (int)xret;
    }
    void x_26(Smoke::Stack x) const {
	// searchRev(const QString&)
	int xret = this->QRegExp::searchRev(*(const QString *)x[1].s_voidp);
	x[0].s_int = (int)xret;
    }
    void x_27(Smoke::Stack x) const {
	// matchedLength()
	int xret = this->QRegExp::matchedLength();
	x[0].s_int = (int)xret;
    }
    void x_28(Smoke::Stack x) {
	// capturedTexts()
	QStringList xret = this->QRegExp::capturedTexts();
	x[0].s_voidp = (void*)new QStringList(xret);
    }
    void x_29(Smoke::Stack x) {
	// cap(int)
	QString xret = this->QRegExp::cap((int)x[1].s_int);
	x[0].s_voidp = (void*)new QString(xret);
    }
    void x_30(Smoke::Stack x) {
	// cap()
	QString xret = this->QRegExp::cap();
	x[0].s_voidp = (void*)new QString(xret);
    }
    void x_31(Smoke::Stack x) {
	// pos(int)
	int xret = this->QRegExp::pos((int)x[1].s_int);
	x[0].s_int = (int)xret;
    }
    void x_32(Smoke::Stack x) {
	// pos()
	int xret = this->QRegExp::pos();
	x[0].s_int = (int)xret;
    }
    ~x_QRegExp() {}
};
void xcall_QRegExp(Smoke::Index xi, void *obj, Smoke::Stack args) {
    x_QRegExp *xself = (x_QRegExp*)obj;
    switch(xi) {
	case 0: x_QRegExp::x_0(args);	break;
	case 1: x_QRegExp::x_1(args);	break;
	case 2: x_QRegExp::x_2(args);	break;
	case 3: x_QRegExp::x_3(args);	break;
	case 4: x_QRegExp::x_4(args);	break;
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
	case 32: xself->x_32(args);	break;
	case 33: delete (QRegExp*)xself;	break;
    }
}
