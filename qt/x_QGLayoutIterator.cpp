//Auto-generated by kalyptus. DO NOT EDIT.
#include <smoke.h>
#include <qt_smoke.h>
#include <qlayout.h>

class x_QGLayoutIterator : public QGLayoutIterator {
public:
    static void x_0(Smoke::Stack x) {
	// QGLayoutIterator()
	x_QGLayoutIterator* xret = new x_QGLayoutIterator();
	x[0].s_class = (void*)xret;
    }
    x_QGLayoutIterator() : QGLayoutIterator() {
    }
    static void x_1(Smoke::Stack x) {
	// QGLayoutIterator(const QGLayoutIterator&)
	x_QGLayoutIterator* xret = new x_QGLayoutIterator(*(const QGLayoutIterator *)x[1].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QGLayoutIterator(const QGLayoutIterator& x1) : QGLayoutIterator(x1) {
    }
    virtual QLayoutItem* current() {
	Smoke::StackItem x[1];
	qt_Smoke->binding->callMethod(3651, (void*)this, x, true /*pure virtual*/);
	return (QLayoutItem*)x[0].s_class;
	// ABSTRACT
    }
    virtual QLayoutItem* next() {
	Smoke::StackItem x[1];
	qt_Smoke->binding->callMethod(3650, (void*)this, x, true /*pure virtual*/);
	return (QLayoutItem*)x[0].s_class;
	// ABSTRACT
    }
    virtual QLayoutItem* takeCurrent() {
	Smoke::StackItem x[1];
	qt_Smoke->binding->callMethod(3652, (void*)this, x, true /*pure virtual*/);
	return (QLayoutItem*)x[0].s_class;
	// ABSTRACT
    }
    ~x_QGLayoutIterator() { qt_Smoke->binding->deleted(131, (void*)this); }
};
void xcall_QGLayoutIterator(Smoke::Index xi, void *obj, Smoke::Stack args) {
    x_QGLayoutIterator *xself = (x_QGLayoutIterator*)obj;
    switch(xi) {
	case 0: x_QGLayoutIterator::x_0(args);	break;
	case 1: x_QGLayoutIterator::x_1(args);	break;
	case 2: delete (QGLayoutIterator*)xself;	break;
    }
}
