#ifndef NEPOMUK_SMOKE_H
#define NEPOMUK_SMOKE_H

#include <smoke.h>

// Defined in smokedata.cpp, initialized by init_nepomuk_Smoke(), used by all .cpp files
extern SMOKE_EXPORT Smoke* nepomuk_Smoke;
extern SMOKE_EXPORT void init_nepomuk_Smoke();

#ifndef QGLOBALSPACE_CLASS
#define QGLOBALSPACE_CLASS
class QGlobalSpace { };
#endif

#endif
