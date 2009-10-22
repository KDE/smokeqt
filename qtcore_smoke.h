#ifndef QTCORE_SMOKE_H
#define QTCORE_SMOKE_H

#include <smoke.h>

// Defined in smokedata.cpp, initialized by init_qtcore_Smoke(), used by all .cpp files
extern SMOKE_EXPORT Smoke* qtcore_Smoke;
extern SMOKE_EXPORT void init_qtcore_Smoke();

#ifndef QGLOBALSPACE_CLASS
#define QGLOBALSPACE_CLASS
class QGlobalSpace { };
#endif

#endif
