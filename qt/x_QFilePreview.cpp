//Auto-generated by kalyptus. DO NOT EDIT.
#include <smoke.h>
#include <qt_smoke.h>
#include <qurl.h>
#include <qfiledialog.h>

class x_QFilePreview : public QFilePreview {
public:
    static void x_0(Smoke::Stack x) {
	// QFilePreview()
	x_QFilePreview* xret = new x_QFilePreview();
	x[0].s_class = (void*)xret;
    }
    x_QFilePreview() : QFilePreview() {
    }
    static void x_1(Smoke::Stack x) {
	// QFilePreview(const QFilePreview&)
	x_QFilePreview* xret = new x_QFilePreview(*(const QFilePreview *)x[1].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QFilePreview(const QFilePreview& x1) : QFilePreview(x1) {
    }
    virtual void previewUrl(const QUrl& x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	qt_Smoke->binding->callMethod(3184, (void*)this, x, true /*pure virtual*/);
	return;
	// ABSTRACT
    }
    ~x_QFilePreview() { qt_Smoke->binding->deleted(115, (void*)this); }
};
void xcall_QFilePreview(Smoke::Index xi, void *obj, Smoke::Stack args) {
    x_QFilePreview *xself = (x_QFilePreview*)obj;
    switch(xi) {
	case 0: x_QFilePreview::x_0(args);	break;
	case 1: x_QFilePreview::x_1(args);	break;
	case 2: delete (QFilePreview*)xself;	break;
    }
}
