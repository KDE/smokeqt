//Auto-generated by kalyptus. DO NOT EDIT.
#include <smoke.h>
#include <qt_smoke.h>
#include <qimage.h>
#include <qcolor.h>
#include <qcstring.h>
#include <qstring.h>
#include <qmovie.h>
#include <qpixmap.h>
#include <qrect.h>

class x_QMovie : public QMovie {
public:
    static void x_0(Smoke::Stack x) {
	x[0].s_enum = (long)QMovie::SourceEmpty;
    }
    static void x_1(Smoke::Stack x) {
	x[0].s_enum = (long)QMovie::UnrecognizedFormat;
    }
    static void x_2(Smoke::Stack x) {
	x[0].s_enum = (long)QMovie::Paused;
    }
    static void x_3(Smoke::Stack x) {
	x[0].s_enum = (long)QMovie::EndOfFrame;
    }
    static void x_4(Smoke::Stack x) {
	x[0].s_enum = (long)QMovie::EndOfLoop;
    }
    static void x_5(Smoke::Stack x) {
	x[0].s_enum = (long)QMovie::EndOfMovie;
    }
    static void x_6(Smoke::Stack x) {
	x[0].s_enum = (long)QMovie::SpeedChanged;
    }
    static void x_7(Smoke::Stack x) {
	// QMovie()
	x_QMovie* xret = new x_QMovie();
	x[0].s_class = (void*)xret;
    }
    x_QMovie() : QMovie() {
    }
    static void x_8(Smoke::Stack x) {
	// QMovie(int)
	x_QMovie* xret = new x_QMovie((int)x[1].s_int);
	x[0].s_class = (void*)xret;
    }
    x_QMovie(int x1) : QMovie(x1) {
    }
    static void x_9(Smoke::Stack x) {
	// QMovie(QDataSource*, int)
	x_QMovie* xret = new x_QMovie((QDataSource*)x[1].s_class,(int)x[2].s_int);
	x[0].s_class = (void*)xret;
    }
    x_QMovie(QDataSource* x1, int x2) : QMovie(x1, x2) {
    }
    static void x_10(Smoke::Stack x) {
	// QMovie(QDataSource*)
	x_QMovie* xret = new x_QMovie((QDataSource*)x[1].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QMovie(QDataSource* x1) : QMovie(x1) {
    }
    static void x_11(Smoke::Stack x) {
	// QMovie(const QString&, int)
	x_QMovie* xret = new x_QMovie(*(const QString *)x[1].s_class,(int)x[2].s_int);
	x[0].s_class = (void*)xret;
    }
    x_QMovie(const QString& x1, int x2) : QMovie(x1, x2) {
    }
    static void x_12(Smoke::Stack x) {
	// QMovie(const QString&)
	x_QMovie* xret = new x_QMovie(*(const QString *)x[1].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QMovie(const QString& x1) : QMovie(x1) {
    }
    static void x_13(Smoke::Stack x) {
	// QMovie(QByteArray, int)
	x_QMovie* xret = new x_QMovie(*(QByteArray *)x[1].s_class,(int)x[2].s_int);
	x[0].s_class = (void*)xret;
    }
    x_QMovie(QByteArray x1, int x2) : QMovie(x1, x2) {
    }
    static void x_14(Smoke::Stack x) {
	// QMovie(QByteArray)
	x_QMovie* xret = new x_QMovie(*(QByteArray *)x[1].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QMovie(QByteArray x1) : QMovie(x1) {
    }
    static void x_15(Smoke::Stack x) {
	// QMovie(const QMovie&)
	x_QMovie* xret = new x_QMovie(*(const QMovie *)x[1].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QMovie(const QMovie& x1) : QMovie(x1) {
    }
    void x_16(Smoke::Stack x) {
	// operator=(const QMovie&)
	QMovie& xret = this->QMovie::operator=(*(const QMovie *)x[1].s_class);
	x[0].s_class = (void*)&xret;
    }
    void x_17(Smoke::Stack x) const {
	// pushSpace()
	int xret = this->QMovie::pushSpace();
	x[0].s_int = (int)xret;
    }
    void x_18(Smoke::Stack x) {
	// pushData(const uchar*, int)
	this->QMovie::pushData((const uchar*)x[1].s_class,(int)x[2].s_int);
    }
    void x_19(Smoke::Stack x) const {
	// backgroundColor()
	const QColor& xret = this->QMovie::backgroundColor();
	x[0].s_class = (void*)&xret;
    }
    void x_20(Smoke::Stack x) {
	// setBackgroundColor(const QColor&)
	this->QMovie::setBackgroundColor(*(const QColor *)x[1].s_class);
    }
    void x_21(Smoke::Stack x) const {
	// getValidRect()
	const QRect& xret = this->QMovie::getValidRect();
	x[0].s_class = (void*)&xret;
    }
    void x_22(Smoke::Stack x) const {
	// framePixmap()
	const QPixmap& xret = this->QMovie::framePixmap();
	x[0].s_class = (void*)&xret;
    }
    void x_23(Smoke::Stack x) const {
	// frameImage()
	const QImage& xret = this->QMovie::frameImage();
	x[0].s_class = (void*)&xret;
    }
    void x_24(Smoke::Stack x) const {
	// isNull()
	bool xret = this->QMovie::isNull();
	x[0].s_bool = (bool)xret;
    }
    void x_25(Smoke::Stack x) const {
	// frameNumber()
	int xret = this->QMovie::frameNumber();
	x[0].s_int = (int)xret;
    }
    void x_26(Smoke::Stack x) const {
	// steps()
	int xret = this->QMovie::steps();
	x[0].s_int = (int)xret;
    }
    void x_27(Smoke::Stack x) const {
	// paused()
	bool xret = this->QMovie::paused();
	x[0].s_bool = (bool)xret;
    }
    void x_28(Smoke::Stack x) const {
	// finished()
	bool xret = this->QMovie::finished();
	x[0].s_bool = (bool)xret;
    }
    void x_29(Smoke::Stack x) const {
	// running()
	bool xret = this->QMovie::running();
	x[0].s_bool = (bool)xret;
    }
    void x_30(Smoke::Stack x) {
	// unpause()
	this->QMovie::unpause();
    }
    void x_31(Smoke::Stack x) {
	// pause()
	this->QMovie::pause();
    }
    void x_32(Smoke::Stack x) {
	// step()
	this->QMovie::step();
    }
    void x_33(Smoke::Stack x) {
	// step(int)
	this->QMovie::step((int)x[1].s_int);
    }
    void x_34(Smoke::Stack x) {
	// restart()
	this->QMovie::restart();
    }
    void x_35(Smoke::Stack x) const {
	// speed()
	int xret = this->QMovie::speed();
	x[0].s_int = (int)xret;
    }
    void x_36(Smoke::Stack x) {
	// setSpeed(int)
	this->QMovie::setSpeed((int)x[1].s_int);
    }
    void x_37(Smoke::Stack x) {
	// connectResize(QObject*, const char*)
	this->QMovie::connectResize((QObject*)x[1].s_class,(const char*)x[2].s_class);
    }
    void x_38(Smoke::Stack x) {
	// disconnectResize(QObject*, const char*)
	this->QMovie::disconnectResize((QObject*)x[1].s_class,(const char*)x[2].s_class);
    }
    void x_39(Smoke::Stack x) {
	// disconnectResize(QObject*)
	this->QMovie::disconnectResize((QObject*)x[1].s_class);
    }
    void x_40(Smoke::Stack x) {
	// connectUpdate(QObject*, const char*)
	this->QMovie::connectUpdate((QObject*)x[1].s_class,(const char*)x[2].s_class);
    }
    void x_41(Smoke::Stack x) {
	// disconnectUpdate(QObject*, const char*)
	this->QMovie::disconnectUpdate((QObject*)x[1].s_class,(const char*)x[2].s_class);
    }
    void x_42(Smoke::Stack x) {
	// disconnectUpdate(QObject*)
	this->QMovie::disconnectUpdate((QObject*)x[1].s_class);
    }
    void x_43(Smoke::Stack x) {
	// connectStatus(QObject*, const char*)
	this->QMovie::connectStatus((QObject*)x[1].s_class,(const char*)x[2].s_class);
    }
    void x_44(Smoke::Stack x) {
	// disconnectStatus(QObject*, const char*)
	this->QMovie::disconnectStatus((QObject*)x[1].s_class,(const char*)x[2].s_class);
    }
    void x_45(Smoke::Stack x) {
	// disconnectStatus(QObject*)
	this->QMovie::disconnectStatus((QObject*)x[1].s_class);
    }
    ~x_QMovie() {}
};
void xcall_QMovie(Smoke::Index xi, void *obj, Smoke::Stack args) {
    x_QMovie *xself = (x_QMovie*)obj;
    switch(xi) {
	case 0: x_QMovie::x_0(args);	break;
	case 1: x_QMovie::x_1(args);	break;
	case 2: x_QMovie::x_2(args);	break;
	case 3: x_QMovie::x_3(args);	break;
	case 4: x_QMovie::x_4(args);	break;
	case 5: x_QMovie::x_5(args);	break;
	case 6: x_QMovie::x_6(args);	break;
	case 7: x_QMovie::x_7(args);	break;
	case 8: x_QMovie::x_8(args);	break;
	case 9: x_QMovie::x_9(args);	break;
	case 10: x_QMovie::x_10(args);	break;
	case 11: x_QMovie::x_11(args);	break;
	case 12: x_QMovie::x_12(args);	break;
	case 13: x_QMovie::x_13(args);	break;
	case 14: x_QMovie::x_14(args);	break;
	case 15: x_QMovie::x_15(args);	break;
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
	case 36: xself->x_36(args);	break;
	case 37: xself->x_37(args);	break;
	case 38: xself->x_38(args);	break;
	case 39: xself->x_39(args);	break;
	case 40: xself->x_40(args);	break;
	case 41: xself->x_41(args);	break;
	case 42: xself->x_42(args);	break;
	case 43: xself->x_43(args);	break;
	case 44: xself->x_44(args);	break;
	case 45: xself->x_45(args);	break;
	case 46: delete (QMovie*)xself;	break;
    }
}
