//Auto-generated by kalyptus. DO NOT EDIT.
#include <smoke.h>
#include <qgcache.h>
#include <qstring.h>

class x_QGCacheIterator : public QGCacheIterator {
public:
    static void x_0(Smoke::Stack x) {
	// QGCacheIterator(const QGCache&)
	x_QGCacheIterator* xret = new x_QGCacheIterator(*(const QGCache *)x[1].s_voidp);
	x[0].s_voidp = (void*)xret;
    }
    x_QGCacheIterator(const QGCache& x1) : QGCacheIterator(x1) {
    }
    static void x_1(Smoke::Stack x) {
	// QGCacheIterator(const QGCacheIterator&)
	x_QGCacheIterator* xret = new x_QGCacheIterator(*(const QGCacheIterator *)x[1].s_voidp);
	x[0].s_voidp = (void*)xret;
    }
    x_QGCacheIterator(const QGCacheIterator& x1) : QGCacheIterator(x1) {
    }
    void x_2(Smoke::Stack x) {
	// operator=(const QGCacheIterator&)
	QGCacheIterator& xret = this->QGCacheIterator::operator=(*(const QGCacheIterator *)x[1].s_voidp);
	x[0].s_voidp = (void*)&xret;
    }
    void x_3(Smoke::Stack x) const {
	// count()
	uint xret = this->QGCacheIterator::count();
	x[0].s_uint = (uint)xret;
    }
    void x_4(Smoke::Stack x) const {
	// atFirst()
	bool xret = this->QGCacheIterator::atFirst();
	x[0].s_bool = (bool)xret;
    }
    void x_5(Smoke::Stack x) const {
	// atLast()
	bool xret = this->QGCacheIterator::atLast();
	x[0].s_bool = (bool)xret;
    }
    void x_6(Smoke::Stack x) {
	// toFirst()
	QPtrCollection::Item xret = this->QGCacheIterator::toFirst();
	x[0].s_voidp = (void*)new QPtrCollection::Item(xret);
    }
    void x_7(Smoke::Stack x) {
	// toLast()
	QPtrCollection::Item xret = this->QGCacheIterator::toLast();
	x[0].s_voidp = (void*)new QPtrCollection::Item(xret);
    }
    void x_8(Smoke::Stack x) const {
	// get()
	QPtrCollection::Item xret = this->QGCacheIterator::get();
	x[0].s_voidp = (void*)new QPtrCollection::Item(xret);
    }
    void x_9(Smoke::Stack x) const {
	// getKeyString()
	QString xret = this->QGCacheIterator::getKeyString();
	x[0].s_voidp = (void*)new QString(xret);
    }
    void x_10(Smoke::Stack x) const {
	// getKeyAscii()
	const char* xret = this->QGCacheIterator::getKeyAscii();
	x[0].s_voidp = (void*)xret;
    }
    void x_11(Smoke::Stack x) const {
	// getKeyInt()
	long xret = this->QGCacheIterator::getKeyInt();
	x[0].s_long = (long)xret;
    }
    void x_12(Smoke::Stack x) {
	// operator()()
	QPtrCollection::Item xret = this->QGCacheIterator::operator()();
	x[0].s_voidp = (void*)new QPtrCollection::Item(xret);
    }
    void x_13(Smoke::Stack x) {
	// operator++()
	QPtrCollection::Item xret = this->QGCacheIterator::operator++();
	x[0].s_voidp = (void*)new QPtrCollection::Item(xret);
    }
    void x_14(Smoke::Stack x) {
	// operator+=(uint)
	QPtrCollection::Item xret = this->QGCacheIterator::operator+=((uint)x[1].s_uint);
	x[0].s_voidp = (void*)new QPtrCollection::Item(xret);
    }
    void x_15(Smoke::Stack x) {
	// operator--()
	QPtrCollection::Item xret = this->QGCacheIterator::operator--();
	x[0].s_voidp = (void*)new QPtrCollection::Item(xret);
    }
    void x_16(Smoke::Stack x) {
	// operator-=(uint)
	QPtrCollection::Item xret = this->QGCacheIterator::operator-=((uint)x[1].s_uint);
	x[0].s_voidp = (void*)new QPtrCollection::Item(xret);
    }
    ~x_QGCacheIterator() {}
};
void xcall_QGCacheIterator(Smoke::Index xi, void *obj, Smoke::Stack args) {
    x_QGCacheIterator *xself = (x_QGCacheIterator*)obj;
    switch(xi) {
	case 0: x_QGCacheIterator::x_0(args);	break;
	case 1: x_QGCacheIterator::x_1(args);	break;
	case 2: xself->x_2(args);	break;
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
	case 14: xself->x_14(args);	break;
	case 15: xself->x_15(args);	break;
	case 16: xself->x_16(args);	break;
    }
}
