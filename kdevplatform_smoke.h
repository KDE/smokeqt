#ifndef KDEVPLATFORM_SMOKE_H
#define KDEVPLATFORM_SMOKE_H

#include <smoke.h>

// Defined in smokedata.cpp, initialized by init_kde_Smoke(), used by all .cpp files
extern "C" SMOKE_EXPORT Smoke* kdevplatform_Smoke;
extern "C" SMOKE_EXPORT void init_kdevplatform_Smoke();
extern "C" SMOKE_EXPORT void delete_kdevplatform_Smoke();

#ifndef QGLOBALSPACE_CLASS
#define QGLOBALSPACE_CLASS
class QGlobalSpace { };
#endif

#endif
