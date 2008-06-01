#ifndef QTWEBKIT_SMOKE_H
#define QTWEBKIT_SMOKE_H

#include <smoke.h>

// Defined in smokedata.cpp, initialized by init_qsci_Smoke(), used by all .cpp files
extern SMOKE_EXPORT Smoke* qtwebkit_Smoke;
extern SMOKE_EXPORT void init_qtwebkit_Smoke();

#ifndef QGLOBALSPACE_CLASS
#define QGLOBALSPACE_CLASS
class QGlobalSpace { };
#endif

#endif
