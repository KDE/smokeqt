//Auto-generated by kalyptus. DO NOT EDIT.
#include <smoke.h>
#include <qpen.h>
#include <qbrush.h>
#include <qpointarray.h>
#include <qrect.h>
#include <qpainter.h>
#include <qcanvas.h>

class x_QCanvasPolygon : public QCanvasPolygon {
public:
    static void x_0(Smoke::Stack x) {
	// QCanvasPolygon(QCanvas*)
	x_QCanvasPolygon* xret = new x_QCanvasPolygon((QCanvas*)x[1].s_voidp);
	x[0].s_voidp = (void*)xret;
    }
    x_QCanvasPolygon(QCanvas* x1) : QCanvasPolygon(x1) {
    }
    void x_1(Smoke::Stack x) {
	// setPoints(QPointArray)
	this->QCanvasPolygon::setPoints(*(QPointArray *)x[1].s_voidp);
    }
    void x_2(Smoke::Stack x) const {
	// points()
	QPointArray xret = this->QCanvasPolygon::points();
	x[0].s_voidp = (void*)new QPointArray(xret);
    }
    void x_3(Smoke::Stack x) {
	// moveBy(double, double)
	this->QCanvasPolygon::moveBy((double)x[1].s_double,(double)x[2].s_double);
    }
    void x_4(Smoke::Stack x) const {
	// areaPoints()
	QPointArray xret = this->QCanvasPolygon::areaPoints();
	x[0].s_voidp = (void*)new QPointArray(xret);
    }
    void x_5(Smoke::Stack x) const {
	// rtti()
	int xret = this->QCanvasPolygon::rtti();
	x[0].s_int = (int)xret;
    }
    void x_6(Smoke::Stack x) {
	// drawShape(QPainter&)
	this->QCanvasPolygon::drawShape(*(QPainter *)x[1].s_voidp);
    }
    virtual void advance(int x1) {
	Smoke::StackItem x[2];
	x[1].s_int = (int)x1;
	if(call_method((void*)this, 544, x)) return;
	this->QCanvasItem::advance(x1);
    }
    virtual QPointArray areaPoints() const {
	Smoke::StackItem x[1];
	if(call_method((void*)this, 604, x)) {
	    QPointArray *xptr = (QPointArray *)x[0].s_voidp;
	    QPointArray xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QCanvasPolygon::areaPoints();
    }
    virtual QPointArray areaPointsAdvanced() const {
	Smoke::StackItem x[1];
	if(call_method((void*)this, 615, x)) {
	    QPointArray *xptr = (QPointArray *)x[0].s_voidp;
	    QPointArray xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QCanvasPolygonalItem::areaPointsAdvanced();
    }
    virtual QRect boundingRect() const {
	Smoke::StackItem x[1];
	if(call_method((void*)this, 616, x)) {
	    QRect *xptr = (QRect *)x[0].s_voidp;
	    QRect xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QCanvasPolygonalItem::boundingRect();
    }
    virtual QRect boundingRectAdvanced() const {
	Smoke::StackItem x[1];
	if(call_method((void*)this, 565, x)) {
	    QRect *xptr = (QRect *)x[0].s_voidp;
	    QRect xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QCanvasItem::boundingRectAdvanced();
    }
    virtual bool collidesWith(const QCanvasItem* x1) const {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(call_method((void*)this, 609, x)) return (bool)x[0].s_bool;
	return this->QCanvasPolygonalItem::collidesWith(x1);
    }
    virtual void draw(QPainter& x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)&x1;
	if(call_method((void*)this, 618, x)) return;
	this->QCanvasPolygonalItem::draw(x1);
    }
    virtual void drawShape(QPainter& x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)&x1;
	if(call_method((void*)this, 606, x)) return;
	this->QCanvasPolygon::drawShape(x1);
    }
    virtual void moveBy(double x1, double x2) {
	Smoke::StackItem x[3];
	x[1].s_double = (double)x1;
	x[2].s_double = (double)x2;
	if(call_method((void*)this, 603, x)) return;
	this->QCanvasPolygon::moveBy(x1, x2);
    }
    virtual int rtti() const {
	Smoke::StackItem x[1];
	if(call_method((void*)this, 605, x)) return (int)x[0].s_int;
	return this->QCanvasPolygon::rtti();
    }
    virtual void setActive(bool x1) {
	Smoke::StackItem x[2];
	x[1].s_bool = (bool)x1;
	if(call_method((void*)this, 557, x)) return;
	this->QCanvasItem::setActive(x1);
    }
    virtual void setAnimated(bool x1) {
	Smoke::StackItem x[2];
	x[1].s_bool = (bool)x1;
	if(call_method((void*)this, 538, x)) return;
	this->QCanvasItem::setAnimated(x1);
    }
    virtual void setBrush(QBrush x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)&x1;
	if(call_method((void*)this, 611, x)) return;
	this->QCanvasPolygonalItem::setBrush(x1);
    }
    virtual void setCanvas(QCanvas* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(call_method((void*)this, 547, x)) return;
	this->QCanvasItem::setCanvas(x1);
    }
    virtual void setEnabled(bool x1) {
	Smoke::StackItem x[2];
	x[1].s_bool = (bool)x1;
	if(call_method((void*)this, 555, x)) return;
	this->QCanvasItem::setEnabled(x1);
    }
    virtual void setPen(QPen x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)&x1;
	if(call_method((void*)this, 610, x)) return;
	this->QCanvasPolygonalItem::setPen(x1);
    }
    virtual void setSelected(bool x1) {
	Smoke::StackItem x[2];
	x[1].s_bool = (bool)x1;
	if(call_method((void*)this, 553, x)) return;
	this->QCanvasItem::setSelected(x1);
    }
    virtual void setVelocity(double x1, double x2) {
	Smoke::StackItem x[3];
	x[1].s_double = (double)x1;
	x[2].s_double = (double)x2;
	if(call_method((void*)this, 539, x)) return;
	this->QCanvasItem::setVelocity(x1, x2);
    }
    virtual void setVisible(bool x1) {
	Smoke::StackItem x[2];
	x[1].s_bool = (bool)x1;
	if(call_method((void*)this, 551, x)) return;
	this->QCanvasItem::setVisible(x1);
    }
    ~x_QCanvasPolygon() {}
};
void xcall_QCanvasPolygon(Smoke::Index xi, void *obj, Smoke::Stack args) {
    x_QCanvasPolygon *xself = (x_QCanvasPolygon*)obj;
    switch(xi) {
	case 0: x_QCanvasPolygon::x_0(args);	break;
	case 1: xself->x_1(args);	break;
	case 2: xself->x_2(args);	break;
	case 3: xself->x_3(args);	break;
	case 4: xself->x_4(args);	break;
	case 5: xself->x_5(args);	break;
	case 6: xself->x_6(args);	break;
	case 7: delete (QCanvasPolygon*)xself;	break;
    }
}
