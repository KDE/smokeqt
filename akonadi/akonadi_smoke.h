#ifndef AKONADI_SMOKE_H
#define AKONADI_SMOKE_H

#include <smoke.h>

extern SMOKE_EXPORT Smoke* akonadi_Smoke;
extern SMOKE_EXPORT void init_akonadi_Smoke();

#ifndef QGLOBALSPACE_CLASS
#define QGLOBALSPACE_CLASS
class QGlobalSpace { };
#endif

#endif
