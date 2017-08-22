#ifndef QTPOSITIONING_SMOKE_H
#define QTPOSITIONING_SMOKE_H

#include <smoke.h>

// Defined in smokedata.cpp, initialized by init_qtest_Smoke(), used by all .cpp files
extern "C" SMOKE_EXPORT Smoke* qtpositioning_Smoke;
extern "C" SMOKE_EXPORT void init_qtpositioning_Smoke();
extern "C" SMOKE_EXPORT void delete_qtpositioning_Smoke();

#ifndef QGLOBALSPACE_CLASS
#define QGLOBALSPACE_CLASS
class QGlobalSpace { };
#endif

#endif
