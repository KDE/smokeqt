//Auto-generated by kalyptus. DO NOT EDIT.
#include <smoke.h>
#include <qtextstream.h>
#include <qcstring.h>
#include <qstring.h>

class x_QTextStream : public QTextStream {
public:
    static void x_0(Smoke::Stack x) {
	x[0].s_long = (long)QTextStream::Locale;
    }
    static void x_1(Smoke::Stack x) {
	x[0].s_long = (long)QTextStream::Latin1;
    }
    static void x_2(Smoke::Stack x) {
	x[0].s_long = (long)QTextStream::Unicode;
    }
    static void x_3(Smoke::Stack x) {
	x[0].s_long = (long)QTextStream::UnicodeNetworkOrder;
    }
    static void x_4(Smoke::Stack x) {
	x[0].s_long = (long)QTextStream::UnicodeReverse;
    }
    static void x_5(Smoke::Stack x) {
	x[0].s_long = (long)QTextStream::RawUnicode;
    }
    static void x_6(Smoke::Stack x) {
	x[0].s_long = (long)QTextStream::UnicodeUTF8;
    }
    static void x_7(Smoke::Stack x) {
	x[0].s_long = (long)QTextStream::skipws;
    }
    static void x_8(Smoke::Stack x) {
	x[0].s_long = (long)QTextStream::left;
    }
    static void x_9(Smoke::Stack x) {
	x[0].s_long = (long)QTextStream::right;
    }
    static void x_10(Smoke::Stack x) {
	x[0].s_long = (long)QTextStream::internal;
    }
    static void x_11(Smoke::Stack x) {
	x[0].s_long = (long)QTextStream::bin;
    }
    static void x_12(Smoke::Stack x) {
	x[0].s_long = (long)QTextStream::oct;
    }
    static void x_13(Smoke::Stack x) {
	x[0].s_long = (long)QTextStream::dec;
    }
    static void x_14(Smoke::Stack x) {
	x[0].s_long = (long)QTextStream::hex;
    }
    static void x_15(Smoke::Stack x) {
	x[0].s_long = (long)QTextStream::showbase;
    }
    static void x_16(Smoke::Stack x) {
	x[0].s_long = (long)QTextStream::showpoint;
    }
    static void x_17(Smoke::Stack x) {
	x[0].s_long = (long)QTextStream::uppercase;
    }
    static void x_18(Smoke::Stack x) {
	x[0].s_long = (long)QTextStream::showpos;
    }
    static void x_19(Smoke::Stack x) {
	x[0].s_long = (long)QTextStream::scientific;
    }
    static void x_20(Smoke::Stack x) {
	x[0].s_long = (long)QTextStream::fixed;
    }
    void x_21(Smoke::Stack x) {
	// setEncoding(QTextStream::Encoding)
	this->QTextStream::setEncoding(*(QTextStream::Encoding *)x[1].s_voidp);
    }
    void x_22(Smoke::Stack x) {
	// setCodec(QTextCodec*)
	this->QTextStream::setCodec((QTextCodec*)x[1].s_voidp);
    }
    static void x_23(Smoke::Stack x) {
	// QTextStream()
	x_QTextStream* xret = new x_QTextStream();
	x[0].s_voidp = (void*)xret;
    }
    x_QTextStream() : QTextStream() {
    }
    static void x_24(Smoke::Stack x) {
	// QTextStream(QIODevice*)
	x_QTextStream* xret = new x_QTextStream((QIODevice*)x[1].s_voidp);
	x[0].s_voidp = (void*)xret;
    }
    x_QTextStream(QIODevice* x1) : QTextStream(x1) {
    }
    static void x_25(Smoke::Stack x) {
	// QTextStream(QString*, int)
	x_QTextStream* xret = new x_QTextStream((QString*)x[1].s_voidp,(int)x[2].s_int);
	x[0].s_voidp = (void*)xret;
    }
    x_QTextStream(QString* x1, int x2) : QTextStream(x1, x2) {
    }
    static void x_26(Smoke::Stack x) {
	// QTextStream(QString&, int)
	x_QTextStream* xret = new x_QTextStream(*(QString *)x[1].s_voidp,(int)x[2].s_int);
	x[0].s_voidp = (void*)xret;
    }
    x_QTextStream(QString& x1, int x2) : QTextStream(x1, x2) {
    }
    static void x_27(Smoke::Stack x) {
	// QTextStream(QByteArray, int)
	x_QTextStream* xret = new x_QTextStream(*(QByteArray *)x[1].s_voidp,(int)x[2].s_int);
	x[0].s_voidp = (void*)xret;
    }
    x_QTextStream(QByteArray x1, int x2) : QTextStream(x1, x2) {
    }
    static void x_28(Smoke::Stack x) {
	// QTextStream(FILE*, int)
	x_QTextStream* xret = new x_QTextStream((FILE*)x[1].s_voidp,(int)x[2].s_int);
	x[0].s_voidp = (void*)xret;
    }
    x_QTextStream(FILE* x1, int x2) : QTextStream(x1, x2) {
    }
    void x_29(Smoke::Stack x) const {
	// device()
	QIODevice* xret = this->QTextStream::device();
	x[0].s_voidp = (void*)xret;
    }
    void x_30(Smoke::Stack x) {
	// setDevice(QIODevice*)
	this->QTextStream::setDevice((QIODevice*)x[1].s_voidp);
    }
    void x_31(Smoke::Stack x) {
	// unsetDevice()
	this->QTextStream::unsetDevice();
    }
    void x_32(Smoke::Stack x) const {
	// atEnd()
	bool xret = this->QTextStream::atEnd();
	x[0].s_bool = (bool)xret;
    }
    void x_33(Smoke::Stack x) const {
	// eof()
	bool xret = this->QTextStream::eof();
	x[0].s_bool = (bool)xret;
    }
    void x_34(Smoke::Stack x) {
	// operator>>(QChar&)
	QTextStream& xret = this->QTextStream::operator>>(*(QChar *)x[1].s_voidp);
	x[0].s_voidp = (void*)&xret;
    }
    void x_35(Smoke::Stack x) {
	// operator>>(char&)
	QTextStream& xret = this->QTextStream::operator>>(*(char *)x[1].s_voidp);
	x[0].s_voidp = (void*)&xret;
    }
    void x_36(Smoke::Stack x) {
	// operator>>(signed short&)
	QTextStream& xret = this->QTextStream::operator>>(*(signed short *)x[1].s_voidp);
	x[0].s_voidp = (void*)&xret;
    }
    void x_37(Smoke::Stack x) {
	// operator>>(unsigned short&)
	QTextStream& xret = this->QTextStream::operator>>(*(unsigned short *)x[1].s_voidp);
	x[0].s_voidp = (void*)&xret;
    }
    void x_38(Smoke::Stack x) {
	// operator>>(signed int&)
	QTextStream& xret = this->QTextStream::operator>>(*(signed int *)x[1].s_voidp);
	x[0].s_voidp = (void*)&xret;
    }
    void x_39(Smoke::Stack x) {
	// operator>>(unsigned int&)
	QTextStream& xret = this->QTextStream::operator>>(*(unsigned int *)x[1].s_voidp);
	x[0].s_voidp = (void*)&xret;
    }
    void x_40(Smoke::Stack x) {
	// operator>>(signed long&)
	QTextStream& xret = this->QTextStream::operator>>(*(signed long *)x[1].s_voidp);
	x[0].s_voidp = (void*)&xret;
    }
    void x_41(Smoke::Stack x) {
	// operator>>(unsigned long&)
	QTextStream& xret = this->QTextStream::operator>>(*(unsigned long *)x[1].s_voidp);
	x[0].s_voidp = (void*)&xret;
    }
    void x_42(Smoke::Stack x) {
	// operator>>(float&)
	QTextStream& xret = this->QTextStream::operator>>(*(float *)x[1].s_voidp);
	x[0].s_voidp = (void*)&xret;
    }
    void x_43(Smoke::Stack x) {
	// operator>>(double&)
	QTextStream& xret = this->QTextStream::operator>>(*(double *)x[1].s_voidp);
	x[0].s_voidp = (void*)&xret;
    }
    void x_44(Smoke::Stack x) {
	// operator>>(char*)
	QTextStream& xret = this->QTextStream::operator>>((char*)x[1].s_voidp);
	x[0].s_voidp = (void*)&xret;
    }
    void x_45(Smoke::Stack x) {
	// operator>>(QString&)
	QTextStream& xret = this->QTextStream::operator>>(*(QString *)x[1].s_voidp);
	x[0].s_voidp = (void*)&xret;
    }
    void x_46(Smoke::Stack x) {
	// operator>>(QCString&)
	QTextStream& xret = this->QTextStream::operator>>(*(QCString *)x[1].s_voidp);
	x[0].s_voidp = (void*)&xret;
    }
    void x_47(Smoke::Stack x) {
	// operator<<(QChar)
	QTextStream& xret = this->QTextStream::operator<<(*(QChar *)x[1].s_voidp);
	x[0].s_voidp = (void*)&xret;
    }
    void x_48(Smoke::Stack x) {
	// operator<<(char)
	QTextStream& xret = this->QTextStream::operator<<((char)x[1].s_char);
	x[0].s_voidp = (void*)&xret;
    }
    void x_49(Smoke::Stack x) {
	// operator<<(signed)
	QTextStream& xret = this->QTextStream::operator<<(*(signed *)x[1].s_voidp);
	x[0].s_voidp = (void*)&xret;
    }
    void x_50(Smoke::Stack x) {
	// operator<<(unsigned)
	QTextStream& xret = this->QTextStream::operator<<(*(unsigned *)x[1].s_voidp);
	x[0].s_voidp = (void*)&xret;
    }
    void x_51(Smoke::Stack x) {
	// operator<<(signed)
	QTextStream& xret = this->QTextStream::operator<<(*(signed *)x[1].s_voidp);
	x[0].s_voidp = (void*)&xret;
    }
    void x_52(Smoke::Stack x) {
	// operator<<(unsigned)
	QTextStream& xret = this->QTextStream::operator<<(*(unsigned *)x[1].s_voidp);
	x[0].s_voidp = (void*)&xret;
    }
    void x_53(Smoke::Stack x) {
	// operator<<(signed)
	QTextStream& xret = this->QTextStream::operator<<(*(signed *)x[1].s_voidp);
	x[0].s_voidp = (void*)&xret;
    }
    void x_54(Smoke::Stack x) {
	// operator<<(unsigned)
	QTextStream& xret = this->QTextStream::operator<<(*(unsigned *)x[1].s_voidp);
	x[0].s_voidp = (void*)&xret;
    }
    void x_55(Smoke::Stack x) {
	// operator<<(float)
	QTextStream& xret = this->QTextStream::operator<<((float)x[1].s_float);
	x[0].s_voidp = (void*)&xret;
    }
    void x_56(Smoke::Stack x) {
	// operator<<(double)
	QTextStream& xret = this->QTextStream::operator<<((double)x[1].s_double);
	x[0].s_voidp = (void*)&xret;
    }
    void x_57(Smoke::Stack x) {
	// operator<<(const char*)
	QTextStream& xret = this->QTextStream::operator<<((const char*)x[1].s_voidp);
	x[0].s_voidp = (void*)&xret;
    }
    void x_58(Smoke::Stack x) {
	// operator<<(const QString&)
	QTextStream& xret = this->QTextStream::operator<<(*(const QString *)x[1].s_voidp);
	x[0].s_voidp = (void*)&xret;
    }
    void x_59(Smoke::Stack x) {
	// operator<<(const QCString&)
	QTextStream& xret = this->QTextStream::operator<<(*(const QCString *)x[1].s_voidp);
	x[0].s_voidp = (void*)&xret;
    }
    void x_60(Smoke::Stack x) {
	// operator<<(void*)
	QTextStream& xret = this->QTextStream::operator<<((void*)x[1].s_voidp);
	x[0].s_voidp = (void*)&xret;
    }
    void x_61(Smoke::Stack x) {
	// readRawBytes(char*, uint)
	QTextStream& xret = this->QTextStream::readRawBytes((char*)x[1].s_voidp,(uint)x[2].s_uint);
	x[0].s_voidp = (void*)&xret;
    }
    void x_62(Smoke::Stack x) {
	// writeRawBytes(const char*, uint)
	QTextStream& xret = this->QTextStream::writeRawBytes((const char*)x[1].s_voidp,(uint)x[2].s_uint);
	x[0].s_voidp = (void*)&xret;
    }
    void x_63(Smoke::Stack x) {
	// readLine()
	QString xret = this->QTextStream::readLine();
	x[0].s_voidp = (void*)new QString(xret);
    }
    void x_64(Smoke::Stack x) {
	// read()
	QString xret = this->QTextStream::read();
	x[0].s_voidp = (void*)new QString(xret);
    }
    void x_65(Smoke::Stack x) {
	// skipWhiteSpace()
	this->QTextStream::skipWhiteSpace();
    }
    void x_66(Smoke::Stack x) const {
	// flags()
	int xret = this->QTextStream::flags();
	x[0].s_int = (int)xret;
    }
    void x_67(Smoke::Stack x) {
	// flags(int)
	int xret = this->QTextStream::flags((int)x[1].s_int);
	x[0].s_int = (int)xret;
    }
    void x_68(Smoke::Stack x) {
	// setf(int)
	int xret = this->QTextStream::setf((int)x[1].s_int);
	x[0].s_int = (int)xret;
    }
    void x_69(Smoke::Stack x) {
	// setf(int, int)
	int xret = this->QTextStream::setf((int)x[1].s_int,(int)x[2].s_int);
	x[0].s_int = (int)xret;
    }
    void x_70(Smoke::Stack x) {
	// unsetf(int)
	int xret = this->QTextStream::unsetf((int)x[1].s_int);
	x[0].s_int = (int)xret;
    }
    void x_71(Smoke::Stack x) {
	// reset()
	this->QTextStream::reset();
    }
    void x_72(Smoke::Stack x) const {
	// width()
	int xret = this->QTextStream::width();
	x[0].s_int = (int)xret;
    }
    void x_73(Smoke::Stack x) {
	// width(int)
	int xret = this->QTextStream::width((int)x[1].s_int);
	x[0].s_int = (int)xret;
    }
    void x_74(Smoke::Stack x) const {
	// fill()
	int xret = this->QTextStream::fill();
	x[0].s_int = (int)xret;
    }
    void x_75(Smoke::Stack x) {
	// fill(int)
	int xret = this->QTextStream::fill((int)x[1].s_int);
	x[0].s_int = (int)xret;
    }
    void x_76(Smoke::Stack x) const {
	// precision()
	int xret = this->QTextStream::precision();
	x[0].s_int = (int)xret;
    }
    void x_77(Smoke::Stack x) {
	// precision(int)
	int xret = this->QTextStream::precision((int)x[1].s_int);
	x[0].s_int = (int)xret;
    }
    ~x_QTextStream() {}
};
void xcall_QTextStream(Smoke::Index xi, void *obj, Smoke::Stack args) {
    x_QTextStream *xself = (x_QTextStream*)obj;
    switch(xi) {
	case 0: x_QTextStream::x_0(args);	break;
	case 1: x_QTextStream::x_1(args);	break;
	case 2: x_QTextStream::x_2(args);	break;
	case 3: x_QTextStream::x_3(args);	break;
	case 4: x_QTextStream::x_4(args);	break;
	case 5: x_QTextStream::x_5(args);	break;
	case 6: x_QTextStream::x_6(args);	break;
	case 7: x_QTextStream::x_7(args);	break;
	case 8: x_QTextStream::x_8(args);	break;
	case 9: x_QTextStream::x_9(args);	break;
	case 10: x_QTextStream::x_10(args);	break;
	case 11: x_QTextStream::x_11(args);	break;
	case 12: x_QTextStream::x_12(args);	break;
	case 13: x_QTextStream::x_13(args);	break;
	case 14: x_QTextStream::x_14(args);	break;
	case 15: x_QTextStream::x_15(args);	break;
	case 16: x_QTextStream::x_16(args);	break;
	case 17: x_QTextStream::x_17(args);	break;
	case 18: x_QTextStream::x_18(args);	break;
	case 19: x_QTextStream::x_19(args);	break;
	case 20: x_QTextStream::x_20(args);	break;
	case 21: xself->x_21(args);	break;
	case 22: xself->x_22(args);	break;
	case 23: x_QTextStream::x_23(args);	break;
	case 24: x_QTextStream::x_24(args);	break;
	case 25: x_QTextStream::x_25(args);	break;
	case 26: x_QTextStream::x_26(args);	break;
	case 27: x_QTextStream::x_27(args);	break;
	case 28: x_QTextStream::x_28(args);	break;
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
	case 46: xself->x_46(args);	break;
	case 47: xself->x_47(args);	break;
	case 48: xself->x_48(args);	break;
	case 49: xself->x_49(args);	break;
	case 50: xself->x_50(args);	break;
	case 51: xself->x_51(args);	break;
	case 52: xself->x_52(args);	break;
	case 53: xself->x_53(args);	break;
	case 54: xself->x_54(args);	break;
	case 55: xself->x_55(args);	break;
	case 56: xself->x_56(args);	break;
	case 57: xself->x_57(args);	break;
	case 58: xself->x_58(args);	break;
	case 59: xself->x_59(args);	break;
	case 60: xself->x_60(args);	break;
	case 61: xself->x_61(args);	break;
	case 62: xself->x_62(args);	break;
	case 63: xself->x_63(args);	break;
	case 64: xself->x_64(args);	break;
	case 65: xself->x_65(args);	break;
	case 66: xself->x_66(args);	break;
	case 67: xself->x_67(args);	break;
	case 68: xself->x_68(args);	break;
	case 69: xself->x_69(args);	break;
	case 70: xself->x_70(args);	break;
	case 71: xself->x_71(args);	break;
	case 72: xself->x_72(args);	break;
	case 73: xself->x_73(args);	break;
	case 74: xself->x_74(args);	break;
	case 75: xself->x_75(args);	break;
	case 76: xself->x_76(args);	break;
	case 77: xself->x_77(args);	break;
	case 78: delete (QTextStream*)xself;	break;
    }
}
