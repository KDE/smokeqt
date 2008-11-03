#ifndef QTTEST_SMOKE_H
#define QTTEST_SMOKE_H

#include <smoke.h>

// Defined in smokedata.cpp, initialized by init_qtest_Smoke(), used by all .cpp files
extern SMOKE_EXPORT Smoke* qttest_Smoke;
extern SMOKE_EXPORT void init_qttest_Smoke();

#ifndef QGLOBALSPACE_CLASS
#define QGLOBALSPACE_CLASS
class QGlobalSpace { };
#endif

#endif
