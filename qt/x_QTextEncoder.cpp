//Auto-generated by kalyptus. DO NOT EDIT.
#include <smoke.h>
#include <qstring.h>
#include <qcstring.h>
#include <qtextcodec.h>

class x_QTextEncoder {
private:
    QTextEncoder *xthis;
public:
    x_QTextEncoder(void *x) : xthis((QTextEncoder*)x) {}
    void x_0(Smoke::Stack x) {
	// fromUnicode(const QString&, int&)
	QCString xret = xthis->QTextEncoder::fromUnicode(*(const QString *)x[1].s_voidp,*(int *)x[2].s_voidp);
	x[0].s_voidp = (void*)new QCString(xret);
    }
    ~x_QTextEncoder() {}
};
void xcall_QTextEncoder(Smoke::Index xi, void *obj, Smoke::Stack args) {
    x_QTextEncoder xtmp(obj), *xself = &xtmp;
    switch(xi) {
	case 0: xself->x_0(args);	break;
    }
}
