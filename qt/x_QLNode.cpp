//Auto-generated by kalyptus. DO NOT EDIT.
#include <smoke.h>
#include <qt_smoke.h>
#include <qglist.h>
#include <qptrcollection.h>

class x_QLNode {
private:
    QLNode *xthis;
public:
    x_QLNode(void *x) : xthis((QLNode*)x) {}
    void x_0(Smoke::Stack x) {
	// getData()
	QPtrCollection::Item xret = xthis->QLNode::getData();
	x[0].s_voidp = (void*)new QPtrCollection::Item(xret);
    }
    ~x_QLNode() { qt_Smoke->binding->deleted(172, (void*)this); }
};
void xcall_QLNode(Smoke::Index xi, void *obj, Smoke::Stack args) {
    x_QLNode xtmp(obj), *xself = &xtmp;
    switch(xi) {
	case 0: xself->x_0(args);	break;
    }
}
