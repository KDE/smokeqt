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
    static void x_0(Smoke::Stack x) {
	// getText(const QString&, const QString&, QLineEdit::EchoMode, const QString&, bool*, QWidget*, const char*)
	QString xret = QInputDialog::getText(*(const QString *)x[1].s_class,*(const QString *)x[2].s_class,*(QLineEdit::EchoMode *)x[3].s_class,*(const QString *)x[4].s_class,(bool*)x[5].s_class,(QWidget*)x[6].s_class,(const char*)x[7].s_class);
	x[0].s_class = (void*)new QString(xret);
    }
    static void x_1(Smoke::Stack x) {
	// getText(const QString&, const QString&, QLineEdit::EchoMode, const QString&, bool*, QWidget*)
	QString xret = QInputDialog::getText(*(const QString *)x[1].s_class,*(const QString *)x[2].s_class,*(QLineEdit::EchoMode *)x[3].s_class,*(const QString *)x[4].s_class,(bool*)x[5].s_class,(QWidget*)x[6].s_class);
	x[0].s_class = (void*)new QString(xret);
    }
    static void x_2(Smoke::Stack x) {
	// getText(const QString&, const QString&, QLineEdit::EchoMode, const QString&, bool*)
	QString xret = QInputDialog::getText(*(const QString *)x[1].s_class,*(const QString *)x[2].s_class,*(QLineEdit::EchoMode *)x[3].s_class,*(const QString *)x[4].s_class,(bool*)x[5].s_class);
	x[0].s_class = (void*)new QString(xret);
    }
    static void x_3(Smoke::Stack x) {
	// getText(const QString&, const QString&, QLineEdit::EchoMode, const QString&)
	QString xret = QInputDialog::getText(*(const QString *)x[1].s_class,*(const QString *)x[2].s_class,*(QLineEdit::EchoMode *)x[3].s_class,*(const QString *)x[4].s_class);
	x[0].s_class = (void*)new QString(xret);
    }
    static void x_4(Smoke::Stack x) {
	// getText(const QString&, const QString&, QLineEdit::EchoMode)
	QString xret = QInputDialog::getText(*(const QString *)x[1].s_class,*(const QString *)x[2].s_class,*(QLineEdit::EchoMode *)x[3].s_class);
	x[0].s_class = (void*)new QString(xret);
    }
    static void x_5(Smoke::Stack x) {
	// getText(const QString&, const QString&)
	QString xret = QInputDialog::getText(*(const QString *)x[1].s_class,*(const QString *)x[2].s_class);
	x[0].s_class = (void*)new QString(xret);
    }
    static void x_6(Smoke::Stack x) {
	// getInteger(const QString&, const QString&, int, int, int, int, bool*, QWidget*, const char*)
	int xret = QInputDialog::getInteger(*(const QString *)x[1].s_class,*(const QString *)x[2].s_class,(int)x[3].s_int,(int)x[4].s_int,(int)x[5].s_int,(int)x[6].s_int,(bool*)x[7].s_class,(QWidget*)x[8].s_class,(const char*)x[9].s_class);
	x[0].s_int = (int)xret;
    }
    static void x_7(Smoke::Stack x) {
	// getInteger(const QString&, const QString&, int, int, int, int, bool*, QWidget*)
	int xret = QInputDialog::getInteger(*(const QString *)x[1].s_class,*(const QString *)x[2].s_class,(int)x[3].s_int,(int)x[4].s_int,(int)x[5].s_int,(int)x[6].s_int,(bool*)x[7].s_class,(QWidget*)x[8].s_class);
	x[0].s_int = (int)xret;
    }
    static void x_8(Smoke::Stack x) {
	// getInteger(const QString&, const QString&, int, int, int, int, bool*)
	int xret = QInputDialog::getInteger(*(const QString *)x[1].s_class,*(const QString *)x[2].s_class,(int)x[3].s_int,(int)x[4].s_int,(int)x[5].s_int,(int)x[6].s_int,(bool*)x[7].s_class);
	x[0].s_int = (int)xret;
    }
    static void x_9(Smoke::Stack x) {
	// getInteger(const QString&, const QString&, int, int, int, int)
	int xret = QInputDialog::getInteger(*(const QString *)x[1].s_class,*(const QString *)x[2].s_class,(int)x[3].s_int,(int)x[4].s_int,(int)x[5].s_int,(int)x[6].s_int);
	x[0].s_int = (int)xret;
    }
    static void x_10(Smoke::Stack x) {
	// getInteger(const QString&, const QString&, int, int, int)
	int xret = QInputDialog::getInteger(*(const QString *)x[1].s_class,*(const QString *)x[2].s_class,(int)x[3].s_int,(int)x[4].s_int,(int)x[5].s_int);
	x[0].s_int = (int)xret;
    }
    static void x_11(Smoke::Stack x) {
	// getInteger(const QString&, const QString&, int, int)
	int xret = QInputDialog::getInteger(*(const QString *)x[1].s_class,*(const QString *)x[2].s_class,(int)x[3].s_int,(int)x[4].s_int);
	x[0].s_int = (int)xret;
    }
    static void x_12(Smoke::Stack x) {
	// getInteger(const QString&, const QString&, int)
	int xret = QInputDialog::getInteger(*(const QString *)x[1].s_class,*(const QString *)x[2].s_class,(int)x[3].s_int);
	x[0].s_int = (int)xret;
    }
    static void x_13(Smoke::Stack x) {
	// getInteger(const QString&, const QString&)
	int xret = QInputDialog::getInteger(*(const QString *)x[1].s_class,*(const QString *)x[2].s_class);
	x[0].s_int = (int)xret;
    }
    static void x_14(Smoke::Stack x) {
	// getDouble(const QString&, const QString&, double, double, double, int, bool*, QWidget*, const char*)
	double xret = QInputDialog::getDouble(*(const QString *)x[1].s_class,*(const QString *)x[2].s_class,(double)x[3].s_double,(double)x[4].s_double,(double)x[5].s_double,(int)x[6].s_int,(bool*)x[7].s_class,(QWidget*)x[8].s_class,(const char*)x[9].s_class);
	x[0].s_double = (double)xret;
    }
    static void x_15(Smoke::Stack x) {
	// getDouble(const QString&, const QString&, double, double, double, int, bool*, QWidget*)
	double xret = QInputDialog::getDouble(*(const QString *)x[1].s_class,*(const QString *)x[2].s_class,(double)x[3].s_double,(double)x[4].s_double,(double)x[5].s_double,(int)x[6].s_int,(bool*)x[7].s_class,(QWidget*)x[8].s_class);
	x[0].s_double = (double)xret;
    }
    static void x_16(Smoke::Stack x) {
	// getDouble(const QString&, const QString&, double, double, double, int, bool*)
	double xret = QInputDialog::getDouble(*(const QString *)x[1].s_class,*(const QString *)x[2].s_class,(double)x[3].s_double,(double)x[4].s_double,(double)x[5].s_double,(int)x[6].s_int,(bool*)x[7].s_class);
	x[0].s_double = (double)xret;
    }
    static void x_17(Smoke::Stack x) {
	// getDouble(const QString&, const QString&, double, double, double, int)
	double xret = QInputDialog::getDouble(*(const QString *)x[1].s_class,*(const QString *)x[2].s_class,(double)x[3].s_double,(double)x[4].s_double,(double)x[5].s_double,(int)x[6].s_int);
	x[0].s_double = (double)xret;
    }
    static void x_18(Smoke::Stack x) {
	// getDouble(const QString&, const QString&, double, double, double)
	double xret = QInputDialog::getDouble(*(const QString *)x[1].s_class,*(const QString *)x[2].s_class,(double)x[3].s_double,(double)x[4].s_double,(double)x[5].s_double);
	x[0].s_double = (double)xret;
    }
    static void x_19(Smoke::Stack x) {
	// getDouble(const QString&, const QString&, double, double)
	double xret = QInputDialog::getDouble(*(const QString *)x[1].s_class,*(const QString *)x[2].s_class,(double)x[3].s_double,(double)x[4].s_double);
	x[0].s_double = (double)xret;
    }
    static void x_20(Smoke::Stack x) {
	// getDouble(const QString&, const QString&, double)
	double xret = QInputDialog::getDouble(*(const QString *)x[1].s_class,*(const QString *)x[2].s_class,(double)x[3].s_double);
	x[0].s_double = (double)xret;
    }
    static void x_21(Smoke::Stack x) {
	// getDouble(const QString&, const QString&)
	double xret = QInputDialog::getDouble(*(const QString *)x[1].s_class,*(const QString *)x[2].s_class);
	x[0].s_double = (double)xret;
    }
    static void x_22(Smoke::Stack x) {
	// getItem(const QString&, const QString&, const QStringList&, int, bool, bool*, QWidget*, const char*)
	QString xret = QInputDialog::getItem(*(const QString *)x[1].s_class,*(const QString *)x[2].s_class,*(const QStringList *)x[3].s_class,(int)x[4].s_int,(bool)x[5].s_bool,(bool*)x[6].s_class,(QWidget*)x[7].s_class,(const char*)x[8].s_class);
	x[0].s_class = (void*)new QString(xret);
    }
    static void x_23(Smoke::Stack x) {
	// getItem(const QString&, const QString&, const QStringList&, int, bool, bool*, QWidget*)
	QString xret = QInputDialog::getItem(*(const QString *)x[1].s_class,*(const QString *)x[2].s_class,*(const QStringList *)x[3].s_class,(int)x[4].s_int,(bool)x[5].s_bool,(bool*)x[6].s_class,(QWidget*)x[7].s_class);
	x[0].s_class = (void*)new QString(xret);
    }
    static void x_24(Smoke::Stack x) {
	// getItem(const QString&, const QString&, const QStringList&, int, bool, bool*)
	QString xret = QInputDialog::getItem(*(const QString *)x[1].s_class,*(const QString *)x[2].s_class,*(const QStringList *)x[3].s_class,(int)x[4].s_int,(bool)x[5].s_bool,(bool*)x[6].s_class);
	x[0].s_class = (void*)new QString(xret);
    }
    static void x_25(Smoke::Stack x) {
	// getItem(const QString&, const QString&, const QStringList&, int, bool)
	QString xret = QInputDialog::getItem(*(const QString *)x[1].s_class,*(const QString *)x[2].s_class,*(const QStringList *)x[3].s_class,(int)x[4].s_int,(bool)x[5].s_bool);
	x[0].s_class = (void*)new QString(xret);
    }
    static void x_26(Smoke::Stack x) {
	// getItem(const QString&, const QString&, const QStringList&, int)
	QString xret = QInputDialog::getItem(*(const QString *)x[1].s_class,*(const QString *)x[2].s_class,*(const QStringList *)x[3].s_class,(int)x[4].s_int);
	x[0].s_class = (void*)new QString(xret);
    }
    static void x_27(Smoke::Stack x) {
	// getItem(const QString&, const QString&, const QStringList&)
	QString xret = QInputDialog::getItem(*(const QString *)x[1].s_class,*(const QString *)x[2].s_class,*(const QStringList *)x[3].s_class);
	x[0].s_class = (void*)new QString(xret);
    }
    ~x_QInputDialog() {}
};
void xcall_QInputDialog(Smoke::Index xi, void *obj, Smoke::Stack args) {
    x_QInputDialog xtmp(obj), *xself = &xtmp;
    switch(xi) {
	case 0: x_QInputDialog::x_0(args);	break;
	case 1: x_QInputDialog::x_1(args);	break;
	case 2: x_QInputDialog::x_2(args);	break;
	case 3: x_QInputDialog::x_3(args);	break;
	case 4: x_QInputDialog::x_4(args);	break;
	case 5: x_QInputDialog::x_5(args);	break;
	case 6: x_QInputDialog::x_6(args);	break;
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
    }
}
