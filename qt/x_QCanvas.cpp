//Auto-generated by kalyptus. DO NOT EDIT.
#include <smoke.h>
#include <qt_smoke.h>
#include <qpoint.h>
#include <qcolor.h>
#include <qstring.h>
#include <qpointarray.h>
#include <qpainter.h>
#include <qsize.h>
#include <qcanvas.h>
#include <qvariant.h>
#include <qpixmap.h>
#include <qrect.h>

class x_QCanvas : public QCanvas {
public:
    void x_0(Smoke::Stack x) const {
	// metaObject()
	QMetaObject* xret = this->QCanvas::metaObject();
	x[0].s_class = (void*)xret;
    }
    void x_1(Smoke::Stack x) const {
	// className()
	const char* xret = this->QCanvas::className();
	x[0].s_voidp = (void*)xret;
    }
    void x_2(Smoke::Stack x) {
	// qt_cast(const char*)
	void* xret = this->QCanvas::qt_cast((const char*)x[1].s_voidp);
	x[0].s_voidp = (void*)xret;
    }
    void x_3(Smoke::Stack x) {
	// qt_invoke(int, QUObject*)
	bool xret = this->QCanvas::qt_invoke((int)x[1].s_int,(QUObject*)x[2].s_voidp);
	x[0].s_bool = xret;
    }
    void x_4(Smoke::Stack x) {
	// qt_emit(int, QUObject*)
	bool xret = this->QCanvas::qt_emit((int)x[1].s_int,(QUObject*)x[2].s_voidp);
	x[0].s_bool = xret;
    }
    void x_5(Smoke::Stack x) {
	// qt_property(int, int, QVariant*)
	bool xret = this->QCanvas::qt_property((int)x[1].s_int,(int)x[2].s_int,(QVariant*)x[3].s_class);
	x[0].s_bool = xret;
    }
    void x_6(Smoke::Stack x) {
	// qObject()
	QObject* xret = this->QCanvas::qObject();
	x[0].s_class = (void*)xret;
    }
    static void x_7(Smoke::Stack x) {
	// QCanvas(QObject*, const char*)
	x_QCanvas* xret = new x_QCanvas((QObject*)x[1].s_class,(const char*)x[2].s_voidp);
	x[0].s_class = (void*)xret;
    }
    x_QCanvas(QObject* x1, const char* x2) : QCanvas(x1, x2) {
    }
    static void x_8(Smoke::Stack x) {
	// QCanvas(QObject*)
	x_QCanvas* xret = new x_QCanvas((QObject*)x[1].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QCanvas(QObject* x1) : QCanvas(x1) {
    }
    static void x_9(Smoke::Stack x) {
	// QCanvas()
	x_QCanvas* xret = new x_QCanvas();
	x[0].s_class = (void*)xret;
    }
    x_QCanvas() : QCanvas() {
    }
    static void x_10(Smoke::Stack x) {
	// QCanvas(int, int)
	x_QCanvas* xret = new x_QCanvas((int)x[1].s_int,(int)x[2].s_int);
	x[0].s_class = (void*)xret;
    }
    x_QCanvas(int x1, int x2) : QCanvas(x1, x2) {
    }
    static void x_11(Smoke::Stack x) {
	// QCanvas(QPixmap, int, int, int, int)
	x_QCanvas* xret = new x_QCanvas(*(QPixmap *)x[1].s_class,(int)x[2].s_int,(int)x[3].s_int,(int)x[4].s_int,(int)x[5].s_int);
	x[0].s_class = (void*)xret;
    }
    x_QCanvas(QPixmap x1, int x2, int x3, int x4, int x5) : QCanvas(x1, x2, x3, x4, x5) {
    }
    void x_12(Smoke::Stack x) {
	// setTiles(QPixmap, int, int, int, int)
	this->QCanvas::setTiles(*(QPixmap *)x[1].s_class,(int)x[2].s_int,(int)x[3].s_int,(int)x[4].s_int,(int)x[5].s_int);
	(void)x; // noop (for compiler warning)
    }
    void x_13(Smoke::Stack x) {
	// setBackgroundPixmap(const QPixmap&)
	this->QCanvas::setBackgroundPixmap(*(const QPixmap *)x[1].s_class);
	(void)x; // noop (for compiler warning)
    }
    void x_14(Smoke::Stack x) const {
	// backgroundPixmap()
	QPixmap xret = this->QCanvas::backgroundPixmap();
	x[0].s_class = (void*)new QPixmap(xret);
    }
    void x_15(Smoke::Stack x) {
	// setBackgroundColor(const QColor&)
	this->QCanvas::setBackgroundColor(*(const QColor *)x[1].s_class);
	(void)x; // noop (for compiler warning)
    }
    void x_16(Smoke::Stack x) const {
	// backgroundColor()
	QColor xret = this->QCanvas::backgroundColor();
	x[0].s_class = (void*)new QColor(xret);
    }
    void x_17(Smoke::Stack x) {
	// setTile(int, int, int)
	this->QCanvas::setTile((int)x[1].s_int,(int)x[2].s_int,(int)x[3].s_int);
	(void)x; // noop (for compiler warning)
    }
    void x_18(Smoke::Stack x) const {
	// tile(int, int)
	int xret = this->QCanvas::tile((int)x[1].s_int,(int)x[2].s_int);
	x[0].s_int = xret;
    }
    void x_19(Smoke::Stack x) const {
	// tilesHorizontally()
	int xret = this->QCanvas::tilesHorizontally();
	x[0].s_int = xret;
    }
    void x_20(Smoke::Stack x) const {
	// tilesVertically()
	int xret = this->QCanvas::tilesVertically();
	x[0].s_int = xret;
    }
    void x_21(Smoke::Stack x) const {
	// tileWidth()
	int xret = this->QCanvas::tileWidth();
	x[0].s_int = xret;
    }
    void x_22(Smoke::Stack x) const {
	// tileHeight()
	int xret = this->QCanvas::tileHeight();
	x[0].s_int = xret;
    }
    void x_23(Smoke::Stack x) {
	// resize(int, int)
	this->QCanvas::resize((int)x[1].s_int,(int)x[2].s_int);
	(void)x; // noop (for compiler warning)
    }
    void x_24(Smoke::Stack x) const {
	// width()
	int xret = this->QCanvas::width();
	x[0].s_int = xret;
    }
    void x_25(Smoke::Stack x) const {
	// height()
	int xret = this->QCanvas::height();
	x[0].s_int = xret;
    }
    void x_26(Smoke::Stack x) const {
	// size()
	QSize xret = this->QCanvas::size();
	x[0].s_class = (void*)new QSize(xret);
    }
    void x_27(Smoke::Stack x) const {
	// rect()
	QRect xret = this->QCanvas::rect();
	x[0].s_class = (void*)new QRect(xret);
    }
    void x_28(Smoke::Stack x) const {
	// onCanvas(int, int)
	bool xret = this->QCanvas::onCanvas((int)x[1].s_int,(int)x[2].s_int);
	x[0].s_bool = xret;
    }
    void x_29(Smoke::Stack x) const {
	// onCanvas(const QPoint&)
	bool xret = this->QCanvas::onCanvas(*(const QPoint *)x[1].s_class);
	x[0].s_bool = xret;
    }
    void x_30(Smoke::Stack x) const {
	// validChunk(int, int)
	bool xret = this->QCanvas::validChunk((int)x[1].s_int,(int)x[2].s_int);
	x[0].s_bool = xret;
    }
    void x_31(Smoke::Stack x) const {
	// validChunk(const QPoint&)
	bool xret = this->QCanvas::validChunk(*(const QPoint *)x[1].s_class);
	x[0].s_bool = xret;
    }
    void x_32(Smoke::Stack x) const {
	// chunkSize()
	int xret = this->QCanvas::chunkSize();
	x[0].s_int = xret;
    }
    void x_33(Smoke::Stack x) {
	// retune(int, int)
	this->QCanvas::retune((int)x[1].s_int,(int)x[2].s_int);
	(void)x; // noop (for compiler warning)
    }
    void x_34(Smoke::Stack x) {
	// retune(int)
	this->QCanvas::retune((int)x[1].s_int);
	(void)x; // noop (for compiler warning)
    }
    void x_35(Smoke::Stack x) const {
	// sameChunk(int, int, int, int)
	bool xret = this->QCanvas::sameChunk((int)x[1].s_int,(int)x[2].s_int,(int)x[3].s_int,(int)x[4].s_int);
	x[0].s_bool = xret;
    }
    void x_36(Smoke::Stack x) {
	// setChangedChunk(int, int)
	this->QCanvas::setChangedChunk((int)x[1].s_int,(int)x[2].s_int);
	(void)x; // noop (for compiler warning)
    }
    void x_37(Smoke::Stack x) {
	// setChangedChunkContaining(int, int)
	this->QCanvas::setChangedChunkContaining((int)x[1].s_int,(int)x[2].s_int);
	(void)x; // noop (for compiler warning)
    }
    void x_38(Smoke::Stack x) {
	// setAllChanged()
	this->QCanvas::setAllChanged();
	(void)x; // noop (for compiler warning)
    }
    void x_39(Smoke::Stack x) {
	// setChanged(const QRect&)
	this->QCanvas::setChanged(*(const QRect *)x[1].s_class);
	(void)x; // noop (for compiler warning)
    }
    void x_40(Smoke::Stack x) {
	// setUnchanged(const QRect&)
	this->QCanvas::setUnchanged(*(const QRect *)x[1].s_class);
	(void)x; // noop (for compiler warning)
    }
    void x_41(Smoke::Stack x) {
	// addItemToChunk(QCanvasItem*, int, int)
	this->QCanvas::addItemToChunk((QCanvasItem*)x[1].s_class,(int)x[2].s_int,(int)x[3].s_int);
	(void)x; // noop (for compiler warning)
    }
    void x_42(Smoke::Stack x) {
	// removeItemFromChunk(QCanvasItem*, int, int)
	this->QCanvas::removeItemFromChunk((QCanvasItem*)x[1].s_class,(int)x[2].s_int,(int)x[3].s_int);
	(void)x; // noop (for compiler warning)
    }
    void x_43(Smoke::Stack x) {
	// addItemToChunkContaining(QCanvasItem*, int, int)
	this->QCanvas::addItemToChunkContaining((QCanvasItem*)x[1].s_class,(int)x[2].s_int,(int)x[3].s_int);
	(void)x; // noop (for compiler warning)
    }
    void x_44(Smoke::Stack x) {
	// removeItemFromChunkContaining(QCanvasItem*, int, int)
	this->QCanvas::removeItemFromChunkContaining((QCanvasItem*)x[1].s_class,(int)x[2].s_int,(int)x[3].s_int);
	(void)x; // noop (for compiler warning)
    }
    void x_45(Smoke::Stack x) {
	// allItems()
	QCanvasItemList xret = this->QCanvas::allItems();
	x[0].s_class = (void*)new QCanvasItemList(xret);
    }
    void x_46(Smoke::Stack x) const {
	// collisions(const QPoint&)
	QCanvasItemList xret = this->QCanvas::collisions(*(const QPoint *)x[1].s_class);
	x[0].s_class = (void*)new QCanvasItemList(xret);
    }
    void x_47(Smoke::Stack x) const {
	// collisions(const QRect&)
	QCanvasItemList xret = this->QCanvas::collisions(*(const QRect *)x[1].s_class);
	x[0].s_class = (void*)new QCanvasItemList(xret);
    }
    void x_48(Smoke::Stack x) const {
	// collisions(const QPointArray&, const QCanvasItem*, bool)
	QCanvasItemList xret = this->QCanvas::collisions(*(const QPointArray *)x[1].s_class,(const QCanvasItem*)x[2].s_class,(bool)x[3].s_bool);
	x[0].s_class = (void*)new QCanvasItemList(xret);
    }
    void x_49(Smoke::Stack x) {
	// drawArea(const QRect&, QPainter*, bool)
	this->QCanvas::drawArea(*(const QRect *)x[1].s_class,(QPainter*)x[2].s_class,(bool)x[3].s_bool);
	(void)x; // noop (for compiler warning)
    }
    void x_50(Smoke::Stack x) {
	// drawArea(const QRect&, QPainter*)
	this->QCanvas::drawArea(*(const QRect *)x[1].s_class,(QPainter*)x[2].s_class);
	(void)x; // noop (for compiler warning)
    }
    void x_51(Smoke::Stack x) {
	// addView(QCanvasView*)
	this->QCanvas::addView((QCanvasView*)x[1].s_class);
	(void)x; // noop (for compiler warning)
    }
    void x_52(Smoke::Stack x) {
	// removeView(QCanvasView*)
	this->QCanvas::removeView((QCanvasView*)x[1].s_class);
	(void)x; // noop (for compiler warning)
    }
    void x_53(Smoke::Stack x) {
	// drawCanvasArea(const QRect&, QPainter*, bool)
	this->QCanvas::drawCanvasArea(*(const QRect *)x[1].s_class,(QPainter*)x[2].s_class,(bool)x[3].s_bool);
	(void)x; // noop (for compiler warning)
    }
    void x_54(Smoke::Stack x) {
	// drawCanvasArea(const QRect&, QPainter*)
	this->QCanvas::drawCanvasArea(*(const QRect *)x[1].s_class,(QPainter*)x[2].s_class);
	(void)x; // noop (for compiler warning)
    }
    void x_55(Smoke::Stack x) {
	// drawCanvasArea(const QRect&)
	this->QCanvas::drawCanvasArea(*(const QRect *)x[1].s_class);
	(void)x; // noop (for compiler warning)
    }
    void x_56(Smoke::Stack x) {
	// drawViewArea(QCanvasView*, QPainter*, const QRect&, bool)
	this->QCanvas::drawViewArea((QCanvasView*)x[1].s_class,(QPainter*)x[2].s_class,*(const QRect *)x[3].s_class,(bool)x[4].s_bool);
	(void)x; // noop (for compiler warning)
    }
    void x_57(Smoke::Stack x) {
	// addItem(QCanvasItem*)
	this->QCanvas::addItem((QCanvasItem*)x[1].s_class);
	(void)x; // noop (for compiler warning)
    }
    void x_58(Smoke::Stack x) {
	// addAnimation(QCanvasItem*)
	this->QCanvas::addAnimation((QCanvasItem*)x[1].s_class);
	(void)x; // noop (for compiler warning)
    }
    void x_59(Smoke::Stack x) {
	// removeItem(QCanvasItem*)
	this->QCanvas::removeItem((QCanvasItem*)x[1].s_class);
	(void)x; // noop (for compiler warning)
    }
    void x_60(Smoke::Stack x) {
	// removeAnimation(QCanvasItem*)
	this->QCanvas::removeAnimation((QCanvasItem*)x[1].s_class);
	(void)x; // noop (for compiler warning)
    }
    void x_61(Smoke::Stack x) {
	// setAdvancePeriod(int)
	this->QCanvas::setAdvancePeriod((int)x[1].s_int);
	(void)x; // noop (for compiler warning)
    }
    void x_62(Smoke::Stack x) {
	// setUpdatePeriod(int)
	this->QCanvas::setUpdatePeriod((int)x[1].s_int);
	(void)x; // noop (for compiler warning)
    }
    void x_63(Smoke::Stack x) {
	// setDoubleBuffering(bool)
	this->QCanvas::setDoubleBuffering((bool)x[1].s_bool);
	(void)x; // noop (for compiler warning)
    }
    void x_64(Smoke::Stack x) {
	// advance()
	this->QCanvas::advance();
	(void)x; // noop (for compiler warning)
    }
    void x_65(Smoke::Stack x) {
	// update()
	this->QCanvas::update();
	(void)x; // noop (for compiler warning)
    }
    void x_66(Smoke::Stack x) {
	// resized()
	this->QCanvas::resized();
	(void)x; // noop (for compiler warning)
    }
    static void x_67(Smoke::Stack x) {
	// staticMetaObject()
	QMetaObject* xret = QCanvas::staticMetaObject();
	x[0].s_class = (void*)xret;
    }
    static void x_68(Smoke::Stack x) {
	// tr(const char*, const char*)
	QString xret = QCanvas::tr((const char*)x[1].s_voidp,(const char*)x[2].s_voidp);
	x[0].s_voidp = (void*)new QString(xret);
    }
    static void x_69(Smoke::Stack x) {
	// tr(const char*)
	QString xret = QCanvas::tr((const char*)x[1].s_voidp);
	x[0].s_voidp = (void*)new QString(xret);
    }
    static void x_70(Smoke::Stack x) {
	// trUtf8(const char*, const char*)
	QString xret = QCanvas::trUtf8((const char*)x[1].s_voidp,(const char*)x[2].s_voidp);
	x[0].s_voidp = (void*)new QString(xret);
    }
    static void x_71(Smoke::Stack x) {
	// trUtf8(const char*)
	QString xret = QCanvas::trUtf8((const char*)x[1].s_voidp);
	x[0].s_voidp = (void*)new QString(xret);
    }
    void x_72(Smoke::Stack x) {
	// drawBackground(QPainter&, const QRect&)
	this->QCanvas::drawBackground(*(QPainter *)x[1].s_class,*(const QRect *)x[2].s_class);
	(void)x; // noop (for compiler warning)
    }
    void x_73(Smoke::Stack x) {
	// drawForeground(QPainter&, const QRect&)
	this->QCanvas::drawForeground(*(QPainter *)x[1].s_class,*(const QRect *)x[2].s_class);
	(void)x; // noop (for compiler warning)
    }
    virtual void addAnimation(QCanvasItem* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(622, (void*)this, x)) return;
	this->QCanvas::addAnimation(x1);
    }
    virtual void addItem(QCanvasItem* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(621, (void*)this, x)) return;
	this->QCanvas::addItem(x1);
    }
    virtual void addView(QCanvasView* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(615, (void*)this, x)) return;
	this->QCanvas::addView(x1);
    }
    virtual void advance() {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(628, (void*)this, x)) return;
	this->QCanvas::advance();
    }
    virtual bool checkConnectArgs(const char* x1, const QObject* x2, const char* x3) {
	Smoke::StackItem x[4];
	x[1].s_voidp = (void*)x1;
	x[2].s_class = (void*)x2;
	x[3].s_voidp = (void*)x3;
	if(qt_Smoke->binding->callMethod(6521, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QObject::checkConnectArgs(x1, x2, x3);
    }
    virtual void childEvent(QChildEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(6517, (void*)this, x)) return;
	this->QObject::childEvent(x1);
    }
    virtual const char* className() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(564, (void*)this, x)) return (const char*)x[0].s_class;
	return this->QCanvas::className();
    }
    virtual void connectNotify(const char* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(qt_Smoke->binding->callMethod(6519, (void*)this, x)) return;
	this->QObject::connectNotify(x1);
    }
    virtual void customEvent(QCustomEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(6518, (void*)this, x)) return;
	this->QObject::customEvent(x1);
    }
    virtual void disconnectNotify(const char* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(qt_Smoke->binding->callMethod(6520, (void*)this, x)) return;
	this->QObject::disconnectNotify(x1);
    }
    virtual void drawBackground(QPainter& x1, const QRect& x2) {
	Smoke::StackItem x[3];
	x[1].s_class = (void*)&x1;
	x[2].s_class = (void*)&x2;
	if(qt_Smoke->binding->callMethod(636, (void*)this, x)) return;
	this->QCanvas::drawBackground(x1, x2);
    }
    virtual void drawForeground(QPainter& x1, const QRect& x2) {
	Smoke::StackItem x[3];
	x[1].s_class = (void*)&x1;
	x[2].s_class = (void*)&x2;
	if(qt_Smoke->binding->callMethod(637, (void*)this, x)) return;
	this->QCanvas::drawForeground(x1, x2);
    }
    virtual bool event(QEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(6455, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QObject::event(x1);
    }
    virtual bool eventFilter(QObject* x1, QEvent* x2) {
	Smoke::StackItem x[3];
	x[1].s_class = (void*)x1;
	x[2].s_class = (void*)x2;
	if(qt_Smoke->binding->callMethod(6456, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QObject::eventFilter(x1, x2);
    }
    virtual void insertChild(QObject* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(6478, (void*)this, x)) return;
	this->QObject::insertChild(x1);
    }
    virtual QMetaObject* metaObject() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(563, (void*)this, x)) return (QMetaObject*)x[0].s_class;
	return this->QCanvas::metaObject();
    }
    virtual QVariant property(const char* x1) const {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(qt_Smoke->binding->callMethod(6492, (void*)this, x)) {
	    QVariant *xptr = (QVariant *)x[0].s_class;
	    QVariant xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QObject::property(x1);
    }
    virtual void* qt_cast(const char* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(qt_Smoke->binding->callMethod(565, (void*)this, x)) return (void*)x[0].s_voidp;
	return this->QCanvas::qt_cast(x1);
    }
    virtual bool qt_emit(int x1, QUObject* x2) {
	Smoke::StackItem x[3];
	x[1].s_int = x1;
	x[2].s_voidp = (void*)x2;
	if(qt_Smoke->binding->callMethod(567, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QCanvas::qt_emit(x1, x2);
    }
    virtual bool qt_invoke(int x1, QUObject* x2) {
	Smoke::StackItem x[3];
	x[1].s_int = x1;
	x[2].s_voidp = (void*)x2;
	if(qt_Smoke->binding->callMethod(566, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QCanvas::qt_invoke(x1, x2);
    }
    virtual bool qt_property(int x1, int x2, QVariant* x3) {
	Smoke::StackItem x[4];
	x[1].s_int = x1;
	x[2].s_int = x2;
	x[3].s_class = (void*)x3;
	if(qt_Smoke->binding->callMethod(568, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QCanvas::qt_property(x1, x2, x3);
    }
    virtual void removeAnimation(QCanvasItem* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(624, (void*)this, x)) return;
	this->QCanvas::removeAnimation(x1);
    }
    virtual void removeChild(QObject* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(6479, (void*)this, x)) return;
	this->QObject::removeChild(x1);
    }
    virtual void removeItem(QCanvasItem* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(623, (void*)this, x)) return;
	this->QCanvas::removeItem(x1);
    }
    virtual void removeView(QCanvasView* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(616, (void*)this, x)) return;
	this->QCanvas::removeView(x1);
    }
    virtual void resize(int x1, int x2) {
	Smoke::StackItem x[3];
	x[1].s_int = x1;
	x[2].s_int = x2;
	if(qt_Smoke->binding->callMethod(587, (void*)this, x)) return;
	this->QCanvas::resize(x1, x2);
    }
    virtual void retune(int x1, int x2) {
	Smoke::StackItem x[3];
	x[1].s_int = x1;
	x[2].s_int = x2;
	if(qt_Smoke->binding->callMethod(597, (void*)this, x)) return;
	this->QCanvas::retune(x1, x2);
    }
    virtual void setAdvancePeriod(int x1) {
	Smoke::StackItem x[2];
	x[1].s_int = x1;
	if(qt_Smoke->binding->callMethod(625, (void*)this, x)) return;
	this->QCanvas::setAdvancePeriod(x1);
    }
    virtual void setAllChanged() {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(602, (void*)this, x)) return;
	this->QCanvas::setAllChanged();
    }
    virtual void setBackgroundColor(const QColor& x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	if(qt_Smoke->binding->callMethod(579, (void*)this, x)) return;
	this->QCanvas::setBackgroundColor(x1);
    }
    virtual void setBackgroundPixmap(const QPixmap& x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	if(qt_Smoke->binding->callMethod(577, (void*)this, x)) return;
	this->QCanvas::setBackgroundPixmap(x1);
    }
    virtual void setChanged(const QRect& x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	if(qt_Smoke->binding->callMethod(603, (void*)this, x)) return;
	this->QCanvas::setChanged(x1);
    }
    virtual void setChangedChunk(int x1, int x2) {
	Smoke::StackItem x[3];
	x[1].s_int = x1;
	x[2].s_int = x2;
	if(qt_Smoke->binding->callMethod(600, (void*)this, x)) return;
	this->QCanvas::setChangedChunk(x1, x2);
    }
    virtual void setChangedChunkContaining(int x1, int x2) {
	Smoke::StackItem x[3];
	x[1].s_int = x1;
	x[2].s_int = x2;
	if(qt_Smoke->binding->callMethod(601, (void*)this, x)) return;
	this->QCanvas::setChangedChunkContaining(x1, x2);
    }
    virtual void setDoubleBuffering(bool x1) {
	Smoke::StackItem x[2];
	x[1].s_bool = x1;
	if(qt_Smoke->binding->callMethod(627, (void*)this, x)) return;
	this->QCanvas::setDoubleBuffering(x1);
    }
    virtual void setName(const char* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(qt_Smoke->binding->callMethod(6461, (void*)this, x)) return;
	this->QObject::setName(x1);
    }
    virtual bool setProperty(const char* x1, const QVariant& x2) {
	Smoke::StackItem x[3];
	x[1].s_voidp = (void*)x1;
	x[2].s_class = (void*)&x2;
	if(qt_Smoke->binding->callMethod(6491, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QObject::setProperty(x1, x2);
    }
    virtual void setTile(int x1, int x2, int x3) {
	Smoke::StackItem x[4];
	x[1].s_int = x1;
	x[2].s_int = x2;
	x[3].s_int = x3;
	if(qt_Smoke->binding->callMethod(581, (void*)this, x)) return;
	this->QCanvas::setTile(x1, x2, x3);
    }
    virtual void setTiles(QPixmap x1, int x2, int x3, int x4, int x5) {
	Smoke::StackItem x[6];
	x[1].s_class = (void*)&x1;
	x[2].s_int = x2;
	x[3].s_int = x3;
	x[4].s_int = x4;
	x[5].s_int = x5;
	if(qt_Smoke->binding->callMethod(576, (void*)this, x)) return;
	this->QCanvas::setTiles(x1, x2, x3, x4, x5);
    }
    virtual void setUnchanged(const QRect& x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	if(qt_Smoke->binding->callMethod(604, (void*)this, x)) return;
	this->QCanvas::setUnchanged(x1);
    }
    virtual void setUpdatePeriod(int x1) {
	Smoke::StackItem x[2];
	x[1].s_int = x1;
	if(qt_Smoke->binding->callMethod(626, (void*)this, x)) return;
	this->QCanvas::setUpdatePeriod(x1);
    }
    virtual void timerEvent(QTimerEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(6516, (void*)this, x)) return;
	this->QObject::timerEvent(x1);
    }
    virtual void update() {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(629, (void*)this, x)) return;
	this->QCanvas::update();
    }
    ~x_QCanvas() { qt_Smoke->binding->deleted(19, (void*)this); }
};
void xcall_QCanvas(Smoke::Index xi, void *obj, Smoke::Stack args) {
    x_QCanvas *xself = (x_QCanvas*)obj;
    switch(xi) {
	case 0: xself->x_0(args);	break;
	case 1: xself->x_1(args);	break;
	case 2: xself->x_2(args);	break;
	case 3: xself->x_3(args);	break;
	case 4: xself->x_4(args);	break;
	case 5: xself->x_5(args);	break;
	case 6: xself->x_6(args);	break;
	case 7: x_QCanvas::x_7(args);	break;
	case 8: x_QCanvas::x_8(args);	break;
	case 9: x_QCanvas::x_9(args);	break;
	case 10: x_QCanvas::x_10(args);	break;
	case 11: x_QCanvas::x_11(args);	break;
	case 12: xself->x_12(args);	break;
	case 13: xself->x_13(args);	break;
	case 14: xself->x_14(args);	break;
	case 15: xself->x_15(args);	break;
	case 16: xself->x_16(args);	break;
	case 17: xself->x_17(args);	break;
	case 18: xself->x_18(args);	break;
	case 19: xself->x_19(args);	break;
	case 20: xself->x_20(args);	break;
	case 21: xself->x_21(args);	break;
	case 22: xself->x_22(args);	break;
	case 23: xself->x_23(args);	break;
	case 24: xself->x_24(args);	break;
	case 25: xself->x_25(args);	break;
	case 26: xself->x_26(args);	break;
	case 27: xself->x_27(args);	break;
	case 28: xself->x_28(args);	break;
	case 29: xself->x_29(args);	break;
	case 30: xself->x_30(args);	break;
	case 31: xself->x_31(args);	break;
	case 32: xself->x_32(args);	break;
	case 33: xself->x_33(args);	break;
	case 34: xself->x_34(args);	break;
	case 35: xself->x_35(args);	break;
	case 36: xself->x_36(args);	break;
	case 37: xself->x_37(args);	break;
	case 38: xself->x_38(args);	break;
	case 39: xself->x_39(args);	break;
	case 40: xself->x_40(args);	break;
	case 41: xself->x_41(args);	break;
	case 42: xself->x_42(args);	break;
	case 43: xself->x_43(args);	break;
	case 44: xself->x_44(args);	break;
	case 45: xself->x_45(args);	break;
	case 46: xself->x_46(args);	break;
	case 47: xself->x_47(args);	break;
	case 48: xself->x_48(args);	break;
	case 49: xself->x_49(args);	break;
	case 50: xself->x_50(args);	break;
	case 51: xself->x_51(args);	break;
	case 52: xself->x_52(args);	break;
	case 53: xself->x_53(args);	break;
	case 54: xself->x_54(args);	break;
	case 55: xself->x_55(args);	break;
	case 56: xself->x_56(args);	break;
	case 57: xself->x_57(args);	break;
	case 58: xself->x_58(args);	break;
	case 59: xself->x_59(args);	break;
	case 60: xself->x_60(args);	break;
	case 61: xself->x_61(args);	break;
	case 62: xself->x_62(args);	break;
	case 63: xself->x_63(args);	break;
	case 64: xself->x_64(args);	break;
	case 65: xself->x_65(args);	break;
	case 66: xself->x_66(args);	break;
	case 67: x_QCanvas::x_67(args);	break;
	case 68: x_QCanvas::x_68(args);	break;
	case 69: x_QCanvas::x_69(args);	break;
	case 70: x_QCanvas::x_70(args);	break;
	case 71: x_QCanvas::x_71(args);	break;
	case 72: xself->x_72(args);	break;
	case 73: xself->x_73(args);	break;
	case 74: delete (QCanvas*)xself;	break;
    }
}
