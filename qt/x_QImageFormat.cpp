//Auto-generated by kalyptus. DO NOT EDIT.
#include <smoke.h>
#include <qasyncimageio.h>
#include <qimage.h>

class x_QImageFormat {
private:
    QImageFormat *xthis;
public:
    x_QImageFormat(void *x) : xthis((QImageFormat*)x) {}
    void x_0(Smoke::Stack x) {
	// decode(QImage&, QImageConsumer*, const uchar*, int)
	int xret = xthis->QImageFormat::decode(*(QImage *)x[1].s_voidp,(QImageConsumer*)x[2].s_voidp,(const uchar*)x[3].s_voidp,(int)x[4].s_int);
	x[0].s_int = (int)xret;
    }
    ~x_QImageFormat() {}
};
void xcall_QImageFormat(Smoke::Index xi, void *obj, Smoke::Stack args) {
    x_QImageFormat xtmp(obj), *xself = &xtmp;
    switch(xi) {
	case 0: xself->x_0(args);	break;
    }
}
