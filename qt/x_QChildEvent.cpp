//Auto-generated by kalyptus. DO NOT EDIT.
#include <smoke.h>
#include <qt_smoke.h>
#include <qevent.h>

class x_QChildEvent : public QChildEvent {
public:
    static void x_0(Smoke::Stack x) {
	// QChildEvent(QEvent::Type, QObject*)
	x_QChildEvent* xret = new x_QChildEvent((QEvent::Type)x[1].s_enum,(QObject*)x[2].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QChildEvent(QEvent::Type x1, QObject* x2) : QChildEvent(x1, x2) {
    }
    void x_1(Smoke::Stack x) const {
	// child()
	QObject* xret = this->QChildEvent::child();
	x[0].s_class = (void*)xret;
    }
    void x_2(Smoke::Stack x) const {
	// inserted()
	bool xret = this->QChildEvent::inserted();
	x[0].s_bool = xret;
    }
    void x_3(Smoke::Stack x) const {
	// removed()
	bool xret = this->QChildEvent::removed();
	x[0].s_bool = xret;
    }
    static void x_4(Smoke::Stack x) {
	// QChildEvent(const QChildEvent&)
	x_QChildEvent* xret = new x_QChildEvent(*(const QChildEvent *)x[1].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QChildEvent(const QChildEvent& x1) : QChildEvent(x1) {
    }
    ~x_QChildEvent() { qt_Smoke->binding->deleted(39, (void*)this); }
};
void xcall_QChildEvent(Smoke::Index xi, void *obj, Smoke::Stack args) {
    x_QChildEvent *xself = (x_QChildEvent*)obj;
    switch(xi) {
	case 0: x_QChildEvent::x_0(args);	break;
	case 1: xself->x_1(args);	break;
	case 2: xself->x_2(args);	break;
	case 3: xself->x_3(args);	break;
	case 4: x_QChildEvent::x_4(args);	break;
	case 5: delete (QChildEvent*)xself;	break;
    }
}
