//Auto-generated by kalyptus. DO NOT EDIT.
#include <smoke.h>
#include <qt_smoke.h>
#include <qfontinfo.h>
#include <qstring.h>
#include <qfont.h>

class x_QFontInfo : public QFontInfo {
public:
    static void x_0(Smoke::Stack x) {
	// QFontInfo(const QFont&)
	x_QFontInfo* xret = new x_QFontInfo(*(const QFont *)x[1].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QFontInfo(const QFont& x1) : QFontInfo(x1) {
    }
    static void x_1(Smoke::Stack x) {
	// QFontInfo(const QFontInfo&)
	x_QFontInfo* xret = new x_QFontInfo(*(const QFontInfo *)x[1].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QFontInfo(const QFontInfo& x1) : QFontInfo(x1) {
    }
    void x_2(Smoke::Stack x) {
	// operator=(const QFontInfo&)
	QFontInfo& xret = this->QFontInfo::operator=(*(const QFontInfo *)x[1].s_class);
	x[0].s_class = (void*)&xret;
    }
    void x_3(Smoke::Stack x) const {
	// family()
	QString xret = this->QFontInfo::family();
	x[0].s_class = (void*)new QString(xret);
    }
    void x_4(Smoke::Stack x) const {
	// pixelSize()
	int xret = this->QFontInfo::pixelSize();
	x[0].s_int = (int)xret;
    }
    void x_5(Smoke::Stack x) const {
	// pointSize()
	int xret = this->QFontInfo::pointSize();
	x[0].s_int = (int)xret;
    }
    void x_6(Smoke::Stack x) const {
	// italic()
	bool xret = this->QFontInfo::italic();
	x[0].s_bool = (bool)xret;
    }
    void x_7(Smoke::Stack x) const {
	// weight()
	int xret = this->QFontInfo::weight();
	x[0].s_int = (int)xret;
    }
    void x_8(Smoke::Stack x) const {
	// bold()
	bool xret = this->QFontInfo::bold();
	x[0].s_bool = (bool)xret;
    }
    void x_9(Smoke::Stack x) const {
	// underline()
	bool xret = this->QFontInfo::underline();
	x[0].s_bool = (bool)xret;
    }
    void x_10(Smoke::Stack x) const {
	// strikeOut()
	bool xret = this->QFontInfo::strikeOut();
	x[0].s_bool = (bool)xret;
    }
    void x_11(Smoke::Stack x) const {
	// fixedPitch()
	bool xret = this->QFontInfo::fixedPitch();
	x[0].s_bool = (bool)xret;
    }
    void x_12(Smoke::Stack x) const {
	// styleHint()
	QFont::StyleHint xret = this->QFontInfo::styleHint();
	x[0].s_class = (void*)new QFont::StyleHint(xret);
    }
    void x_13(Smoke::Stack x) const {
	// rawMode()
	bool xret = this->QFontInfo::rawMode();
	x[0].s_bool = (bool)xret;
    }
    void x_14(Smoke::Stack x) const {
	// exactMatch()
	bool xret = this->QFontInfo::exactMatch();
	x[0].s_bool = (bool)xret;
    }
    ~x_QFontInfo() {}
};
void xcall_QFontInfo(Smoke::Index xi, void *obj, Smoke::Stack args) {
    x_QFontInfo *xself = (x_QFontInfo*)obj;
    switch(xi) {
	case 0: x_QFontInfo::x_0(args);	break;
	case 1: x_QFontInfo::x_1(args);	break;
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
	case 15: delete (QFontInfo*)xself;	break;
    }
}
