#ifndef QTQUICK_SMOKE_H
#define QTQUICK_SMOKE_H

#include <smoke.h>

// Defined in smokedata.cpp, initialized by init_qtquick_Smoke(), used by all .cpp files
extern "C" SMOKE_EXPORT Smoke* qtquick_Smoke;
extern "C" SMOKE_EXPORT void init_qtquick_Smoke();
extern "C" SMOKE_EXPORT void delete_qtquick_Smoke();

#ifndef QGLOBALSPACE_CLASS
#define QGLOBALSPACE_CLASS
class QGlobalSpace { };
#endif

#endif
