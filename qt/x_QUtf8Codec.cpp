//Auto-generated by kalyptus. DO NOT EDIT.
#include <smoke.h>
#include <qstring.h>
#include <qcstring.h>
#include <qutfcodec.h>

class x_QUtf8Codec {
private:
    QUtf8Codec *xthis;
public:
    x_QUtf8Codec(void *x) : xthis((QUtf8Codec*)x) {}
    void x_0(Smoke::Stack x) const {
	// mibEnum()
	int xret = xthis->QUtf8Codec::mibEnum();
	x[0].s_int = (int)xret;
    }
    void x_1(Smoke::Stack x) const {
	// name()
	const char* xret = xthis->QUtf8Codec::name();
	x[0].s_voidp = (void*)xret;
    }
    void x_2(Smoke::Stack x) const {
	// makeDecoder()
	QTextDecoder* xret = xthis->QUtf8Codec::makeDecoder();
	x[0].s_voidp = (void*)xret;
    }
    void x_3(Smoke::Stack x) const {
	// fromUnicode(const QString&, int&)
	QCString xret = xthis->QUtf8Codec::fromUnicode(*(const QString *)x[1].s_voidp,*(int *)x[2].s_voidp);
	x[0].s_voidp = (void*)new QCString(xret);
    }
    void x_4(Smoke::Stack x) const {
	// heuristicContentMatch(const char*, int)
	int xret = xthis->QUtf8Codec::heuristicContentMatch((const char*)x[1].s_voidp,(int)x[2].s_int);
	x[0].s_int = (int)xret;
    }
    ~x_QUtf8Codec() {}
};
void xcall_QUtf8Codec(Smoke::Index xi, void *obj, Smoke::Stack args) {
    x_QUtf8Codec xtmp(obj), *xself = &xtmp;
    switch(xi) {
	case 0: xself->x_0(args);	break;
	case 1: xself->x_1(args);	break;
	case 2: xself->x_2(args);	break;
	case 3: xself->x_3(args);	break;
	case 4: xself->x_4(args);	break;
    }
}
