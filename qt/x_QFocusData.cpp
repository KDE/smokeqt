//Auto-generated by kalyptus. DO NOT EDIT.
#include <smoke.h>
#include <qt_smoke.h>
#include <qfocusdata.h>

class x_QFocusData {
private:
    QFocusData *xthis;
public:
    x_QFocusData(void *x) : xthis((QFocusData*)x) {}
    void x_0(Smoke::Stack x) const {
	// focusWidget()
	QWidget* xret = xthis->QFocusData::focusWidget();
	x[0].s_class = (void*)xret;
    }
    void x_1(Smoke::Stack x) {
	// home()
	QWidget* xret = xthis->QFocusData::home();
	x[0].s_class = (void*)xret;
    }
    void x_2(Smoke::Stack x) {
	// next()
	QWidget* xret = xthis->QFocusData::next();
	x[0].s_class = (void*)xret;
    }
    void x_3(Smoke::Stack x) {
	// prev()
	QWidget* xret = xthis->QFocusData::prev();
	x[0].s_class = (void*)xret;
    }
    void x_4(Smoke::Stack x) const {
	// count()
	int xret = xthis->QFocusData::count();
	x[0].s_int = (int)xret;
    }
    ~x_QFocusData() {}
};
void xcall_QFocusData(Smoke::Index xi, void *obj, Smoke::Stack args) {
    x_QFocusData xtmp(obj), *xself = &xtmp;
    switch(xi) {
	case 0: xself->x_0(args);	break;
	case 1: xself->x_1(args);	break;
	case 2: xself->x_2(args);	break;
	case 3: xself->x_3(args);	break;
	case 4: xself->x_4(args);	break;
    }
}
