#ifndef qtlocation_SMOKE_H
#define qtlocation_SMOKE_H

#include <smoke.h>

// Defined in smokedata.cpp, initialized by init_qtlocation_Smoke(), used by all .cpp files
extern "C" SMOKE_EXPORT Smoke* qtlocation_Smoke;
extern "C" SMOKE_EXPORT void init_qtlocation_Smoke();
extern "C" SMOKE_EXPORT void delete_qtlocation_Smoke();

#ifndef QGLOBALSPACE_CLASS
#define QGLOBALSPACE_CLASS
class QGlobalSpace { };
#endif

#endif
