//Auto-generated by kalyptus. DO NOT EDIT.
#include <smoke.h>
#include <qt_smoke.h>
#include <qpoint.h>
#include <qpen.h>
#include <qbrush.h>
#include <qpointarray.h>
#include <qrect.h>
#include <qpainter.h>
#include <qcanvas.h>

class x_QCanvasLine : public QCanvasLine {
public:
    static void x_0(Smoke::Stack x) {
	x[0].s_class = (void*)new int(QCanvasLine::RTTI);
    }
    static void x_1(Smoke::Stack x) {
	// QCanvasLine(QCanvas*)
	x_QCanvasLine* xret = new x_QCanvasLine((QCanvas*)x[1].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QCanvasLine(QCanvas* x1) : QCanvasLine(x1) {
    }
    void x_2(Smoke::Stack x) {
	// setPoints(int, int, int, int)
	this->QCanvasLine::setPoints((int)x[1].s_int,(int)x[2].s_int,(int)x[3].s_int,(int)x[4].s_int);
	(void)x; // noop (for compiler warning)
    }
    void x_3(Smoke::Stack x) const {
	// startPoint()
	QPoint xret = this->QCanvasLine::startPoint();
	x[0].s_class = (void*)new QPoint(xret);
    }
    void x_4(Smoke::Stack x) const {
	// endPoint()
	QPoint xret = this->QCanvasLine::endPoint();
	x[0].s_class = (void*)new QPoint(xret);
    }
    void x_5(Smoke::Stack x) const {
	// rtti()
	int xret = this->QCanvasLine::rtti();
	x[0].s_int = xret;
    }
    void x_6(Smoke::Stack x) {
	// setPen(QPen)
	this->QCanvasLine::setPen(*(QPen *)x[1].s_class);
	(void)x; // noop (for compiler warning)
    }
    static void x_7(Smoke::Stack x) {
	// QCanvasLine(const QCanvasLine&)
	x_QCanvasLine* xret = new x_QCanvasLine(*(const QCanvasLine *)x[1].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QCanvasLine(const QCanvasLine& x1) : QCanvasLine(x1) {
    }
    void x_8(Smoke::Stack x) {
	// drawShape(QPainter&)
	this->QCanvasLine::drawShape(*(QPainter *)x[1].s_class);
	(void)x; // noop (for compiler warning)
    }
    void x_9(Smoke::Stack x) const {
	// areaPoints()
	QPointArray xret = this->QCanvasLine::areaPoints();
	x[0].s_class = (void*)new QPointArray(xret);
    }
    virtual void advance(int x1) {
	Smoke::StackItem x[2];
	x[1].s_int = x1;
	if(qt_Smoke->binding->callMethod(696, (void*)this, x)) return;
	this->QCanvasItem::advance(x1);
    }
    virtual QPointArray areaPoints() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(735, (void*)this, x)) {
	    QPointArray *xptr = (QPointArray *)x[0].s_class;
	    QPointArray xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QCanvasLine::areaPoints();
    }
    virtual QPointArray areaPointsAdvanced() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(776, (void*)this, x)) {
	    QPointArray *xptr = (QPointArray *)x[0].s_class;
	    QPointArray xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QCanvasPolygonalItem::areaPointsAdvanced();
    }
    virtual QRect boundingRect() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(777, (void*)this, x)) {
	    QRect *xptr = (QRect *)x[0].s_class;
	    QRect xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QCanvasPolygonalItem::boundingRect();
    }
    virtual QRect boundingRectAdvanced() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(717, (void*)this, x)) {
	    QRect *xptr = (QRect *)x[0].s_class;
	    QRect xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QCanvasItem::boundingRectAdvanced();
    }
    virtual bool collidesWith(const QCanvasItem* x1) const {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(770, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QCanvasPolygonalItem::collidesWith(x1);
    }
    virtual void draw(QPainter& x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	if(qt_Smoke->binding->callMethod(781, (void*)this, x)) return;
	this->QCanvasPolygonalItem::draw(x1);
    }
    virtual void drawShape(QPainter& x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	if(qt_Smoke->binding->callMethod(734, (void*)this, x)) return;
	this->QCanvasLine::drawShape(x1);
    }
    virtual void moveBy(double x1, double x2) {
	Smoke::StackItem x[3];
	x[1].s_double = x1;
	x[2].s_double = x2;
	if(qt_Smoke->binding->callMethod(684, (void*)this, x)) return;
	this->QCanvasItem::moveBy(x1, x2);
    }
    virtual int rtti() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(730, (void*)this, x)) return (int)x[0].s_int;
	return this->QCanvasLine::rtti();
    }
    virtual void setActive(bool x1) {
	Smoke::StackItem x[2];
	x[1].s_bool = x1;
	if(qt_Smoke->binding->callMethod(709, (void*)this, x)) return;
	this->QCanvasItem::setActive(x1);
    }
    virtual void setAnimated(bool x1) {
	Smoke::StackItem x[2];
	x[1].s_bool = x1;
	if(qt_Smoke->binding->callMethod(690, (void*)this, x)) return;
	this->QCanvasItem::setAnimated(x1);
    }
    virtual void setBrush(QBrush x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	if(qt_Smoke->binding->callMethod(772, (void*)this, x)) return;
	this->QCanvasPolygonalItem::setBrush(x1);
    }
    virtual void setCanvas(QCanvas* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(699, (void*)this, x)) return;
	this->QCanvasItem::setCanvas(x1);
    }
    virtual void setEnabled(bool x1) {
	Smoke::StackItem x[2];
	x[1].s_bool = x1;
	if(qt_Smoke->binding->callMethod(707, (void*)this, x)) return;
	this->QCanvasItem::setEnabled(x1);
    }
    virtual void setPen(QPen x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	if(qt_Smoke->binding->callMethod(731, (void*)this, x)) return;
	this->QCanvasLine::setPen(x1);
    }
    virtual void setSelected(bool x1) {
	Smoke::StackItem x[2];
	x[1].s_bool = x1;
	if(qt_Smoke->binding->callMethod(705, (void*)this, x)) return;
	this->QCanvasItem::setSelected(x1);
    }
    virtual void setVelocity(double x1, double x2) {
	Smoke::StackItem x[3];
	x[1].s_double = x1;
	x[2].s_double = x2;
	if(qt_Smoke->binding->callMethod(691, (void*)this, x)) return;
	this->QCanvasItem::setVelocity(x1, x2);
    }
    virtual void setVisible(bool x1) {
	Smoke::StackItem x[2];
	x[1].s_bool = x1;
	if(qt_Smoke->binding->callMethod(703, (void*)this, x)) return;
	this->QCanvasItem::setVisible(x1);
    }
    ~x_QCanvasLine() { qt_Smoke->binding->deleted(24, (void*)this); }
};
void xcall_QCanvasLine(Smoke::Index xi, void *obj, Smoke::Stack args) {
    x_QCanvasLine *xself = (x_QCanvasLine*)obj;
    switch(xi) {
	case 0: x_QCanvasLine::x_0(args);	break;
	case 1: x_QCanvasLine::x_1(args);	break;
	case 2: xself->x_2(args);	break;
	case 3: xself->x_3(args);	break;
	case 4: xself->x_4(args);	break;
	case 5: xself->x_5(args);	break;
	case 6: xself->x_6(args);	break;
	case 7: x_QCanvasLine::x_7(args);	break;
	case 8: xself->x_8(args);	break;
	case 9: xself->x_9(args);	break;
	case 10: delete (QCanvasLine*)xself;	break;
    }
}
