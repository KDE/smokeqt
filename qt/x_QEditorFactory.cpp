//Auto-generated by kalyptus. DO NOT EDIT.
#include <smoke.h>
#include <qt_smoke.h>
#include <qvariant.h>
#include <qeditorfactory.h>

class x_QEditorFactory : public QEditorFactory {
public:
    static void x_0(Smoke::Stack x) {
	// QEditorFactory(QObject*, const char*)
	x_QEditorFactory* xret = new x_QEditorFactory((QObject*)x[1].s_class,(const char*)x[2].s_voidp);
	x[0].s_class = (void*)xret;
    }
    x_QEditorFactory(QObject* x1, const char* x2) : QEditorFactory(x1, x2) {
    }
    static void x_1(Smoke::Stack x) {
	// QEditorFactory(QObject*)
	x_QEditorFactory* xret = new x_QEditorFactory((QObject*)x[1].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QEditorFactory(QObject* x1) : QEditorFactory(x1) {
    }
    static void x_2(Smoke::Stack x) {
	// QEditorFactory()
	x_QEditorFactory* xret = new x_QEditorFactory();
	x[0].s_class = (void*)xret;
    }
    x_QEditorFactory() : QEditorFactory() {
    }
    void x_3(Smoke::Stack x) {
	// createEditor(QWidget*, const QVariant&)
	QWidget* xret = this->QEditorFactory::createEditor((QWidget*)x[1].s_class,*(const QVariant *)x[2].s_class);
	x[0].s_class = (void*)xret;
    }
    static void x_4(Smoke::Stack x) {
	// defaultFactory()
	QEditorFactory* xret = QEditorFactory::defaultFactory();
	x[0].s_class = (void*)xret;
    }
    static void x_5(Smoke::Stack x) {
	// installDefaultFactory(QEditorFactory*)
	QEditorFactory::installDefaultFactory((QEditorFactory*)x[1].s_class);
	(void)x[0].s_int; // noop (for compiler warning)
    }
    virtual bool checkConnectArgs(const char* x1, const QObject* x2, const char* x3) {
	Smoke::StackItem x[4];
	x[1].s_voidp = (void*)x1;
	x[2].s_class = (void*)x2;
	x[3].s_voidp = (void*)x3;
	if(qt_Smoke->binding->callMethod(5470, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QObject::checkConnectArgs(x1, x2, x3);
    }
    virtual void childEvent(QChildEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(5466, (void*)this, x)) return;
	this->QObject::childEvent(x1);
    }
    virtual void connectNotify(const char* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(qt_Smoke->binding->callMethod(5468, (void*)this, x)) return;
	this->QObject::connectNotify(x1);
    }
    virtual QWidget* createEditor(QWidget* x1, const QVariant& x2) {
	Smoke::StackItem x[3];
	x[1].s_class = (void*)x1;
	x[2].s_class = (void*)&x2;
	if(qt_Smoke->binding->callMethod(2359, (void*)this, x)) return (QWidget*)x[0].s_class;
	return this->QEditorFactory::createEditor(x1, x2);
    }
    virtual void customEvent(QCustomEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(5467, (void*)this, x)) return;
	this->QObject::customEvent(x1);
    }
    virtual void disconnectNotify(const char* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(qt_Smoke->binding->callMethod(5469, (void*)this, x)) return;
	this->QObject::disconnectNotify(x1);
    }
    virtual bool event(QEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(5405, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QObject::event(x1);
    }
    virtual bool eventFilter(QObject* x1, QEvent* x2) {
	Smoke::StackItem x[3];
	x[1].s_class = (void*)x1;
	x[2].s_class = (void*)x2;
	if(qt_Smoke->binding->callMethod(5406, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QObject::eventFilter(x1, x2);
    }
    virtual void insertChild(QObject* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(5428, (void*)this, x)) return;
	this->QObject::insertChild(x1);
    }
    virtual QVariant property(const char* x1) const {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(qt_Smoke->binding->callMethod(5442, (void*)this, x)) {
	    QVariant *xptr = (QVariant *)x[0].s_class;
	    QVariant xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QObject::property(x1);
    }
    virtual void removeChild(QObject* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(5429, (void*)this, x)) return;
	this->QObject::removeChild(x1);
    }
    virtual void setName(const char* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(qt_Smoke->binding->callMethod(5411, (void*)this, x)) return;
	this->QObject::setName(x1);
    }
    virtual bool setProperty(const char* x1, const QVariant& x2) {
	Smoke::StackItem x[3];
	x[1].s_voidp = (void*)x1;
	x[2].s_class = (void*)&x2;
	if(qt_Smoke->binding->callMethod(5441, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QObject::setProperty(x1, x2);
    }
    virtual void timerEvent(QTimerEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(5465, (void*)this, x)) return;
	this->QObject::timerEvent(x1);
    }
    ~x_QEditorFactory() { qt_Smoke->binding->deleted(104, (void*)this); }
};
void xcall_QEditorFactory(Smoke::Index xi, void *obj, Smoke::Stack args) {
    x_QEditorFactory *xself = (x_QEditorFactory*)obj;
    switch(xi) {
	case 0: x_QEditorFactory::x_0(args);	break;
	case 1: x_QEditorFactory::x_1(args);	break;
	case 2: x_QEditorFactory::x_2(args);	break;
	case 3: xself->x_3(args);	break;
	case 4: x_QEditorFactory::x_4(args);	break;
	case 5: x_QEditorFactory::x_5(args);	break;
	case 6: delete (QEditorFactory*)xself;	break;
    }
}
