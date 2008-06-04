#ifndef KHTML_SMOKE_H
#define KHTML_SMOKE_H

#include <smoke.h>

// Defined in smokedata.cpp, initialized by init_kde_Smoke(), used by all .cpp files
extern SMOKE_EXPORT Smoke* khtml_Smoke;
extern SMOKE_EXPORT void init_khtml_Smoke();

#ifndef QGLOBALSPACE_CLASS
#define QGLOBALSPACE_CLASS
class QGlobalSpace { };
#endif

#endif
