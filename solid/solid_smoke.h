#ifndef SOLID_SMOKE_H
#define SOLID_SMOKE_H

#include <smoke.h>

// Defined in smokedata.cpp, initialized by init_kde_Smoke(), used by all .cpp files
extern SMOKE_EXPORT Smoke* solid_Smoke;
extern SMOKE_EXPORT void init_solid_Smoke();

#ifndef QGLOBALSPACE_CLASS
#define QGLOBALSPACE_CLASS
class QGlobalSpace { };
#endif

#endif
