//Auto-generated by kalyptus. DO NOT EDIT.
#include <smoke.h>
#include <qt_smoke.h>
#include <qasyncimageio.h>

class x_QImageFormatType : public QImageFormatType {
public:
    static void x_0(Smoke::Stack x) {
	// QImageFormatType()
	x_QImageFormatType* xret = new x_QImageFormatType();
	x[0].s_class = (void*)xret;
    }
    x_QImageFormatType() : QImageFormatType() {
    }
    virtual QImageFormat* decoderFor(const uchar* x1, int x2) {
	Smoke::StackItem x[3];
	x[1].s_voidp = (void*)x1;
	x[2].s_int = x2;
	qt_Smoke->binding->callMethod(3809, (void*)this, x, true /*pure virtual*/);
	return (QImageFormat*)x[0].s_class;
	// ABSTRACT
    }
    virtual const char* formatName() const {
	Smoke::StackItem x[1];
	qt_Smoke->binding->callMethod(3810, (void*)this, x, true /*pure virtual*/);
	return (const char*)x[0].s_class;
	// ABSTRACT
    }
    ~x_QImageFormatType() { qt_Smoke->binding->deleted(160, (void*)this); }
};
void xcall_QImageFormatType(Smoke::Index xi, void *obj, Smoke::Stack args) {
    x_QImageFormatType *xself = (x_QImageFormatType*)obj;
    switch(xi) {
	case 0: x_QImageFormatType::x_0(args);	break;
	case 1: delete (QImageFormatType*)xself;	break;
    }
}
