//Auto-generated by kalyptus. DO NOT EDIT.
#include <smoke.h>
#include <qt_smoke.h>
#include <qvariant.h>
#include <qstring.h>
#include <qsqlfield.h>

class x_QSqlField : public QSqlField {
public:
    static void x_0(Smoke::Stack x) {
	// QSqlField(const QString&, QVariant::Type)
	x_QSqlField* xret = new x_QSqlField(*(const QString *)x[1].s_voidp,(QVariant::Type)x[2].s_enum);
	x[0].s_class = (void*)xret;
    }
    x_QSqlField(const QString& x1, QVariant::Type x2) : QSqlField(x1, x2) {
    }
    static void x_1(Smoke::Stack x) {
	// QSqlField(const QString&)
	x_QSqlField* xret = new x_QSqlField(*(const QString *)x[1].s_voidp);
	x[0].s_class = (void*)xret;
    }
    x_QSqlField(const QString& x1) : QSqlField(x1) {
    }
    static void x_2(Smoke::Stack x) {
	// QSqlField()
	x_QSqlField* xret = new x_QSqlField();
	x[0].s_class = (void*)xret;
    }
    x_QSqlField() : QSqlField() {
    }
    static void x_3(Smoke::Stack x) {
	// QSqlField(const QSqlField&)
	x_QSqlField* xret = new x_QSqlField(*(const QSqlField *)x[1].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QSqlField(const QSqlField& x1) : QSqlField(x1) {
    }
    void x_4(Smoke::Stack x) {
	// operator=(const QSqlField&)
	QSqlField& xret = this->QSqlField::operator=(*(const QSqlField *)x[1].s_class);
	x[0].s_class = (void*)&xret;
    }
    void x_5(Smoke::Stack x) const {
	// operator==(const QSqlField&)
	bool xret = this->QSqlField::operator==(*(const QSqlField *)x[1].s_class);
	x[0].s_bool = xret;
    }
    void x_6(Smoke::Stack x) {
	// setValue(const QVariant&)
	this->QSqlField::setValue(*(const QVariant *)x[1].s_class);
	(void)x[0].s_int; // noop (for compiler warning)
    }
    void x_7(Smoke::Stack x) const {
	// value()
	QVariant xret = this->QSqlField::value();
	x[0].s_class = (void*)new QVariant(xret);
    }
    void x_8(Smoke::Stack x) {
	// setName(const QString&)
	this->QSqlField::setName(*(const QString *)x[1].s_voidp);
	(void)x[0].s_int; // noop (for compiler warning)
    }
    void x_9(Smoke::Stack x) const {
	// name()
	QString xret = this->QSqlField::name();
	x[0].s_voidp = (void*)new QString(xret);
    }
    void x_10(Smoke::Stack x) {
	// setNull()
	this->QSqlField::setNull();
	(void)x[0].s_int; // noop (for compiler warning)
    }
    void x_11(Smoke::Stack x) const {
	// isNull()
	bool xret = this->QSqlField::isNull();
	x[0].s_bool = xret;
    }
    void x_12(Smoke::Stack x) {
	// setReadOnly(bool)
	this->QSqlField::setReadOnly((bool)x[1].s_bool);
	(void)x[0].s_int; // noop (for compiler warning)
    }
    void x_13(Smoke::Stack x) const {
	// isReadOnly()
	bool xret = this->QSqlField::isReadOnly();
	x[0].s_bool = xret;
    }
    void x_14(Smoke::Stack x) {
	// clear(bool)
	this->QSqlField::clear((bool)x[1].s_bool);
	(void)x[0].s_int; // noop (for compiler warning)
    }
    void x_15(Smoke::Stack x) {
	// clear()
	this->QSqlField::clear();
	(void)x[0].s_int; // noop (for compiler warning)
    }
    void x_16(Smoke::Stack x) const {
	// type()
	QVariant::Type xret = this->QSqlField::type();
	x[0].s_enum = xret;
    }
    virtual void setName(const QString& x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)&x1;
	if(qt_Smoke->binding->callMethod(7458, (void*)this, x)) return;
	this->QSqlField::setName(x1);
    }
    virtual void setNull() {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(7460, (void*)this, x)) return;
	this->QSqlField::setNull();
    }
    virtual void setReadOnly(bool x1) {
	Smoke::StackItem x[2];
	x[1].s_bool = x1;
	if(qt_Smoke->binding->callMethod(7462, (void*)this, x)) return;
	this->QSqlField::setReadOnly(x1);
    }
    virtual void setValue(const QVariant& x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	if(qt_Smoke->binding->callMethod(7456, (void*)this, x)) return;
	this->QSqlField::setValue(x1);
    }
    virtual QVariant value() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(7457, (void*)this, x)) {
	    QVariant *xptr = (QVariant *)x[0].s_class;
	    QVariant xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QSqlField::value();
    }
    ~x_QSqlField() { qt_Smoke->binding->deleted(281, (void*)this); }
};
void xcall_QSqlField(Smoke::Index xi, void *obj, Smoke::Stack args) {
    x_QSqlField *xself = (x_QSqlField*)obj;
    switch(xi) {
	case 0: x_QSqlField::x_0(args);	break;
	case 1: x_QSqlField::x_1(args);	break;
	case 2: x_QSqlField::x_2(args);	break;
	case 3: x_QSqlField::x_3(args);	break;
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
	case 14: xself->x_14(args);	break;
	case 15: xself->x_15(args);	break;
	case 16: xself->x_16(args);	break;
	case 17: delete (QSqlField*)xself;	break;
    }
}
