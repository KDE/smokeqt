//Auto-generated by kalyptus. DO NOT EDIT.
#include <smoke.h>
#include <qvariant.h>
#include <qimage.h>
#include <qimageformatplugin.h>
#include <qstring.h>
#include <qstringlist.h>

class x_QImageFormatPlugin : public QImageFormatPlugin {
public:
    static void x_0(Smoke::Stack x) {
	// QImageFormatPlugin()
	x_QImageFormatPlugin* xret = new x_QImageFormatPlugin();
	x[0].s_voidp = (void*)xret;
    }
    x_QImageFormatPlugin() : QImageFormatPlugin() {
    }
    void x_1(Smoke::Stack x) const {
	// keys()
	QStringList xret = this->QImageFormatPlugin::keys();
	x[0].s_voidp = (void*)new QStringList(xret);
    }
    void x_2(Smoke::Stack x) {
	// loadImage(const QString&, const QString&, QImage*)
	bool xret = this->QImageFormatPlugin::loadImage(*(const QString *)x[1].s_voidp,*(const QString *)x[2].s_voidp,(QImage*)x[3].s_voidp);
	x[0].s_bool = (bool)xret;
    }
    void x_3(Smoke::Stack x) {
	// saveImage(const QString&, const QString&, const QImage&)
	bool xret = this->QImageFormatPlugin::saveImage(*(const QString *)x[1].s_voidp,*(const QString *)x[2].s_voidp,*(const QImage *)x[3].s_voidp);
	x[0].s_bool = (bool)xret;
    }
    void x_4(Smoke::Stack x) {
	// installIOHandler(const QString&)
	bool xret = this->QImageFormatPlugin::installIOHandler(*(const QString *)x[1].s_voidp);
	x[0].s_bool = (bool)xret;
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
    virtual void connectNotify(const char* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(call_method((void*)this, 5471, x)) return;
	this->QObject::connectNotify(x1);
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
    virtual void insertChild(QObject* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(call_method((void*)this, 5431, x)) return;
	this->QObject::insertChild(x1);
    }
    virtual bool installIOHandler(const QString& x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)&x1;
	call_method_abstract((void*)this, 3813, x);
return (bool)x[0].s_bool;
	// ABSTRACT
    }
    virtual QStringList keys() const {
	Smoke::StackItem x[1];
	call_method_abstract((void*)this, 3810, x);
	QStringList *xptr = (QStringList *)x[0].s_voidp;
	QStringList xret(*xptr);
	delete xptr;
	return xret;
	// ABSTRACT
    }
    virtual bool loadImage(const QString& x1, const QString& x2, QImage* x3) {
	Smoke::StackItem x[4];
	x[1].s_voidp = (void*)&x1;
	x[2].s_voidp = (void*)&x2;
	x[3].s_voidp = (void*)x3;
	if(call_method((void*)this, 3811, x)) return (bool)x[0].s_bool;
	return this->QImageFormatPlugin::loadImage(x1, x2, x3);
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
    virtual void removeChild(QObject* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(call_method((void*)this, 5432, x)) return;
	this->QObject::removeChild(x1);
    }
    virtual bool saveImage(const QString& x1, const QString& x2, const QImage& x3) {
	Smoke::StackItem x[4];
	x[1].s_voidp = (void*)&x1;
	x[2].s_voidp = (void*)&x2;
	x[3].s_voidp = (void*)&x3;
	if(call_method((void*)this, 3812, x)) return (bool)x[0].s_bool;
	return this->QImageFormatPlugin::saveImage(x1, x2, x3);
    }
    virtual void setName(const char* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(call_method((void*)this, 5414, x)) return;
	this->QObject::setName(x1);
    }
    virtual bool setProperty(const char* x1, const QVariant& x2) {
	Smoke::StackItem x[3];
	x[1].s_voidp = (void*)x1;
	x[2].s_voidp = (void*)&x2;
	if(call_method((void*)this, 5444, x)) return (bool)x[0].s_bool;
	return this->QObject::setProperty(x1, x2);
    }
    virtual void timerEvent(QTimerEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(call_method((void*)this, 5468, x)) return;
	this->QObject::timerEvent(x1);
    }
    ~x_QImageFormatPlugin() {}
};
void xcall_QImageFormatPlugin(Smoke::Index xi, void *obj, Smoke::Stack args) {
    x_QImageFormatPlugin *xself = (x_QImageFormatPlugin*)obj;
    switch(xi) {
	case 0: x_QImageFormatPlugin::x_0(args);	break;
	case 1: xself->x_1(args);	break;
	case 2: xself->x_2(args);	break;
	case 3: xself->x_3(args);	break;
	case 4: xself->x_4(args);	break;
	case 5: delete (QImageFormatPlugin*)xself;	break;
    }
}
