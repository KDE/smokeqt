//Auto-generated by kalyptus. DO NOT EDIT.
#include <smoke.h>
#include <qt_smoke.h>
#include <qstring.h>

class x_QStringData : public QStringData {
public:
    static void x_0(Smoke::Stack x) {
	// QStringData()
	x_QStringData* xret = new x_QStringData();
	x[0].s_class = (void*)xret;
    }
    x_QStringData() : QStringData() {
    }
    static void x_1(Smoke::Stack x) {
	// QStringData(QChar*, uint, uint)
	x_QStringData* xret = new x_QStringData((QChar*)x[1].s_class,(uint)x[2].s_uint,(uint)x[3].s_uint);
	x[0].s_class = (void*)xret;
    }
    x_QStringData(QChar* x1, uint x2, uint x3) : QStringData(x1, x2, x3) {
    }
    void x_2(Smoke::Stack x) {
	// deleteSelf()
	this->QStringData::deleteSelf();
	(void)x[0].s_int; // noop (for compiler warning)
    }
    void x_3(Smoke::Stack x) {
	// setDirty()
	this->QStringData::setDirty();
	(void)x[0].s_int; // noop (for compiler warning)
    }
    ~x_QStringData() { qt_Smoke->binding->deleted(297, (void*)this); }
};
void xcall_QStringData(Smoke::Index xi, void *obj, Smoke::Stack args) {
    x_QStringData *xself = (x_QStringData*)obj;
    switch(xi) {
	case 0: x_QStringData::x_0(args);	break;
	case 1: x_QStringData::x_1(args);	break;
	case 2: xself->x_2(args);	break;
	case 3: xself->x_3(args);	break;
	case 4: delete (QStringData*)xself;	break;
    }
}
