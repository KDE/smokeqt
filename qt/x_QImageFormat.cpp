//Auto-generated by kalyptus. DO NOT EDIT.
#include <smoke.h>
#include <qt_smoke.h>
#include <qasyncimageio.h>
#include <qimage.h>

class x_QImageFormat : public QImageFormat {
public:
    static void x_0(Smoke::Stack x) {
	// QImageFormat()
	x_QImageFormat* xret = new x_QImageFormat();
	x[0].s_class = (void*)xret;
    }
    x_QImageFormat() : QImageFormat() {
    }
    virtual int decode(QImage& x1, QImageConsumer* x2, const uchar* x3, int x4) {
	Smoke::StackItem x[5];
	x[1].s_class = (void*)&x1;
	x[2].s_class = (void*)x2;
	x[3].s_voidp = (void*)x3;
	x[4].s_int = x4;
	qt_Smoke->binding->callMethod(3800, (void*)this, x, true /*pure virtual*/);
	return (int)x[0].s_int;
	// ABSTRACT
    }
    ~x_QImageFormat() { qt_Smoke->binding->deleted(158, (void*)this); }
};
void xcall_QImageFormat(Smoke::Index xi, void *obj, Smoke::Stack args) {
    x_QImageFormat *xself = (x_QImageFormat*)obj;
    switch(xi) {
	case 0: x_QImageFormat::x_0(args);	break;
	case 1: delete (QImageFormat*)xself;	break;
    }
}
