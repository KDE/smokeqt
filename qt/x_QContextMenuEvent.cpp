//Auto-generated by kalyptus. DO NOT EDIT.
#include <smoke.h>
#include <qpoint.h>
#include <qevent.h>
#include <qnamespace.h>

class x_QContextMenuEvent : public QContextMenuEvent {
public:
    static void x_0(Smoke::Stack x) {
	x[0].s_long = (long)QContextMenuEvent::Mouse;
    }
    static void x_1(Smoke::Stack x) {
	x[0].s_long = (long)QContextMenuEvent::Keyboard;
    }
    static void x_2(Smoke::Stack x) {
	x[0].s_long = (long)QContextMenuEvent::Other;
    }
    static void x_3(Smoke::Stack x) {
	// QContextMenuEvent(QContextMenuEvent::Reason, const QPoint&, const QPoint&, int)
	x_QContextMenuEvent* xret = new x_QContextMenuEvent(*(QContextMenuEvent::Reason *)x[1].s_voidp,*(const QPoint *)x[2].s_voidp,*(const QPoint *)x[3].s_voidp,(int)x[4].s_int);
	x[0].s_voidp = (void*)xret;
    }
    x_QContextMenuEvent(QContextMenuEvent::Reason x1, const QPoint& x2, const QPoint& x3, int x4) : QContextMenuEvent(x1, x2, x3, x4) {
    }
    static void x_4(Smoke::Stack x) {
	// QContextMenuEvent(QContextMenuEvent::Reason, const QPoint&, int)
	x_QContextMenuEvent* xret = new x_QContextMenuEvent(*(QContextMenuEvent::Reason *)x[1].s_voidp,*(const QPoint *)x[2].s_voidp,(int)x[3].s_int);
	x[0].s_voidp = (void*)xret;
    }
    x_QContextMenuEvent(QContextMenuEvent::Reason x1, const QPoint& x2, int x3) : QContextMenuEvent(x1, x2, x3) {
    }
    void x_5(Smoke::Stack x) const {
	// x()
	int xret = this->QContextMenuEvent::x();
	x[0].s_int = (int)xret;
    }
    void x_6(Smoke::Stack x) const {
	// y()
	int xret = this->QContextMenuEvent::y();
	x[0].s_int = (int)xret;
    }
    void x_7(Smoke::Stack x) const {
	// globalX()
	int xret = this->QContextMenuEvent::globalX();
	x[0].s_int = (int)xret;
    }
    void x_8(Smoke::Stack x) const {
	// globalY()
	int xret = this->QContextMenuEvent::globalY();
	x[0].s_int = (int)xret;
    }
    void x_9(Smoke::Stack x) const {
	// pos()
	const QPoint& xret = this->QContextMenuEvent::pos();
	x[0].s_voidp = (void*)&xret;
    }
    void x_10(Smoke::Stack x) const {
	// globalPos()
	const QPoint& xret = this->QContextMenuEvent::globalPos();
	x[0].s_voidp = (void*)&xret;
    }
    void x_11(Smoke::Stack x) const {
	// state()
	Qt::ButtonState xret = this->QContextMenuEvent::state();
	x[0].s_voidp = (void*)new Qt::ButtonState(xret);
    }
    void x_12(Smoke::Stack x) const {
	// isAccepted()
	bool xret = this->QContextMenuEvent::isAccepted();
	x[0].s_bool = (bool)xret;
    }
    void x_13(Smoke::Stack x) const {
	// isConsumed()
	bool xret = this->QContextMenuEvent::isConsumed();
	x[0].s_bool = (bool)xret;
    }
    void x_14(Smoke::Stack x) {
	// consume()
	this->QContextMenuEvent::consume();
    }
    void x_15(Smoke::Stack x) {
	// accept()
	this->QContextMenuEvent::accept();
    }
    void x_16(Smoke::Stack x) {
	// ignore()
	this->QContextMenuEvent::ignore();
    }
    void x_17(Smoke::Stack x) const {
	// reason()
	QContextMenuEvent::Reason xret = this->QContextMenuEvent::reason();
	x[0].s_voidp = (void*)new QContextMenuEvent::Reason(xret);
    }
    ~x_QContextMenuEvent() {}
};
void xcall_QContextMenuEvent(Smoke::Index xi, void *obj, Smoke::Stack args) {
    x_QContextMenuEvent *xself = (x_QContextMenuEvent*)obj;
    switch(xi) {
	case 0: x_QContextMenuEvent::x_0(args);	break;
	case 1: x_QContextMenuEvent::x_1(args);	break;
	case 2: x_QContextMenuEvent::x_2(args);	break;
	case 3: x_QContextMenuEvent::x_3(args);	break;
	case 4: x_QContextMenuEvent::x_4(args);	break;
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
	case 15: xself->x_15(args);	break;
	case 16: xself->x_16(args);	break;
	case 17: xself->x_17(args);	break;
    }
}
