#ifndef PHONON_SMOKE_H
#define PHONON_SMOKE_H

#include <smoke.h>

// Defined in smokedata.cpp, initialized by init_qsci_Smoke(), used by all .cpp files
extern SMOKE_EXPORT Smoke* phonon_Smoke;
extern SMOKE_EXPORT void init_phonon_Smoke();

#ifndef QGLOBALSPACE_CLASS
#define QGLOBALSPACE_CLASS
class QGlobalSpace { };
#endif

#endif
