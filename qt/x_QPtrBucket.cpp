//Auto-generated by kalyptus. DO NOT EDIT.
#include <smoke.h>
#include <qt_smoke.h>
#include <qgdict.h>
#include <qptrcollection.h>

class x_QPtrBucket : public QPtrBucket {
public:
    static void x_0(Smoke::Stack x) {
	// QPtrBucket(void*, QPtrCollection::Item, QBaseBucket*)
	x_QPtrBucket* xret = new x_QPtrBucket((void*)x[1].s_voidp,*(QPtrCollection::Item *)x[2].s_voidp,(QBaseBucket*)x[3].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QPtrBucket(void* x1, QPtrCollection::Item x2, QBaseBucket* x3) : QPtrBucket(x1, x2, x3) {
    }
    void x_1(Smoke::Stack x) const {
	// getKey()
	void* xret = this->QPtrBucket::getKey();
	x[0].s_voidp = (void*)xret;
    }
    ~x_QPtrBucket() { qt_Smoke->binding->deleted(236, (void*)this); }
};
void xcall_QPtrBucket(Smoke::Index xi, void *obj, Smoke::Stack args) {
    x_QPtrBucket *xself = (x_QPtrBucket*)obj;
    switch(xi) {
	case 0: x_QPtrBucket::x_0(args);	break;
	case 1: xself->x_1(args);	break;
	case 2: delete (QPtrBucket*)xself;	break;
    }
}
