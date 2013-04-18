#ifndef qtqml_SMOKE_H
#define qtqml_SMOKE_H

#include <smoke.h>

// Defined in smokedata.cpp, initialized by init_qtqml_Smoke(), used by all .cpp files
extern "C" SMOKE_EXPORT Smoke* qtqml_Smoke;
extern "C" SMOKE_EXPORT void init_qtqml_Smoke();
extern "C" SMOKE_EXPORT void delete_qtqml_Smoke();

#ifndef QGLOBALSPACE_CLASS
#define QGLOBALSPACE_CLASS
class QGlobalSpace { };
#endif

#endif
