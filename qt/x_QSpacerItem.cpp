//Auto-generated by kalyptus. DO NOT EDIT.
#include <smoke.h>
#include <qsizepolicy.h>
#include <qlayout.h>
#include <qrect.h>
#include <qsize.h>

class x_QSpacerItem : public QSpacerItem {
public:
    static void x_0(Smoke::Stack x) {
	// QSpacerItem(int, int, QSizePolicy::SizeType, QSizePolicy::SizeType)
	x_QSpacerItem* xret = new x_QSpacerItem((int)x[1].s_int,(int)x[2].s_int,*(QSizePolicy::SizeType *)x[3].s_voidp,*(QSizePolicy::SizeType *)x[4].s_voidp);
	x[0].s_voidp = (void*)xret;
    }
    x_QSpacerItem(int x1, int x2, QSizePolicy::SizeType x3, QSizePolicy::SizeType x4) : QSpacerItem(x1, x2, x3, x4) {
    }
    static void x_1(Smoke::Stack x) {
	// QSpacerItem(int, int, QSizePolicy::SizeType)
	x_QSpacerItem* xret = new x_QSpacerItem((int)x[1].s_int,(int)x[2].s_int,*(QSizePolicy::SizeType *)x[3].s_voidp);
	x[0].s_voidp = (void*)xret;
    }
    x_QSpacerItem(int x1, int x2, QSizePolicy::SizeType x3) : QSpacerItem(x1, x2, x3) {
    }
    static void x_2(Smoke::Stack x) {
	// QSpacerItem(int, int)
	x_QSpacerItem* xret = new x_QSpacerItem((int)x[1].s_int,(int)x[2].s_int);
	x[0].s_voidp = (void*)xret;
    }
    x_QSpacerItem(int x1, int x2) : QSpacerItem(x1, x2) {
    }
    void x_3(Smoke::Stack x) {
	// changeSize(int, int, QSizePolicy::SizeType, QSizePolicy::SizeType)
	this->QSpacerItem::changeSize((int)x[1].s_int,(int)x[2].s_int,*(QSizePolicy::SizeType *)x[3].s_voidp,*(QSizePolicy::SizeType *)x[4].s_voidp);
    }
    void x_4(Smoke::Stack x) {
	// changeSize(int, int, QSizePolicy::SizeType)
	this->QSpacerItem::changeSize((int)x[1].s_int,(int)x[2].s_int,*(QSizePolicy::SizeType *)x[3].s_voidp);
    }
    void x_5(Smoke::Stack x) {
	// changeSize(int, int)
	this->QSpacerItem::changeSize((int)x[1].s_int,(int)x[2].s_int);
    }
    void x_6(Smoke::Stack x) const {
	// sizeHint()
	QSize xret = this->QSpacerItem::sizeHint();
	x[0].s_voidp = (void*)new QSize(xret);
    }
    void x_7(Smoke::Stack x) const {
	// minimumSize()
	QSize xret = this->QSpacerItem::minimumSize();
	x[0].s_voidp = (void*)new QSize(xret);
    }
    void x_8(Smoke::Stack x) const {
	// maximumSize()
	QSize xret = this->QSpacerItem::maximumSize();
	x[0].s_voidp = (void*)new QSize(xret);
    }
    void x_9(Smoke::Stack x) const {
	// expanding()
	QSizePolicy::ExpandData xret = this->QSpacerItem::expanding();
	x[0].s_voidp = (void*)new QSizePolicy::ExpandData(xret);
    }
    void x_10(Smoke::Stack x) const {
	// isEmpty()
	bool xret = this->QSpacerItem::isEmpty();
	x[0].s_bool = (bool)xret;
    }
    void x_11(Smoke::Stack x) {
	// setGeometry(const QRect&)
	this->QSpacerItem::setGeometry(*(const QRect *)x[1].s_voidp);
    }
    void x_12(Smoke::Stack x) const {
	// geometry()
	QRect xret = this->QSpacerItem::geometry();
	x[0].s_voidp = (void*)new QRect(xret);
    }
    void x_13(Smoke::Stack x) {
	// spacerItem()
	QSpacerItem* xret = this->QSpacerItem::spacerItem();
	x[0].s_voidp = (void*)xret;
    }
    virtual QSizePolicy::ExpandData expanding() const {
	Smoke::StackItem x[1];
	if(call_method((void*)this, 7095, x)) {
	    QSizePolicy::ExpandData *xptr = (QSizePolicy::ExpandData *)x[0].s_voidp;
	    QSizePolicy::ExpandData xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QSpacerItem::expanding();
    }
    virtual QRect geometry() const {
	Smoke::StackItem x[1];
	if(call_method((void*)this, 7098, x)) {
	    QRect *xptr = (QRect *)x[0].s_voidp;
	    QRect xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QSpacerItem::geometry();
    }
    virtual bool hasHeightForWidth() const {
	Smoke::StackItem x[1];
	if(call_method((void*)this, 4122, x)) return (bool)x[0].s_bool;
	return this->QLayoutItem::hasHeightForWidth();
    }
    virtual int heightForWidth(int x1) const {
	Smoke::StackItem x[2];
	x[1].s_int = (int)x1;
	if(call_method((void*)this, 4123, x)) return (int)x[0].s_int;
	return this->QLayoutItem::heightForWidth(x1);
    }
    virtual void invalidate() {
	Smoke::StackItem x[1];
	if(call_method((void*)this, 4124, x)) return;
	this->QLayoutItem::invalidate();
    }
    virtual bool isEmpty() const {
	Smoke::StackItem x[1];
	if(call_method((void*)this, 7096, x)) return (bool)x[0].s_bool;
	return this->QSpacerItem::isEmpty();
    }
    virtual QLayoutIterator iterator() {
	Smoke::StackItem x[1];
	if(call_method((void*)this, 4126, x)) {
	    QLayoutIterator *xptr = (QLayoutIterator *)x[0].s_voidp;
	    QLayoutIterator xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QLayoutItem::iterator();
    }
    virtual QLayout* layout() {
	Smoke::StackItem x[1];
	if(call_method((void*)this, 4127, x)) 	return (QLayout*)x[0].s_voidp;
	return this->QLayoutItem::layout();
    }
    virtual QSize maximumSize() const {
	Smoke::StackItem x[1];
	if(call_method((void*)this, 7094, x)) {
	    QSize *xptr = (QSize *)x[0].s_voidp;
	    QSize xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QSpacerItem::maximumSize();
    }
    virtual QSize minimumSize() const {
	Smoke::StackItem x[1];
	if(call_method((void*)this, 7093, x)) {
	    QSize *xptr = (QSize *)x[0].s_voidp;
	    QSize xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QSpacerItem::minimumSize();
    }
    virtual void setAlignment(int x1) {
	Smoke::StackItem x[2];
	x[1].s_int = (int)x1;
	if(call_method((void*)this, 4130, x)) return;
	this->QLayoutItem::setAlignment(x1);
    }
    virtual void setGeometry(const QRect& x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)&x1;
	if(call_method((void*)this, 7097, x)) return;
	this->QSpacerItem::setGeometry(x1);
    }
    virtual QSize sizeHint() const {
	Smoke::StackItem x[1];
	if(call_method((void*)this, 7092, x)) {
	    QSize *xptr = (QSize *)x[0].s_voidp;
	    QSize xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QSpacerItem::sizeHint();
    }
    virtual QSpacerItem* spacerItem() {
	Smoke::StackItem x[1];
	if(call_method((void*)this, 7099, x)) 	return (QSpacerItem*)x[0].s_voidp;
	return this->QSpacerItem::spacerItem();
    }
    virtual QWidget* widget() {
	Smoke::StackItem x[1];
	if(call_method((void*)this, 4125, x)) 	return (QWidget*)x[0].s_voidp;
	return this->QLayoutItem::widget();
    }
    ~x_QSpacerItem() {}
};
void xcall_QSpacerItem(Smoke::Index xi, void *obj, Smoke::Stack args) {
    x_QSpacerItem *xself = (x_QSpacerItem*)obj;
    switch(xi) {
	case 0: x_QSpacerItem::x_0(args);	break;
	case 1: x_QSpacerItem::x_1(args);	break;
	case 2: x_QSpacerItem::x_2(args);	break;
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
    }
}
