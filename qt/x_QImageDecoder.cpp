//Auto-generated by kalyptus. DO NOT EDIT.
#include <smoke.h>
#include <qasyncimageio.h>
#include <qimage.h>
#include <qstrlist.h>

class x_QImageDecoder : public QImageDecoder {
public:
    static void x_0(Smoke::Stack x) {
	// QImageDecoder(QImageConsumer*)
	x_QImageDecoder* xret = new x_QImageDecoder((QImageConsumer*)x[1].s_voidp);
	x[0].s_voidp = (void*)xret;
    }
    x_QImageDecoder(QImageConsumer* x1) : QImageDecoder(x1) {
    }
    void x_1(Smoke::Stack x) {
	// image()
	const QImage& xret = this->QImageDecoder::image();
	x[0].s_voidp = (void*)&xret;
    }
    void x_2(Smoke::Stack x) {
	// decode(const uchar*, int)
	int xret = this->QImageDecoder::decode((const uchar*)x[1].s_voidp,(int)x[2].s_int);
	x[0].s_int = (int)xret;
    }
    static void x_3(Smoke::Stack x) {
	// formatName(const uchar*, int)
	const char* xret = QImageDecoder::formatName((const uchar*)x[1].s_voidp,(int)x[2].s_int);
	x[0].s_voidp = (void*)xret;
    }
    static void x_4(Smoke::Stack x) {
	// format(const char*)
	QImageFormatType* xret = QImageDecoder::format((const char*)x[1].s_voidp);
	x[0].s_voidp = (void*)xret;
    }
    static void x_5(Smoke::Stack x) {
	// inputFormats()
	QStrList xret = QImageDecoder::inputFormats();
	x[0].s_voidp = (void*)new QStrList(xret);
    }
    static void x_6(Smoke::Stack x) {
	// registerDecoderFactory(QImageFormatType*)
	QImageDecoder::registerDecoderFactory((QImageFormatType*)x[1].s_voidp);
    }
    static void x_7(Smoke::Stack x) {
	// unregisterDecoderFactory(QImageFormatType*)
	QImageDecoder::unregisterDecoderFactory((QImageFormatType*)x[1].s_voidp);
    }
    ~x_QImageDecoder() {}
};
void xcall_QImageDecoder(Smoke::Index xi, void *obj, Smoke::Stack args) {
    x_QImageDecoder *xself = (x_QImageDecoder*)obj;
    switch(xi) {
	case 0: x_QImageDecoder::x_0(args);	break;
	case 1: xself->x_1(args);	break;
	case 2: xself->x_2(args);	break;
	case 3: x_QImageDecoder::x_3(args);	break;
	case 4: x_QImageDecoder::x_4(args);	break;
	case 5: x_QImageDecoder::x_5(args);	break;
	case 6: x_QImageDecoder::x_6(args);	break;
	case 7: x_QImageDecoder::x_7(args);	break;
	case 8: delete (QImageDecoder*)xself;	break;
    }
}
