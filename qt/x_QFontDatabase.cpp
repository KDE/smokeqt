//Auto-generated by kalyptus. DO NOT EDIT.
#include <smoke.h>
#include <qfontdatabase.h>
#include <qfont.h>
#include <qstring.h>
#include <qstringlist.h>

class x_QFontDatabase : public QFontDatabase {
public:
    static void x_0(Smoke::Stack x) {
	// QFontDatabase()
	x_QFontDatabase* xret = new x_QFontDatabase();
	x[0].s_voidp = (void*)xret;
    }
    x_QFontDatabase() : QFontDatabase() {
    }
    void x_1(Smoke::Stack x) const {
	// families()
	QStringList xret = this->QFontDatabase::families();
	x[0].s_voidp = (void*)new QStringList(xret);
    }
    void x_2(Smoke::Stack x) const {
	// styles(const QString&)
	QStringList xret = this->QFontDatabase::styles(*(const QString *)x[1].s_voidp);
	x[0].s_voidp = (void*)new QStringList(xret);
    }
    void x_3(Smoke::Stack x) {
	// pointSizes(const QString&, const QString&)
	QValueList<int> xret = this->QFontDatabase::pointSizes(*(const QString *)x[1].s_voidp,*(const QString *)x[2].s_voidp);
	x[0].s_voidp = (void*)new QValueList<int>(xret);
    }
    void x_4(Smoke::Stack x) {
	// pointSizes(const QString&)
	QValueList<int> xret = this->QFontDatabase::pointSizes(*(const QString *)x[1].s_voidp);
	x[0].s_voidp = (void*)new QValueList<int>(xret);
    }
    void x_5(Smoke::Stack x) {
	// smoothSizes(const QString&, const QString&)
	QValueList<int> xret = this->QFontDatabase::smoothSizes(*(const QString *)x[1].s_voidp,*(const QString *)x[2].s_voidp);
	x[0].s_voidp = (void*)new QValueList<int>(xret);
    }
    void x_6(Smoke::Stack x) {
	// styleString(const QFont&)
	QString xret = this->QFontDatabase::styleString(*(const QFont *)x[1].s_voidp);
	x[0].s_voidp = (void*)new QString(xret);
    }
    void x_7(Smoke::Stack x) {
	// font(const QString&, const QString&, int)
	QFont xret = this->QFontDatabase::font(*(const QString *)x[1].s_voidp,*(const QString *)x[2].s_voidp,(int)x[3].s_int);
	x[0].s_voidp = (void*)new QFont(xret);
    }
    void x_8(Smoke::Stack x) const {
	// isBitmapScalable(const QString&, const QString&)
	bool xret = this->QFontDatabase::isBitmapScalable(*(const QString *)x[1].s_voidp,*(const QString *)x[2].s_voidp);
	x[0].s_bool = (bool)xret;
    }
    void x_9(Smoke::Stack x) const {
	// isBitmapScalable(const QString&)
	bool xret = this->QFontDatabase::isBitmapScalable(*(const QString *)x[1].s_voidp);
	x[0].s_bool = (bool)xret;
    }
    void x_10(Smoke::Stack x) const {
	// isSmoothlyScalable(const QString&, const QString&)
	bool xret = this->QFontDatabase::isSmoothlyScalable(*(const QString *)x[1].s_voidp,*(const QString *)x[2].s_voidp);
	x[0].s_bool = (bool)xret;
    }
    void x_11(Smoke::Stack x) const {
	// isSmoothlyScalable(const QString&)
	bool xret = this->QFontDatabase::isSmoothlyScalable(*(const QString *)x[1].s_voidp);
	x[0].s_bool = (bool)xret;
    }
    void x_12(Smoke::Stack x) const {
	// isScalable(const QString&, const QString&)
	bool xret = this->QFontDatabase::isScalable(*(const QString *)x[1].s_voidp,*(const QString *)x[2].s_voidp);
	x[0].s_bool = (bool)xret;
    }
    void x_13(Smoke::Stack x) const {
	// isScalable(const QString&)
	bool xret = this->QFontDatabase::isScalable(*(const QString *)x[1].s_voidp);
	x[0].s_bool = (bool)xret;
    }
    void x_14(Smoke::Stack x) const {
	// isFixedPitch(const QString&, const QString&)
	bool xret = this->QFontDatabase::isFixedPitch(*(const QString *)x[1].s_voidp,*(const QString *)x[2].s_voidp);
	x[0].s_bool = (bool)xret;
    }
    void x_15(Smoke::Stack x) const {
	// isFixedPitch(const QString&)
	bool xret = this->QFontDatabase::isFixedPitch(*(const QString *)x[1].s_voidp);
	x[0].s_bool = (bool)xret;
    }
    void x_16(Smoke::Stack x) const {
	// italic(const QString&, const QString&)
	bool xret = this->QFontDatabase::italic(*(const QString *)x[1].s_voidp,*(const QString *)x[2].s_voidp);
	x[0].s_bool = (bool)xret;
    }
    void x_17(Smoke::Stack x) const {
	// bold(const QString&, const QString&)
	bool xret = this->QFontDatabase::bold(*(const QString *)x[1].s_voidp,*(const QString *)x[2].s_voidp);
	x[0].s_bool = (bool)xret;
    }
    void x_18(Smoke::Stack x) const {
	// weight(const QString&, const QString&)
	int xret = this->QFontDatabase::weight(*(const QString *)x[1].s_voidp,*(const QString *)x[2].s_voidp);
	x[0].s_int = (int)xret;
    }
    void x_19(Smoke::Stack x) const {
	// families(bool)
	QStringList xret = this->QFontDatabase::families((bool)x[1].s_bool);
	x[0].s_voidp = (void*)new QStringList(xret);
    }
    void x_20(Smoke::Stack x) const {
	// styles(const QString&, const QString&)
	QStringList xret = this->QFontDatabase::styles(*(const QString *)x[1].s_voidp,*(const QString *)x[2].s_voidp);
	x[0].s_voidp = (void*)new QStringList(xret);
    }
    void x_21(Smoke::Stack x) {
	// pointSizes(const QString&, const QString&, const QString&)
	QValueList<int> xret = this->QFontDatabase::pointSizes(*(const QString *)x[1].s_voidp,*(const QString *)x[2].s_voidp,*(const QString *)x[3].s_voidp);
	x[0].s_voidp = (void*)new QValueList<int>(xret);
    }
    void x_22(Smoke::Stack x) {
	// smoothSizes(const QString&, const QString&, const QString&)
	QValueList<int> xret = this->QFontDatabase::smoothSizes(*(const QString *)x[1].s_voidp,*(const QString *)x[2].s_voidp,*(const QString *)x[3].s_voidp);
	x[0].s_voidp = (void*)new QValueList<int>(xret);
    }
    void x_23(Smoke::Stack x) {
	// font(const QString&, const QString&, int, const QString&)
	QFont xret = this->QFontDatabase::font(*(const QString *)x[1].s_voidp,*(const QString *)x[2].s_voidp,(int)x[3].s_int,*(const QString *)x[4].s_voidp);
	x[0].s_voidp = (void*)new QFont(xret);
    }
    void x_24(Smoke::Stack x) const {
	// isBitmapScalable(const QString&, const QString&, const QString&)
	bool xret = this->QFontDatabase::isBitmapScalable(*(const QString *)x[1].s_voidp,*(const QString *)x[2].s_voidp,*(const QString *)x[3].s_voidp);
	x[0].s_bool = (bool)xret;
    }
    void x_25(Smoke::Stack x) const {
	// isSmoothlyScalable(const QString&, const QString&, const QString&)
	bool xret = this->QFontDatabase::isSmoothlyScalable(*(const QString *)x[1].s_voidp,*(const QString *)x[2].s_voidp,*(const QString *)x[3].s_voidp);
	x[0].s_bool = (bool)xret;
    }
    void x_26(Smoke::Stack x) const {
	// isScalable(const QString&, const QString&, const QString&)
	bool xret = this->QFontDatabase::isScalable(*(const QString *)x[1].s_voidp,*(const QString *)x[2].s_voidp,*(const QString *)x[3].s_voidp);
	x[0].s_bool = (bool)xret;
    }
    void x_27(Smoke::Stack x) const {
	// isFixedPitch(const QString&, const QString&, const QString&)
	bool xret = this->QFontDatabase::isFixedPitch(*(const QString *)x[1].s_voidp,*(const QString *)x[2].s_voidp,*(const QString *)x[3].s_voidp);
	x[0].s_bool = (bool)xret;
    }
    void x_28(Smoke::Stack x) const {
	// italic(const QString&, const QString&, const QString&)
	bool xret = this->QFontDatabase::italic(*(const QString *)x[1].s_voidp,*(const QString *)x[2].s_voidp,*(const QString *)x[3].s_voidp);
	x[0].s_bool = (bool)xret;
    }
    void x_29(Smoke::Stack x) const {
	// bold(const QString&, const QString&, const QString&)
	bool xret = this->QFontDatabase::bold(*(const QString *)x[1].s_voidp,*(const QString *)x[2].s_voidp,*(const QString *)x[3].s_voidp);
	x[0].s_bool = (bool)xret;
    }
    void x_30(Smoke::Stack x) const {
	// weight(const QString&, const QString&, const QString&)
	int xret = this->QFontDatabase::weight(*(const QString *)x[1].s_voidp,*(const QString *)x[2].s_voidp,*(const QString *)x[3].s_voidp);
	x[0].s_int = (int)xret;
    }
    static void x_31(Smoke::Stack x) {
	// standardSizes()
	QValueList<int> xret = QFontDatabase::standardSizes();
	x[0].s_voidp = (void*)new QValueList<int>(xret);
    }
    static void x_32(Smoke::Stack x) {
	// scriptName(QFont::Script)
	QString xret = QFontDatabase::scriptName(*(QFont::Script *)x[1].s_voidp);
	x[0].s_voidp = (void*)new QString(xret);
    }
    static void x_33(Smoke::Stack x) {
	// scriptSample(QFont::Script)
	QString xret = QFontDatabase::scriptSample(*(QFont::Script *)x[1].s_voidp);
	x[0].s_voidp = (void*)new QString(xret);
    }
    ~x_QFontDatabase() {}
};
void xcall_QFontDatabase(Smoke::Index xi, void *obj, Smoke::Stack args) {
    x_QFontDatabase *xself = (x_QFontDatabase*)obj;
    switch(xi) {
	case 0: x_QFontDatabase::x_0(args);	break;
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
	case 31: x_QFontDatabase::x_31(args);	break;
	case 32: x_QFontDatabase::x_32(args);	break;
	case 33: x_QFontDatabase::x_33(args);	break;
    }
}
