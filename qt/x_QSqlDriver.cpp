//Auto-generated by kalyptus. DO NOT EDIT.
#include <smoke.h>
#include <qsqlrecord.h>
#include <qstring.h>
#include <qsqlerror.h>
#include <qvariant.h>
#include <qsqldriver.h>
#include <qsqlquery.h>
#include <qsqlindex.h>
#include <qstringlist.h>

class x_QSqlDriver : public QSqlDriver {
public:
    static void x_0(Smoke::Stack x) {
	x[0].s_long = (long)QSqlDriver::Transactions;
    }
    static void x_1(Smoke::Stack x) {
	x[0].s_long = (long)QSqlDriver::QuerySize;
    }
    static void x_2(Smoke::Stack x) {
	x[0].s_long = (long)QSqlDriver::BLOB;
    }
    static void x_3(Smoke::Stack x) {
	// QSqlDriver(QObject*, const char*)
	x_QSqlDriver* xret = new x_QSqlDriver((QObject*)x[1].s_voidp,(const char*)x[2].s_voidp);
	x[0].s_voidp = (void*)xret;
    }
    x_QSqlDriver(QObject* x1, const char* x2) : QSqlDriver(x1, x2) {
    }
    static void x_4(Smoke::Stack x) {
	// QSqlDriver(QObject*)
	x_QSqlDriver* xret = new x_QSqlDriver((QObject*)x[1].s_voidp);
	x[0].s_voidp = (void*)xret;
    }
    x_QSqlDriver(QObject* x1) : QSqlDriver(x1) {
    }
    static void x_5(Smoke::Stack x) {
	// QSqlDriver()
	x_QSqlDriver* xret = new x_QSqlDriver();
	x[0].s_voidp = (void*)xret;
    }
    x_QSqlDriver() : QSqlDriver() {
    }
    void x_6(Smoke::Stack x) const {
	// isOpen()
	bool xret = this->QSqlDriver::isOpen();
	x[0].s_bool = (bool)xret;
    }
    void x_7(Smoke::Stack x) const {
	// isOpenError()
	bool xret = this->QSqlDriver::isOpenError();
	x[0].s_bool = (bool)xret;
    }
    void x_8(Smoke::Stack x) {
	// beginTransaction()
	bool xret = this->QSqlDriver::beginTransaction();
	x[0].s_bool = (bool)xret;
    }
    void x_9(Smoke::Stack x) {
	// commitTransaction()
	bool xret = this->QSqlDriver::commitTransaction();
	x[0].s_bool = (bool)xret;
    }
    void x_10(Smoke::Stack x) {
	// rollbackTransaction()
	bool xret = this->QSqlDriver::rollbackTransaction();
	x[0].s_bool = (bool)xret;
    }
    void x_11(Smoke::Stack x) const {
	// tables(const QString&)
	QStringList xret = this->QSqlDriver::tables(*(const QString *)x[1].s_voidp);
	x[0].s_voidp = (void*)new QStringList(xret);
    }
    void x_12(Smoke::Stack x) const {
	// primaryIndex(const QString&)
	QSqlIndex xret = this->QSqlDriver::primaryIndex(*(const QString *)x[1].s_voidp);
	x[0].s_voidp = (void*)new QSqlIndex(xret);
    }
    void x_13(Smoke::Stack x) const {
	// record(const QString&)
	QSqlRecord xret = this->QSqlDriver::record(*(const QString *)x[1].s_voidp);
	x[0].s_voidp = (void*)new QSqlRecord(xret);
    }
    void x_14(Smoke::Stack x) const {
	// record(const QSqlQuery&)
	QSqlRecord xret = this->QSqlDriver::record(*(const QSqlQuery *)x[1].s_voidp);
	x[0].s_voidp = (void*)new QSqlRecord(xret);
    }
    void x_15(Smoke::Stack x) const {
	// recordInfo(const QString&)
	QSqlRecordInfo xret = this->QSqlDriver::recordInfo(*(const QString *)x[1].s_voidp);
	x[0].s_voidp = (void*)new QSqlRecordInfo(xret);
    }
    void x_16(Smoke::Stack x) const {
	// recordInfo(const QSqlQuery&)
	QSqlRecordInfo xret = this->QSqlDriver::recordInfo(*(const QSqlQuery *)x[1].s_voidp);
	x[0].s_voidp = (void*)new QSqlRecordInfo(xret);
    }
    void x_17(Smoke::Stack x) const {
	// nullText()
	QString xret = this->QSqlDriver::nullText();
	x[0].s_voidp = (void*)new QString(xret);
    }
    void x_18(Smoke::Stack x) const {
	// formatValue(const QSqlField*, bool)
	QString xret = this->QSqlDriver::formatValue((const QSqlField*)x[1].s_voidp,(bool)x[2].s_bool);
	x[0].s_voidp = (void*)new QString(xret);
    }
    void x_19(Smoke::Stack x) const {
	// formatValue(const QSqlField*)
	QString xret = this->QSqlDriver::formatValue((const QSqlField*)x[1].s_voidp);
	x[0].s_voidp = (void*)new QString(xret);
    }
    void x_20(Smoke::Stack x) const {
	// lastError()
	QSqlError xret = this->QSqlDriver::lastError();
	x[0].s_voidp = (void*)new QSqlError(xret);
    }
    void x_21(Smoke::Stack x) const {
	// hasFeature(QSqlDriver::DriverFeature)
	bool xret = this->QSqlDriver::hasFeature(*(QSqlDriver::DriverFeature *)x[1].s_voidp);
	x[0].s_bool = (bool)xret;
    }
    void x_22(Smoke::Stack x) {
	// open(const QString&, const QString&, const QString&, const QString&, int)
	bool xret = this->QSqlDriver::open(*(const QString *)x[1].s_voidp,*(const QString *)x[2].s_voidp,*(const QString *)x[3].s_voidp,*(const QString *)x[4].s_voidp,(int)x[5].s_int);
	x[0].s_bool = (bool)xret;
    }
    void x_23(Smoke::Stack x) {
	// open(const QString&, const QString&, const QString&, const QString&)
	bool xret = this->QSqlDriver::open(*(const QString *)x[1].s_voidp,*(const QString *)x[2].s_voidp,*(const QString *)x[3].s_voidp,*(const QString *)x[4].s_voidp);
	x[0].s_bool = (bool)xret;
    }
    void x_24(Smoke::Stack x) {
	// open(const QString&, const QString&, const QString&)
	bool xret = this->QSqlDriver::open(*(const QString *)x[1].s_voidp,*(const QString *)x[2].s_voidp,*(const QString *)x[3].s_voidp);
	x[0].s_bool = (bool)xret;
    }
    void x_25(Smoke::Stack x) {
	// open(const QString&, const QString&)
	bool xret = this->QSqlDriver::open(*(const QString *)x[1].s_voidp,*(const QString *)x[2].s_voidp);
	x[0].s_bool = (bool)xret;
    }
    void x_26(Smoke::Stack x) {
	// open(const QString&)
	bool xret = this->QSqlDriver::open(*(const QString *)x[1].s_voidp);
	x[0].s_bool = (bool)xret;
    }
    void x_27(Smoke::Stack x) {
	// close()
	this->QSqlDriver::close();
    }
    void x_28(Smoke::Stack x) const {
	// createQuery()
	QSqlQuery xret = this->QSqlDriver::createQuery();
	x[0].s_voidp = (void*)new QSqlQuery(xret);
    }
    void x_29(Smoke::Stack x) {
	// setOpen(bool)
	this->QSqlDriver::setOpen((bool)x[1].s_bool);
    }
    void x_30(Smoke::Stack x) {
	// setOpenError(bool)
	this->QSqlDriver::setOpenError((bool)x[1].s_bool);
    }
    void x_31(Smoke::Stack x) {
	// setLastError(const QSqlError&)
	this->QSqlDriver::setLastError(*(const QSqlError *)x[1].s_voidp);
    }
    virtual bool beginTransaction() {
	Smoke::StackItem x[1];
	if(call_method((void*)this, 7353, x)) return (bool)x[0].s_bool;
	return this->QSqlDriver::beginTransaction();
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
    virtual void close() {
	Smoke::StackItem x[1];
	call_method_abstract((void*)this, 7372, x);
	return;
	// ABSTRACT
    }
    virtual bool commitTransaction() {
	Smoke::StackItem x[1];
	if(call_method((void*)this, 7354, x)) return (bool)x[0].s_bool;
	return this->QSqlDriver::commitTransaction();
    }
    virtual void connectNotify(const char* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(call_method((void*)this, 5471, x)) return;
	this->QObject::connectNotify(x1);
    }
    virtual QSqlQuery createQuery() const {
	Smoke::StackItem x[1];
	call_method_abstract((void*)this, 7373, x);
	QSqlQuery *xptr = (QSqlQuery *)x[0].s_voidp;
	QSqlQuery xret(*xptr);
	delete xptr;
	return xret;
	// ABSTRACT
    }
    virtual void customEvent(QCustomEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(call_method((void*)this, 5470, x)) return;
	this->QObject::customEvent(x1);
    }
    virtual void disconnectNotify(const char* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(call_method((void*)this, 5472, x)) return;
	this->QObject::disconnectNotify(x1);
    }
    virtual bool event(QEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(call_method((void*)this, 5408, x)) return (bool)x[0].s_bool;
	return this->QObject::event(x1);
    }
    virtual bool eventFilter(QObject* x1, QEvent* x2) {
	Smoke::StackItem x[3];
	x[1].s_voidp = (void*)x1;
	x[2].s_voidp = (void*)x2;
	if(call_method((void*)this, 5409, x)) return (bool)x[0].s_bool;
	return this->QObject::eventFilter(x1, x2);
    }
    virtual QString formatValue(const QSqlField* x1, bool x2) const {
	Smoke::StackItem x[3];
	x[1].s_voidp = (void*)x1;
	x[2].s_bool = (bool)x2;
	if(call_method((void*)this, 7363, x)) {
	    QString *xptr = (QString *)x[0].s_voidp;
	    QString xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QSqlDriver::formatValue(x1, x2);
    }
    virtual bool hasFeature(QSqlDriver::DriverFeature x1) const {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)&x1;
	call_method_abstract((void*)this, 7366, x);
return (bool)x[0].s_bool;
	// ABSTRACT
    }
    virtual void insertChild(QObject* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(call_method((void*)this, 5431, x)) return;
	this->QObject::insertChild(x1);
    }
    virtual QString nullText() const {
	Smoke::StackItem x[1];
	if(call_method((void*)this, 7362, x)) {
	    QString *xptr = (QString *)x[0].s_voidp;
	    QString xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QSqlDriver::nullText();
    }
    virtual bool open(const QString& x1, const QString& x2, const QString& x3, const QString& x4, int x5) {
	Smoke::StackItem x[6];
	x[1].s_voidp = (void*)&x1;
	x[2].s_voidp = (void*)&x2;
	x[3].s_voidp = (void*)&x3;
	x[4].s_voidp = (void*)&x4;
	x[5].s_int = (int)x5;
	call_method_abstract((void*)this, 7367, x);
return (bool)x[0].s_bool;
	// ABSTRACT
    }
    virtual QSqlIndex primaryIndex(const QString& x1) const {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)&x1;
	if(call_method((void*)this, 7357, x)) {
	    QSqlIndex *xptr = (QSqlIndex *)x[0].s_voidp;
	    QSqlIndex xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QSqlDriver::primaryIndex(x1);
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
    virtual QSqlRecord record(const QSqlQuery& x1) const {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)&x1;
	if(call_method((void*)this, 7359, x)) {
	    QSqlRecord *xptr = (QSqlRecord *)x[0].s_voidp;
	    QSqlRecord xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QSqlDriver::record(x1);
    }
    virtual QSqlRecord record(const QString& x1) const {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)&x1;
	if(call_method((void*)this, 7358, x)) {
	    QSqlRecord *xptr = (QSqlRecord *)x[0].s_voidp;
	    QSqlRecord xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QSqlDriver::record(x1);
    }
    virtual QSqlRecordInfo recordInfo(const QSqlQuery& x1) const {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)&x1;
	if(call_method((void*)this, 7361, x)) {
	    QSqlRecordInfo *xptr = (QSqlRecordInfo *)x[0].s_voidp;
	    QSqlRecordInfo xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QSqlDriver::recordInfo(x1);
    }
    virtual QSqlRecordInfo recordInfo(const QString& x1) const {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)&x1;
	if(call_method((void*)this, 7360, x)) {
	    QSqlRecordInfo *xptr = (QSqlRecordInfo *)x[0].s_voidp;
	    QSqlRecordInfo xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QSqlDriver::recordInfo(x1);
    }
    virtual void removeChild(QObject* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(call_method((void*)this, 5432, x)) return;
	this->QObject::removeChild(x1);
    }
    virtual bool rollbackTransaction() {
	Smoke::StackItem x[1];
	if(call_method((void*)this, 7355, x)) return (bool)x[0].s_bool;
	return this->QSqlDriver::rollbackTransaction();
    }
    virtual void setLastError(const QSqlError& x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)&x1;
	if(call_method((void*)this, 7376, x)) return;
	this->QSqlDriver::setLastError(x1);
    }
    virtual void setName(const char* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(call_method((void*)this, 5414, x)) return;
	this->QObject::setName(x1);
    }
    virtual void setOpen(bool x1) {
	Smoke::StackItem x[2];
	x[1].s_bool = (bool)x1;
	if(call_method((void*)this, 7374, x)) return;
	this->QSqlDriver::setOpen(x1);
    }
    virtual void setOpenError(bool x1) {
	Smoke::StackItem x[2];
	x[1].s_bool = (bool)x1;
	if(call_method((void*)this, 7375, x)) return;
	this->QSqlDriver::setOpenError(x1);
    }
    virtual bool setProperty(const char* x1, const QVariant& x2) {
	Smoke::StackItem x[3];
	x[1].s_voidp = (void*)x1;
	x[2].s_voidp = (void*)&x2;
	if(call_method((void*)this, 5444, x)) return (bool)x[0].s_bool;
	return this->QObject::setProperty(x1, x2);
    }
    virtual QStringList tables(const QString& x1) const {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)&x1;
	if(call_method((void*)this, 7356, x)) {
	    QStringList *xptr = (QStringList *)x[0].s_voidp;
	    QStringList xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QSqlDriver::tables(x1);
    }
    virtual void timerEvent(QTimerEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(call_method((void*)this, 5468, x)) return;
	this->QObject::timerEvent(x1);
    }
    ~x_QSqlDriver() {}
};
void xcall_QSqlDriver(Smoke::Index xi, void *obj, Smoke::Stack args) {
    x_QSqlDriver *xself = (x_QSqlDriver*)obj;
    switch(xi) {
	case 0: x_QSqlDriver::x_0(args);	break;
	case 1: x_QSqlDriver::x_1(args);	break;
	case 2: x_QSqlDriver::x_2(args);	break;
	case 3: x_QSqlDriver::x_3(args);	break;
	case 4: x_QSqlDriver::x_4(args);	break;
	case 5: x_QSqlDriver::x_5(args);	break;
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
	case 32: delete (QSqlDriver*)xself;	break;
    }
}
