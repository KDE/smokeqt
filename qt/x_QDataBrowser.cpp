//Auto-generated by kalyptus. DO NOT EDIT.
#include <smoke.h>
#include <qcursor.h>
#include <qcolor.h>
#include <qsql.h>
#include <qstring.h>
#include <qdatabrowser.h>
#include <qsqlcursor.h>
#include <qsize.h>
#include <qvariant.h>
#include <qregion.h>
#include <qstringlist.h>
#include <qpoint.h>
#include <qfont.h>
#include <qbitmap.h>
#include <qsqlerror.h>
#include <qsizepolicy.h>
#include <qpalette.h>
#include <qnamespace.h>
#include <qwidget.h>
#include <qsqlindex.h>
#include <qrect.h>
#include <qpixmap.h>
#include <qstyle.h>

class x_QDataBrowser : public QDataBrowser {
public:
    static void x_0(Smoke::Stack x) {
	x[0].s_long = (long)QDataBrowser::Unknown;
    }
    static void x_1(Smoke::Stack x) {
	x[0].s_long = (long)QDataBrowser::None;
    }
    static void x_2(Smoke::Stack x) {
	x[0].s_long = (long)QDataBrowser::BeforeBeginning;
    }
    static void x_3(Smoke::Stack x) {
	x[0].s_long = (long)QDataBrowser::Beginning;
    }
    static void x_4(Smoke::Stack x) {
	x[0].s_long = (long)QDataBrowser::End;
    }
    static void x_5(Smoke::Stack x) {
	x[0].s_long = (long)QDataBrowser::AfterEnd;
    }
    static void x_6(Smoke::Stack x) {
	// QDataBrowser(QWidget*, const char*, Qt::WFlags)
	x_QDataBrowser* xret = new x_QDataBrowser((QWidget*)x[1].s_voidp,(const char*)x[2].s_voidp,*(Qt::WFlags *)x[3].s_voidp);
	x[0].s_voidp = (void*)xret;
    }
    x_QDataBrowser(QWidget* x1, const char* x2, Qt::WFlags x3) : QDataBrowser(x1, x2, x3) {
    }
    static void x_7(Smoke::Stack x) {
	// QDataBrowser(QWidget*, const char*)
	x_QDataBrowser* xret = new x_QDataBrowser((QWidget*)x[1].s_voidp,(const char*)x[2].s_voidp);
	x[0].s_voidp = (void*)xret;
    }
    x_QDataBrowser(QWidget* x1, const char* x2) : QDataBrowser(x1, x2) {
    }
    static void x_8(Smoke::Stack x) {
	// QDataBrowser(QWidget*)
	x_QDataBrowser* xret = new x_QDataBrowser((QWidget*)x[1].s_voidp);
	x[0].s_voidp = (void*)xret;
    }
    x_QDataBrowser(QWidget* x1) : QDataBrowser(x1) {
    }
    static void x_9(Smoke::Stack x) {
	// QDataBrowser()
	x_QDataBrowser* xret = new x_QDataBrowser();
	x[0].s_voidp = (void*)xret;
    }
    x_QDataBrowser() : QDataBrowser() {
    }
    void x_10(Smoke::Stack x) {
	// boundary()
	QDataBrowser::Boundary xret = this->QDataBrowser::boundary();
	x[0].s_voidp = (void*)new QDataBrowser::Boundary(xret);
    }
    void x_11(Smoke::Stack x) {
	// setBoundaryChecking(bool)
	this->QDataBrowser::setBoundaryChecking((bool)x[1].s_bool);
    }
    void x_12(Smoke::Stack x) const {
	// boundaryChecking()
	bool xret = this->QDataBrowser::boundaryChecking();
	x[0].s_bool = (bool)xret;
    }
    void x_13(Smoke::Stack x) {
	// setSort(const QSqlIndex&)
	this->QDataBrowser::setSort(*(const QSqlIndex *)x[1].s_voidp);
    }
    void x_14(Smoke::Stack x) {
	// setSort(const QStringList&)
	this->QDataBrowser::setSort(*(const QStringList *)x[1].s_voidp);
    }
    void x_15(Smoke::Stack x) const {
	// sort()
	QStringList xret = this->QDataBrowser::sort();
	x[0].s_voidp = (void*)new QStringList(xret);
    }
    void x_16(Smoke::Stack x) {
	// setFilter(const QString&)
	this->QDataBrowser::setFilter(*(const QString *)x[1].s_voidp);
    }
    void x_17(Smoke::Stack x) const {
	// filter()
	QString xret = this->QDataBrowser::filter();
	x[0].s_voidp = (void*)new QString(xret);
    }
    void x_18(Smoke::Stack x) {
	// setSqlCursor(QSqlCursor*, bool)
	this->QDataBrowser::setSqlCursor((QSqlCursor*)x[1].s_voidp,(bool)x[2].s_bool);
    }
    void x_19(Smoke::Stack x) {
	// setSqlCursor(QSqlCursor*)
	this->QDataBrowser::setSqlCursor((QSqlCursor*)x[1].s_voidp);
    }
    void x_20(Smoke::Stack x) const {
	// sqlCursor()
	QSqlCursor* xret = this->QDataBrowser::sqlCursor();
	x[0].s_voidp = (void*)xret;
    }
    void x_21(Smoke::Stack x) {
	// setForm(QSqlForm*)
	this->QDataBrowser::setForm((QSqlForm*)x[1].s_voidp);
    }
    void x_22(Smoke::Stack x) {
	// form()
	QSqlForm* xret = this->QDataBrowser::form();
	x[0].s_voidp = (void*)xret;
    }
    void x_23(Smoke::Stack x) {
	// setConfirmEdits(bool)
	this->QDataBrowser::setConfirmEdits((bool)x[1].s_bool);
    }
    void x_24(Smoke::Stack x) {
	// setConfirmInsert(bool)
	this->QDataBrowser::setConfirmInsert((bool)x[1].s_bool);
    }
    void x_25(Smoke::Stack x) {
	// setConfirmUpdate(bool)
	this->QDataBrowser::setConfirmUpdate((bool)x[1].s_bool);
    }
    void x_26(Smoke::Stack x) {
	// setConfirmDelete(bool)
	this->QDataBrowser::setConfirmDelete((bool)x[1].s_bool);
    }
    void x_27(Smoke::Stack x) {
	// setConfirmCancels(bool)
	this->QDataBrowser::setConfirmCancels((bool)x[1].s_bool);
    }
    void x_28(Smoke::Stack x) const {
	// confirmEdits()
	bool xret = this->QDataBrowser::confirmEdits();
	x[0].s_bool = (bool)xret;
    }
    void x_29(Smoke::Stack x) const {
	// confirmInsert()
	bool xret = this->QDataBrowser::confirmInsert();
	x[0].s_bool = (bool)xret;
    }
    void x_30(Smoke::Stack x) const {
	// confirmUpdate()
	bool xret = this->QDataBrowser::confirmUpdate();
	x[0].s_bool = (bool)xret;
    }
    void x_31(Smoke::Stack x) const {
	// confirmDelete()
	bool xret = this->QDataBrowser::confirmDelete();
	x[0].s_bool = (bool)xret;
    }
    void x_32(Smoke::Stack x) const {
	// confirmCancels()
	bool xret = this->QDataBrowser::confirmCancels();
	x[0].s_bool = (bool)xret;
    }
    void x_33(Smoke::Stack x) {
	// setReadOnly(bool)
	this->QDataBrowser::setReadOnly((bool)x[1].s_bool);
    }
    void x_34(Smoke::Stack x) const {
	// isReadOnly()
	bool xret = this->QDataBrowser::isReadOnly();
	x[0].s_bool = (bool)xret;
    }
    void x_35(Smoke::Stack x) {
	// setAutoEdit(bool)
	this->QDataBrowser::setAutoEdit((bool)x[1].s_bool);
    }
    void x_36(Smoke::Stack x) const {
	// autoEdit()
	bool xret = this->QDataBrowser::autoEdit();
	x[0].s_bool = (bool)xret;
    }
    void x_37(Smoke::Stack x) {
	// seek(int, bool)
	bool xret = this->QDataBrowser::seek((int)x[1].s_int,(bool)x[2].s_bool);
	x[0].s_bool = (bool)xret;
    }
    void x_38(Smoke::Stack x) {
	// seek(int)
	bool xret = this->QDataBrowser::seek((int)x[1].s_int);
	x[0].s_bool = (bool)xret;
    }
    void x_39(Smoke::Stack x) {
	// refresh()
	this->QDataBrowser::refresh();
    }
    void x_40(Smoke::Stack x) {
	// insert()
	this->QDataBrowser::insert();
    }
    void x_41(Smoke::Stack x) {
	// update()
	this->QDataBrowser::update();
    }
    void x_42(Smoke::Stack x) {
	// del()
	this->QDataBrowser::del();
    }
    void x_43(Smoke::Stack x) {
	// first()
	this->QDataBrowser::first();
    }
    void x_44(Smoke::Stack x) {
	// last()
	this->QDataBrowser::last();
    }
    void x_45(Smoke::Stack x) {
	// next()
	this->QDataBrowser::next();
    }
    void x_46(Smoke::Stack x) {
	// prev()
	this->QDataBrowser::prev();
    }
    void x_47(Smoke::Stack x) {
	// readFields()
	this->QDataBrowser::readFields();
    }
    void x_48(Smoke::Stack x) {
	// writeFields()
	this->QDataBrowser::writeFields();
    }
    void x_49(Smoke::Stack x) {
	// clearValues()
	this->QDataBrowser::clearValues();
    }
    void x_50(Smoke::Stack x) {
	// updateBoundary()
	this->QDataBrowser::updateBoundary();
    }
    void x_51(Smoke::Stack x) {
	// firstRecordAvailable(bool)
	this->QDataBrowser::firstRecordAvailable((bool)x[1].s_bool);
    }
    void x_52(Smoke::Stack x) {
	// lastRecordAvailable(bool)
	this->QDataBrowser::lastRecordAvailable((bool)x[1].s_bool);
    }
    void x_53(Smoke::Stack x) {
	// nextRecordAvailable(bool)
	this->QDataBrowser::nextRecordAvailable((bool)x[1].s_bool);
    }
    void x_54(Smoke::Stack x) {
	// prevRecordAvailable(bool)
	this->QDataBrowser::prevRecordAvailable((bool)x[1].s_bool);
    }
    void x_55(Smoke::Stack x) {
	// currentChanged(const QSqlRecord*)
	this->QDataBrowser::currentChanged((const QSqlRecord*)x[1].s_voidp);
    }
    void x_56(Smoke::Stack x) {
	// primeInsert(QSqlRecord*)
	this->QDataBrowser::primeInsert((QSqlRecord*)x[1].s_voidp);
    }
    void x_57(Smoke::Stack x) {
	// primeUpdate(QSqlRecord*)
	this->QDataBrowser::primeUpdate((QSqlRecord*)x[1].s_voidp);
    }
    void x_58(Smoke::Stack x) {
	// primeDelete(QSqlRecord*)
	this->QDataBrowser::primeDelete((QSqlRecord*)x[1].s_voidp);
    }
    void x_59(Smoke::Stack x) {
	// beforeInsert(QSqlRecord*)
	this->QDataBrowser::beforeInsert((QSqlRecord*)x[1].s_voidp);
    }
    void x_60(Smoke::Stack x) {
	// beforeUpdate(QSqlRecord*)
	this->QDataBrowser::beforeUpdate((QSqlRecord*)x[1].s_voidp);
    }
    void x_61(Smoke::Stack x) {
	// beforeDelete(QSqlRecord*)
	this->QDataBrowser::beforeDelete((QSqlRecord*)x[1].s_voidp);
    }
    void x_62(Smoke::Stack x) {
	// cursorChanged(QSqlCursor::Mode)
	this->QDataBrowser::cursorChanged(*(QSqlCursor::Mode *)x[1].s_voidp);
    }
    void x_63(Smoke::Stack x) {
	// insertCurrent()
	bool xret = this->QDataBrowser::insertCurrent();
	x[0].s_bool = (bool)xret;
    }
    void x_64(Smoke::Stack x) {
	// updateCurrent()
	bool xret = this->QDataBrowser::updateCurrent();
	x[0].s_bool = (bool)xret;
    }
    void x_65(Smoke::Stack x) {
	// deleteCurrent()
	bool xret = this->QDataBrowser::deleteCurrent();
	x[0].s_bool = (bool)xret;
    }
    void x_66(Smoke::Stack x) {
	// currentEdited()
	bool xret = this->QDataBrowser::currentEdited();
	x[0].s_bool = (bool)xret;
    }
    void x_67(Smoke::Stack x) {
	// confirmEdit(QSql::Op)
	QSql::Confirm xret = this->QDataBrowser::confirmEdit(*(QSql::Op *)x[1].s_voidp);
	x[0].s_voidp = (void*)new QSql::Confirm(xret);
    }
    void x_68(Smoke::Stack x) {
	// confirmCancel(QSql::Op)
	QSql::Confirm xret = this->QDataBrowser::confirmCancel(*(QSql::Op *)x[1].s_voidp);
	x[0].s_voidp = (void*)new QSql::Confirm(xret);
    }
    void x_69(Smoke::Stack x) {
	// handleError(const QSqlError&)
	this->QDataBrowser::handleError(*(const QSqlError *)x[1].s_voidp);
    }
    virtual void adjustSize() {
	Smoke::StackItem x[1];
	if(call_method((void*)this, 9616, x)) return;
	this->QWidget::adjustSize();
    }
    virtual bool checkConnectArgs(const char* x1, const QObject* x2, const char* x3) {
	Smoke::StackItem x[4];
	x[1].s_voidp = (void*)x1;
	x[2].s_voidp = (void*)x2;
	x[3].s_voidp = (void*)x3;
	if(call_method((void*)this, 5473, x)) return (bool)x[0].s_bool;
	return this->QObject::checkConnectArgs(x1, x2, x3);
    }
    virtual void childEvent(QChildEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(call_method((void*)this, 5469, x)) return;
	this->QObject::childEvent(x1);
    }
    virtual void clearValues() {
	Smoke::StackItem x[1];
	if(call_method((void*)this, 1294, x)) return;
	this->QDataBrowser::clearValues();
    }
    virtual bool close(bool x1) {
	Smoke::StackItem x[2];
	x[1].s_bool = (bool)x1;
	if(call_method((void*)this, 9603, x)) return (bool)x[0].s_bool;
	return this->QWidget::close(x1);
    }
    virtual void closeEvent(QCloseEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(call_method((void*)this, 9711, x)) return;
	this->QWidget::closeEvent(x1);
    }
    virtual bool cmd(int x1, QPainter* x2, QPDevCmdParam* x3) {
	Smoke::StackItem x[4];
	x[1].s_int = (int)x1;
	x[2].s_voidp = (void*)x2;
	x[3].s_voidp = (void*)x3;
	if(call_method((void*)this, 5556, x)) return (bool)x[0].s_bool;
	return this->QPaintDevice::cmd(x1, x2, x3);
    }
    virtual QSql::Confirm confirmCancel(QSql::Op x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)&x1;
	if(call_method((void*)this, 1313, x)) {
	    QSql::Confirm *xptr = (QSql::Confirm *)x[0].s_voidp;
	    QSql::Confirm xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QDataBrowser::confirmCancel(x1);
    }
    virtual QSql::Confirm confirmEdit(QSql::Op x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)&x1;
	if(call_method((void*)this, 1312, x)) {
	    QSql::Confirm *xptr = (QSql::Confirm *)x[0].s_voidp;
	    QSql::Confirm xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QDataBrowser::confirmEdit(x1);
    }
    virtual void connectNotify(const char* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(call_method((void*)this, 5471, x)) return;
	this->QObject::connectNotify(x1);
    }
    virtual void contextMenuEvent(QContextMenuEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(call_method((void*)this, 9712, x)) return;
	this->QWidget::contextMenuEvent(x1);
    }
    virtual void create(WId x1, bool x2, bool x3) {
	Smoke::StackItem x[4];
	x[1].s_voidp = (void*)&x1;
	x[2].s_bool = (bool)x2;
	x[3].s_bool = (bool)x3;
	if(call_method((void*)this, 9731, x)) return;
	this->QWidget::create(x1, x2, x3);
    }
    virtual bool currentEdited() {
	Smoke::StackItem x[1];
	if(call_method((void*)this, 1311, x)) return (bool)x[0].s_bool;
	return this->QDataBrowser::currentEdited();
    }
    virtual void customEvent(QCustomEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(call_method((void*)this, 5470, x)) return;
	this->QObject::customEvent(x1);
    }
    virtual bool customWhatsThis() const {
	Smoke::StackItem x[1];
	if(call_method((void*)this, 9641, x)) return (bool)x[0].s_bool;
	return this->QWidget::customWhatsThis();
    }
    virtual void del() {
	Smoke::StackItem x[1];
	if(call_method((void*)this, 1287, x)) return;
	this->QDataBrowser::del();
    }
    virtual bool deleteCurrent() {
	Smoke::StackItem x[1];
	if(call_method((void*)this, 1310, x)) return (bool)x[0].s_bool;
	return this->QDataBrowser::deleteCurrent();
    }
    virtual void destroy(bool x1, bool x2) {
	Smoke::StackItem x[3];
	x[1].s_bool = (bool)x1;
	x[2].s_bool = (bool)x2;
	if(call_method((void*)this, 9735, x)) return;
	this->QWidget::destroy(x1, x2);
    }
    virtual void disconnectNotify(const char* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(call_method((void*)this, 5472, x)) return;
	this->QObject::disconnectNotify(x1);
    }
    virtual void dragEnterEvent(QDragEnterEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(call_method((void*)this, 9717, x)) return;
	this->QWidget::dragEnterEvent(x1);
    }
    virtual void dragLeaveEvent(QDragLeaveEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(call_method((void*)this, 9719, x)) return;
	this->QWidget::dragLeaveEvent(x1);
    }
    virtual void dragMoveEvent(QDragMoveEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(call_method((void*)this, 9718, x)) return;
	this->QWidget::dragMoveEvent(x1);
    }
    virtual void dropEvent(QDropEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(call_method((void*)this, 9720, x)) return;
	this->QWidget::dropEvent(x1);
    }
    virtual void enabledChange(bool x1) {
	Smoke::StackItem x[2];
	x[1].s_bool = (bool)x1;
	if(call_method((void*)this, 9725, x)) return;
	this->QWidget::enabledChange(x1);
    }
    virtual void enterEvent(QEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(call_method((void*)this, 9706, x)) return;
	this->QWidget::enterEvent(x1);
    }
    virtual bool event(QEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(call_method((void*)this, 9696, x)) return (bool)x[0].s_bool;
	return this->QWidget::event(x1);
    }
    virtual bool eventFilter(QObject* x1, QEvent* x2) {
	Smoke::StackItem x[3];
	x[1].s_voidp = (void*)x1;
	x[2].s_voidp = (void*)x2;
	if(call_method((void*)this, 5409, x)) return (bool)x[0].s_bool;
	return this->QObject::eventFilter(x1, x2);
    }
    virtual void first() {
	Smoke::StackItem x[1];
	if(call_method((void*)this, 1288, x)) return;
	this->QDataBrowser::first();
    }
    virtual void focusInEvent(QFocusEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(call_method((void*)this, 9704, x)) return;
	this->QWidget::focusInEvent(x1);
    }
    virtual bool focusNextPrevChild(bool x1) {
	Smoke::StackItem x[2];
	x[1].s_bool = (bool)x1;
	if(call_method((void*)this, 9744, x)) return (bool)x[0].s_bool;
	return this->QWidget::focusNextPrevChild(x1);
    }
    virtual void focusOutEvent(QFocusEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(call_method((void*)this, 9705, x)) return;
	this->QWidget::focusOutEvent(x1);
    }
    virtual void fontChange(const QFont& x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)&x1;
	if(call_method((void*)this, 9727, x)) return;
	this->QWidget::fontChange(x1);
    }
    virtual int fontInf(QFont* x1, int x2) const {
	Smoke::StackItem x[3];
	x[1].s_voidp = (void*)x1;
	x[2].s_int = (int)x2;
	if(call_method((void*)this, 5561, x)) return (int)x[0].s_int;
	return this->QPaintDevice::fontInf(x1, x2);
    }
    virtual int fontMet(QFont* x1, int x2, const char* x3, int x4) const {
	Smoke::StackItem x[5];
	x[1].s_voidp = (void*)x1;
	x[2].s_int = (int)x2;
	x[3].s_voidp = (void*)x3;
	x[4].s_int = (int)x4;
	if(call_method((void*)this, 5558, x)) return (int)x[0].s_int;
	return this->QPaintDevice::fontMet(x1, x2, x3, x4);
    }
    virtual void handleError(const QSqlError& x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)&x1;
	if(call_method((void*)this, 1314, x)) return;
	this->QDataBrowser::handleError(x1);
    }
    virtual int heightForWidth(int x1) const {
	Smoke::StackItem x[2];
	x[1].s_int = (int)x1;
	if(call_method((void*)this, 9615, x)) return (int)x[0].s_int;
	return this->QWidget::heightForWidth(x1);
    }
    virtual void hide() {
	Smoke::StackItem x[1];
	if(call_method((void*)this, 9673, x)) return;
	this->QWidget::hide();
    }
    virtual void hideEvent(QHideEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(call_method((void*)this, 9722, x)) return;
	this->QWidget::hideEvent(x1);
    }
    virtual void imComposeEvent(QIMEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(call_method((void*)this, 9714, x)) return;
	this->QWidget::imComposeEvent(x1);
    }
    virtual void imEndEvent(QIMEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(call_method((void*)this, 9715, x)) return;
	this->QWidget::imEndEvent(x1);
    }
    virtual void imStartEvent(QIMEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(call_method((void*)this, 9713, x)) return;
	this->QWidget::imStartEvent(x1);
    }
    virtual void insert() {
	Smoke::StackItem x[1];
	if(call_method((void*)this, 1285, x)) return;
	this->QDataBrowser::insert();
    }
    virtual void insertChild(QObject* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(call_method((void*)this, 5431, x)) return;
	this->QObject::insertChild(x1);
    }
    virtual bool insertCurrent() {
	Smoke::StackItem x[1];
	if(call_method((void*)this, 1308, x)) return (bool)x[0].s_bool;
	return this->QDataBrowser::insertCurrent();
    }
    virtual void keyPressEvent(QKeyEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(call_method((void*)this, 9702, x)) return;
	this->QWidget::keyPressEvent(x1);
    }
    virtual void keyReleaseEvent(QKeyEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(call_method((void*)this, 9703, x)) return;
	this->QWidget::keyReleaseEvent(x1);
    }
    virtual void last() {
	Smoke::StackItem x[1];
	if(call_method((void*)this, 1289, x)) return;
	this->QDataBrowser::last();
    }
    virtual void leaveEvent(QEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(call_method((void*)this, 9707, x)) return;
	this->QWidget::leaveEvent(x1);
    }
    virtual int metric(int x1) const {
	Smoke::StackItem x[2];
	x[1].s_int = (int)x1;
	if(call_method((void*)this, 9729, x)) return (int)x[0].s_int;
	return this->QWidget::metric(x1);
    }
    virtual QSize minimumSizeHint() const {
	Smoke::StackItem x[1];
	if(call_method((void*)this, 9612, x)) {
	    QSize *xptr = (QSize *)x[0].s_voidp;
	    QSize xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QWidget::minimumSizeHint();
    }
    virtual void mouseDoubleClickEvent(QMouseEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(call_method((void*)this, 9699, x)) return;
	this->QWidget::mouseDoubleClickEvent(x1);
    }
    virtual void mouseMoveEvent(QMouseEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(call_method((void*)this, 9700, x)) return;
	this->QWidget::mouseMoveEvent(x1);
    }
    virtual void mousePressEvent(QMouseEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(call_method((void*)this, 9697, x)) return;
	this->QWidget::mousePressEvent(x1);
    }
    virtual void mouseReleaseEvent(QMouseEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(call_method((void*)this, 9698, x)) return;
	this->QWidget::mouseReleaseEvent(x1);
    }
    virtual void move(int x1, int x2) {
	Smoke::StackItem x[3];
	x[1].s_int = (int)x1;
	x[2].s_int = (int)x2;
	if(call_method((void*)this, 9685, x)) return;
	this->QWidget::move(x1, x2);
    }
    virtual void moveEvent(QMoveEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(call_method((void*)this, 9709, x)) return;
	this->QWidget::moveEvent(x1);
    }
    virtual void next() {
	Smoke::StackItem x[1];
	if(call_method((void*)this, 1290, x)) return;
	this->QDataBrowser::next();
    }
    virtual void paintEvent(QPaintEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(call_method((void*)this, 9708, x)) return;
	this->QWidget::paintEvent(x1);
    }
    virtual void paletteChange(const QPalette& x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)&x1;
	if(call_method((void*)this, 9726, x)) return;
	this->QWidget::paletteChange(x1);
    }
    virtual void polish() {
	Smoke::StackItem x[1];
	if(call_method((void*)this, 9679, x)) return;
	this->QWidget::polish();
    }
    virtual void prev() {
	Smoke::StackItem x[1];
	if(call_method((void*)this, 1291, x)) return;
	this->QDataBrowser::prev();
    }
    virtual QVariant property(const char* x1) const {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(call_method((void*)this, 5445, x)) {
	    QVariant *xptr = (QVariant *)x[0].s_voidp;
	    QVariant xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QObject::property(x1);
    }
    virtual void readFields() {
	Smoke::StackItem x[1];
	if(call_method((void*)this, 1292, x)) return;
	this->QDataBrowser::readFields();
    }
    virtual void refresh() {
	Smoke::StackItem x[1];
	if(call_method((void*)this, 1284, x)) return;
	this->QDataBrowser::refresh();
    }
    virtual void removeChild(QObject* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(call_method((void*)this, 5432, x)) return;
	this->QObject::removeChild(x1);
    }
    virtual void reparent(QWidget* x1, Qt::WFlags x2, const QPoint& x3, bool x4) {
	Smoke::StackItem x[5];
	x[1].s_voidp = (void*)x1;
	x[2].s_voidp = (void*)&x2;
	x[3].s_voidp = (void*)&x3;
	x[4].s_bool = (bool)x4;
	if(call_method((void*)this, 9619, x)) return;
	this->QWidget::reparent(x1, x2, x3, x4);
    }
    virtual void resize(int x1, int x2) {
	Smoke::StackItem x[3];
	x[1].s_int = (int)x1;
	x[2].s_int = (int)x2;
	if(call_method((void*)this, 9687, x)) return;
	this->QWidget::resize(x1, x2);
    }
    virtual void resizeEvent(QResizeEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(call_method((void*)this, 9710, x)) return;
	this->QWidget::resizeEvent(x1);
    }
    virtual int resolution() const {
	Smoke::StackItem x[1];
	if(call_method((void*)this, 5554, x)) return (int)x[0].s_int;
	return this->QPaintDevice::resolution();
    }
    virtual bool seek(int x1, bool x2) {
	Smoke::StackItem x[3];
	x[1].s_int = (int)x1;
	x[2].s_bool = (bool)x2;
	if(call_method((void*)this, 1282, x)) return (bool)x[0].s_bool;
	return this->QDataBrowser::seek(x1, x2);
    }
    virtual void setAcceptDrops(bool x1) {
	Smoke::StackItem x[2];
	x[1].s_bool = (bool)x1;
	if(call_method((void*)this, 9636, x)) return;
	this->QWidget::setAcceptDrops(x1);
    }
    virtual void setActiveWindow() {
	Smoke::StackItem x[1];
	if(call_method((void*)this, 9590, x)) return;
	this->QWidget::setActiveWindow();
    }
    virtual void setAutoEdit(bool x1) {
	Smoke::StackItem x[2];
	x[1].s_bool = (bool)x1;
	if(call_method((void*)this, 1280, x)) return;
	this->QDataBrowser::setAutoEdit(x1);
    }
    virtual void setAutoMask(bool x1) {
	Smoke::StackItem x[2];
	x[1].s_bool = (bool)x1;
	if(call_method((void*)this, 9637, x)) return;
	this->QWidget::setAutoMask(x1);
    }
    virtual void setBackgroundColor(const QColor& x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)&x1;
	if(call_method((void*)this, 9586, x)) return;
	this->QWidget::setBackgroundColor(x1);
    }
    virtual void setBackgroundMode(Qt::BackgroundMode x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)&x1;
	if(call_method((void*)this, 9548, x)) return;
	this->QWidget::setBackgroundMode(x1);
    }
    virtual void setBackgroundOrigin(QWidget::BackgroundOrigin x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)&x1;
	if(call_method((void*)this, 9639, x)) return;
	this->QWidget::setBackgroundOrigin(x1);
    }
    virtual void setBackgroundPixmap(const QPixmap& x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)&x1;
	if(call_method((void*)this, 9588, x)) return;
	this->QWidget::setBackgroundPixmap(x1);
    }
    virtual void setCaption(const QString& x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)&x1;
	if(call_method((void*)this, 9654, x)) return;
	this->QWidget::setCaption(x1);
    }
    virtual void setConfirmCancels(bool x1) {
	Smoke::StackItem x[2];
	x[1].s_bool = (bool)x1;
	if(call_method((void*)this, 1272, x)) return;
	this->QDataBrowser::setConfirmCancels(x1);
    }
    virtual void setConfirmDelete(bool x1) {
	Smoke::StackItem x[2];
	x[1].s_bool = (bool)x1;
	if(call_method((void*)this, 1271, x)) return;
	this->QDataBrowser::setConfirmDelete(x1);
    }
    virtual void setConfirmEdits(bool x1) {
	Smoke::StackItem x[2];
	x[1].s_bool = (bool)x1;
	if(call_method((void*)this, 1268, x)) return;
	this->QDataBrowser::setConfirmEdits(x1);
    }
    virtual void setConfirmInsert(bool x1) {
	Smoke::StackItem x[2];
	x[1].s_bool = (bool)x1;
	if(call_method((void*)this, 1269, x)) return;
	this->QDataBrowser::setConfirmInsert(x1);
    }
    virtual void setConfirmUpdate(bool x1) {
	Smoke::StackItem x[2];
	x[1].s_bool = (bool)x1;
	if(call_method((void*)this, 1270, x)) return;
	this->QDataBrowser::setConfirmUpdate(x1);
    }
    virtual void setCursor(const QCursor& x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)&x1;
	if(call_method((void*)this, 9575, x)) return;
	this->QWidget::setCursor(x1);
    }
    virtual void setEnabled(bool x1) {
	Smoke::StackItem x[2];
	x[1].s_bool = (bool)x1;
	if(call_method((void*)this, 9652, x)) return;
	this->QWidget::setEnabled(x1);
    }
    virtual void setEraseColor(const QColor& x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)&x1;
	if(call_method((void*)this, 9552, x)) return;
	this->QWidget::setEraseColor(x1);
    }
    virtual void setErasePixmap(const QPixmap& x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)&x1;
	if(call_method((void*)this, 9554, x)) return;
	this->QWidget::setErasePixmap(x1);
    }
    virtual void setFocus() {
	Smoke::StackItem x[1];
	if(call_method((void*)this, 9658, x)) return;
	this->QWidget::setFocus();
    }
    virtual void setFocusPolicy(QWidget::FocusPolicy x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)&x1;
	if(call_method((void*)this, 9593, x)) return;
	this->QWidget::setFocusPolicy(x1);
    }
    virtual void setFocusProxy(QWidget* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(call_method((void*)this, 9595, x)) return;
	this->QWidget::setFocusProxy(x1);
    }
    virtual void setFont(const QFont& x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)&x1;
	if(call_method((void*)this, 9569, x)) return;
	this->QWidget::setFont(x1);
    }
    virtual void setForm(QSqlForm* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(call_method((void*)this, 1266, x)) return;
	this->QDataBrowser::setForm(x1);
    }
    virtual void setGeometry(const QRect& x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)&x1;
	if(call_method((void*)this, 9690, x)) return;
	this->QWidget::setGeometry(x1);
    }
    virtual void setGeometry(int x1, int x2, int x3, int x4) {
	Smoke::StackItem x[5];
	x[1].s_int = (int)x1;
	x[2].s_int = (int)x2;
	x[3].s_int = (int)x3;
	x[4].s_int = (int)x4;
	if(call_method((void*)this, 9689, x)) return;
	this->QWidget::setGeometry(x1, x2, x3, x4);
    }
    virtual void setIcon(const QPixmap& x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)&x1;
	if(call_method((void*)this, 9655, x)) return;
	this->QWidget::setIcon(x1);
    }
    virtual void setIconText(const QString& x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)&x1;
	if(call_method((void*)this, 9656, x)) return;
	this->QWidget::setIconText(x1);
    }
    virtual void setKeyCompression(bool x1) {
	Smoke::StackItem x[2];
	x[1].s_bool = (bool)x1;
	if(call_method((void*)this, 9748, x)) return;
	this->QWidget::setKeyCompression(x1);
    }
    virtual void setMask(const QBitmap& x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)&x1;
	if(call_method((void*)this, 9582, x)) return;
	this->QWidget::setMask(x1);
    }
    virtual void setMask(const QRegion& x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)&x1;
	if(call_method((void*)this, 9583, x)) return;
	this->QWidget::setMask(x1);
    }
    virtual void setMaximumSize(int x1, int x2) {
	Smoke::StackItem x[3];
	x[1].s_int = (int)x1;
	x[2].s_int = (int)x2;
	if(call_method((void*)this, 9525, x)) return;
	this->QWidget::setMaximumSize(x1, x2);
    }
    virtual void setMicroFocusHint(int x1, int x2, int x3, int x4, bool x5, QFont* x6) {
	Smoke::StackItem x[7];
	x[1].s_int = (int)x1;
	x[2].s_int = (int)x2;
	x[3].s_int = (int)x3;
	x[4].s_int = (int)x4;
	x[5].s_bool = (bool)x5;
	x[6].s_voidp = (void*)x6;
	if(call_method((void*)this, 9749, x)) return;
	this->QWidget::setMicroFocusHint(x1, x2, x3, x4, x5, x6);
    }
    virtual void setMinimumSize(int x1, int x2) {
	Smoke::StackItem x[3];
	x[1].s_int = (int)x1;
	x[2].s_int = (int)x2;
	if(call_method((void*)this, 9523, x)) return;
	this->QWidget::setMinimumSize(x1, x2);
    }
    virtual void setMouseTracking(bool x1) {
	Smoke::StackItem x[2];
	x[1].s_bool = (bool)x1;
	if(call_method((void*)this, 9657, x)) return;
	this->QWidget::setMouseTracking(x1);
    }
    virtual void setName(const char* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(call_method((void*)this, 9492, x)) return;
	this->QWidget::setName(x1);
    }
    virtual void setPalette(const QPalette& x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)&x1;
	if(call_method((void*)this, 9558, x)) return;
	this->QWidget::setPalette(x1);
    }
    virtual void setPaletteBackgroundColor(const QColor& x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)&x1;
	if(call_method((void*)this, 9563, x)) return;
	this->QWidget::setPaletteBackgroundColor(x1);
    }
    virtual void setPaletteBackgroundPixmap(const QPixmap& x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)&x1;
	if(call_method((void*)this, 9565, x)) return;
	this->QWidget::setPaletteBackgroundPixmap(x1);
    }
    virtual bool setProperty(const char* x1, const QVariant& x2) {
	Smoke::StackItem x[3];
	x[1].s_voidp = (void*)x1;
	x[2].s_voidp = (void*)&x2;
	if(call_method((void*)this, 5444, x)) return (bool)x[0].s_bool;
	return this->QObject::setProperty(x1, x2);
    }
    virtual void setReadOnly(bool x1) {
	Smoke::StackItem x[2];
	x[1].s_bool = (bool)x1;
	if(call_method((void*)this, 1278, x)) return;
	this->QDataBrowser::setReadOnly(x1);
    }
    virtual void setResolution(int x1) {
	Smoke::StackItem x[2];
	x[1].s_int = (int)x1;
	if(call_method((void*)this, 5553, x)) return;
	this->QPaintDevice::setResolution(x1);
    }
    virtual void setSizeIncrement(int x1, int x2) {
	Smoke::StackItem x[3];
	x[1].s_int = (int)x1;
	x[2].s_int = (int)x2;
	if(call_method((void*)this, 9532, x)) return;
	this->QWidget::setSizeIncrement(x1, x2);
    }
    virtual void setSizePolicy(QSizePolicy x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)&x1;
	if(call_method((void*)this, 9614, x)) return;
	this->QWidget::setSizePolicy(x1);
    }
    virtual void setSqlCursor(QSqlCursor* x1, bool x2) {
	Smoke::StackItem x[3];
	x[1].s_voidp = (void*)x1;
	x[2].s_bool = (bool)x2;
	if(call_method((void*)this, 1263, x)) return;
	this->QDataBrowser::setSqlCursor(x1, x2);
    }
    virtual void setUpdatesEnabled(bool x1) {
	Smoke::StackItem x[2];
	x[1].s_bool = (bool)x1;
	if(call_method((void*)this, 9660, x)) return;
	this->QWidget::setUpdatesEnabled(x1);
    }
    virtual void setWFlags(Qt::WFlags x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)&x1;
	if(call_method((void*)this, 9742, x)) return;
	this->QWidget::setWFlags(x1);
    }
    virtual void setWState(uint x1) {
	Smoke::StackItem x[2];
	x[1].s_uint = (uint)x1;
	if(call_method((void*)this, 9739, x)) return;
	this->QWidget::setWState(x1);
    }
    virtual void show() {
	Smoke::StackItem x[1];
	if(call_method((void*)this, 9672, x)) return;
	this->QWidget::show();
    }
    virtual void showEvent(QShowEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(call_method((void*)this, 9721, x)) return;
	this->QWidget::showEvent(x1);
    }
    virtual void showMaximized() {
	Smoke::StackItem x[1];
	if(call_method((void*)this, 9676, x)) return;
	this->QWidget::showMaximized();
    }
    virtual void showMinimized() {
	Smoke::StackItem x[1];
	if(call_method((void*)this, 9675, x)) return;
	this->QWidget::showMinimized();
    }
    virtual void showNormal() {
	Smoke::StackItem x[1];
	if(call_method((void*)this, 9678, x)) return;
	this->QWidget::showNormal();
    }
    virtual QSize sizeHint() const {
	Smoke::StackItem x[1];
	if(call_method((void*)this, 9611, x)) {
	    QSize *xptr = (QSize *)x[0].s_voidp;
	    QSize xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QWidget::sizeHint();
    }
    virtual QSizePolicy sizePolicy() const {
	Smoke::StackItem x[1];
	if(call_method((void*)this, 9613, x)) {
	    QSizePolicy *xptr = (QSizePolicy *)x[0].s_voidp;
	    QSizePolicy xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QWidget::sizePolicy();
    }
    virtual void styleChange(QStyle& x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)&x1;
	if(call_method((void*)this, 9724, x)) return;
	this->QWidget::styleChange(x1);
    }
    virtual void tabletEvent(QTabletEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(call_method((void*)this, 9716, x)) return;
	this->QWidget::tabletEvent(x1);
    }
    virtual void timerEvent(QTimerEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(call_method((void*)this, 5468, x)) return;
	this->QObject::timerEvent(x1);
    }
    virtual void unsetCursor() {
	Smoke::StackItem x[1];
	if(call_method((void*)this, 9576, x)) return;
	this->QWidget::unsetCursor();
    }
    virtual void update() {
	Smoke::StackItem x[1];
	if(call_method((void*)this, 1286, x)) return;
	this->QDataBrowser::update();
    }
    virtual bool updateCurrent() {
	Smoke::StackItem x[1];
	if(call_method((void*)this, 1309, x)) return (bool)x[0].s_bool;
	return this->QDataBrowser::updateCurrent();
    }
    virtual void updateMask() {
	Smoke::StackItem x[1];
	if(call_method((void*)this, 9723, x)) return;
	this->QWidget::updateMask();
    }
    virtual void wheelEvent(QWheelEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(call_method((void*)this, 9701, x)) return;
	this->QWidget::wheelEvent(x1);
    }
    virtual void windowActivationChange(bool x1) {
	Smoke::StackItem x[2];
	x[1].s_bool = (bool)x1;
	if(call_method((void*)this, 9728, x)) return;
	this->QWidget::windowActivationChange(x1);
    }
    virtual void writeFields() {
	Smoke::StackItem x[1];
	if(call_method((void*)this, 1293, x)) return;
	this->QDataBrowser::writeFields();
    }
    ~x_QDataBrowser() {}
};
void xcall_QDataBrowser(Smoke::Index xi, void *obj, Smoke::Stack args) {
    x_QDataBrowser *xself = (x_QDataBrowser*)obj;
    switch(xi) {
	case 0: x_QDataBrowser::x_0(args);	break;
	case 1: x_QDataBrowser::x_1(args);	break;
	case 2: x_QDataBrowser::x_2(args);	break;
	case 3: x_QDataBrowser::x_3(args);	break;
	case 4: x_QDataBrowser::x_4(args);	break;
	case 5: x_QDataBrowser::x_5(args);	break;
	case 6: x_QDataBrowser::x_6(args);	break;
	case 7: x_QDataBrowser::x_7(args);	break;
	case 8: x_QDataBrowser::x_8(args);	break;
	case 9: x_QDataBrowser::x_9(args);	break;
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
	case 58: xself->x_58(args);	break;
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
	case 70: delete (QDataBrowser*)xself;	break;
    }
}
