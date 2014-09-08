#ifndef qtsensors_SMOKE_H
#define qtsensors_SMOKE_H

#include <smoke.h>

// Defined in smokedata.cpp, initialized by init_qtsensors_Smoke(), used by all .cpp files
extern "C" SMOKE_EXPORT Smoke* qtsensors_Smoke;
extern "C" SMOKE_EXPORT void init_qtsensors_Smoke();
extern "C" SMOKE_EXPORT void delete_qtsensors_Smoke();

#ifndef QGLOBALSPACE_CLASS
#define QGLOBALSPACE_CLASS
class QGlobalSpace { };
#endif

#endif
