//Auto-generated by kalyptus. DO NOT EDIT.
#include <smoke.h>
#include <qt_smoke.h>
#include <qiconset.h>
#include <qkeysequence.h>
#include <qstring.h>
#include <qmenudata.h>
#include <qpixmap.h>

class x_QMenuData : public QMenuData {
public:
    static void x_0(Smoke::Stack x) {
	// QMenuData()
	x_QMenuData* xret = new x_QMenuData();
	x[0].s_class = (void*)xret;
    }
    x_QMenuData() : QMenuData() {
    }
    void x_1(Smoke::Stack x) const {
	// count()
	uint xret = this->QMenuData::count();
	x[0].s_uint = xret;
    }
    void x_2(Smoke::Stack x) {
	// insertItem(const QString&, const QObject*, const char*, const QKeySequence&, int, int)
	int xret = this->QMenuData::insertItem(*(const QString *)x[1].s_voidp,(const QObject*)x[2].s_class,(const char*)x[3].s_voidp,*(const QKeySequence *)x[4].s_class,(int)x[5].s_int,(int)x[6].s_int);
	x[0].s_int = xret;
    }
    void x_3(Smoke::Stack x) {
	// insertItem(const QString&, const QObject*, const char*, const QKeySequence&, int)
	int xret = this->QMenuData::insertItem(*(const QString *)x[1].s_voidp,(const QObject*)x[2].s_class,(const char*)x[3].s_voidp,*(const QKeySequence *)x[4].s_class,(int)x[5].s_int);
	x[0].s_int = xret;
    }
    void x_4(Smoke::Stack x) {
	// insertItem(const QString&, const QObject*, const char*, const QKeySequence&)
	int xret = this->QMenuData::insertItem(*(const QString *)x[1].s_voidp,(const QObject*)x[2].s_class,(const char*)x[3].s_voidp,*(const QKeySequence *)x[4].s_class);
	x[0].s_int = xret;
    }
    void x_5(Smoke::Stack x) {
	// insertItem(const QString&, const QObject*, const char*)
	int xret = this->QMenuData::insertItem(*(const QString *)x[1].s_voidp,(const QObject*)x[2].s_class,(const char*)x[3].s_voidp);
	x[0].s_int = xret;
    }
    void x_6(Smoke::Stack x) {
	// insertItem(const QIconSet&, const QString&, const QObject*, const char*, const QKeySequence&, int, int)
	int xret = this->QMenuData::insertItem(*(const QIconSet *)x[1].s_class,*(const QString *)x[2].s_voidp,(const QObject*)x[3].s_class,(const char*)x[4].s_voidp,*(const QKeySequence *)x[5].s_class,(int)x[6].s_int,(int)x[7].s_int);
	x[0].s_int = xret;
    }
    void x_7(Smoke::Stack x) {
	// insertItem(const QIconSet&, const QString&, const QObject*, const char*, const QKeySequence&, int)
	int xret = this->QMenuData::insertItem(*(const QIconSet *)x[1].s_class,*(const QString *)x[2].s_voidp,(const QObject*)x[3].s_class,(const char*)x[4].s_voidp,*(const QKeySequence *)x[5].s_class,(int)x[6].s_int);
	x[0].s_int = xret;
    }
    void x_8(Smoke::Stack x) {
	// insertItem(const QIconSet&, const QString&, const QObject*, const char*, const QKeySequence&)
	int xret = this->QMenuData::insertItem(*(const QIconSet *)x[1].s_class,*(const QString *)x[2].s_voidp,(const QObject*)x[3].s_class,(const char*)x[4].s_voidp,*(const QKeySequence *)x[5].s_class);
	x[0].s_int = xret;
    }
    void x_9(Smoke::Stack x) {
	// insertItem(const QIconSet&, const QString&, const QObject*, const char*)
	int xret = this->QMenuData::insertItem(*(const QIconSet *)x[1].s_class,*(const QString *)x[2].s_voidp,(const QObject*)x[3].s_class,(const char*)x[4].s_voidp);
	x[0].s_int = xret;
    }
    void x_10(Smoke::Stack x) {
	// insertItem(const QPixmap&, const QObject*, const char*, const QKeySequence&, int, int)
	int xret = this->QMenuData::insertItem(*(const QPixmap *)x[1].s_class,(const QObject*)x[2].s_class,(const char*)x[3].s_voidp,*(const QKeySequence *)x[4].s_class,(int)x[5].s_int,(int)x[6].s_int);
	x[0].s_int = xret;
    }
    void x_11(Smoke::Stack x) {
	// insertItem(const QPixmap&, const QObject*, const char*, const QKeySequence&, int)
	int xret = this->QMenuData::insertItem(*(const QPixmap *)x[1].s_class,(const QObject*)x[2].s_class,(const char*)x[3].s_voidp,*(const QKeySequence *)x[4].s_class,(int)x[5].s_int);
	x[0].s_int = xret;
    }
    void x_12(Smoke::Stack x) {
	// insertItem(const QPixmap&, const QObject*, const char*, const QKeySequence&)
	int xret = this->QMenuData::insertItem(*(const QPixmap *)x[1].s_class,(const QObject*)x[2].s_class,(const char*)x[3].s_voidp,*(const QKeySequence *)x[4].s_class);
	x[0].s_int = xret;
    }
    void x_13(Smoke::Stack x) {
	// insertItem(const QPixmap&, const QObject*, const char*)
	int xret = this->QMenuData::insertItem(*(const QPixmap *)x[1].s_class,(const QObject*)x[2].s_class,(const char*)x[3].s_voidp);
	x[0].s_int = xret;
    }
    void x_14(Smoke::Stack x) {
	// insertItem(const QIconSet&, const QPixmap&, const QObject*, const char*, const QKeySequence&, int, int)
	int xret = this->QMenuData::insertItem(*(const QIconSet *)x[1].s_class,*(const QPixmap *)x[2].s_class,(const QObject*)x[3].s_class,(const char*)x[4].s_voidp,*(const QKeySequence *)x[5].s_class,(int)x[6].s_int,(int)x[7].s_int);
	x[0].s_int = xret;
    }
    void x_15(Smoke::Stack x) {
	// insertItem(const QIconSet&, const QPixmap&, const QObject*, const char*, const QKeySequence&, int)
	int xret = this->QMenuData::insertItem(*(const QIconSet *)x[1].s_class,*(const QPixmap *)x[2].s_class,(const QObject*)x[3].s_class,(const char*)x[4].s_voidp,*(const QKeySequence *)x[5].s_class,(int)x[6].s_int);
	x[0].s_int = xret;
    }
    void x_16(Smoke::Stack x) {
	// insertItem(const QIconSet&, const QPixmap&, const QObject*, const char*, const QKeySequence&)
	int xret = this->QMenuData::insertItem(*(const QIconSet *)x[1].s_class,*(const QPixmap *)x[2].s_class,(const QObject*)x[3].s_class,(const char*)x[4].s_voidp,*(const QKeySequence *)x[5].s_class);
	x[0].s_int = xret;
    }
    void x_17(Smoke::Stack x) {
	// insertItem(const QIconSet&, const QPixmap&, const QObject*, const char*)
	int xret = this->QMenuData::insertItem(*(const QIconSet *)x[1].s_class,*(const QPixmap *)x[2].s_class,(const QObject*)x[3].s_class,(const char*)x[4].s_voidp);
	x[0].s_int = xret;
    }
    void x_18(Smoke::Stack x) {
	// insertItem(const QString&, int, int)
	int xret = this->QMenuData::insertItem(*(const QString *)x[1].s_voidp,(int)x[2].s_int,(int)x[3].s_int);
	x[0].s_int = xret;
    }
    void x_19(Smoke::Stack x) {
	// insertItem(const QString&, int)
	int xret = this->QMenuData::insertItem(*(const QString *)x[1].s_voidp,(int)x[2].s_int);
	x[0].s_int = xret;
    }
    void x_20(Smoke::Stack x) {
	// insertItem(const QString&)
	int xret = this->QMenuData::insertItem(*(const QString *)x[1].s_voidp);
	x[0].s_int = xret;
    }
    void x_21(Smoke::Stack x) {
	// insertItem(const QIconSet&, const QString&, int, int)
	int xret = this->QMenuData::insertItem(*(const QIconSet *)x[1].s_class,*(const QString *)x[2].s_voidp,(int)x[3].s_int,(int)x[4].s_int);
	x[0].s_int = xret;
    }
    void x_22(Smoke::Stack x) {
	// insertItem(const QIconSet&, const QString&, int)
	int xret = this->QMenuData::insertItem(*(const QIconSet *)x[1].s_class,*(const QString *)x[2].s_voidp,(int)x[3].s_int);
	x[0].s_int = xret;
    }
    void x_23(Smoke::Stack x) {
	// insertItem(const QIconSet&, const QString&)
	int xret = this->QMenuData::insertItem(*(const QIconSet *)x[1].s_class,*(const QString *)x[2].s_voidp);
	x[0].s_int = xret;
    }
    void x_24(Smoke::Stack x) {
	// insertItem(const QString&, QPopupMenu*, int, int)
	int xret = this->QMenuData::insertItem(*(const QString *)x[1].s_voidp,(QPopupMenu*)x[2].s_class,(int)x[3].s_int,(int)x[4].s_int);
	x[0].s_int = xret;
    }
    void x_25(Smoke::Stack x) {
	// insertItem(const QString&, QPopupMenu*, int)
	int xret = this->QMenuData::insertItem(*(const QString *)x[1].s_voidp,(QPopupMenu*)x[2].s_class,(int)x[3].s_int);
	x[0].s_int = xret;
    }
    void x_26(Smoke::Stack x) {
	// insertItem(const QString&, QPopupMenu*)
	int xret = this->QMenuData::insertItem(*(const QString *)x[1].s_voidp,(QPopupMenu*)x[2].s_class);
	x[0].s_int = xret;
    }
    void x_27(Smoke::Stack x) {
	// insertItem(const QIconSet&, const QString&, QPopupMenu*, int, int)
	int xret = this->QMenuData::insertItem(*(const QIconSet *)x[1].s_class,*(const QString *)x[2].s_voidp,(QPopupMenu*)x[3].s_class,(int)x[4].s_int,(int)x[5].s_int);
	x[0].s_int = xret;
    }
    void x_28(Smoke::Stack x) {
	// insertItem(const QIconSet&, const QString&, QPopupMenu*, int)
	int xret = this->QMenuData::insertItem(*(const QIconSet *)x[1].s_class,*(const QString *)x[2].s_voidp,(QPopupMenu*)x[3].s_class,(int)x[4].s_int);
	x[0].s_int = xret;
    }
    void x_29(Smoke::Stack x) {
	// insertItem(const QIconSet&, const QString&, QPopupMenu*)
	int xret = this->QMenuData::insertItem(*(const QIconSet *)x[1].s_class,*(const QString *)x[2].s_voidp,(QPopupMenu*)x[3].s_class);
	x[0].s_int = xret;
    }
    void x_30(Smoke::Stack x) {
	// insertItem(const QPixmap&, int, int)
	int xret = this->QMenuData::insertItem(*(const QPixmap *)x[1].s_class,(int)x[2].s_int,(int)x[3].s_int);
	x[0].s_int = xret;
    }
    void x_31(Smoke::Stack x) {
	// insertItem(const QPixmap&, int)
	int xret = this->QMenuData::insertItem(*(const QPixmap *)x[1].s_class,(int)x[2].s_int);
	x[0].s_int = xret;
    }
    void x_32(Smoke::Stack x) {
	// insertItem(const QPixmap&)
	int xret = this->QMenuData::insertItem(*(const QPixmap *)x[1].s_class);
	x[0].s_int = xret;
    }
    void x_33(Smoke::Stack x) {
	// insertItem(const QIconSet&, const QPixmap&, int, int)
	int xret = this->QMenuData::insertItem(*(const QIconSet *)x[1].s_class,*(const QPixmap *)x[2].s_class,(int)x[3].s_int,(int)x[4].s_int);
	x[0].s_int = xret;
    }
    void x_34(Smoke::Stack x) {
	// insertItem(const QIconSet&, const QPixmap&, int)
	int xret = this->QMenuData::insertItem(*(const QIconSet *)x[1].s_class,*(const QPixmap *)x[2].s_class,(int)x[3].s_int);
	x[0].s_int = xret;
    }
    void x_35(Smoke::Stack x) {
	// insertItem(const QIconSet&, const QPixmap&)
	int xret = this->QMenuData::insertItem(*(const QIconSet *)x[1].s_class,*(const QPixmap *)x[2].s_class);
	x[0].s_int = xret;
    }
    void x_36(Smoke::Stack x) {
	// insertItem(const QPixmap&, QPopupMenu*, int, int)
	int xret = this->QMenuData::insertItem(*(const QPixmap *)x[1].s_class,(QPopupMenu*)x[2].s_class,(int)x[3].s_int,(int)x[4].s_int);
	x[0].s_int = xret;
    }
    void x_37(Smoke::Stack x) {
	// insertItem(const QPixmap&, QPopupMenu*, int)
	int xret = this->QMenuData::insertItem(*(const QPixmap *)x[1].s_class,(QPopupMenu*)x[2].s_class,(int)x[3].s_int);
	x[0].s_int = xret;
    }
    void x_38(Smoke::Stack x) {
	// insertItem(const QPixmap&, QPopupMenu*)
	int xret = this->QMenuData::insertItem(*(const QPixmap *)x[1].s_class,(QPopupMenu*)x[2].s_class);
	x[0].s_int = xret;
    }
    void x_39(Smoke::Stack x) {
	// insertItem(const QIconSet&, const QPixmap&, QPopupMenu*, int, int)
	int xret = this->QMenuData::insertItem(*(const QIconSet *)x[1].s_class,*(const QPixmap *)x[2].s_class,(QPopupMenu*)x[3].s_class,(int)x[4].s_int,(int)x[5].s_int);
	x[0].s_int = xret;
    }
    void x_40(Smoke::Stack x) {
	// insertItem(const QIconSet&, const QPixmap&, QPopupMenu*, int)
	int xret = this->QMenuData::insertItem(*(const QIconSet *)x[1].s_class,*(const QPixmap *)x[2].s_class,(QPopupMenu*)x[3].s_class,(int)x[4].s_int);
	x[0].s_int = xret;
    }
    void x_41(Smoke::Stack x) {
	// insertItem(const QIconSet&, const QPixmap&, QPopupMenu*)
	int xret = this->QMenuData::insertItem(*(const QIconSet *)x[1].s_class,*(const QPixmap *)x[2].s_class,(QPopupMenu*)x[3].s_class);
	x[0].s_int = xret;
    }
    void x_42(Smoke::Stack x) {
	// insertItem(QWidget*, int, int)
	int xret = this->QMenuData::insertItem((QWidget*)x[1].s_class,(int)x[2].s_int,(int)x[3].s_int);
	x[0].s_int = xret;
    }
    void x_43(Smoke::Stack x) {
	// insertItem(QWidget*, int)
	int xret = this->QMenuData::insertItem((QWidget*)x[1].s_class,(int)x[2].s_int);
	x[0].s_int = xret;
    }
    void x_44(Smoke::Stack x) {
	// insertItem(QWidget*)
	int xret = this->QMenuData::insertItem((QWidget*)x[1].s_class);
	x[0].s_int = xret;
    }
    void x_45(Smoke::Stack x) {
	// insertItem(const QIconSet&, QCustomMenuItem*, int, int)
	int xret = this->QMenuData::insertItem(*(const QIconSet *)x[1].s_class,(QCustomMenuItem*)x[2].s_class,(int)x[3].s_int,(int)x[4].s_int);
	x[0].s_int = xret;
    }
    void x_46(Smoke::Stack x) {
	// insertItem(const QIconSet&, QCustomMenuItem*, int)
	int xret = this->QMenuData::insertItem(*(const QIconSet *)x[1].s_class,(QCustomMenuItem*)x[2].s_class,(int)x[3].s_int);
	x[0].s_int = xret;
    }
    void x_47(Smoke::Stack x) {
	// insertItem(const QIconSet&, QCustomMenuItem*)
	int xret = this->QMenuData::insertItem(*(const QIconSet *)x[1].s_class,(QCustomMenuItem*)x[2].s_class);
	x[0].s_int = xret;
    }
    void x_48(Smoke::Stack x) {
	// insertItem(QCustomMenuItem*, int, int)
	int xret = this->QMenuData::insertItem((QCustomMenuItem*)x[1].s_class,(int)x[2].s_int,(int)x[3].s_int);
	x[0].s_int = xret;
    }
    void x_49(Smoke::Stack x) {
	// insertItem(QCustomMenuItem*, int)
	int xret = this->QMenuData::insertItem((QCustomMenuItem*)x[1].s_class,(int)x[2].s_int);
	x[0].s_int = xret;
    }
    void x_50(Smoke::Stack x) {
	// insertItem(QCustomMenuItem*)
	int xret = this->QMenuData::insertItem((QCustomMenuItem*)x[1].s_class);
	x[0].s_int = xret;
    }
    void x_51(Smoke::Stack x) {
	// insertSeparator(int)
	int xret = this->QMenuData::insertSeparator((int)x[1].s_int);
	x[0].s_int = xret;
    }
    void x_52(Smoke::Stack x) {
	// insertSeparator()
	int xret = this->QMenuData::insertSeparator();
	x[0].s_int = xret;
    }
    void x_53(Smoke::Stack x) {
	// removeItem(int)
	this->QMenuData::removeItem((int)x[1].s_int);
	(void)x; // noop (for compiler warning)
    }
    void x_54(Smoke::Stack x) {
	// removeItemAt(int)
	this->QMenuData::removeItemAt((int)x[1].s_int);
	(void)x; // noop (for compiler warning)
    }
    void x_55(Smoke::Stack x) {
	// clear()
	this->QMenuData::clear();
	(void)x; // noop (for compiler warning)
    }
    void x_56(Smoke::Stack x) const {
	// accel(int)
	QKeySequence xret = this->QMenuData::accel((int)x[1].s_int);
	x[0].s_class = (void*)new QKeySequence(xret);
    }
    void x_57(Smoke::Stack x) {
	// setAccel(const QKeySequence&, int)
	this->QMenuData::setAccel(*(const QKeySequence *)x[1].s_class,(int)x[2].s_int);
	(void)x; // noop (for compiler warning)
    }
    void x_58(Smoke::Stack x) const {
	// iconSet(int)
	QIconSet* xret = this->QMenuData::iconSet((int)x[1].s_int);
	x[0].s_class = (void*)xret;
    }
    void x_59(Smoke::Stack x) const {
	// text(int)
	QString xret = this->QMenuData::text((int)x[1].s_int);
	x[0].s_voidp = (void*)new QString(xret);
    }
    void x_60(Smoke::Stack x) const {
	// pixmap(int)
	QPixmap* xret = this->QMenuData::pixmap((int)x[1].s_int);
	x[0].s_class = (void*)xret;
    }
    void x_61(Smoke::Stack x) {
	// setWhatsThis(int, const QString&)
	this->QMenuData::setWhatsThis((int)x[1].s_int,*(const QString *)x[2].s_voidp);
	(void)x; // noop (for compiler warning)
    }
    void x_62(Smoke::Stack x) const {
	// whatsThis(int)
	QString xret = this->QMenuData::whatsThis((int)x[1].s_int);
	x[0].s_voidp = (void*)new QString(xret);
    }
    void x_63(Smoke::Stack x) {
	// changeItem(int, const QString&)
	this->QMenuData::changeItem((int)x[1].s_int,*(const QString *)x[2].s_voidp);
	(void)x; // noop (for compiler warning)
    }
    void x_64(Smoke::Stack x) {
	// changeItem(int, const QPixmap&)
	this->QMenuData::changeItem((int)x[1].s_int,*(const QPixmap *)x[2].s_class);
	(void)x; // noop (for compiler warning)
    }
    void x_65(Smoke::Stack x) {
	// changeItem(int, const QIconSet&, const QString&)
	this->QMenuData::changeItem((int)x[1].s_int,*(const QIconSet *)x[2].s_class,*(const QString *)x[3].s_voidp);
	(void)x; // noop (for compiler warning)
    }
    void x_66(Smoke::Stack x) {
	// changeItem(int, const QIconSet&, const QPixmap&)
	this->QMenuData::changeItem((int)x[1].s_int,*(const QIconSet *)x[2].s_class,*(const QPixmap *)x[3].s_class);
	(void)x; // noop (for compiler warning)
    }
    void x_67(Smoke::Stack x) {
	// changeItem(const QString&, int)
	this->QMenuData::changeItem(*(const QString *)x[1].s_voidp,(int)x[2].s_int);
	(void)x; // noop (for compiler warning)
    }
    void x_68(Smoke::Stack x) {
	// changeItem(const QPixmap&, int)
	this->QMenuData::changeItem(*(const QPixmap *)x[1].s_class,(int)x[2].s_int);
	(void)x; // noop (for compiler warning)
    }
    void x_69(Smoke::Stack x) {
	// changeItem(const QIconSet&, const QString&, int)
	this->QMenuData::changeItem(*(const QIconSet *)x[1].s_class,*(const QString *)x[2].s_voidp,(int)x[3].s_int);
	(void)x; // noop (for compiler warning)
    }
    void x_70(Smoke::Stack x) const {
	// isItemActive(int)
	bool xret = this->QMenuData::isItemActive((int)x[1].s_int);
	x[0].s_bool = xret;
    }
    void x_71(Smoke::Stack x) const {
	// isItemEnabled(int)
	bool xret = this->QMenuData::isItemEnabled((int)x[1].s_int);
	x[0].s_bool = xret;
    }
    void x_72(Smoke::Stack x) {
	// setItemEnabled(int, bool)
	this->QMenuData::setItemEnabled((int)x[1].s_int,(bool)x[2].s_bool);
	(void)x; // noop (for compiler warning)
    }
    void x_73(Smoke::Stack x) const {
	// isItemChecked(int)
	bool xret = this->QMenuData::isItemChecked((int)x[1].s_int);
	x[0].s_bool = xret;
    }
    void x_74(Smoke::Stack x) {
	// setItemChecked(int, bool)
	this->QMenuData::setItemChecked((int)x[1].s_int,(bool)x[2].s_bool);
	(void)x; // noop (for compiler warning)
    }
    void x_75(Smoke::Stack x) {
	// updateItem(int)
	this->QMenuData::updateItem((int)x[1].s_int);
	(void)x; // noop (for compiler warning)
    }
    void x_76(Smoke::Stack x) const {
	// indexOf(int)
	int xret = this->QMenuData::indexOf((int)x[1].s_int);
	x[0].s_int = xret;
    }
    void x_77(Smoke::Stack x) const {
	// idAt(int)
	int xret = this->QMenuData::idAt((int)x[1].s_int);
	x[0].s_int = xret;
    }
    void x_78(Smoke::Stack x) {
	// setId(int, int)
	this->QMenuData::setId((int)x[1].s_int,(int)x[2].s_int);
	(void)x; // noop (for compiler warning)
    }
    void x_79(Smoke::Stack x) {
	// connectItem(int, const QObject*, const char*)
	bool xret = this->QMenuData::connectItem((int)x[1].s_int,(const QObject*)x[2].s_class,(const char*)x[3].s_voidp);
	x[0].s_bool = xret;
    }
    void x_80(Smoke::Stack x) {
	// disconnectItem(int, const QObject*, const char*)
	bool xret = this->QMenuData::disconnectItem((int)x[1].s_int,(const QObject*)x[2].s_class,(const char*)x[3].s_voidp);
	x[0].s_bool = xret;
    }
    void x_81(Smoke::Stack x) {
	// setItemParameter(int, int)
	bool xret = this->QMenuData::setItemParameter((int)x[1].s_int,(int)x[2].s_int);
	x[0].s_bool = xret;
    }
    void x_82(Smoke::Stack x) const {
	// itemParameter(int)
	int xret = this->QMenuData::itemParameter((int)x[1].s_int);
	x[0].s_int = xret;
    }
    void x_83(Smoke::Stack x) const {
	// findItem(int)
	QMenuItem* xret = this->QMenuData::findItem((int)x[1].s_int);
	x[0].s_class = (void*)xret;
    }
    void x_84(Smoke::Stack x) const {
	// findItem(int, QMenuData**)
	QMenuItem* xret = this->QMenuData::findItem((int)x[1].s_int,(QMenuData**)x[2].s_voidp);
	x[0].s_class = (void*)xret;
    }
    void x_85(Smoke::Stack x) {
	// findPopup(QPopupMenu*, int*)
	QMenuItem* xret = this->QMenuData::findPopup((QPopupMenu*)x[1].s_class,(int*)x[2].s_voidp);
	x[0].s_class = (void*)xret;
    }
    void x_86(Smoke::Stack x) {
	// findPopup(QPopupMenu*)
	QMenuItem* xret = this->QMenuData::findPopup((QPopupMenu*)x[1].s_class);
	x[0].s_class = (void*)xret;
    }
    void x_87(Smoke::Stack x) {
	// activateItemAt(int)
	this->QMenuData::activateItemAt((int)x[1].s_int);
	(void)x; // noop (for compiler warning)
    }
    void x_88(Smoke::Stack x) {
	// menuContentsChanged()
	this->QMenuData::menuContentsChanged();
	(void)x; // noop (for compiler warning)
    }
    void x_89(Smoke::Stack x) {
	// menuStateChanged()
	this->QMenuData::menuStateChanged();
	(void)x; // noop (for compiler warning)
    }
    void x_90(Smoke::Stack x) {
	// menuInsPopup(QPopupMenu*)
	this->QMenuData::menuInsPopup((QPopupMenu*)x[1].s_class);
	(void)x; // noop (for compiler warning)
    }
    void x_91(Smoke::Stack x) {
	// menuDelPopup(QPopupMenu*)
	this->QMenuData::menuDelPopup((QPopupMenu*)x[1].s_class);
	(void)x; // noop (for compiler warning)
    }
    virtual void activateItemAt(int x1) {
	Smoke::StackItem x[2];
	x[1].s_int = x1;
	if(qt_Smoke->binding->callMethod(5877, (void*)this, x)) return;
	this->QMenuData::activateItemAt(x1);
    }
    virtual void menuContentsChanged() {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(5878, (void*)this, x)) return;
	this->QMenuData::menuContentsChanged();
    }
    virtual void menuDelPopup(QPopupMenu* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(5881, (void*)this, x)) return;
	this->QMenuData::menuDelPopup(x1);
    }
    virtual void menuInsPopup(QPopupMenu* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(5880, (void*)this, x)) return;
	this->QMenuData::menuInsPopup(x1);
    }
    virtual void menuStateChanged() {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(5879, (void*)this, x)) return;
	this->QMenuData::menuStateChanged();
    }
    virtual void setId(int x1, int x2) {
	Smoke::StackItem x[3];
	x[1].s_int = x1;
	x[2].s_int = x2;
	if(qt_Smoke->binding->callMethod(5868, (void*)this, x)) return;
	this->QMenuData::setId(x1, x2);
    }
    virtual void updateItem(int x1) {
	Smoke::StackItem x[2];
	x[1].s_int = x1;
	if(qt_Smoke->binding->callMethod(5865, (void*)this, x)) return;
	this->QMenuData::updateItem(x1);
    }
    ~x_QMenuData() { qt_Smoke->binding->deleted(193, (void*)this); }
};
void xcall_QMenuData(Smoke::Index xi, void *obj, Smoke::Stack args) {
    x_QMenuData *xself = (x_QMenuData*)obj;
    switch(xi) {
	case 0: x_QMenuData::x_0(args);	break;
	case 1: xself->x_1(args);	break;
	case 2: xself->x_2(args);	break;
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
	case 70: xself->x_70(args);	break;
	case 71: xself->x_71(args);	break;
	case 72: xself->x_72(args);	break;
	case 73: xself->x_73(args);	break;
	case 74: xself->x_74(args);	break;
	case 75: xself->x_75(args);	break;
	case 76: xself->x_76(args);	break;
	case 77: xself->x_77(args);	break;
	case 78: xself->x_78(args);	break;
	case 79: xself->x_79(args);	break;
	case 80: xself->x_80(args);	break;
	case 81: xself->x_81(args);	break;
	case 82: xself->x_82(args);	break;
	case 83: xself->x_83(args);	break;
	case 84: xself->x_84(args);	break;
	case 85: xself->x_85(args);	break;
	case 86: xself->x_86(args);	break;
	case 87: xself->x_87(args);	break;
	case 88: xself->x_88(args);	break;
	case 89: xself->x_89(args);	break;
	case 90: xself->x_90(args);	break;
	case 91: xself->x_91(args);	break;
	case 92: delete (QMenuData*)xself;	break;
    }
}
