//Auto-generated by kalyptus. DO NOT EDIT.
#include <smoke.h>
#include <qt_smoke.h>
#include <qpoint.h>
#include <qpicture.h>
#include <qstring.h>
#include <qsize.h>
#include <qpalette.h>
#include <qiconview.h>
#include <qpixmap.h>
#include <qrect.h>

class x_QIconViewItem : public QIconViewItem {
public:
    static void x_0(Smoke::Stack x) {
	x[0].s_class = (void*)new int(QIconViewItem::RTTI);
    }
    static void x_1(Smoke::Stack x) {
	// QIconViewItem(QIconView*)
	x_QIconViewItem* xret = new x_QIconViewItem((QIconView*)x[1].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QIconViewItem(QIconView* x1) : QIconViewItem(x1) {
    }
    static void x_2(Smoke::Stack x) {
	// QIconViewItem(QIconView*, QIconViewItem*)
	x_QIconViewItem* xret = new x_QIconViewItem((QIconView*)x[1].s_class,(QIconViewItem*)x[2].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QIconViewItem(QIconView* x1, QIconViewItem* x2) : QIconViewItem(x1, x2) {
    }
    static void x_3(Smoke::Stack x) {
	// QIconViewItem(QIconView*, const QString&)
	x_QIconViewItem* xret = new x_QIconViewItem((QIconView*)x[1].s_class,*(const QString *)x[2].s_voidp);
	x[0].s_class = (void*)xret;
    }
    x_QIconViewItem(QIconView* x1, const QString& x2) : QIconViewItem(x1, x2) {
    }
    static void x_4(Smoke::Stack x) {
	// QIconViewItem(QIconView*, QIconViewItem*, const QString&)
	x_QIconViewItem* xret = new x_QIconViewItem((QIconView*)x[1].s_class,(QIconViewItem*)x[2].s_class,*(const QString *)x[3].s_voidp);
	x[0].s_class = (void*)xret;
    }
    x_QIconViewItem(QIconView* x1, QIconViewItem* x2, const QString& x3) : QIconViewItem(x1, x2, x3) {
    }
    static void x_5(Smoke::Stack x) {
	// QIconViewItem(QIconView*, const QString&, const QPixmap&)
	x_QIconViewItem* xret = new x_QIconViewItem((QIconView*)x[1].s_class,*(const QString *)x[2].s_voidp,*(const QPixmap *)x[3].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QIconViewItem(QIconView* x1, const QString& x2, const QPixmap& x3) : QIconViewItem(x1, x2, x3) {
    }
    static void x_6(Smoke::Stack x) {
	// QIconViewItem(QIconView*, QIconViewItem*, const QString&, const QPixmap&)
	x_QIconViewItem* xret = new x_QIconViewItem((QIconView*)x[1].s_class,(QIconViewItem*)x[2].s_class,*(const QString *)x[3].s_voidp,*(const QPixmap *)x[4].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QIconViewItem(QIconView* x1, QIconViewItem* x2, const QString& x3, const QPixmap& x4) : QIconViewItem(x1, x2, x3, x4) {
    }
    static void x_7(Smoke::Stack x) {
	// QIconViewItem(QIconView*, const QString&, const QPicture&)
	x_QIconViewItem* xret = new x_QIconViewItem((QIconView*)x[1].s_class,*(const QString *)x[2].s_voidp,*(const QPicture *)x[3].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QIconViewItem(QIconView* x1, const QString& x2, const QPicture& x3) : QIconViewItem(x1, x2, x3) {
    }
    static void x_8(Smoke::Stack x) {
	// QIconViewItem(QIconView*, QIconViewItem*, const QString&, const QPicture&)
	x_QIconViewItem* xret = new x_QIconViewItem((QIconView*)x[1].s_class,(QIconViewItem*)x[2].s_class,*(const QString *)x[3].s_voidp,*(const QPicture *)x[4].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QIconViewItem(QIconView* x1, QIconViewItem* x2, const QString& x3, const QPicture& x4) : QIconViewItem(x1, x2, x3, x4) {
    }
    void x_9(Smoke::Stack x) {
	// setRenameEnabled(bool)
	this->QIconViewItem::setRenameEnabled((bool)x[1].s_bool);
	(void)x; // noop (for compiler warning)
    }
    void x_10(Smoke::Stack x) {
	// setDragEnabled(bool)
	this->QIconViewItem::setDragEnabled((bool)x[1].s_bool);
	(void)x; // noop (for compiler warning)
    }
    void x_11(Smoke::Stack x) {
	// setDropEnabled(bool)
	this->QIconViewItem::setDropEnabled((bool)x[1].s_bool);
	(void)x; // noop (for compiler warning)
    }
    void x_12(Smoke::Stack x) const {
	// text()
	QString xret = this->QIconViewItem::text();
	x[0].s_voidp = (void*)new QString(xret);
    }
    void x_13(Smoke::Stack x) const {
	// pixmap()
	QPixmap* xret = this->QIconViewItem::pixmap();
	x[0].s_class = (void*)xret;
    }
    void x_14(Smoke::Stack x) const {
	// picture()
	QPicture* xret = this->QIconViewItem::picture();
	x[0].s_class = (void*)xret;
    }
    void x_15(Smoke::Stack x) const {
	// key()
	QString xret = this->QIconViewItem::key();
	x[0].s_voidp = (void*)new QString(xret);
    }
    void x_16(Smoke::Stack x) const {
	// renameEnabled()
	bool xret = this->QIconViewItem::renameEnabled();
	x[0].s_bool = xret;
    }
    void x_17(Smoke::Stack x) const {
	// dragEnabled()
	bool xret = this->QIconViewItem::dragEnabled();
	x[0].s_bool = xret;
    }
    void x_18(Smoke::Stack x) const {
	// dropEnabled()
	bool xret = this->QIconViewItem::dropEnabled();
	x[0].s_bool = xret;
    }
    void x_19(Smoke::Stack x) const {
	// iconView()
	QIconView* xret = this->QIconViewItem::iconView();
	x[0].s_class = (void*)xret;
    }
    void x_20(Smoke::Stack x) const {
	// prevItem()
	QIconViewItem* xret = this->QIconViewItem::prevItem();
	x[0].s_class = (void*)xret;
    }
    void x_21(Smoke::Stack x) const {
	// nextItem()
	QIconViewItem* xret = this->QIconViewItem::nextItem();
	x[0].s_class = (void*)xret;
    }
    void x_22(Smoke::Stack x) const {
	// index()
	int xret = this->QIconViewItem::index();
	x[0].s_int = xret;
    }
    void x_23(Smoke::Stack x) {
	// setSelected(bool, bool)
	this->QIconViewItem::setSelected((bool)x[1].s_bool,(bool)x[2].s_bool);
	(void)x; // noop (for compiler warning)
    }
    void x_24(Smoke::Stack x) {
	// setSelected(bool)
	this->QIconViewItem::setSelected((bool)x[1].s_bool);
	(void)x; // noop (for compiler warning)
    }
    void x_25(Smoke::Stack x) {
	// setSelectable(bool)
	this->QIconViewItem::setSelectable((bool)x[1].s_bool);
	(void)x; // noop (for compiler warning)
    }
    void x_26(Smoke::Stack x) const {
	// isSelected()
	bool xret = this->QIconViewItem::isSelected();
	x[0].s_bool = xret;
    }
    void x_27(Smoke::Stack x) const {
	// isSelectable()
	bool xret = this->QIconViewItem::isSelectable();
	x[0].s_bool = xret;
    }
    void x_28(Smoke::Stack x) {
	// repaint()
	this->QIconViewItem::repaint();
	(void)x; // noop (for compiler warning)
    }
    void x_29(Smoke::Stack x) {
	// move(int, int)
	bool xret = this->QIconViewItem::move((int)x[1].s_int,(int)x[2].s_int);
	x[0].s_bool = xret;
    }
    void x_30(Smoke::Stack x) {
	// moveBy(int, int)
	this->QIconViewItem::moveBy((int)x[1].s_int,(int)x[2].s_int);
	(void)x; // noop (for compiler warning)
    }
    void x_31(Smoke::Stack x) {
	// move(const QPoint&)
	bool xret = this->QIconViewItem::move(*(const QPoint *)x[1].s_class);
	x[0].s_bool = xret;
    }
    void x_32(Smoke::Stack x) {
	// moveBy(const QPoint&)
	this->QIconViewItem::moveBy(*(const QPoint *)x[1].s_class);
	(void)x; // noop (for compiler warning)
    }
    void x_33(Smoke::Stack x) const {
	// rect()
	QRect xret = this->QIconViewItem::rect();
	x[0].s_class = (void*)new QRect(xret);
    }
    void x_34(Smoke::Stack x) const {
	// x()
	int xret = this->QIconViewItem::x();
	x[0].s_int = xret;
    }
    void x_35(Smoke::Stack x) const {
	// y()
	int xret = this->QIconViewItem::y();
	x[0].s_int = xret;
    }
    void x_36(Smoke::Stack x) const {
	// width()
	int xret = this->QIconViewItem::width();
	x[0].s_int = xret;
    }
    void x_37(Smoke::Stack x) const {
	// height()
	int xret = this->QIconViewItem::height();
	x[0].s_int = xret;
    }
    void x_38(Smoke::Stack x) const {
	// size()
	QSize xret = this->QIconViewItem::size();
	x[0].s_class = (void*)new QSize(xret);
    }
    void x_39(Smoke::Stack x) const {
	// pos()
	QPoint xret = this->QIconViewItem::pos();
	x[0].s_class = (void*)new QPoint(xret);
    }
    void x_40(Smoke::Stack x) const {
	// textRect(bool)
	QRect xret = this->QIconViewItem::textRect((bool)x[1].s_bool);
	x[0].s_class = (void*)new QRect(xret);
    }
    void x_41(Smoke::Stack x) const {
	// textRect()
	QRect xret = this->QIconViewItem::textRect();
	x[0].s_class = (void*)new QRect(xret);
    }
    void x_42(Smoke::Stack x) const {
	// pixmapRect(bool)
	QRect xret = this->QIconViewItem::pixmapRect((bool)x[1].s_bool);
	x[0].s_class = (void*)new QRect(xret);
    }
    void x_43(Smoke::Stack x) const {
	// pixmapRect()
	QRect xret = this->QIconViewItem::pixmapRect();
	x[0].s_class = (void*)new QRect(xret);
    }
    void x_44(Smoke::Stack x) const {
	// contains(const QPoint&)
	bool xret = this->QIconViewItem::contains(*(const QPoint *)x[1].s_class);
	x[0].s_bool = xret;
    }
    void x_45(Smoke::Stack x) const {
	// intersects(const QRect&)
	bool xret = this->QIconViewItem::intersects(*(const QRect *)x[1].s_class);
	x[0].s_bool = xret;
    }
    void x_46(Smoke::Stack x) const {
	// acceptDrop(const QMimeSource*)
	bool xret = this->QIconViewItem::acceptDrop((const QMimeSource*)x[1].s_class);
	x[0].s_bool = xret;
    }
    void x_47(Smoke::Stack x) {
	// rename()
	this->QIconViewItem::rename();
	(void)x; // noop (for compiler warning)
    }
    void x_48(Smoke::Stack x) const {
	// compare(QIconViewItem*)
	int xret = this->QIconViewItem::compare((QIconViewItem*)x[1].s_class);
	x[0].s_int = xret;
    }
    void x_49(Smoke::Stack x) {
	// setText(const QString&)
	this->QIconViewItem::setText(*(const QString *)x[1].s_voidp);
	(void)x; // noop (for compiler warning)
    }
    void x_50(Smoke::Stack x) {
	// setPixmap(const QPixmap&)
	this->QIconViewItem::setPixmap(*(const QPixmap *)x[1].s_class);
	(void)x; // noop (for compiler warning)
    }
    void x_51(Smoke::Stack x) {
	// setPicture(const QPicture&)
	this->QIconViewItem::setPicture(*(const QPicture *)x[1].s_class);
	(void)x; // noop (for compiler warning)
    }
    void x_52(Smoke::Stack x) {
	// setText(const QString&, bool, bool)
	this->QIconViewItem::setText(*(const QString *)x[1].s_voidp,(bool)x[2].s_bool,(bool)x[3].s_bool);
	(void)x; // noop (for compiler warning)
    }
    void x_53(Smoke::Stack x) {
	// setText(const QString&, bool)
	this->QIconViewItem::setText(*(const QString *)x[1].s_voidp,(bool)x[2].s_bool);
	(void)x; // noop (for compiler warning)
    }
    void x_54(Smoke::Stack x) {
	// setPixmap(const QPixmap&, bool, bool)
	this->QIconViewItem::setPixmap(*(const QPixmap *)x[1].s_class,(bool)x[2].s_bool,(bool)x[3].s_bool);
	(void)x; // noop (for compiler warning)
    }
    void x_55(Smoke::Stack x) {
	// setPixmap(const QPixmap&, bool)
	this->QIconViewItem::setPixmap(*(const QPixmap *)x[1].s_class,(bool)x[2].s_bool);
	(void)x; // noop (for compiler warning)
    }
    void x_56(Smoke::Stack x) {
	// setKey(const QString&)
	this->QIconViewItem::setKey(*(const QString *)x[1].s_voidp);
	(void)x; // noop (for compiler warning)
    }
    void x_57(Smoke::Stack x) const {
	// rtti()
	int xret = this->QIconViewItem::rtti();
	x[0].s_int = xret;
    }
    static void x_58(Smoke::Stack x) {
	// QIconViewItem(const QIconViewItem&)
	x_QIconViewItem* xret = new x_QIconViewItem(*(const QIconViewItem *)x[1].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QIconViewItem(const QIconViewItem& x1) : QIconViewItem(x1) {
    }
    void x_59(Smoke::Stack x) {
	// removeRenameBox()
	this->QIconViewItem::removeRenameBox();
	(void)x; // noop (for compiler warning)
    }
    void x_60(Smoke::Stack x) {
	// calcRect(const QString&)
	this->QIconViewItem::calcRect(*(const QString *)x[1].s_voidp);
	(void)x; // noop (for compiler warning)
    }
    void x_61(Smoke::Stack x) {
	// calcRect()
	this->QIconViewItem::calcRect();
	(void)x; // noop (for compiler warning)
    }
    void x_62(Smoke::Stack x) {
	// paintItem(QPainter*, const QColorGroup&)
	this->QIconViewItem::paintItem((QPainter*)x[1].s_class,*(const QColorGroup *)x[2].s_class);
	(void)x; // noop (for compiler warning)
    }
    void x_63(Smoke::Stack x) {
	// paintFocus(QPainter*, const QColorGroup&)
	this->QIconViewItem::paintFocus((QPainter*)x[1].s_class,*(const QColorGroup *)x[2].s_class);
	(void)x; // noop (for compiler warning)
    }
    void x_64(Smoke::Stack x) {
	// dropped(QDropEvent*, const QValueList<QIconDragItem>&)
	this->QIconViewItem::dropped((QDropEvent*)x[1].s_class,*(const QValueList<QIconDragItem> *)x[2].s_voidp);
	(void)x; // noop (for compiler warning)
    }
    void x_65(Smoke::Stack x) {
	// dragEntered()
	this->QIconViewItem::dragEntered();
	(void)x; // noop (for compiler warning)
    }
    void x_66(Smoke::Stack x) {
	// dragLeft()
	this->QIconViewItem::dragLeft();
	(void)x; // noop (for compiler warning)
    }
    void x_67(Smoke::Stack x) {
	// setItemRect(const QRect&)
	this->QIconViewItem::setItemRect(*(const QRect *)x[1].s_class);
	(void)x; // noop (for compiler warning)
    }
    void x_68(Smoke::Stack x) {
	// setTextRect(const QRect&)
	this->QIconViewItem::setTextRect(*(const QRect *)x[1].s_class);
	(void)x; // noop (for compiler warning)
    }
    void x_69(Smoke::Stack x) {
	// setPixmapRect(const QRect&)
	this->QIconViewItem::setPixmapRect(*(const QRect *)x[1].s_class);
	(void)x; // noop (for compiler warning)
    }
    void x_70(Smoke::Stack x) {
	// calcTmpText()
	this->QIconViewItem::calcTmpText();
	(void)x; // noop (for compiler warning)
    }
    virtual bool acceptDrop(const QMimeSource* x1) const {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(4398, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QIconViewItem::acceptDrop(x1);
    }
    virtual void calcRect(const QString& x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)&x1;
	if(qt_Smoke->binding->callMethod(4413, (void*)this, x)) return;
	this->QIconViewItem::calcRect(x1);
    }
    virtual int compare(QIconViewItem* x1) const {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(4400, (void*)this, x)) return (int)x[0].s_int;
	return this->QIconViewItem::compare(x1);
    }
    virtual void dragEntered() {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(4418, (void*)this, x)) return;
	this->QIconViewItem::dragEntered();
    }
    virtual void dragLeft() {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(4419, (void*)this, x)) return;
	this->QIconViewItem::dragLeft();
    }
    virtual void dropped(QDropEvent* x1, const QValueList<QIconDragItem>& x2) {
	Smoke::StackItem x[3];
	x[1].s_class = (void*)x1;
	x[2].s_voidp = (void*)&x2;
	if(qt_Smoke->binding->callMethod(4417, (void*)this, x)) return;
	this->QIconViewItem::dropped(x1, x2);
    }
    virtual QString key() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(4367, (void*)this, x)) {
	    QString *xptr = (QString *)x[0].s_class;
	    QString xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QIconViewItem::key();
    }
    virtual bool move(const QPoint& x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	if(qt_Smoke->binding->callMethod(4383, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QIconViewItem::move(x1);
    }
    virtual bool move(int x1, int x2) {
	Smoke::StackItem x[3];
	x[1].s_int = x1;
	x[2].s_int = x2;
	if(qt_Smoke->binding->callMethod(4381, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QIconViewItem::move(x1, x2);
    }
    virtual void moveBy(const QPoint& x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	if(qt_Smoke->binding->callMethod(4384, (void*)this, x)) return;
	this->QIconViewItem::moveBy(x1);
    }
    virtual void moveBy(int x1, int x2) {
	Smoke::StackItem x[3];
	x[1].s_int = x1;
	x[2].s_int = x2;
	if(qt_Smoke->binding->callMethod(4382, (void*)this, x)) return;
	this->QIconViewItem::moveBy(x1, x2);
    }
    virtual void paintFocus(QPainter* x1, const QColorGroup& x2) {
	Smoke::StackItem x[3];
	x[1].s_class = (void*)x1;
	x[2].s_class = (void*)&x2;
	if(qt_Smoke->binding->callMethod(4416, (void*)this, x)) return;
	this->QIconViewItem::paintFocus(x1, x2);
    }
    virtual void paintItem(QPainter* x1, const QColorGroup& x2) {
	Smoke::StackItem x[3];
	x[1].s_class = (void*)x1;
	x[2].s_class = (void*)&x2;
	if(qt_Smoke->binding->callMethod(4415, (void*)this, x)) return;
	this->QIconViewItem::paintItem(x1, x2);
    }
    virtual QPicture* picture() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(4366, (void*)this, x)) return (QPicture*)x[0].s_class;
	return this->QIconViewItem::picture();
    }
    virtual QPixmap* pixmap() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(4365, (void*)this, x)) return (QPixmap*)x[0].s_class;
	return this->QIconViewItem::pixmap();
    }
    virtual void removeRenameBox() {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(4412, (void*)this, x)) return;
	this->QIconViewItem::removeRenameBox();
    }
    virtual void repaint() {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(4380, (void*)this, x)) return;
	this->QIconViewItem::repaint();
    }
    virtual int rtti() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(4409, (void*)this, x)) return (int)x[0].s_int;
	return this->QIconViewItem::rtti();
    }
    virtual void setDragEnabled(bool x1) {
	Smoke::StackItem x[2];
	x[1].s_bool = x1;
	if(qt_Smoke->binding->callMethod(4362, (void*)this, x)) return;
	this->QIconViewItem::setDragEnabled(x1);
    }
    virtual void setDropEnabled(bool x1) {
	Smoke::StackItem x[2];
	x[1].s_bool = x1;
	if(qt_Smoke->binding->callMethod(4363, (void*)this, x)) return;
	this->QIconViewItem::setDropEnabled(x1);
    }
    virtual void setKey(const QString& x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)&x1;
	if(qt_Smoke->binding->callMethod(4408, (void*)this, x)) return;
	this->QIconViewItem::setKey(x1);
    }
    virtual void setPicture(const QPicture& x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	if(qt_Smoke->binding->callMethod(4403, (void*)this, x)) return;
	this->QIconViewItem::setPicture(x1);
    }
    virtual void setPixmap(const QPixmap& x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	if(qt_Smoke->binding->callMethod(4402, (void*)this, x)) return;
	this->QIconViewItem::setPixmap(x1);
    }
    virtual void setPixmap(const QPixmap& x1, bool x2, bool x3) {
	Smoke::StackItem x[4];
	x[1].s_class = (void*)&x1;
	x[2].s_bool = x2;
	x[3].s_bool = x3;
	if(qt_Smoke->binding->callMethod(4406, (void*)this, x)) return;
	this->QIconViewItem::setPixmap(x1, x2, x3);
    }
    virtual void setRenameEnabled(bool x1) {
	Smoke::StackItem x[2];
	x[1].s_bool = x1;
	if(qt_Smoke->binding->callMethod(4361, (void*)this, x)) return;
	this->QIconViewItem::setRenameEnabled(x1);
    }
    virtual void setSelectable(bool x1) {
	Smoke::StackItem x[2];
	x[1].s_bool = x1;
	if(qt_Smoke->binding->callMethod(4377, (void*)this, x)) return;
	this->QIconViewItem::setSelectable(x1);
    }
    virtual void setSelected(bool x1) {
	Smoke::StackItem x[2];
	x[1].s_bool = x1;
	if(qt_Smoke->binding->callMethod(4376, (void*)this, x)) return;
	this->QIconViewItem::setSelected(x1);
    }
    virtual void setSelected(bool x1, bool x2) {
	Smoke::StackItem x[3];
	x[1].s_bool = x1;
	x[2].s_bool = x2;
	if(qt_Smoke->binding->callMethod(4375, (void*)this, x)) return;
	this->QIconViewItem::setSelected(x1, x2);
    }
    virtual void setText(const QString& x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)&x1;
	if(qt_Smoke->binding->callMethod(4401, (void*)this, x)) return;
	this->QIconViewItem::setText(x1);
    }
    virtual void setText(const QString& x1, bool x2, bool x3) {
	Smoke::StackItem x[4];
	x[1].s_voidp = (void*)&x1;
	x[2].s_bool = x2;
	x[3].s_bool = x3;
	if(qt_Smoke->binding->callMethod(4404, (void*)this, x)) return;
	this->QIconViewItem::setText(x1, x2, x3);
    }
    virtual QString text() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(4364, (void*)this, x)) {
	    QString *xptr = (QString *)x[0].s_class;
	    QString xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QIconViewItem::text();
    }
    ~x_QIconViewItem() { qt_Smoke->binding->deleted(155, (void*)this); }
};
void xcall_QIconViewItem(Smoke::Index xi, void *obj, Smoke::Stack args) {
    x_QIconViewItem *xself = (x_QIconViewItem*)obj;
    switch(xi) {
	case 0: x_QIconViewItem::x_0(args);	break;
	case 1: x_QIconViewItem::x_1(args);	break;
	case 2: x_QIconViewItem::x_2(args);	break;
	case 3: x_QIconViewItem::x_3(args);	break;
	case 4: x_QIconViewItem::x_4(args);	break;
	case 5: x_QIconViewItem::x_5(args);	break;
	case 6: x_QIconViewItem::x_6(args);	break;
	case 7: x_QIconViewItem::x_7(args);	break;
	case 8: x_QIconViewItem::x_8(args);	break;
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
	case 58: x_QIconViewItem::x_58(args);	break;
	case 59: xself->x_59(args);	break;
	case 60: xself->x_60(args);	break;
	case 61: xself->x_61(args);	break;
	case 62: xself->x_62(args);	break;
	case 63: xself->x_63(args);	break;
	case 64: xself->x_64(args);	break;
	case 65: xself->x_65(args);	break;
	case 66: xself->x_66(args);	break;
	case 67: xself->x_67(args);	break;
	case 68: xself->x_68(args);	break;
	case 69: xself->x_69(args);	break;
	case 70: xself->x_70(args);	break;
	case 71: delete (QIconViewItem*)xself;	break;
    }
}
