//Auto-generated by kalyptus. DO NOT EDIT.
#include <smoke.h>
#include <qt_smoke.h>
#include <qstring.h>
#include <qpixmap.h>
#include <qlistbox.h>

class x_QListBoxPixmap : public QListBoxPixmap {
public:
    static void x_0(Smoke::Stack x) {
	// QListBoxPixmap(QListBox*, const QPixmap&)
	x_QListBoxPixmap* xret = new x_QListBoxPixmap((QListBox*)x[1].s_class,*(const QPixmap *)x[2].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QListBoxPixmap(QListBox* x1, const QPixmap& x2) : QListBoxPixmap(x1, x2) {
    }
    static void x_1(Smoke::Stack x) {
	// QListBoxPixmap(const QPixmap&)
	x_QListBoxPixmap* xret = new x_QListBoxPixmap(*(const QPixmap *)x[1].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QListBoxPixmap(const QPixmap& x1) : QListBoxPixmap(x1) {
    }
    static void x_2(Smoke::Stack x) {
	// QListBoxPixmap(QListBox*, const QPixmap&, QListBoxItem*)
	x_QListBoxPixmap* xret = new x_QListBoxPixmap((QListBox*)x[1].s_class,*(const QPixmap *)x[2].s_class,(QListBoxItem*)x[3].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QListBoxPixmap(QListBox* x1, const QPixmap& x2, QListBoxItem* x3) : QListBoxPixmap(x1, x2, x3) {
    }
    static void x_3(Smoke::Stack x) {
	// QListBoxPixmap(QListBox*, const QPixmap&, const QString&)
	x_QListBoxPixmap* xret = new x_QListBoxPixmap((QListBox*)x[1].s_class,*(const QPixmap *)x[2].s_class,*(const QString *)x[3].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QListBoxPixmap(QListBox* x1, const QPixmap& x2, const QString& x3) : QListBoxPixmap(x1, x2, x3) {
    }
    static void x_4(Smoke::Stack x) {
	// QListBoxPixmap(const QPixmap&, const QString&)
	x_QListBoxPixmap* xret = new x_QListBoxPixmap(*(const QPixmap *)x[1].s_class,*(const QString *)x[2].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QListBoxPixmap(const QPixmap& x1, const QString& x2) : QListBoxPixmap(x1, x2) {
    }
    static void x_5(Smoke::Stack x) {
	// QListBoxPixmap(QListBox*, const QPixmap&, const QString&, QListBoxItem*)
	x_QListBoxPixmap* xret = new x_QListBoxPixmap((QListBox*)x[1].s_class,*(const QPixmap *)x[2].s_class,*(const QString *)x[3].s_class,(QListBoxItem*)x[4].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QListBoxPixmap(QListBox* x1, const QPixmap& x2, const QString& x3, QListBoxItem* x4) : QListBoxPixmap(x1, x2, x3, x4) {
    }
    void x_6(Smoke::Stack x) const {
	// pixmap()
	const QPixmap* xret = this->QListBoxPixmap::pixmap();
	x[0].s_class = (void*)xret;
    }
    void x_7(Smoke::Stack x) const {
	// height(const QListBox*)
	int xret = this->QListBoxPixmap::height((const QListBox*)x[1].s_class);
	x[0].s_int = (int)xret;
    }
    void x_8(Smoke::Stack x) const {
	// width(const QListBox*)
	int xret = this->QListBoxPixmap::width((const QListBox*)x[1].s_class);
	x[0].s_int = (int)xret;
    }
    void x_9(Smoke::Stack x) const {
	// rtti()
	int xret = this->QListBoxPixmap::rtti();
	x[0].s_int = (int)xret;
    }
    void x_10(Smoke::Stack x) {
	// paint(QPainter*)
	this->QListBoxPixmap::paint((QPainter*)x[1].s_class);
    }
    virtual int height(const QListBox* x1) const {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->callMethod(4438, (void*)this, x)) return (int)x[0].s_int;
	return this->QListBoxPixmap::height(x1);
    }
    virtual void paint(QPainter* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->callMethod(4441, (void*)this, x)) return;
	this->QListBoxPixmap::paint(x1);
    }
    virtual const QPixmap* pixmap() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->callMethod(4437, (void*)this, x)) 	return (const QPixmap*)x[0].s_class;
	return this->QListBoxPixmap::pixmap();
    }
    virtual int rtti() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->callMethod(4440, (void*)this, x)) return (int)x[0].s_int;
	return this->QListBoxPixmap::rtti();
    }
    virtual void setText(const QString& x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	if(qt_Smoke->callMethod(4428, (void*)this, x)) return;
	this->QListBoxItem::setText(x1);
    }
    virtual QString text() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->callMethod(4413, (void*)this, x)) {
	    QString *xptr = (QString *)x[0].s_class;
	    QString xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QListBoxItem::text();
    }
    virtual int width(const QListBox* x1) const {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->callMethod(4439, (void*)this, x)) return (int)x[0].s_int;
	return this->QListBoxPixmap::width(x1);
    }
    ~x_QListBoxPixmap() {}
};
void xcall_QListBoxPixmap(Smoke::Index xi, void *obj, Smoke::Stack args) {
    x_QListBoxPixmap *xself = (x_QListBoxPixmap*)obj;
    switch(xi) {
	case 0: x_QListBoxPixmap::x_0(args);	break;
	case 1: x_QListBoxPixmap::x_1(args);	break;
	case 2: x_QListBoxPixmap::x_2(args);	break;
	case 3: x_QListBoxPixmap::x_3(args);	break;
	case 4: x_QListBoxPixmap::x_4(args);	break;
	case 5: x_QListBoxPixmap::x_5(args);	break;
	case 6: xself->x_6(args);	break;
	case 7: xself->x_7(args);	break;
	case 8: xself->x_8(args);	break;
	case 9: xself->x_9(args);	break;
	case 10: xself->x_10(args);	break;
	case 11: delete (QListBoxPixmap*)xself;	break;
    }
}
