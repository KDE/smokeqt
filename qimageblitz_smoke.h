#ifndef QIMAGEBLITZ_SMOKE_H
#define QIMAGEBLITZ_SMOKE_H

#include <smoke.h>

// Defined in smokedata.cpp, initialized by init_qimageblitz_Smoke(), used by all .cpp files
extern SMOKE_EXPORT Smoke* qimageblitz_Smoke;
extern SMOKE_EXPORT void init_qimageblitz_Smoke();

#ifndef QGLOBALSPACE_CLASS
#define QGLOBALSPACE_CLASS
class QGlobalSpace { };
#endif

#endif
