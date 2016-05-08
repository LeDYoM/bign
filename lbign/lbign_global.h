#ifndef LBIGN_GLOBAL_H
#define LBIGN_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(LBIGN_LIBRARY)
#  define LBIGNSHARED_EXPORT Q_DECL_EXPORT
#else
#  define LBIGNSHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // LBIGN_GLOBAL_H
