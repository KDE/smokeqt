//Auto-generated by kalyptus. DO NOT EDIT.
#include <smoke.h>
#include <qt_smoke.h>
#include <qpoint.h>
#include <qstring.h>
#include <qsize.h>
#include <qvariant.h>
#include <qpalette.h>
#include <qrect.h>
#include <qpixmap.h>
#include <qmotifstyle.h>
#include <qstyle.h>

class x_QMotifStyle : public QMotifStyle {
public:
    void x_0(Smoke::Stack x) const {
	// metaObject()
	QMetaObject* xret = this->QMotifStyle::metaObject();
	x[0].s_class = (void*)xret;
    }
    void x_1(Smoke::Stack x) const {
	// className()
	const char* xret = this->QMotifStyle::className();
	x[0].s_voidp = (void*)xret;
    }
    void x_2(Smoke::Stack x) {
	// qt_cast(const char*)
	void* xret = this->QMotifStyle::qt_cast((const char*)x[1].s_voidp);
	x[0].s_voidp = (void*)xret;
    }
    void x_3(Smoke::Stack x) {
	// qt_invoke(int, QUObject*)
	bool xret = this->QMotifStyle::qt_invoke((int)x[1].s_int,(QUObject*)x[2].s_voidp);
	x[0].s_bool = xret;
    }
    void x_4(Smoke::Stack x) {
	// qt_emit(int, QUObject*)
	bool xret = this->QMotifStyle::qt_emit((int)x[1].s_int,(QUObject*)x[2].s_voidp);
	x[0].s_bool = xret;
    }
    void x_5(Smoke::Stack x) {
	// qt_property(int, int, QVariant*)
	bool xret = this->QMotifStyle::qt_property((int)x[1].s_int,(int)x[2].s_int,(QVariant*)x[3].s_class);
	x[0].s_bool = xret;
    }
    void x_6(Smoke::Stack x) {
	// qObject()
	QObject* xret = this->QMotifStyle::qObject();
	x[0].s_class = (void*)xret;
    }
    static void x_7(Smoke::Stack x) {
	// QMotifStyle(bool)
	x_QMotifStyle* xret = new x_QMotifStyle((bool)x[1].s_bool);
	x[0].s_class = (void*)xret;
    }
    x_QMotifStyle(bool x1) : QMotifStyle(x1) {
    }
    static void x_8(Smoke::Stack x) {
	// QMotifStyle()
	x_QMotifStyle* xret = new x_QMotifStyle();
	x[0].s_class = (void*)xret;
    }
    x_QMotifStyle() : QMotifStyle() {
    }
    void x_9(Smoke::Stack x) {
	// setUseHighlightColors(bool)
	this->QMotifStyle::setUseHighlightColors((bool)x[1].s_bool);
	(void)x; // noop (for compiler warning)
    }
    void x_10(Smoke::Stack x) const {
	// useHighlightColors()
	bool xret = this->QMotifStyle::useHighlightColors();
	x[0].s_bool = xret;
    }
    void x_11(Smoke::Stack x) {
	// polish(QPalette&)
	this->QMotifStyle::polish(*(QPalette *)x[1].s_class);
	(void)x; // noop (for compiler warning)
    }
    void x_12(Smoke::Stack x) {
	// polish(QWidget*)
	this->QMotifStyle::polish((QWidget*)x[1].s_class);
	(void)x; // noop (for compiler warning)
    }
    void x_13(Smoke::Stack x) {
	// polish(QApplication*)
	this->QMotifStyle::polish((QApplication*)x[1].s_class);
	(void)x; // noop (for compiler warning)
    }
    void x_14(Smoke::Stack x) {
	// polishPopupMenu(QPopupMenu*)
	this->QMotifStyle::polishPopupMenu((QPopupMenu*)x[1].s_class);
	(void)x; // noop (for compiler warning)
    }
    void x_15(Smoke::Stack x) const {
	// drawPrimitive(QStyle::PrimitiveElement, QPainter*, const QRect&, const QColorGroup&, QStyle::SFlags, const QStyleOption&)
	this->QMotifStyle::drawPrimitive((QStyle::PrimitiveElement)x[1].s_enum,(QPainter*)x[2].s_class,*(const QRect *)x[3].s_class,*(const QColorGroup *)x[4].s_class,(QStyle::SFlags)x[5].s_int,*(const QStyleOption *)x[6].s_class);
	(void)x; // noop (for compiler warning)
    }
    void x_16(Smoke::Stack x) const {
	// drawPrimitive(QStyle::PrimitiveElement, QPainter*, const QRect&, const QColorGroup&, QStyle::SFlags)
	this->QMotifStyle::drawPrimitive((QStyle::PrimitiveElement)x[1].s_enum,(QPainter*)x[2].s_class,*(const QRect *)x[3].s_class,*(const QColorGroup *)x[4].s_class,(QStyle::SFlags)x[5].s_int);
	(void)x; // noop (for compiler warning)
    }
    void x_17(Smoke::Stack x) const {
	// drawPrimitive(QStyle::PrimitiveElement, QPainter*, const QRect&, const QColorGroup&)
	this->QMotifStyle::drawPrimitive((QStyle::PrimitiveElement)x[1].s_enum,(QPainter*)x[2].s_class,*(const QRect *)x[3].s_class,*(const QColorGroup *)x[4].s_class);
	(void)x; // noop (for compiler warning)
    }
    void x_18(Smoke::Stack x) const {
	// drawControl(QStyle::ControlElement, QPainter*, const QWidget*, const QRect&, const QColorGroup&, QStyle::SFlags, const QStyleOption&)
	this->QMotifStyle::drawControl((QStyle::ControlElement)x[1].s_enum,(QPainter*)x[2].s_class,(const QWidget*)x[3].s_class,*(const QRect *)x[4].s_class,*(const QColorGroup *)x[5].s_class,(QStyle::SFlags)x[6].s_int,*(const QStyleOption *)x[7].s_class);
	(void)x; // noop (for compiler warning)
    }
    void x_19(Smoke::Stack x) const {
	// drawControl(QStyle::ControlElement, QPainter*, const QWidget*, const QRect&, const QColorGroup&, QStyle::SFlags)
	this->QMotifStyle::drawControl((QStyle::ControlElement)x[1].s_enum,(QPainter*)x[2].s_class,(const QWidget*)x[3].s_class,*(const QRect *)x[4].s_class,*(const QColorGroup *)x[5].s_class,(QStyle::SFlags)x[6].s_int);
	(void)x; // noop (for compiler warning)
    }
    void x_20(Smoke::Stack x) const {
	// drawControl(QStyle::ControlElement, QPainter*, const QWidget*, const QRect&, const QColorGroup&)
	this->QMotifStyle::drawControl((QStyle::ControlElement)x[1].s_enum,(QPainter*)x[2].s_class,(const QWidget*)x[3].s_class,*(const QRect *)x[4].s_class,*(const QColorGroup *)x[5].s_class);
	(void)x; // noop (for compiler warning)
    }
    void x_21(Smoke::Stack x) const {
	// drawComplexControl(QStyle::ComplexControl, QPainter*, const QWidget*, const QRect&, const QColorGroup&, QStyle::SFlags, QStyle::SCFlags, QStyle::SCFlags, const QStyleOption&)
	this->QMotifStyle::drawComplexControl((QStyle::ComplexControl)x[1].s_enum,(QPainter*)x[2].s_class,(const QWidget*)x[3].s_class,*(const QRect *)x[4].s_class,*(const QColorGroup *)x[5].s_class,(QStyle::SFlags)x[6].s_int,(QStyle::SCFlags)x[7].s_int,(QStyle::SCFlags)x[8].s_int,*(const QStyleOption *)x[9].s_class);
	(void)x; // noop (for compiler warning)
    }
    void x_22(Smoke::Stack x) const {
	// drawComplexControl(QStyle::ComplexControl, QPainter*, const QWidget*, const QRect&, const QColorGroup&, QStyle::SFlags, QStyle::SCFlags, QStyle::SCFlags)
	this->QMotifStyle::drawComplexControl((QStyle::ComplexControl)x[1].s_enum,(QPainter*)x[2].s_class,(const QWidget*)x[3].s_class,*(const QRect *)x[4].s_class,*(const QColorGroup *)x[5].s_class,(QStyle::SFlags)x[6].s_int,(QStyle::SCFlags)x[7].s_int,(QStyle::SCFlags)x[8].s_int);
	(void)x; // noop (for compiler warning)
    }
    void x_23(Smoke::Stack x) const {
	// drawComplexControl(QStyle::ComplexControl, QPainter*, const QWidget*, const QRect&, const QColorGroup&, QStyle::SFlags, QStyle::SCFlags)
	this->QMotifStyle::drawComplexControl((QStyle::ComplexControl)x[1].s_enum,(QPainter*)x[2].s_class,(const QWidget*)x[3].s_class,*(const QRect *)x[4].s_class,*(const QColorGroup *)x[5].s_class,(QStyle::SFlags)x[6].s_int,(QStyle::SCFlags)x[7].s_int);
	(void)x; // noop (for compiler warning)
    }
    void x_24(Smoke::Stack x) const {
	// drawComplexControl(QStyle::ComplexControl, QPainter*, const QWidget*, const QRect&, const QColorGroup&, QStyle::SFlags)
	this->QMotifStyle::drawComplexControl((QStyle::ComplexControl)x[1].s_enum,(QPainter*)x[2].s_class,(const QWidget*)x[3].s_class,*(const QRect *)x[4].s_class,*(const QColorGroup *)x[5].s_class,(QStyle::SFlags)x[6].s_int);
	(void)x; // noop (for compiler warning)
    }
    void x_25(Smoke::Stack x) const {
	// drawComplexControl(QStyle::ComplexControl, QPainter*, const QWidget*, const QRect&, const QColorGroup&)
	this->QMotifStyle::drawComplexControl((QStyle::ComplexControl)x[1].s_enum,(QPainter*)x[2].s_class,(const QWidget*)x[3].s_class,*(const QRect *)x[4].s_class,*(const QColorGroup *)x[5].s_class);
	(void)x; // noop (for compiler warning)
    }
    void x_26(Smoke::Stack x) const {
	// querySubControlMetrics(QStyle::ComplexControl, const QWidget*, QStyle::SubControl, const QStyleOption&)
	QRect xret = this->QMotifStyle::querySubControlMetrics((QStyle::ComplexControl)x[1].s_enum,(const QWidget*)x[2].s_class,(QStyle::SubControl)x[3].s_enum,*(const QStyleOption *)x[4].s_class);
	x[0].s_class = (void*)new QRect(xret);
    }
    void x_27(Smoke::Stack x) const {
	// querySubControlMetrics(QStyle::ComplexControl, const QWidget*, QStyle::SubControl)
	QRect xret = this->QMotifStyle::querySubControlMetrics((QStyle::ComplexControl)x[1].s_enum,(const QWidget*)x[2].s_class,(QStyle::SubControl)x[3].s_enum);
	x[0].s_class = (void*)new QRect(xret);
    }
    void x_28(Smoke::Stack x) const {
	// pixelMetric(QStyle::PixelMetric, const QWidget*)
	int xret = this->QMotifStyle::pixelMetric((QStyle::PixelMetric)x[1].s_enum,(const QWidget*)x[2].s_class);
	x[0].s_int = xret;
    }
    void x_29(Smoke::Stack x) const {
	// pixelMetric(QStyle::PixelMetric)
	int xret = this->QMotifStyle::pixelMetric((QStyle::PixelMetric)x[1].s_enum);
	x[0].s_int = xret;
    }
    void x_30(Smoke::Stack x) const {
	// sizeFromContents(QStyle::ContentsType, const QWidget*, const QSize&, const QStyleOption&)
	QSize xret = this->QMotifStyle::sizeFromContents((QStyle::ContentsType)x[1].s_enum,(const QWidget*)x[2].s_class,*(const QSize *)x[3].s_class,*(const QStyleOption *)x[4].s_class);
	x[0].s_class = (void*)new QSize(xret);
    }
    void x_31(Smoke::Stack x) const {
	// sizeFromContents(QStyle::ContentsType, const QWidget*, const QSize&)
	QSize xret = this->QMotifStyle::sizeFromContents((QStyle::ContentsType)x[1].s_enum,(const QWidget*)x[2].s_class,*(const QSize *)x[3].s_class);
	x[0].s_class = (void*)new QSize(xret);
    }
    void x_32(Smoke::Stack x) const {
	// subRect(QStyle::SubRect, const QWidget*)
	QRect xret = this->QMotifStyle::subRect((QStyle::SubRect)x[1].s_enum,(const QWidget*)x[2].s_class);
	x[0].s_class = (void*)new QRect(xret);
    }
    void x_33(Smoke::Stack x) const {
	// stylePixmap(QStyle::StylePixmap, const QWidget*, const QStyleOption&)
	QPixmap xret = this->QMotifStyle::stylePixmap((QStyle::StylePixmap)x[1].s_enum,(const QWidget*)x[2].s_class,*(const QStyleOption *)x[3].s_class);
	x[0].s_class = (void*)new QPixmap(xret);
    }
    void x_34(Smoke::Stack x) const {
	// stylePixmap(QStyle::StylePixmap, const QWidget*)
	QPixmap xret = this->QMotifStyle::stylePixmap((QStyle::StylePixmap)x[1].s_enum,(const QWidget*)x[2].s_class);
	x[0].s_class = (void*)new QPixmap(xret);
    }
    void x_35(Smoke::Stack x) const {
	// stylePixmap(QStyle::StylePixmap)
	QPixmap xret = this->QMotifStyle::stylePixmap((QStyle::StylePixmap)x[1].s_enum);
	x[0].s_class = (void*)new QPixmap(xret);
    }
    void x_36(Smoke::Stack x) const {
	// styleHint(QStyle::StyleHint, const QWidget*, const QStyleOption&, QStyleHintReturn*)
	int xret = this->QMotifStyle::styleHint((QStyle::StyleHint)x[1].s_enum,(const QWidget*)x[2].s_class,*(const QStyleOption *)x[3].s_class,(QStyleHintReturn*)x[4].s_voidp);
	x[0].s_int = xret;
    }
    void x_37(Smoke::Stack x) const {
	// styleHint(QStyle::StyleHint, const QWidget*, const QStyleOption&)
	int xret = this->QMotifStyle::styleHint((QStyle::StyleHint)x[1].s_enum,(const QWidget*)x[2].s_class,*(const QStyleOption *)x[3].s_class);
	x[0].s_int = xret;
    }
    void x_38(Smoke::Stack x) const {
	// styleHint(QStyle::StyleHint, const QWidget*)
	int xret = this->QMotifStyle::styleHint((QStyle::StyleHint)x[1].s_enum,(const QWidget*)x[2].s_class);
	x[0].s_int = xret;
    }
    static void x_39(Smoke::Stack x) {
	// staticMetaObject()
	QMetaObject* xret = QMotifStyle::staticMetaObject();
	x[0].s_class = (void*)xret;
    }
    static void x_40(Smoke::Stack x) {
	// tr(const char*, const char*)
	QString xret = QMotifStyle::tr((const char*)x[1].s_voidp,(const char*)x[2].s_voidp);
	x[0].s_voidp = (void*)new QString(xret);
    }
    static void x_41(Smoke::Stack x) {
	// tr(const char*)
	QString xret = QMotifStyle::tr((const char*)x[1].s_voidp);
	x[0].s_voidp = (void*)new QString(xret);
    }
    static void x_42(Smoke::Stack x) {
	// trUtf8(const char*, const char*)
	QString xret = QMotifStyle::trUtf8((const char*)x[1].s_voidp,(const char*)x[2].s_voidp);
	x[0].s_voidp = (void*)new QString(xret);
    }
    static void x_43(Smoke::Stack x) {
	// trUtf8(const char*)
	QString xret = QMotifStyle::trUtf8((const char*)x[1].s_voidp);
	x[0].s_voidp = (void*)new QString(xret);
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
	if(qt_Smoke->binding->callMethod(6152, (void*)this, x)) return (const char*)x[0].s_class;
	return this->QMotifStyle::className();
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
    virtual void drawComplexControl(QStyle::ComplexControl x1, QPainter* x2, const QWidget* x3, const QRect& x4, const QColorGroup& x5, QStyle::SFlags x6, QStyle::SCFlags x7, QStyle::SCFlags x8, const QStyleOption& x9) const {
	Smoke::StackItem x[10];
	x[1].s_enum = x1;
	x[2].s_class = (void*)x2;
	x[3].s_class = (void*)x3;
	x[4].s_class = (void*)&x4;
	x[5].s_class = (void*)&x5;
	x[6].s_int = x6;
	x[7].s_int = x7;
	x[8].s_int = x8;
	x[9].s_class = (void*)&x9;
	if(qt_Smoke->binding->callMethod(6173, (void*)this, x)) return;
	this->QMotifStyle::drawComplexControl(x1, x2, x3, x4, x5, x6, x7, x8, x9);
    }
    virtual void drawComplexControlMask(QStyle::ComplexControl x1, QPainter* x2, const QWidget* x3, const QRect& x4, const QStyleOption& x5) const {
	Smoke::StackItem x[6];
	x[1].s_enum = x1;
	x[2].s_class = (void*)x2;
	x[3].s_class = (void*)x3;
	x[4].s_class = (void*)&x4;
	x[5].s_class = (void*)&x5;
	if(qt_Smoke->binding->callMethod(1423, (void*)this, x)) return;
	this->QCommonStyle::drawComplexControlMask(x1, x2, x3, x4, x5);
    }
    virtual void drawControl(QStyle::ControlElement x1, QPainter* x2, const QWidget* x3, const QRect& x4, const QColorGroup& x5, QStyle::SFlags x6, const QStyleOption& x7) const {
	Smoke::StackItem x[8];
	x[1].s_enum = x1;
	x[2].s_class = (void*)x2;
	x[3].s_class = (void*)x3;
	x[4].s_class = (void*)&x4;
	x[5].s_class = (void*)&x5;
	x[6].s_int = x6;
	x[7].s_class = (void*)&x7;
	if(qt_Smoke->binding->callMethod(6170, (void*)this, x)) return;
	this->QMotifStyle::drawControl(x1, x2, x3, x4, x5, x6, x7);
    }
    virtual void drawControlMask(QStyle::ControlElement x1, QPainter* x2, const QWidget* x3, const QRect& x4, const QStyleOption& x5) const {
	Smoke::StackItem x[6];
	x[1].s_enum = x1;
	x[2].s_class = (void*)x2;
	x[3].s_class = (void*)x3;
	x[4].s_class = (void*)&x4;
	x[5].s_class = (void*)&x5;
	if(qt_Smoke->binding->callMethod(1415, (void*)this, x)) return;
	this->QCommonStyle::drawControlMask(x1, x2, x3, x4, x5);
    }
    virtual void drawItem(QPainter* x1, const QRect& x2, int x3, const QColorGroup& x4, bool x5, const QPixmap* x6, const QString& x7, int x8, const QColor* x9) const {
	Smoke::StackItem x[10];
	x[1].s_class = (void*)x1;
	x[2].s_class = (void*)&x2;
	x[3].s_int = x3;
	x[4].s_class = (void*)&x4;
	x[5].s_bool = x5;
	x[6].s_class = (void*)x6;
	x[7].s_voidp = (void*)&x7;
	x[8].s_int = x8;
	x[9].s_class = (void*)x9;
	if(qt_Smoke->binding->callMethod(9424, (void*)this, x)) return;
	this->QStyle::drawItem(x1, x2, x3, x4, x5, x6, x7, x8, x9);
    }
    virtual void drawPrimitive(QStyle::PrimitiveElement x1, QPainter* x2, const QRect& x3, const QColorGroup& x4, QStyle::SFlags x5, const QStyleOption& x6) const {
	Smoke::StackItem x[7];
	x[1].s_enum = x1;
	x[2].s_class = (void*)x2;
	x[3].s_class = (void*)&x3;
	x[4].s_class = (void*)&x4;
	x[5].s_int = x5;
	x[6].s_class = (void*)&x6;
	if(qt_Smoke->binding->callMethod(6167, (void*)this, x)) return;
	this->QMotifStyle::drawPrimitive(x1, x2, x3, x4, x5, x6);
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
    virtual QRect itemRect(QPainter* x1, const QRect& x2, int x3, bool x4, const QPixmap* x5, const QString& x6, int x7) const {
	Smoke::StackItem x[8];
	x[1].s_class = (void*)x1;
	x[2].s_class = (void*)&x2;
	x[3].s_int = x3;
	x[4].s_bool = x4;
	x[5].s_class = (void*)x5;
	x[6].s_voidp = (void*)&x6;
	x[7].s_int = x7;
	if(qt_Smoke->binding->callMethod(9422, (void*)this, x)) {
	    QRect *xptr = (QRect *)x[0].s_class;
	    QRect xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QStyle::itemRect(x1, x2, x3, x4, x5, x6, x7);
    }
    virtual QMetaObject* metaObject() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(6151, (void*)this, x)) return (QMetaObject*)x[0].s_class;
	return this->QMotifStyle::metaObject();
    }
    virtual int pixelMetric(QStyle::PixelMetric x1, const QWidget* x2) const {
	Smoke::StackItem x[3];
	x[1].s_enum = x1;
	x[2].s_class = (void*)x2;
	if(qt_Smoke->binding->callMethod(6180, (void*)this, x)) return (int)x[0].s_int;
	return this->QMotifStyle::pixelMetric(x1, x2);
    }
    virtual void polish(QApplication* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(6165, (void*)this, x)) return;
	this->QMotifStyle::polish(x1);
    }
    virtual void polish(QPalette& x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	if(qt_Smoke->binding->callMethod(6163, (void*)this, x)) return;
	this->QMotifStyle::polish(x1);
    }
    virtual void polish(QWidget* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(6164, (void*)this, x)) return;
	this->QMotifStyle::polish(x1);
    }
    virtual void polishPopupMenu(QPopupMenu* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(6166, (void*)this, x)) return;
	this->QMotifStyle::polishPopupMenu(x1);
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
	if(qt_Smoke->binding->callMethod(6153, (void*)this, x)) return (void*)x[0].s_voidp;
	return this->QMotifStyle::qt_cast(x1);
    }
    virtual bool qt_emit(int x1, QUObject* x2) {
	Smoke::StackItem x[3];
	x[1].s_int = x1;
	x[2].s_voidp = (void*)x2;
	if(qt_Smoke->binding->callMethod(6155, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QMotifStyle::qt_emit(x1, x2);
    }
    virtual bool qt_invoke(int x1, QUObject* x2) {
	Smoke::StackItem x[3];
	x[1].s_int = x1;
	x[2].s_voidp = (void*)x2;
	if(qt_Smoke->binding->callMethod(6154, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QMotifStyle::qt_invoke(x1, x2);
    }
    virtual bool qt_property(int x1, int x2, QVariant* x3) {
	Smoke::StackItem x[4];
	x[1].s_int = x1;
	x[2].s_int = x2;
	x[3].s_class = (void*)x3;
	if(qt_Smoke->binding->callMethod(6156, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QMotifStyle::qt_property(x1, x2, x3);
    }
    virtual QStyle::SubControl querySubControl(QStyle::ComplexControl x1, const QWidget* x2, const QPoint& x3, const QStyleOption& x4) const {
	Smoke::StackItem x[5];
	x[1].s_enum = x1;
	x[2].s_class = (void*)x2;
	x[3].s_class = (void*)&x3;
	x[4].s_class = (void*)&x4;
	if(qt_Smoke->binding->callMethod(1427, (void*)this, x)) {
	    QStyle::SubControl *xptr = (QStyle::SubControl *)x[0].s_class;
	    QStyle::SubControl xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QCommonStyle::querySubControl(x1, x2, x3, x4);
    }
    virtual QRect querySubControlMetrics(QStyle::ComplexControl x1, const QWidget* x2, QStyle::SubControl x3, const QStyleOption& x4) const {
	Smoke::StackItem x[5];
	x[1].s_enum = x1;
	x[2].s_class = (void*)x2;
	x[3].s_enum = x3;
	x[4].s_class = (void*)&x4;
	if(qt_Smoke->binding->callMethod(6178, (void*)this, x)) {
	    QRect *xptr = (QRect *)x[0].s_class;
	    QRect xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QMotifStyle::querySubControlMetrics(x1, x2, x3, x4);
    }
    virtual void removeChild(QObject* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(6479, (void*)this, x)) return;
	this->QObject::removeChild(x1);
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
    virtual QSize sizeFromContents(QStyle::ContentsType x1, const QWidget* x2, const QSize& x3, const QStyleOption& x4) const {
	Smoke::StackItem x[5];
	x[1].s_enum = x1;
	x[2].s_class = (void*)x2;
	x[3].s_class = (void*)&x3;
	x[4].s_class = (void*)&x4;
	if(qt_Smoke->binding->callMethod(6182, (void*)this, x)) {
	    QSize *xptr = (QSize *)x[0].s_class;
	    QSize xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QMotifStyle::sizeFromContents(x1, x2, x3, x4);
    }
    virtual int styleHint(QStyle::StyleHint x1, const QWidget* x2, const QStyleOption& x3, QStyleHintReturn* x4) const {
	Smoke::StackItem x[5];
	x[1].s_enum = x1;
	x[2].s_class = (void*)x2;
	x[3].s_class = (void*)&x3;
	x[4].s_voidp = (void*)x4;
	if(qt_Smoke->binding->callMethod(6188, (void*)this, x)) return (int)x[0].s_int;
	return this->QMotifStyle::styleHint(x1, x2, x3, x4);
    }
    virtual QPixmap stylePixmap(QStyle::StylePixmap x1, const QWidget* x2, const QStyleOption& x3) const {
	Smoke::StackItem x[4];
	x[1].s_enum = x1;
	x[2].s_class = (void*)x2;
	x[3].s_class = (void*)&x3;
	if(qt_Smoke->binding->callMethod(6185, (void*)this, x)) {
	    QPixmap *xptr = (QPixmap *)x[0].s_class;
	    QPixmap xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QMotifStyle::stylePixmap(x1, x2, x3);
    }
    virtual QRect subRect(QStyle::SubRect x1, const QWidget* x2) const {
	Smoke::StackItem x[3];
	x[1].s_enum = x1;
	x[2].s_class = (void*)x2;
	if(qt_Smoke->binding->callMethod(6184, (void*)this, x)) {
	    QRect *xptr = (QRect *)x[0].s_class;
	    QRect xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QMotifStyle::subRect(x1, x2);
    }
    virtual void timerEvent(QTimerEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(6516, (void*)this, x)) return;
	this->QObject::timerEvent(x1);
    }
    virtual void unPolish(QApplication* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(9419, (void*)this, x)) return;
	this->QStyle::unPolish(x1);
    }
    virtual void unPolish(QWidget* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(9417, (void*)this, x)) return;
	this->QStyle::unPolish(x1);
    }
    ~x_QMotifStyle() { qt_Smoke->binding->deleted(205, (void*)this); }
};
void xcall_QMotifStyle(Smoke::Index xi, void *obj, Smoke::Stack args) {
    x_QMotifStyle *xself = (x_QMotifStyle*)obj;
    switch(xi) {
	case 0: xself->x_0(args);	break;
	case 1: xself->x_1(args);	break;
	case 2: xself->x_2(args);	break;
	case 3: xself->x_3(args);	break;
	case 4: xself->x_4(args);	break;
	case 5: xself->x_5(args);	break;
	case 6: xself->x_6(args);	break;
	case 7: x_QMotifStyle::x_7(args);	break;
	case 8: x_QMotifStyle::x_8(args);	break;
	case 9: xself->x_9(args);	break;
	case 10: xself->x_10(args);	break;
	case 11: xself->x_11(args);	break;
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
	case 39: x_QMotifStyle::x_39(args);	break;
	case 40: x_QMotifStyle::x_40(args);	break;
	case 41: x_QMotifStyle::x_41(args);	break;
	case 42: x_QMotifStyle::x_42(args);	break;
	case 43: x_QMotifStyle::x_43(args);	break;
	case 44: delete (QMotifStyle*)xself;	break;
    }
}
