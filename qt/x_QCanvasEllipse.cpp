//Auto-generated by kalyptus. DO NOT EDIT.
#include <smoke.h>
#include <qt_smoke.h>
#include <qpen.h>
#include <qbrush.h>
#include <qpointarray.h>
#include <qrect.h>
#include <qpainter.h>
#include <qcanvas.h>

class x_QCanvasEllipse : public QCanvasEllipse {
public:
    static void x_0(Smoke::Stack x) {
	// QCanvasEllipse(QCanvas*)
	x_QCanvasEllipse* xret = new x_QCanvasEllipse((QCanvas*)x[1].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QCanvasEllipse(QCanvas* x1) : QCanvasEllipse(x1) {
    }
    static void x_1(Smoke::Stack x) {
	// QCanvasEllipse(int, int, QCanvas*)
	x_QCanvasEllipse* xret = new x_QCanvasEllipse((int)x[1].s_int,(int)x[2].s_int,(QCanvas*)x[3].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QCanvasEllipse(int x1, int x2, QCanvas* x3) : QCanvasEllipse(x1, x2, x3) {
    }
    static void x_2(Smoke::Stack x) {
	// QCanvasEllipse(int, int, int, int, QCanvas*)
	x_QCanvasEllipse* xret = new x_QCanvasEllipse((int)x[1].s_int,(int)x[2].s_int,(int)x[3].s_int,(int)x[4].s_int,(QCanvas*)x[5].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QCanvasEllipse(int x1, int x2, int x3, int x4, QCanvas* x5) : QCanvasEllipse(x1, x2, x3, x4, x5) {
    }
    void x_3(Smoke::Stack x) const {
	// width()
	int xret = this->QCanvasEllipse::width();
	x[0].s_int = (int)xret;
    }
    void x_4(Smoke::Stack x) const {
	// height()
	int xret = this->QCanvasEllipse::height();
	x[0].s_int = (int)xret;
    }
    void x_5(Smoke::Stack x) {
	// setSize(int, int)
	this->QCanvasEllipse::setSize((int)x[1].s_int,(int)x[2].s_int);
    }
    void x_6(Smoke::Stack x) {
	// setAngles(int, int)
	this->QCanvasEllipse::setAngles((int)x[1].s_int,(int)x[2].s_int);
    }
    void x_7(Smoke::Stack x) const {
	// angleStart()
	int xret = this->QCanvasEllipse::angleStart();
	x[0].s_int = (int)xret;
    }
    void x_8(Smoke::Stack x) const {
	// angleLength()
	int xret = this->QCanvasEllipse::angleLength();
	x[0].s_int = (int)xret;
    }
    void x_9(Smoke::Stack x) const {
	// areaPoints()
	QPointArray xret = this->QCanvasEllipse::areaPoints();
	x[0].s_class = (void*)new QPointArray(xret);
    }
    void x_10(Smoke::Stack x) const {
	// collidesWith(const QCanvasItem*)
	bool xret = this->QCanvasEllipse::collidesWith((const QCanvasItem*)x[1].s_class);
	x[0].s_bool = (bool)xret;
    }
    void x_11(Smoke::Stack x) const {
	// rtti()
	int xret = this->QCanvasEllipse::rtti();
	x[0].s_int = (int)xret;
    }
    void x_12(Smoke::Stack x) {
	// drawShape(QPainter&)
	this->QCanvasEllipse::drawShape(*(QPainter *)x[1].s_class);
    }
    virtual void advance(int x1) {
	Smoke::StackItem x[2];
	x[1].s_int = (int)x1;
	if(qt_Smoke->callMethod(544, (void*)this, x)) return;
	this->QCanvasItem::advance(x1);
    }
    virtual QPointArray areaPoints() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->callMethod(514, (void*)this, x)) {
	    QPointArray *xptr = (QPointArray *)x[0].s_class;
	    QPointArray xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QCanvasEllipse::areaPoints();
    }
    virtual QPointArray areaPointsAdvanced() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->callMethod(617, (void*)this, x)) {
	    QPointArray *xptr = (QPointArray *)x[0].s_class;
	    QPointArray xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QCanvasPolygonalItem::areaPointsAdvanced();
    }
    virtual QRect boundingRect() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->callMethod(618, (void*)this, x)) {
	    QRect *xptr = (QRect *)x[0].s_class;
	    QRect xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QCanvasPolygonalItem::boundingRect();
    }
    virtual QRect boundingRectAdvanced() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->callMethod(565, (void*)this, x)) {
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
	if(qt_Smoke->callMethod(515, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QCanvasEllipse::collidesWith(x1);
    }
    virtual void draw(QPainter& x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	if(qt_Smoke->callMethod(620, (void*)this, x)) return;
	this->QCanvasPolygonalItem::draw(x1);
    }
    virtual void drawShape(QPainter& x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	if(qt_Smoke->callMethod(517, (void*)this, x)) return;
	this->QCanvasEllipse::drawShape(x1);
    }
    virtual void moveBy(double x1, double x2) {
	Smoke::StackItem x[3];
	x[1].s_double = (double)x1;
	x[2].s_double = (double)x2;
	if(qt_Smoke->callMethod(532, (void*)this, x)) return;
	this->QCanvasItem::moveBy(x1, x2);
    }
    virtual int rtti() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->callMethod(516, (void*)this, x)) return (int)x[0].s_int;
	return this->QCanvasEllipse::rtti();
    }
    virtual void setActive(bool x1) {
	Smoke::StackItem x[2];
	x[1].s_bool = (bool)x1;
	if(qt_Smoke->callMethod(557, (void*)this, x)) return;
	this->QCanvasItem::setActive(x1);
    }
    virtual void setAnimated(bool x1) {
	Smoke::StackItem x[2];
	x[1].s_bool = (bool)x1;
	if(qt_Smoke->callMethod(538, (void*)this, x)) return;
	this->QCanvasItem::setAnimated(x1);
    }
    virtual void setBrush(QBrush x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	if(qt_Smoke->callMethod(613, (void*)this, x)) return;
	this->QCanvasPolygonalItem::setBrush(x1);
    }
    virtual void setCanvas(QCanvas* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->callMethod(547, (void*)this, x)) return;
	this->QCanvasItem::setCanvas(x1);
    }
    virtual void setEnabled(bool x1) {
	Smoke::StackItem x[2];
	x[1].s_bool = (bool)x1;
	if(qt_Smoke->callMethod(555, (void*)this, x)) return;
	this->QCanvasItem::setEnabled(x1);
    }
    virtual void setPen(QPen x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	if(qt_Smoke->callMethod(612, (void*)this, x)) return;
	this->QCanvasPolygonalItem::setPen(x1);
    }
    virtual void setSelected(bool x1) {
	Smoke::StackItem x[2];
	x[1].s_bool = (bool)x1;
	if(qt_Smoke->callMethod(553, (void*)this, x)) return;
	this->QCanvasItem::setSelected(x1);
    }
    virtual void setVelocity(double x1, double x2) {
	Smoke::StackItem x[3];
	x[1].s_double = (double)x1;
	x[2].s_double = (double)x2;
	if(qt_Smoke->callMethod(539, (void*)this, x)) return;
	this->QCanvasItem::setVelocity(x1, x2);
    }
    virtual void setVisible(bool x1) {
	Smoke::StackItem x[2];
	x[1].s_bool = (bool)x1;
	if(qt_Smoke->callMethod(551, (void*)this, x)) return;
	this->QCanvasItem::setVisible(x1);
    }
    ~x_QCanvasEllipse() {}
};
void xcall_QCanvasEllipse(Smoke::Index xi, void *obj, Smoke::Stack args) {
    x_QCanvasEllipse *xself = (x_QCanvasEllipse*)obj;
    switch(xi) {
	case 0: x_QCanvasEllipse::x_0(args);	break;
	case 1: x_QCanvasEllipse::x_1(args);	break;
	case 2: x_QCanvasEllipse::x_2(args);	break;
	case 3: xself->x_3(args);	break;
	case 4: xself->x_4(args);	break;
	case 5: xself->x_5(args);	break;
	case 6: xself->x_6(args);	break;
	case 7: xself->x_7(args);	break;
	case 8: xself->x_8(args);	break;
	case 9: xself->x_9(args);	break;
	case 10: xself->x_10(args);	break;
	case 11: xself->x_11(args);	break;
	case 12: xself->x_12(args);	break;
	case 13: delete (QCanvasEllipse*)xself;	break;
    }
}
