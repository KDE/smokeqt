//Auto-generated by kalyptus. DO NOT EDIT.
#include <smoke.h>
#include <qt_smoke.h>
#include <qsqlfield.h>

class x_QSqlFieldPrivate : public QSqlFieldPrivate {
public:
    static void x_0(Smoke::Stack x) {
	// QSqlFieldPrivate()
	x_QSqlFieldPrivate* xret = new x_QSqlFieldPrivate();
	x[0].s_class = (void*)xret;
    }
    x_QSqlFieldPrivate() : QSqlFieldPrivate() {
    }
    static void x_1(Smoke::Stack x) {
	// QSqlFieldPrivate(const QSqlFieldPrivate&)
	x_QSqlFieldPrivate* xret = new x_QSqlFieldPrivate(*(const QSqlFieldPrivate *)x[1].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QSqlFieldPrivate(const QSqlFieldPrivate& x1) : QSqlFieldPrivate(x1) {
    }
    ~x_QSqlFieldPrivate() { qt_Smoke->binding->deleted(292, (void*)this); }
};
void xcall_QSqlFieldPrivate(Smoke::Index xi, void *obj, Smoke::Stack args) {
    x_QSqlFieldPrivate *xself = (x_QSqlFieldPrivate*)obj;
    switch(xi) {
	case 0: x_QSqlFieldPrivate::x_0(args);	break;
	case 1: x_QSqlFieldPrivate::x_1(args);	break;
	case 2: delete (QSqlFieldPrivate*)xself;	break;
    }
}
