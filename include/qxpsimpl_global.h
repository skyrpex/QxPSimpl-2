#pragma once

#include <QtGlobal>

#if defined(QXPSIMPL_LIBRARY)
#  define QXPSIMPL_EXPORT Q_DECL_EXPORT
#else
#  define QXPSIMPL_EXPORT Q_DECL_IMPORT
#endif
