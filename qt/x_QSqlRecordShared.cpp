//Auto-generated by kalyptus. DO NOT EDIT.
#include <smoke.h>
#include <qt_smoke.h>
#include <qsqlrecord.h>

class x_QSqlRecordShared : public QSqlRecordShared {
public:
    static void x_0(Smoke::Stack x) {
	// QSqlRecordShared(QSqlRecordPrivate*)
	x_QSqlRecordShared* xret = new x_QSqlRecordShared((QSqlRecordPrivate*)x[1].s_voidp);
	x[0].s_class = (void*)xret;
    }
    x_QSqlRecordShared(QSqlRecordPrivate* x1) : QSqlRecordShared(x1) {
    }
    static void x_1(Smoke::Stack x) {
	// QSqlRecordShared(const QSqlRecordShared&)
	x_QSqlRecordShared* xret = new x_QSqlRecordShared(*(const QSqlRecordShared *)x[1].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QSqlRecordShared(const QSqlRecordShared& x1) : QSqlRecordShared(x1) {
    }
    ~x_QSqlRecordShared() { qt_Smoke->binding->deleted(299, (void*)this); }
};
void xcall_QSqlRecordShared(Smoke::Index xi, void *obj, Smoke::Stack args) {
    x_QSqlRecordShared *xself = (x_QSqlRecordShared*)obj;
    switch(xi) {
	case 0: x_QSqlRecordShared::x_0(args);	break;
	case 1: x_QSqlRecordShared::x_1(args);	break;
	case 2: delete (QSqlRecordShared*)xself;	break;
    }
}
