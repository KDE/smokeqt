//Auto-generated by kalyptus. DO NOT EDIT.
#include <smoke.h>
#include <qimage.h>
#include <qpngio.h>

class x_QPNGImageWriter : public QPNGImageWriter {
public:
    static void x_0(Smoke::Stack x) {
	x[0].s_long = (long)QPNGImageWriter::Unspecified;
    }
    static void x_1(Smoke::Stack x) {
	x[0].s_long = (long)QPNGImageWriter::NoDisposal;
    }
    static void x_2(Smoke::Stack x) {
	x[0].s_long = (long)QPNGImageWriter::RestoreBackground;
    }
    static void x_3(Smoke::Stack x) {
	x[0].s_long = (long)QPNGImageWriter::RestoreImage;
    }
    static void x_4(Smoke::Stack x) {
	// QPNGImageWriter(QIODevice*)
	x_QPNGImageWriter* xret = new x_QPNGImageWriter((QIODevice*)x[1].s_voidp);
	x[0].s_voidp = (void*)xret;
    }
    x_QPNGImageWriter(QIODevice* x1) : QPNGImageWriter(x1) {
    }
    void x_5(Smoke::Stack x) {
	// setDisposalMethod(QPNGImageWriter::DisposalMethod)
	this->QPNGImageWriter::setDisposalMethod(*(QPNGImageWriter::DisposalMethod *)x[1].s_voidp);
    }
    void x_6(Smoke::Stack x) {
	// setLooping(int)
	this->QPNGImageWriter::setLooping((int)x[1].s_int);
    }
    void x_7(Smoke::Stack x) {
	// setLooping()
	this->QPNGImageWriter::setLooping();
    }
    void x_8(Smoke::Stack x) {
	// setFrameDelay(int)
	this->QPNGImageWriter::setFrameDelay((int)x[1].s_int);
    }
    void x_9(Smoke::Stack x) {
	// setGamma(float)
	this->QPNGImageWriter::setGamma((float)x[1].s_float);
    }
    void x_10(Smoke::Stack x) {
	// writeImage(const QImage&, int, int)
	bool xret = this->QPNGImageWriter::writeImage(*(const QImage *)x[1].s_voidp,(int)x[2].s_int,(int)x[3].s_int);
	x[0].s_bool = (bool)xret;
    }
    void x_11(Smoke::Stack x) {
	// writeImage(const QImage&, int, int, int)
	bool xret = this->QPNGImageWriter::writeImage(*(const QImage *)x[1].s_voidp,(int)x[2].s_int,(int)x[3].s_int,(int)x[4].s_int);
	x[0].s_bool = (bool)xret;
    }
    void x_12(Smoke::Stack x) {
	// writeImage(const QImage&)
	bool xret = this->QPNGImageWriter::writeImage(*(const QImage *)x[1].s_voidp);
	x[0].s_bool = (bool)xret;
    }
    void x_13(Smoke::Stack x) {
	// writeImage(const QImage&, int)
	bool xret = this->QPNGImageWriter::writeImage(*(const QImage *)x[1].s_voidp,(int)x[2].s_int);
	x[0].s_bool = (bool)xret;
    }
    void x_14(Smoke::Stack x) {
	// device()
	QIODevice* xret = this->QPNGImageWriter::device();
	x[0].s_voidp = (void*)xret;
    }
    ~x_QPNGImageWriter() {}
};
void xcall_QPNGImageWriter(Smoke::Index xi, void *obj, Smoke::Stack args) {
    x_QPNGImageWriter *xself = (x_QPNGImageWriter*)obj;
    switch(xi) {
	case 0: x_QPNGImageWriter::x_0(args);	break;
	case 1: x_QPNGImageWriter::x_1(args);	break;
	case 2: x_QPNGImageWriter::x_2(args);	break;
	case 3: x_QPNGImageWriter::x_3(args);	break;
	case 4: x_QPNGImageWriter::x_4(args);	break;
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
	case 15: delete (QPNGImageWriter*)xself;	break;
    }
}
