//Auto-generated by kalyptus. DO NOT EDIT.
#include <smoke.h>
#include <qt_smoke.h>
#include <qstring.h>
#include <qinputdialog.h>
#include <qstringlist.h>
#include <qlineedit.h>

class x_QInputDialog {
private:
    QInputDialog *xthis;
public:
    x_QInputDialog(void *x) : xthis((QInputDialog*)x) {}
    void x_0(Smoke::Stack x) const {
	// metaObject()
	QMetaObject* xret = xthis->QInputDialog::metaObject();
	x[0].s_class = (void*)xret;
    }
    void x_1(Smoke::Stack x) const {
	// className()
	const char* xret = xthis->QInputDialog::className();
	x[0].s_voidp = (void*)xret;
    }
    void x_2(Smoke::Stack x) {
	// qt_cast(const char*)
	void* xret = xthis->QInputDialog::qt_cast((const char*)x[1].s_voidp);
	x[0].s_voidp = (void*)xret;
    }
    void x_3(Smoke::Stack x) {
	// qt_invoke(int, QUObject*)
	bool xret = xthis->QInputDialog::qt_invoke((int)x[1].s_int,(QUObject*)x[2].s_voidp);
	x[0].s_bool = xret;
    }
    void x_4(Smoke::Stack x) {
	// qt_emit(int, QUObject*)
	bool xret = xthis->QInputDialog::qt_emit((int)x[1].s_int,(QUObject*)x[2].s_voidp);
	x[0].s_bool = xret;
    }
    void x_5(Smoke::Stack x) {
	// qt_property(int, int, QVariant*)
	bool xret = xthis->QInputDialog::qt_property((int)x[1].s_int,(int)x[2].s_int,(QVariant*)x[3].s_class);
	x[0].s_bool = xret;
    }
    void x_6(Smoke::Stack x) {
	// qObject()
	QObject* xret = xthis->QInputDialog::qObject();
	x[0].s_class = (void*)xret;
    }
    static void x_7(Smoke::Stack x) {
	// staticMetaObject()
	QMetaObject* xret = QInputDialog::staticMetaObject();
	x[0].s_class = (void*)xret;
    }
    static void x_8(Smoke::Stack x) {
	// tr(const char*, const char*)
	QString xret = QInputDialog::tr((const char*)x[1].s_voidp,(const char*)x[2].s_voidp);
	x[0].s_voidp = (void*)new QString(xret);
    }
    static void x_9(Smoke::Stack x) {
	// tr(const char*)
	QString xret = QInputDialog::tr((const char*)x[1].s_voidp);
	x[0].s_voidp = (void*)new QString(xret);
    }
    static void x_10(Smoke::Stack x) {
	// trUtf8(const char*, const char*)
	QString xret = QInputDialog::trUtf8((const char*)x[1].s_voidp,(const char*)x[2].s_voidp);
	x[0].s_voidp = (void*)new QString(xret);
    }
    static void x_11(Smoke::Stack x) {
	// trUtf8(const char*)
	QString xret = QInputDialog::trUtf8((const char*)x[1].s_voidp);
	x[0].s_voidp = (void*)new QString(xret);
    }
    static void x_12(Smoke::Stack x) {
	// getText(const QString&, const QString&, QLineEdit::EchoMode, const QString&, bool*, QWidget*, const char*)
	QString xret = QInputDialog::getText(*(const QString *)x[1].s_voidp,*(const QString *)x[2].s_voidp,(QLineEdit::EchoMode)x[3].s_enum,*(const QString *)x[4].s_voidp,(bool*)x[5].s_voidp,(QWidget*)x[6].s_class,(const char*)x[7].s_voidp);
	x[0].s_voidp = (void*)new QString(xret);
    }
    static void x_13(Smoke::Stack x) {
	// getText(const QString&, const QString&, QLineEdit::EchoMode, const QString&, bool*, QWidget*)
	QString xret = QInputDialog::getText(*(const QString *)x[1].s_voidp,*(const QString *)x[2].s_voidp,(QLineEdit::EchoMode)x[3].s_enum,*(const QString *)x[4].s_voidp,(bool*)x[5].s_voidp,(QWidget*)x[6].s_class);
	x[0].s_voidp = (void*)new QString(xret);
    }
    static void x_14(Smoke::Stack x) {
	// getText(const QString&, const QString&, QLineEdit::EchoMode, const QString&, bool*)
	QString xret = QInputDialog::getText(*(const QString *)x[1].s_voidp,*(const QString *)x[2].s_voidp,(QLineEdit::EchoMode)x[3].s_enum,*(const QString *)x[4].s_voidp,(bool*)x[5].s_voidp);
	x[0].s_voidp = (void*)new QString(xret);
    }
    static void x_15(Smoke::Stack x) {
	// getText(const QString&, const QString&, QLineEdit::EchoMode, const QString&)
	QString xret = QInputDialog::getText(*(const QString *)x[1].s_voidp,*(const QString *)x[2].s_voidp,(QLineEdit::EchoMode)x[3].s_enum,*(const QString *)x[4].s_voidp);
	x[0].s_voidp = (void*)new QString(xret);
    }
    static void x_16(Smoke::Stack x) {
	// getText(const QString&, const QString&, QLineEdit::EchoMode)
	QString xret = QInputDialog::getText(*(const QString *)x[1].s_voidp,*(const QString *)x[2].s_voidp,(QLineEdit::EchoMode)x[3].s_enum);
	x[0].s_voidp = (void*)new QString(xret);
    }
    static void x_17(Smoke::Stack x) {
	// getText(const QString&, const QString&)
	QString xret = QInputDialog::getText(*(const QString *)x[1].s_voidp,*(const QString *)x[2].s_voidp);
	x[0].s_voidp = (void*)new QString(xret);
    }
    static void x_18(Smoke::Stack x) {
	// getInteger(const QString&, const QString&, int, int, int, int, bool*, QWidget*, const char*)
	int xret = QInputDialog::getInteger(*(const QString *)x[1].s_voidp,*(const QString *)x[2].s_voidp,(int)x[3].s_int,(int)x[4].s_int,(int)x[5].s_int,(int)x[6].s_int,(bool*)x[7].s_voidp,(QWidget*)x[8].s_class,(const char*)x[9].s_voidp);
	x[0].s_int = xret;
    }
    static void x_19(Smoke::Stack x) {
	// getInteger(const QString&, const QString&, int, int, int, int, bool*, QWidget*)
	int xret = QInputDialog::getInteger(*(const QString *)x[1].s_voidp,*(const QString *)x[2].s_voidp,(int)x[3].s_int,(int)x[4].s_int,(int)x[5].s_int,(int)x[6].s_int,(bool*)x[7].s_voidp,(QWidget*)x[8].s_class);
	x[0].s_int = xret;
    }
    static void x_20(Smoke::Stack x) {
	// getInteger(const QString&, const QString&, int, int, int, int, bool*)
	int xret = QInputDialog::getInteger(*(const QString *)x[1].s_voidp,*(const QString *)x[2].s_voidp,(int)x[3].s_int,(int)x[4].s_int,(int)x[5].s_int,(int)x[6].s_int,(bool*)x[7].s_voidp);
	x[0].s_int = xret;
    }
    static void x_21(Smoke::Stack x) {
	// getInteger(const QString&, const QString&, int, int, int, int)
	int xret = QInputDialog::getInteger(*(const QString *)x[1].s_voidp,*(const QString *)x[2].s_voidp,(int)x[3].s_int,(int)x[4].s_int,(int)x[5].s_int,(int)x[6].s_int);
	x[0].s_int = xret;
    }
    static void x_22(Smoke::Stack x) {
	// getInteger(const QString&, const QString&, int, int, int)
	int xret = QInputDialog::getInteger(*(const QString *)x[1].s_voidp,*(const QString *)x[2].s_voidp,(int)x[3].s_int,(int)x[4].s_int,(int)x[5].s_int);
	x[0].s_int = xret;
    }
    static void x_23(Smoke::Stack x) {
	// getInteger(const QString&, const QString&, int, int)
	int xret = QInputDialog::getInteger(*(const QString *)x[1].s_voidp,*(const QString *)x[2].s_voidp,(int)x[3].s_int,(int)x[4].s_int);
	x[0].s_int = xret;
    }
    static void x_24(Smoke::Stack x) {
	// getInteger(const QString&, const QString&, int)
	int xret = QInputDialog::getInteger(*(const QString *)x[1].s_voidp,*(const QString *)x[2].s_voidp,(int)x[3].s_int);
	x[0].s_int = xret;
    }
    static void x_25(Smoke::Stack x) {
	// getInteger(const QString&, const QString&)
	int xret = QInputDialog::getInteger(*(const QString *)x[1].s_voidp,*(const QString *)x[2].s_voidp);
	x[0].s_int = xret;
    }
    static void x_26(Smoke::Stack x) {
	// getDouble(const QString&, const QString&, double, double, double, int, bool*, QWidget*, const char*)
	double xret = QInputDialog::getDouble(*(const QString *)x[1].s_voidp,*(const QString *)x[2].s_voidp,(double)x[3].s_double,(double)x[4].s_double,(double)x[5].s_double,(int)x[6].s_int,(bool*)x[7].s_voidp,(QWidget*)x[8].s_class,(const char*)x[9].s_voidp);
	x[0].s_double = xret;
    }
    static void x_27(Smoke::Stack x) {
	// getDouble(const QString&, const QString&, double, double, double, int, bool*, QWidget*)
	double xret = QInputDialog::getDouble(*(const QString *)x[1].s_voidp,*(const QString *)x[2].s_voidp,(double)x[3].s_double,(double)x[4].s_double,(double)x[5].s_double,(int)x[6].s_int,(bool*)x[7].s_voidp,(QWidget*)x[8].s_class);
	x[0].s_double = xret;
    }
    static void x_28(Smoke::Stack x) {
	// getDouble(const QString&, const QString&, double, double, double, int, bool*)
	double xret = QInputDialog::getDouble(*(const QString *)x[1].s_voidp,*(const QString *)x[2].s_voidp,(double)x[3].s_double,(double)x[4].s_double,(double)x[5].s_double,(int)x[6].s_int,(bool*)x[7].s_voidp);
	x[0].s_double = xret;
    }
    static void x_29(Smoke::Stack x) {
	// getDouble(const QString&, const QString&, double, double, double, int)
	double xret = QInputDialog::getDouble(*(const QString *)x[1].s_voidp,*(const QString *)x[2].s_voidp,(double)x[3].s_double,(double)x[4].s_double,(double)x[5].s_double,(int)x[6].s_int);
	x[0].s_double = xret;
    }
    static void x_30(Smoke::Stack x) {
	// getDouble(const QString&, const QString&, double, double, double)
	double xret = QInputDialog::getDouble(*(const QString *)x[1].s_voidp,*(const QString *)x[2].s_voidp,(double)x[3].s_double,(double)x[4].s_double,(double)x[5].s_double);
	x[0].s_double = xret;
    }
    static void x_31(Smoke::Stack x) {
	// getDouble(const QString&, const QString&, double, double)
	double xret = QInputDialog::getDouble(*(const QString *)x[1].s_voidp,*(const QString *)x[2].s_voidp,(double)x[3].s_double,(double)x[4].s_double);
	x[0].s_double = xret;
    }
    static void x_32(Smoke::Stack x) {
	// getDouble(const QString&, const QString&, double)
	double xret = QInputDialog::getDouble(*(const QString *)x[1].s_voidp,*(const QString *)x[2].s_voidp,(double)x[3].s_double);
	x[0].s_double = xret;
    }
    static void x_33(Smoke::Stack x) {
	// getDouble(const QString&, const QString&)
	double xret = QInputDialog::getDouble(*(const QString *)x[1].s_voidp,*(const QString *)x[2].s_voidp);
	x[0].s_double = xret;
    }
    static void x_34(Smoke::Stack x) {
	// getItem(const QString&, const QString&, const QStringList&, int, bool, bool*, QWidget*, const char*)
	QString xret = QInputDialog::getItem(*(const QString *)x[1].s_voidp,*(const QString *)x[2].s_voidp,*(const QStringList *)x[3].s_voidp,(int)x[4].s_int,(bool)x[5].s_bool,(bool*)x[6].s_voidp,(QWidget*)x[7].s_class,(const char*)x[8].s_voidp);
	x[0].s_voidp = (void*)new QString(xret);
    }
    static void x_35(Smoke::Stack x) {
	// getItem(const QString&, const QString&, const QStringList&, int, bool, bool*, QWidget*)
	QString xret = QInputDialog::getItem(*(const QString *)x[1].s_voidp,*(const QString *)x[2].s_voidp,*(const QStringList *)x[3].s_voidp,(int)x[4].s_int,(bool)x[5].s_bool,(bool*)x[6].s_voidp,(QWidget*)x[7].s_class);
	x[0].s_voidp = (void*)new QString(xret);
    }
    static void x_36(Smoke::Stack x) {
	// getItem(const QString&, const QString&, const QStringList&, int, bool, bool*)
	QString xret = QInputDialog::getItem(*(const QString *)x[1].s_voidp,*(const QString *)x[2].s_voidp,*(const QStringList *)x[3].s_voidp,(int)x[4].s_int,(bool)x[5].s_bool,(bool*)x[6].s_voidp);
	x[0].s_voidp = (void*)new QString(xret);
    }
    static void x_37(Smoke::Stack x) {
	// getItem(const QString&, const QString&, const QStringList&, int, bool)
	QString xret = QInputDialog::getItem(*(const QString *)x[1].s_voidp,*(const QString *)x[2].s_voidp,*(const QStringList *)x[3].s_voidp,(int)x[4].s_int,(bool)x[5].s_bool);
	x[0].s_voidp = (void*)new QString(xret);
    }
    static void x_38(Smoke::Stack x) {
	// getItem(const QString&, const QString&, const QStringList&, int)
	QString xret = QInputDialog::getItem(*(const QString *)x[1].s_voidp,*(const QString *)x[2].s_voidp,*(const QStringList *)x[3].s_voidp,(int)x[4].s_int);
	x[0].s_voidp = (void*)new QString(xret);
    }
    static void x_39(Smoke::Stack x) {
	// getItem(const QString&, const QString&, const QStringList&)
	QString xret = QInputDialog::getItem(*(const QString *)x[1].s_voidp,*(const QString *)x[2].s_voidp,*(const QStringList *)x[3].s_voidp);
	x[0].s_voidp = (void*)new QString(xret);
    }
    ~x_QInputDialog() { qt_Smoke->binding->deleted(171, (void*)this); }
};
void xcall_QInputDialog(Smoke::Index xi, void *obj, Smoke::Stack args) {
    x_QInputDialog xtmp(obj), *xself = &xtmp;
    switch(xi) {
	case 0: xself->x_0(args);	break;
	case 1: xself->x_1(args);	break;
	case 2: xself->x_2(args);	break;
	case 3: xself->x_3(args);	break;
	case 4: xself->x_4(args);	break;
	case 5: xself->x_5(args);	break;
	case 6: xself->x_6(args);	break;
	case 7: x_QInputDialog::x_7(args);	break;
	case 8: x_QInputDialog::x_8(args);	break;
	case 9: x_QInputDialog::x_9(args);	break;
	case 10: x_QInputDialog::x_10(args);	break;
	case 11: x_QInputDialog::x_11(args);	break;
	case 12: x_QInputDialog::x_12(args);	break;
	case 13: x_QInputDialog::x_13(args);	break;
	case 14: x_QInputDialog::x_14(args);	break;
	case 15: x_QInputDialog::x_15(args);	break;
	case 16: x_QInputDialog::x_16(args);	break;
	case 17: x_QInputDialog::x_17(args);	break;
	case 18: x_QInputDialog::x_18(args);	break;
	case 19: x_QInputDialog::x_19(args);	break;
	case 20: x_QInputDialog::x_20(args);	break;
	case 21: x_QInputDialog::x_21(args);	break;
	case 22: x_QInputDialog::x_22(args);	break;
	case 23: x_QInputDialog::x_23(args);	break;
	case 24: x_QInputDialog::x_24(args);	break;
	case 25: x_QInputDialog::x_25(args);	break;
	case 26: x_QInputDialog::x_26(args);	break;
	case 27: x_QInputDialog::x_27(args);	break;
	case 28: x_QInputDialog::x_28(args);	break;
	case 29: x_QInputDialog::x_29(args);	break;
	case 30: x_QInputDialog::x_30(args);	break;
	case 31: x_QInputDialog::x_31(args);	break;
	case 32: x_QInputDialog::x_32(args);	break;
	case 33: x_QInputDialog::x_33(args);	break;
	case 34: x_QInputDialog::x_34(args);	break;
	case 35: x_QInputDialog::x_35(args);	break;
	case 36: x_QInputDialog::x_36(args);	break;
	case 37: x_QInputDialog::x_37(args);	break;
	case 38: x_QInputDialog::x_38(args);	break;
	case 39: x_QInputDialog::x_39(args);	break;
    }
}
