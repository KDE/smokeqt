//Auto-generated by kalyptus. DO NOT EDIT.
#include <smoke.h>
#include <qt_smoke.h>
#include <qtextstream.h>
#include <qcstring.h>

class x_QTextOStream : public QTextOStream {
public:
    static void x_0(Smoke::Stack x) {
	// QTextOStream(QString*)
	x_QTextOStream* xret = new x_QTextOStream((QString*)x[1].s_voidp);
	x[0].s_class = (void*)xret;
    }
    x_QTextOStream(QString* x1) : QTextOStream(x1) {
    }
    static void x_1(Smoke::Stack x) {
	// QTextOStream(QByteArray)
	x_QTextOStream* xret = new x_QTextOStream(*(QByteArray *)x[1].s_voidp);
	x[0].s_class = (void*)xret;
    }
    x_QTextOStream(QByteArray x1) : QTextOStream(x1) {
    }
    ~x_QTextOStream() { qt_Smoke->binding->deleted(333, (void*)this); }
};
void xcall_QTextOStream(Smoke::Index xi, void *obj, Smoke::Stack args) {
    x_QTextOStream *xself = (x_QTextOStream*)obj;
    switch(xi) {
	case 0: x_QTextOStream::x_0(args);	break;
	case 1: x_QTextOStream::x_1(args);	break;
	case 2: delete (QTextOStream*)xself;	break;
    }
}
