//Auto-generated by kalyptus. DO NOT EDIT.
#include <smoke.h>
#include <qpoint.h>
#include <qvariant.h>
#include <qcstring.h>
#include <qdragobject.h>
#include <qpixmap.h>

class x_QStoredDrag : public QStoredDrag {
public:
    static void x_0(Smoke::Stack x) {
	// QStoredDrag(const char*, QWidget*, const char*)
	x_QStoredDrag* xret = new x_QStoredDrag((const char*)x[1].s_voidp,(QWidget*)x[2].s_voidp,(const char*)x[3].s_voidp);
	x[0].s_voidp = (void*)xret;
    }
    x_QStoredDrag(const char* x1, QWidget* x2, const char* x3) : QStoredDrag(x1, x2, x3) {
    }
    static void x_1(Smoke::Stack x) {
	// QStoredDrag(const char*, QWidget*)
	x_QStoredDrag* xret = new x_QStoredDrag((const char*)x[1].s_voidp,(QWidget*)x[2].s_voidp);
	x[0].s_voidp = (void*)xret;
    }
    x_QStoredDrag(const char* x1, QWidget* x2) : QStoredDrag(x1, x2) {
    }
    static void x_2(Smoke::Stack x) {
	// QStoredDrag(const char*)
	x_QStoredDrag* xret = new x_QStoredDrag((const char*)x[1].s_voidp);
	x[0].s_voidp = (void*)xret;
    }
    x_QStoredDrag(const char* x1) : QStoredDrag(x1) {
    }
    void x_3(Smoke::Stack x) {
	// setEncodedData(const QByteArray&)
	this->QStoredDrag::setEncodedData(*(const QByteArray *)x[1].s_voidp);
    }
    void x_4(Smoke::Stack x) const {
	// format(int)
	const char* xret = this->QStoredDrag::format((int)x[1].s_int);
	x[0].s_voidp = (void*)xret;
    }
    void x_5(Smoke::Stack x) const {
	// encodedData(const char*)
	QByteArray xret = this->QStoredDrag::encodedData((const char*)x[1].s_voidp);
	x[0].s_voidp = (void*)new QByteArray(xret);
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
    virtual bool drag(QDragObject::DragMode x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)&x1;
	if(call_method((void*)this, 2318, x)) return (bool)x[0].s_bool;
	return this->QDragObject::drag(x1);
    }
    virtual QByteArray encodedData(const char* x1) const {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(call_method((void*)this, 7630, x)) {
	    QByteArray *xptr = (QByteArray *)x[0].s_voidp;
	    QByteArray xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QStoredDrag::encodedData(x1);
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
    virtual const char* format(int x1) const {
	Smoke::StackItem x[2];
	x[1].s_int = (int)x1;
	if(call_method((void*)this, 7629, x)) 	return (const char*)x[0].s_voidp;
	return this->QStoredDrag::format(x1);
    }
    virtual void insertChild(QObject* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(call_method((void*)this, 5431, x)) return;
	this->QObject::insertChild(x1);
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
    virtual bool provides(const char* x1) const {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(call_method((void*)this, 5117, x)) return (bool)x[0].s_bool;
	return this->QMimeSource::provides(x1);
    }
    virtual void removeChild(QObject* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(call_method((void*)this, 5432, x)) return;
	this->QObject::removeChild(x1);
    }
    virtual void setEncodedData(const QByteArray& x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)&x1;
	if(call_method((void*)this, 7628, x)) return;
	this->QStoredDrag::setEncodedData(x1);
    }
    virtual void setName(const char* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(call_method((void*)this, 5414, x)) return;
	this->QObject::setName(x1);
    }
    virtual void setPixmap(QPixmap x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)&x1;
	if(call_method((void*)this, 2311, x)) return;
	this->QDragObject::setPixmap(x1);
    }
    virtual void setPixmap(QPixmap x1, const QPoint& x2) {
	Smoke::StackItem x[3];
	x[1].s_voidp = (void*)&x1;
	x[2].s_voidp = (void*)&x2;
	if(call_method((void*)this, 2312, x)) return;
	this->QDragObject::setPixmap(x1, x2);
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
    ~x_QStoredDrag() {}
};
void xcall_QStoredDrag(Smoke::Index xi, void *obj, Smoke::Stack args) {
    x_QStoredDrag *xself = (x_QStoredDrag*)obj;
    switch(xi) {
	case 0: x_QStoredDrag::x_0(args);	break;
	case 1: x_QStoredDrag::x_1(args);	break;
	case 2: x_QStoredDrag::x_2(args);	break;
	case 3: xself->x_3(args);	break;
	case 4: xself->x_4(args);	break;
	case 5: xself->x_5(args);	break;
	case 6: delete (QStoredDrag*)xself;	break;
    }
}
