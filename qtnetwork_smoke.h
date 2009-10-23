#ifndef QTNETWORK_SMOKE_H
#define QTNETWORK_SMOKE_H

#include <smoke.h>

// Defined in smokedata.cpp, initialized by init_qtnetwork_Smoke(), used by all .cpp files
extern SMOKE_EXPORT Smoke* qtnetwork_Smoke;
extern SMOKE_EXPORT void init_qtnetwork_Smoke();

#ifndef QGLOBALSPACE_CLASS
#define QGLOBALSPACE_CLASS
class QGlobalSpace { };
#endif

#endif
