#ifndef QTWEBENGINECORE_SMOKE_H
#define QTWEBENGINECORE_SMOKE_H

#include <smoke.h>

// Defined in smokedata.cpp, initialized by init_qtwebenginecore_Smoke(), used by all .cpp files
extern "C" SMOKE_EXPORT Smoke* qtwebenginecore_Smoke;
extern "C" SMOKE_EXPORT void init_qtwebenginecore_Smoke();
extern "C" SMOKE_EXPORT void delete_qtwebenginecore_Smoke();

#ifndef QGLOBALSPACE_CLASS
#define QGLOBALSPACE_CLASS
class QGlobalSpace { };
#endif

#endif
