//Auto-generated by kalyptus. DO NOT EDIT.
#include <smoke.h>
#include <qvariant.h>
#include <qstring.h>
#include <qvalidator.h>

class x_QValidator : public QValidator {
public:
    static void x_0(Smoke::Stack x) {
	x[0].s_long = (long)QValidator::Invalid;
    }
    static void x_1(Smoke::Stack x) {
	x[0].s_long = (long)QValidator::Intermediate;
    }
    static void x_2(Smoke::Stack x) {
	x[0].s_long = (long)QValidator::Valid;
    }
    static void x_3(Smoke::Stack x) {
	x[0].s_long = (long)QValidator::Acceptable;
    }
    static void x_4(Smoke::Stack x) {
	// QValidator(QObject*, const char*)
	x_QValidator* xret = new x_QValidator((QObject*)x[1].s_voidp,(const char*)x[2].s_voidp);
	x[0].s_voidp = (void*)xret;
    }
    x_QValidator(QObject* x1, const char* x2) : QValidator(x1, x2) {
    }
    static void x_5(Smoke::Stack x) {
	// QValidator(QObject*)
	x_QValidator* xret = new x_QValidator((QObject*)x[1].s_voidp);
	x[0].s_voidp = (void*)xret;
    }
    x_QValidator(QObject* x1) : QValidator(x1) {
    }
    void x_6(Smoke::Stack x) const {
	// validate(QString&, int&)
	QValidator::State xret = this->QValidator::validate(*(QString *)x[1].s_voidp,*(int *)x[2].s_voidp);
	x[0].s_voidp = (void*)new QValidator::State(xret);
    }
    void x_7(Smoke::Stack x) const {
	// fixup(QString&)
	this->QValidator::fixup(*(QString *)x[1].s_voidp);
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
    virtual void fixup(QString& x1) const {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)&x1;
	if(call_method((void*)this, 9258, x)) return;
	this->QValidator::fixup(x1);
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
    virtual void removeChild(QObject* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(call_method((void*)this, 5432, x)) return;
	this->QObject::removeChild(x1);
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
    virtual QValidator::State validate(QString& x1, int& x2) const {
	Smoke::StackItem x[3];
	x[1].s_voidp = (void*)&x1;
	x[2].s_voidp = (void*)&x2;
	call_method_abstract((void*)this, 9257, x);
	QValidator::State *xptr = (QValidator::State *)x[0].s_voidp;
	QValidator::State xret(*xptr);
	delete xptr;
	return xret;
	// ABSTRACT
    }
    ~x_QValidator() {}
};
void xcall_QValidator(Smoke::Index xi, void *obj, Smoke::Stack args) {
    x_QValidator *xself = (x_QValidator*)obj;
    switch(xi) {
	case 0: x_QValidator::x_0(args);	break;
	case 1: x_QValidator::x_1(args);	break;
	case 2: x_QValidator::x_2(args);	break;
	case 3: x_QValidator::x_3(args);	break;
	case 4: x_QValidator::x_4(args);	break;
	case 5: x_QValidator::x_5(args);	break;
	case 6: xself->x_6(args);	break;
	case 7: xself->x_7(args);	break;
	case 8: delete (QValidator*)xself;	break;
    }
}
