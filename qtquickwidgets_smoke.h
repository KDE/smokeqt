#ifndef QTQUICKWIDGETS_SMOKE_H
#define QTQUICKWIDGETS_SMOKE_H

#include <smoke.h>

// Defined in smokedata.cpp, initialized by init_qquickwidgets_Smoke(), used by all .cpp files
extern "C" SMOKE_EXPORT Smoke* qtquickwidgets_Smoke;
extern "C" SMOKE_EXPORT void init_qtquickwidgets_Smoke();
extern "C" SMOKE_EXPORT void delete_qtquickwidgets_Smoke();

#ifndef QGLOBALSPACE_CLASS
#define QGLOBALSPACE_CLASS
class QGlobalSpace { };
#endif

#endif
