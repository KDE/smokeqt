//Auto-generated by kalyptus. DO NOT EDIT.
#include <smoke.h>
#include <qimage.h>
#include <qpngio.h>

class x_QPNGImagePacker : public QPNGImagePacker {
public:
    static void x_0(Smoke::Stack x) {
	// QPNGImagePacker(QIODevice*, int, int)
	x_QPNGImagePacker* xret = new x_QPNGImagePacker((QIODevice*)x[1].s_voidp,(int)x[2].s_int,(int)x[3].s_int);
	x[0].s_voidp = (void*)xret;
    }
    x_QPNGImagePacker(QIODevice* x1, int x2, int x3) : QPNGImagePacker(x1, x2, x3) {
    }
    void x_1(Smoke::Stack x) {
	// setPixelAlignment(int)
	this->QPNGImagePacker::setPixelAlignment((int)x[1].s_int);
    }
    void x_2(Smoke::Stack x) {
	// packImage(const QImage&)
	bool xret = this->QPNGImagePacker::packImage(*(const QImage *)x[1].s_voidp);
	x[0].s_bool = (bool)xret;
    }
    ~x_QPNGImagePacker() {}
};
void xcall_QPNGImagePacker(Smoke::Index xi, void *obj, Smoke::Stack args) {
    x_QPNGImagePacker *xself = (x_QPNGImagePacker*)obj;
    switch(xi) {
	case 0: x_QPNGImagePacker::x_0(args);	break;
	case 1: xself->x_1(args);	break;
	case 2: xself->x_2(args);	break;
    }
}
