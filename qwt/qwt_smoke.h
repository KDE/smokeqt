#ifndef QWT_SMOKE_H
#define QWT_SMOKE_H

#include <smoke.h>

// Defined in smokedata.cpp, initialized by init_qsci_Smoke(), used by all .cpp files
extern SMOKE_EXPORT Smoke* qwt_Smoke;
extern SMOKE_EXPORT void init_qwt_Smoke();

#ifndef QGLOBALSPACE_CLASS
#define QGLOBALSPACE_CLASS
class QGlobalSpace { };
#endif

#endif
