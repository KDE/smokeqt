//Auto-generated by kalyptus. DO NOT EDIT.
#include <smoke.h>
#include <qt_smoke.h>
#include <qvariant.h>
#include <qglobal.h>
#include <qcstring.h>
#include <qstring.h>
#include <qhttp.h>

class x_QHttp : public QHttp {
public:
    static void x_0(Smoke::Stack x) {
	x[0].s_enum = (long)QHttp::Unconnected;
    }
    static void x_1(Smoke::Stack x) {
	x[0].s_enum = (long)QHttp::HostLookup;
    }
    static void x_2(Smoke::Stack x) {
	x[0].s_enum = (long)QHttp::Connecting;
    }
    static void x_3(Smoke::Stack x) {
	x[0].s_enum = (long)QHttp::Sending;
    }
    static void x_4(Smoke::Stack x) {
	x[0].s_enum = (long)QHttp::Reading;
    }
    static void x_5(Smoke::Stack x) {
	x[0].s_enum = (long)QHttp::Connected;
    }
    static void x_6(Smoke::Stack x) {
	x[0].s_enum = (long)QHttp::Closing;
    }
    static void x_7(Smoke::Stack x) {
	x[0].s_enum = (long)QHttp::NoError;
    }
    static void x_8(Smoke::Stack x) {
	x[0].s_enum = (long)QHttp::UnknownError;
    }
    static void x_9(Smoke::Stack x) {
	x[0].s_enum = (long)QHttp::HostNotFound;
    }
    static void x_10(Smoke::Stack x) {
	x[0].s_enum = (long)QHttp::ConnectionRefused;
    }
    static void x_11(Smoke::Stack x) {
	x[0].s_enum = (long)QHttp::UnexpectedClose;
    }
    static void x_12(Smoke::Stack x) {
	x[0].s_enum = (long)QHttp::InvalidResponseHeader;
    }
    static void x_13(Smoke::Stack x) {
	x[0].s_enum = (long)QHttp::WrongContentLength;
    }
    static void x_14(Smoke::Stack x) {
	x[0].s_enum = (long)QHttp::Aborted;
    }
    void x_15(Smoke::Stack x) const {
	// metaObject()
	QMetaObject* xret = this->QHttp::metaObject();
	x[0].s_class = (void*)xret;
    }
    void x_16(Smoke::Stack x) const {
	// className()
	const char* xret = this->QHttp::className();
	x[0].s_voidp = (void*)xret;
    }
    void x_17(Smoke::Stack x) {
	// qt_cast(const char*)
	void* xret = this->QHttp::qt_cast((const char*)x[1].s_voidp);
	x[0].s_voidp = (void*)xret;
    }
    void x_18(Smoke::Stack x) {
	// qt_invoke(int, QUObject*)
	bool xret = this->QHttp::qt_invoke((int)x[1].s_int,(QUObject*)x[2].s_voidp);
	x[0].s_bool = xret;
    }
    void x_19(Smoke::Stack x) {
	// qt_emit(int, QUObject*)
	bool xret = this->QHttp::qt_emit((int)x[1].s_int,(QUObject*)x[2].s_voidp);
	x[0].s_bool = xret;
    }
    void x_20(Smoke::Stack x) {
	// qt_property(int, int, QVariant*)
	bool xret = this->QHttp::qt_property((int)x[1].s_int,(int)x[2].s_int,(QVariant*)x[3].s_class);
	x[0].s_bool = xret;
    }
    void x_21(Smoke::Stack x) {
	// qObject()
	QObject* xret = this->QHttp::qObject();
	x[0].s_class = (void*)xret;
    }
    static void x_22(Smoke::Stack x) {
	// QHttp()
	x_QHttp* xret = new x_QHttp();
	x[0].s_class = (void*)xret;
    }
    x_QHttp() : QHttp() {
    }
    static void x_23(Smoke::Stack x) {
	// QHttp(QObject*, const char*)
	x_QHttp* xret = new x_QHttp((QObject*)x[1].s_class,(const char*)x[2].s_voidp);
	x[0].s_class = (void*)xret;
    }
    x_QHttp(QObject* x1, const char* x2) : QHttp(x1, x2) {
    }
    static void x_24(Smoke::Stack x) {
	// QHttp(QObject*)
	x_QHttp* xret = new x_QHttp((QObject*)x[1].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QHttp(QObject* x1) : QHttp(x1) {
    }
    static void x_25(Smoke::Stack x) {
	// QHttp(const QString&, Q_UINT16, QObject*, const char*)
	x_QHttp* xret = new x_QHttp(*(const QString *)x[1].s_voidp,(Q_UINT16)x[2].s_ushort,(QObject*)x[3].s_class,(const char*)x[4].s_voidp);
	x[0].s_class = (void*)xret;
    }
    x_QHttp(const QString& x1, Q_UINT16 x2, QObject* x3, const char* x4) : QHttp(x1, x2, x3, x4) {
    }
    static void x_26(Smoke::Stack x) {
	// QHttp(const QString&, Q_UINT16, QObject*)
	x_QHttp* xret = new x_QHttp(*(const QString *)x[1].s_voidp,(Q_UINT16)x[2].s_ushort,(QObject*)x[3].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QHttp(const QString& x1, Q_UINT16 x2, QObject* x3) : QHttp(x1, x2, x3) {
    }
    static void x_27(Smoke::Stack x) {
	// QHttp(const QString&, Q_UINT16)
	x_QHttp* xret = new x_QHttp(*(const QString *)x[1].s_voidp,(Q_UINT16)x[2].s_ushort);
	x[0].s_class = (void*)xret;
    }
    x_QHttp(const QString& x1, Q_UINT16 x2) : QHttp(x1, x2) {
    }
    static void x_28(Smoke::Stack x) {
	// QHttp(const QString&)
	x_QHttp* xret = new x_QHttp(*(const QString *)x[1].s_voidp);
	x[0].s_class = (void*)xret;
    }
    x_QHttp(const QString& x1) : QHttp(x1) {
    }
    void x_29(Smoke::Stack x) const {
	// supportedOperations()
	int xret = this->QHttp::supportedOperations();
	x[0].s_int = xret;
    }
    void x_30(Smoke::Stack x) {
	// setHost(const QString&, Q_UINT16)
	int xret = this->QHttp::setHost(*(const QString *)x[1].s_voidp,(Q_UINT16)x[2].s_ushort);
	x[0].s_int = xret;
    }
    void x_31(Smoke::Stack x) {
	// setHost(const QString&)
	int xret = this->QHttp::setHost(*(const QString *)x[1].s_voidp);
	x[0].s_int = xret;
    }
    void x_32(Smoke::Stack x) {
	// get(const QString&, QIODevice*)
	int xret = this->QHttp::get(*(const QString *)x[1].s_voidp,(QIODevice*)x[2].s_class);
	x[0].s_int = xret;
    }
    void x_33(Smoke::Stack x) {
	// get(const QString&)
	int xret = this->QHttp::get(*(const QString *)x[1].s_voidp);
	x[0].s_int = xret;
    }
    void x_34(Smoke::Stack x) {
	// post(const QString&, QIODevice*, QIODevice*)
	int xret = this->QHttp::post(*(const QString *)x[1].s_voidp,(QIODevice*)x[2].s_class,(QIODevice*)x[3].s_class);
	x[0].s_int = xret;
    }
    void x_35(Smoke::Stack x) {
	// post(const QString&, QIODevice*)
	int xret = this->QHttp::post(*(const QString *)x[1].s_voidp,(QIODevice*)x[2].s_class);
	x[0].s_int = xret;
    }
    void x_36(Smoke::Stack x) {
	// post(const QString&, const QByteArray&, QIODevice*)
	int xret = this->QHttp::post(*(const QString *)x[1].s_voidp,*(const QByteArray *)x[2].s_voidp,(QIODevice*)x[3].s_class);
	x[0].s_int = xret;
    }
    void x_37(Smoke::Stack x) {
	// post(const QString&, const QByteArray&)
	int xret = this->QHttp::post(*(const QString *)x[1].s_voidp,*(const QByteArray *)x[2].s_voidp);
	x[0].s_int = xret;
    }
    void x_38(Smoke::Stack x) {
	// head(const QString&)
	int xret = this->QHttp::head(*(const QString *)x[1].s_voidp);
	x[0].s_int = xret;
    }
    void x_39(Smoke::Stack x) {
	// request(const QHttpRequestHeader&, QIODevice*, QIODevice*)
	int xret = this->QHttp::request(*(const QHttpRequestHeader *)x[1].s_class,(QIODevice*)x[2].s_class,(QIODevice*)x[3].s_class);
	x[0].s_int = xret;
    }
    void x_40(Smoke::Stack x) {
	// request(const QHttpRequestHeader&, QIODevice*)
	int xret = this->QHttp::request(*(const QHttpRequestHeader *)x[1].s_class,(QIODevice*)x[2].s_class);
	x[0].s_int = xret;
    }
    void x_41(Smoke::Stack x) {
	// request(const QHttpRequestHeader&)
	int xret = this->QHttp::request(*(const QHttpRequestHeader *)x[1].s_class);
	x[0].s_int = xret;
    }
    void x_42(Smoke::Stack x) {
	// request(const QHttpRequestHeader&, const QByteArray&, QIODevice*)
	int xret = this->QHttp::request(*(const QHttpRequestHeader *)x[1].s_class,*(const QByteArray *)x[2].s_voidp,(QIODevice*)x[3].s_class);
	x[0].s_int = xret;
    }
    void x_43(Smoke::Stack x) {
	// request(const QHttpRequestHeader&, const QByteArray&)
	int xret = this->QHttp::request(*(const QHttpRequestHeader *)x[1].s_class,*(const QByteArray *)x[2].s_voidp);
	x[0].s_int = xret;
    }
    void x_44(Smoke::Stack x) {
	// closeConnection()
	int xret = this->QHttp::closeConnection();
	x[0].s_int = xret;
    }
    void x_45(Smoke::Stack x) const {
	// bytesAvailable()
	Q_ULONG xret = this->QHttp::bytesAvailable();
	x[0].s_long = xret;
    }
    void x_46(Smoke::Stack x) {
	// readBlock(char*, Q_ULONG)
	Q_LONG xret = this->QHttp::readBlock((char*)x[1].s_voidp,(Q_ULONG)x[2].s_long);
	x[0].s_long = xret;
    }
    void x_47(Smoke::Stack x) {
	// readAll()
	QByteArray xret = this->QHttp::readAll();
	x[0].s_voidp = (void*)new QByteArray(xret);
    }
    void x_48(Smoke::Stack x) const {
	// currentId()
	int xret = this->QHttp::currentId();
	x[0].s_int = xret;
    }
    void x_49(Smoke::Stack x) const {
	// currentSourceDevice()
	QIODevice* xret = this->QHttp::currentSourceDevice();
	x[0].s_class = (void*)xret;
    }
    void x_50(Smoke::Stack x) const {
	// currentDestinationDevice()
	QIODevice* xret = this->QHttp::currentDestinationDevice();
	x[0].s_class = (void*)xret;
    }
    void x_51(Smoke::Stack x) const {
	// currentRequest()
	QHttpRequestHeader xret = this->QHttp::currentRequest();
	x[0].s_class = (void*)new QHttpRequestHeader(xret);
    }
    void x_52(Smoke::Stack x) const {
	// hasPendingRequests()
	bool xret = this->QHttp::hasPendingRequests();
	x[0].s_bool = xret;
    }
    void x_53(Smoke::Stack x) {
	// clearPendingRequests()
	this->QHttp::clearPendingRequests();
	(void)x; // noop (for compiler warning)
    }
    void x_54(Smoke::Stack x) const {
	// state()
	QHttp::State xret = this->QHttp::state();
	x[0].s_enum = xret;
    }
    void x_55(Smoke::Stack x) const {
	// error()
	QHttp::Error xret = this->QHttp::error();
	x[0].s_enum = xret;
    }
    void x_56(Smoke::Stack x) const {
	// errorString()
	QString xret = this->QHttp::errorString();
	x[0].s_voidp = (void*)new QString(xret);
    }
    void x_57(Smoke::Stack x) {
	// abort()
	this->QHttp::abort();
	(void)x; // noop (for compiler warning)
    }
    void x_58(Smoke::Stack x) {
	// stateChanged(int)
	this->QHttp::stateChanged((int)x[1].s_int);
	(void)x; // noop (for compiler warning)
    }
    void x_59(Smoke::Stack x) {
	// responseHeaderReceived(const QHttpResponseHeader&)
	this->QHttp::responseHeaderReceived(*(const QHttpResponseHeader *)x[1].s_class);
	(void)x; // noop (for compiler warning)
    }
    void x_60(Smoke::Stack x) {
	// readyRead(const QHttpResponseHeader&)
	this->QHttp::readyRead(*(const QHttpResponseHeader *)x[1].s_class);
	(void)x; // noop (for compiler warning)
    }
    void x_61(Smoke::Stack x) {
	// dataSendProgress(int, int)
	this->QHttp::dataSendProgress((int)x[1].s_int,(int)x[2].s_int);
	(void)x; // noop (for compiler warning)
    }
    void x_62(Smoke::Stack x) {
	// dataReadProgress(int, int)
	this->QHttp::dataReadProgress((int)x[1].s_int,(int)x[2].s_int);
	(void)x; // noop (for compiler warning)
    }
    void x_63(Smoke::Stack x) {
	// requestStarted(int)
	this->QHttp::requestStarted((int)x[1].s_int);
	(void)x; // noop (for compiler warning)
    }
    void x_64(Smoke::Stack x) {
	// requestFinished(int, bool)
	this->QHttp::requestFinished((int)x[1].s_int,(bool)x[2].s_bool);
	(void)x; // noop (for compiler warning)
    }
    void x_65(Smoke::Stack x) {
	// done(bool)
	this->QHttp::done((bool)x[1].s_bool);
	(void)x; // noop (for compiler warning)
    }
    static void x_66(Smoke::Stack x) {
	// staticMetaObject()
	QMetaObject* xret = QHttp::staticMetaObject();
	x[0].s_class = (void*)xret;
    }
    static void x_67(Smoke::Stack x) {
	// tr(const char*, const char*)
	QString xret = QHttp::tr((const char*)x[1].s_voidp,(const char*)x[2].s_voidp);
	x[0].s_voidp = (void*)new QString(xret);
    }
    static void x_68(Smoke::Stack x) {
	// tr(const char*)
	QString xret = QHttp::tr((const char*)x[1].s_voidp);
	x[0].s_voidp = (void*)new QString(xret);
    }
    static void x_69(Smoke::Stack x) {
	// trUtf8(const char*, const char*)
	QString xret = QHttp::trUtf8((const char*)x[1].s_voidp,(const char*)x[2].s_voidp);
	x[0].s_voidp = (void*)new QString(xret);
    }
    static void x_70(Smoke::Stack x) {
	// trUtf8(const char*)
	QString xret = QHttp::trUtf8((const char*)x[1].s_voidp);
	x[0].s_voidp = (void*)new QString(xret);
    }
    void x_71(Smoke::Stack x) {
	// operationGet(QNetworkOperation*)
	this->QHttp::operationGet((QNetworkOperation*)x[1].s_class);
	(void)x; // noop (for compiler warning)
    }
    void x_72(Smoke::Stack x) {
	// operationPut(QNetworkOperation*)
	this->QHttp::operationPut((QNetworkOperation*)x[1].s_class);
	(void)x; // noop (for compiler warning)
    }
    void x_73(Smoke::Stack x) {
	// timerEvent(QTimerEvent*)
	this->QHttp::timerEvent((QTimerEvent*)x[1].s_class);
	(void)x; // noop (for compiler warning)
    }
    virtual void addOperation(QNetworkOperation* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(6702, (void*)this, x)) return;
	this->QNetworkProtocol::addOperation(x1);
    }
    virtual bool checkConnectArgs(const char* x1, const QObject* x2, const char* x3) {
	Smoke::StackItem x[4];
	x[1].s_voidp = (void*)x1;
	x[2].s_class = (void*)x2;
	x[3].s_voidp = (void*)x3;
	if(qt_Smoke->binding->callMethod(6819, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QObject::checkConnectArgs(x1, x2, x3);
    }
    virtual bool checkConnection(QNetworkOperation* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(6733, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QNetworkProtocol::checkConnection(x1);
    }
    virtual void childEvent(QChildEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(6815, (void*)this, x)) return;
	this->QObject::childEvent(x1);
    }
    virtual const char* className() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(4238, (void*)this, x)) return (const char*)x[0].s_class;
	return this->QHttp::className();
    }
    virtual void clearOperationQueue() {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(6705, (void*)this, x)) return;
	this->QNetworkProtocol::clearOperationQueue();
    }
    virtual void connectNotify(const char* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(qt_Smoke->binding->callMethod(6817, (void*)this, x)) return;
	this->QObject::connectNotify(x1);
    }
    virtual void customEvent(QCustomEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(6816, (void*)this, x)) return;
	this->QObject::customEvent(x1);
    }
    virtual void disconnectNotify(const char* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(qt_Smoke->binding->callMethod(6818, (void*)this, x)) return;
	this->QObject::disconnectNotify(x1);
    }
    virtual bool event(QEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(6749, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QObject::event(x1);
    }
    virtual bool eventFilter(QObject* x1, QEvent* x2) {
	Smoke::StackItem x[3];
	x[1].s_class = (void*)x1;
	x[2].s_class = (void*)x2;
	if(qt_Smoke->binding->callMethod(6750, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QObject::eventFilter(x1, x2);
    }
    virtual void insertChild(QObject* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(6772, (void*)this, x)) return;
	this->QObject::insertChild(x1);
    }
    virtual QMetaObject* metaObject() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(4237, (void*)this, x)) return (QMetaObject*)x[0].s_class;
	return this->QHttp::metaObject();
    }
    virtual void operationGet(QNetworkOperation* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(4294, (void*)this, x)) return;
	this->QHttp::operationGet(x1);
    }
    virtual void operationListChildren(QNetworkOperation* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(6726, (void*)this, x)) return;
	this->QNetworkProtocol::operationListChildren(x1);
    }
    virtual void operationMkDir(QNetworkOperation* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(6727, (void*)this, x)) return;
	this->QNetworkProtocol::operationMkDir(x1);
    }
    virtual void operationPut(QNetworkOperation* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(4295, (void*)this, x)) return;
	this->QHttp::operationPut(x1);
    }
    virtual void operationPutChunk(QNetworkOperation* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(6732, (void*)this, x)) return;
	this->QNetworkProtocol::operationPutChunk(x1);
    }
    virtual void operationRemove(QNetworkOperation* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(6728, (void*)this, x)) return;
	this->QNetworkProtocol::operationRemove(x1);
    }
    virtual void operationRename(QNetworkOperation* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(6729, (void*)this, x)) return;
	this->QNetworkProtocol::operationRename(x1);
    }
    virtual void processOperation(QNetworkOperation* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(6725, (void*)this, x)) return;
	this->QNetworkProtocol::processOperation(x1);
    }
    virtual QVariant property(const char* x1) const {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(qt_Smoke->binding->callMethod(6786, (void*)this, x)) {
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
	if(qt_Smoke->binding->callMethod(4239, (void*)this, x)) return (void*)x[0].s_voidp;
	return this->QHttp::qt_cast(x1);
    }
    virtual bool qt_emit(int x1, QUObject* x2) {
	Smoke::StackItem x[3];
	x[1].s_int = x1;
	x[2].s_voidp = (void*)x2;
	if(qt_Smoke->binding->callMethod(4241, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QHttp::qt_emit(x1, x2);
    }
    virtual bool qt_invoke(int x1, QUObject* x2) {
	Smoke::StackItem x[3];
	x[1].s_int = x1;
	x[2].s_voidp = (void*)x2;
	if(qt_Smoke->binding->callMethod(4240, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QHttp::qt_invoke(x1, x2);
    }
    virtual bool qt_property(int x1, int x2, QVariant* x3) {
	Smoke::StackItem x[4];
	x[1].s_int = x1;
	x[2].s_int = x2;
	x[3].s_class = (void*)x3;
	if(qt_Smoke->binding->callMethod(4242, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QHttp::qt_property(x1, x2, x3);
    }
    virtual void removeChild(QObject* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(6773, (void*)this, x)) return;
	this->QObject::removeChild(x1);
    }
    virtual void setAutoDelete(bool x1, int x2) {
	Smoke::StackItem x[3];
	x[1].s_bool = x1;
	x[2].s_int = x2;
	if(qt_Smoke->binding->callMethod(6698, (void*)this, x)) return;
	this->QNetworkProtocol::setAutoDelete(x1, x2);
    }
    virtual void setName(const char* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(qt_Smoke->binding->callMethod(6755, (void*)this, x)) return;
	this->QObject::setName(x1);
    }
    virtual bool setProperty(const char* x1, const QVariant& x2) {
	Smoke::StackItem x[3];
	x[1].s_voidp = (void*)x1;
	x[2].s_class = (void*)&x2;
	if(qt_Smoke->binding->callMethod(6785, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QObject::setProperty(x1, x2);
    }
    virtual void setUrl(QUrlOperator* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(6697, (void*)this, x)) return;
	this->QNetworkProtocol::setUrl(x1);
    }
    virtual void stop() {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(6706, (void*)this, x)) return;
	this->QNetworkProtocol::stop();
    }
    virtual int supportedOperations() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(4252, (void*)this, x)) return (int)x[0].s_int;
	return this->QHttp::supportedOperations();
    }
    virtual void timerEvent(QTimerEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(4296, (void*)this, x)) return;
	this->QHttp::timerEvent(x1);
    }
    static void xenum_operation(Smoke::EnumOperation xop, Smoke::Index xtype, void *&xdata, long &xvalue) {
	switch(xtype) {
	  case 284: //QHttp::Error
	    switch(xop) {
	      case Smoke::EnumNew:
		xdata = (void*)new QHttp::Error;
		break;
	      case Smoke::EnumDelete:
		delete (QHttp::Error*)xdata;
		break;
	      case Smoke::EnumFromLong:
		*(QHttp::Error*)xdata = (QHttp::Error)xvalue;
		break;
	      case Smoke::EnumToLong:
		xvalue = (long)*(QHttp::Error*)xdata;
		break;
	    }
	    break;
	  case 285: //QHttp::State
	    switch(xop) {
	      case Smoke::EnumNew:
		xdata = (void*)new QHttp::State;
		break;
	      case Smoke::EnumDelete:
		delete (QHttp::State*)xdata;
		break;
	      case Smoke::EnumFromLong:
		*(QHttp::State*)xdata = (QHttp::State)xvalue;
		break;
	      case Smoke::EnumToLong:
		xvalue = (long)*(QHttp::State*)xdata;
		break;
	    }
	    break;
	}
    }
    ~x_QHttp() { qt_Smoke->binding->deleted(148, (void*)this); }
};
void xenum_QHttp(Smoke::EnumOperation xop, Smoke::Index xtype, void *&xdata, long &xvalue) {
    x_QHttp::xenum_operation(xop, xtype, xdata, xvalue);
}
void xcall_QHttp(Smoke::Index xi, void *obj, Smoke::Stack args) {
    x_QHttp *xself = (x_QHttp*)obj;
    switch(xi) {
	case 0: x_QHttp::x_0(args);	break;
	case 1: x_QHttp::x_1(args);	break;
	case 2: x_QHttp::x_2(args);	break;
	case 3: x_QHttp::x_3(args);	break;
	case 4: x_QHttp::x_4(args);	break;
	case 5: x_QHttp::x_5(args);	break;
	case 6: x_QHttp::x_6(args);	break;
	case 7: x_QHttp::x_7(args);	break;
	case 8: x_QHttp::x_8(args);	break;
	case 9: x_QHttp::x_9(args);	break;
	case 10: x_QHttp::x_10(args);	break;
	case 11: x_QHttp::x_11(args);	break;
	case 12: x_QHttp::x_12(args);	break;
	case 13: x_QHttp::x_13(args);	break;
	case 14: x_QHttp::x_14(args);	break;
	case 15: xself->x_15(args);	break;
	case 16: xself->x_16(args);	break;
	case 17: xself->x_17(args);	break;
	case 18: xself->x_18(args);	break;
	case 19: xself->x_19(args);	break;
	case 20: xself->x_20(args);	break;
	case 21: xself->x_21(args);	break;
	case 22: x_QHttp::x_22(args);	break;
	case 23: x_QHttp::x_23(args);	break;
	case 24: x_QHttp::x_24(args);	break;
	case 25: x_QHttp::x_25(args);	break;
	case 26: x_QHttp::x_26(args);	break;
	case 27: x_QHttp::x_27(args);	break;
	case 28: x_QHttp::x_28(args);	break;
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
	case 66: x_QHttp::x_66(args);	break;
	case 67: x_QHttp::x_67(args);	break;
	case 68: x_QHttp::x_68(args);	break;
	case 69: x_QHttp::x_69(args);	break;
	case 70: x_QHttp::x_70(args);	break;
	case 71: xself->x_71(args);	break;
	case 72: xself->x_72(args);	break;
	case 73: xself->x_73(args);	break;
	case 74: delete (QHttp*)xself;	break;
    }
}
