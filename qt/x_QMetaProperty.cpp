//Auto-generated by kalyptus. DO NOT EDIT.
#include <smoke.h>
#include <qt_smoke.h>
#include <qmetaobject.h>
#include <qstrlist.h>

class x_QMetaProperty : public QMetaProperty {
public:
    static void x_0(Smoke::Stack x) {
	x[0].s_enum = (long)QMetaProperty::Invalid;
    }
    static void x_1(Smoke::Stack x) {
	x[0].s_enum = (long)QMetaProperty::Readable;
    }
    static void x_2(Smoke::Stack x) {
	x[0].s_enum = (long)QMetaProperty::Writable;
    }
    static void x_3(Smoke::Stack x) {
	x[0].s_enum = (long)QMetaProperty::EnumOrSet;
    }
    static void x_4(Smoke::Stack x) {
	x[0].s_enum = (long)QMetaProperty::StdSet;
    }
    static void x_5(Smoke::Stack x) {
	x[0].s_enum = (long)QMetaProperty::Override;
    }
    void x_6(Smoke::Stack x) const {
	// type()
	const char* xret = this->QMetaProperty::type();
	x[0].s_voidp = (void*)xret;
    }
    void x_7(Smoke::Stack x) const {
	// name()
	const char* xret = this->QMetaProperty::name();
	x[0].s_voidp = (void*)xret;
    }
    void x_8(Smoke::Stack x) const {
	// writable()
	bool xret = this->QMetaProperty::writable();
	x[0].s_bool = xret;
    }
    void x_9(Smoke::Stack x) const {
	// isValid()
	bool xret = this->QMetaProperty::isValid();
	x[0].s_bool = xret;
    }
    void x_10(Smoke::Stack x) const {
	// isSetType()
	bool xret = this->QMetaProperty::isSetType();
	x[0].s_bool = xret;
    }
    void x_11(Smoke::Stack x) const {
	// isEnumType()
	bool xret = this->QMetaProperty::isEnumType();
	x[0].s_bool = xret;
    }
    void x_12(Smoke::Stack x) const {
	// enumKeys()
	QStrList xret = this->QMetaProperty::enumKeys();
	x[0].s_voidp = (void*)new QStrList(xret);
    }
    void x_13(Smoke::Stack x) const {
	// keyToValue(const char*)
	int xret = this->QMetaProperty::keyToValue((const char*)x[1].s_voidp);
	x[0].s_int = xret;
    }
    void x_14(Smoke::Stack x) const {
	// valueToKey(int)
	const char* xret = this->QMetaProperty::valueToKey((int)x[1].s_int);
	x[0].s_voidp = (void*)xret;
    }
    void x_15(Smoke::Stack x) const {
	// keysToValue(const QStrList&)
	int xret = this->QMetaProperty::keysToValue(*(const QStrList *)x[1].s_voidp);
	x[0].s_int = xret;
    }
    void x_16(Smoke::Stack x) const {
	// valueToKeys(int)
	QStrList xret = this->QMetaProperty::valueToKeys((int)x[1].s_int);
	x[0].s_voidp = (void*)new QStrList(xret);
    }
    void x_17(Smoke::Stack x) const {
	// designable(QObject*)
	bool xret = this->QMetaProperty::designable((QObject*)x[1].s_class);
	x[0].s_bool = xret;
    }
    void x_18(Smoke::Stack x) const {
	// scriptable(QObject*)
	bool xret = this->QMetaProperty::scriptable((QObject*)x[1].s_class);
	x[0].s_bool = xret;
    }
    void x_19(Smoke::Stack x) const {
	// stored(QObject*)
	bool xret = this->QMetaProperty::stored((QObject*)x[1].s_class);
	x[0].s_bool = xret;
    }
    void x_20(Smoke::Stack x) const {
	// reset(QObject*)
	bool xret = this->QMetaProperty::reset((QObject*)x[1].s_class);
	x[0].s_bool = xret;
    }
    void x_21(Smoke::Stack x) const {
	// testFlags(uint)
	bool xret = this->QMetaProperty::testFlags((uint)x[1].s_uint);
	x[0].s_bool = xret;
    }
    void x_22(Smoke::Stack x) const {
	// stdSet()
	bool xret = this->QMetaProperty::stdSet();
	x[0].s_bool = xret;
    }
    void x_23(Smoke::Stack x) const {
	// id()
	int xret = this->QMetaProperty::id();
	x[0].s_int = xret;
    }
    void x_24(Smoke::Stack x) {
	// clear()
	this->QMetaProperty::clear();
	(void)x; // noop (for compiler warning)
    }
    static void x_25(Smoke::Stack x) {
	// QMetaProperty()
	x_QMetaProperty* xret = new x_QMetaProperty();
	x[0].s_class = (void*)xret;
    }
    x_QMetaProperty() : QMetaProperty() {
    }
    static void x_26(Smoke::Stack x) {
	// QMetaProperty(const QMetaProperty&)
	x_QMetaProperty* xret = new x_QMetaProperty(*(const QMetaProperty *)x[1].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QMetaProperty(const QMetaProperty& x1) : QMetaProperty(x1) {
    }
    static void xenum_operation(Smoke::EnumOperation xop, Smoke::Index xtype, void *&xdata, long &xvalue) {
	switch(xtype) {
	  case 374: //QMetaProperty::Flags
	    switch(xop) {
	      case Smoke::EnumNew:
		xdata = (void*)new QMetaProperty::Flags;
		break;
	      case Smoke::EnumDelete:
		delete (QMetaProperty::Flags*)xdata;
		break;
	      case Smoke::EnumFromLong:
		*(QMetaProperty::Flags*)xdata = (QMetaProperty::Flags)xvalue;
		break;
	      case Smoke::EnumToLong:
		xvalue = (long)*(QMetaProperty::Flags*)xdata;
		break;
	    }
	    break;
	}
    }
    ~x_QMetaProperty() { qt_Smoke->binding->deleted(201, (void*)this); }
};
void xenum_QMetaProperty(Smoke::EnumOperation xop, Smoke::Index xtype, void *&xdata, long &xvalue) {
    x_QMetaProperty::xenum_operation(xop, xtype, xdata, xvalue);
}
void xcall_QMetaProperty(Smoke::Index xi, void *obj, Smoke::Stack args) {
    x_QMetaProperty *xself = (x_QMetaProperty*)obj;
    switch(xi) {
	case 0: x_QMetaProperty::x_0(args);	break;
	case 1: x_QMetaProperty::x_1(args);	break;
	case 2: x_QMetaProperty::x_2(args);	break;
	case 3: x_QMetaProperty::x_3(args);	break;
	case 4: x_QMetaProperty::x_4(args);	break;
	case 5: x_QMetaProperty::x_5(args);	break;
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
	case 17: xself->x_17(args);	break;
	case 18: xself->x_18(args);	break;
	case 19: xself->x_19(args);	break;
	case 20: xself->x_20(args);	break;
	case 21: xself->x_21(args);	break;
	case 22: xself->x_22(args);	break;
	case 23: xself->x_23(args);	break;
	case 24: xself->x_24(args);	break;
	case 25: x_QMetaProperty::x_25(args);	break;
	case 26: x_QMetaProperty::x_26(args);	break;
	case 27: delete (QMetaProperty*)xself;	break;
    }
}
