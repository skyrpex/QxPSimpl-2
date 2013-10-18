#pragma once

#include "qxpsimpl_global.h"

class QPolygonF;

class QXPSIMPL_EXPORT QxPSimpl
{
public:
    static QPolygonF simplifyNthPoint(const QPolygonF &polygon, uint n);
    static QPolygonF simplifyRadialDistance(const QPolygonF &polygon, qreal tolerance);
    static QPolygonF simplifyPerpendicularDistance(const QPolygonF &polygon, qreal tolerance, uint n = 0);
    static QPolygonF simplifyReumannWitkam(const QPolygonF &polygon, qreal tolerance);
    static QPolygonF simplifyOpheim(const QPolygonF &polygon, qreal minTolerance, qreal maxTolerance);
    static QPolygonF simplifyLang(const QPolygonF &polygon, qreal tolerance, uint lookAhead);
    static QPolygonF simplifyDouglasPeucker(const QPolygonF &polygon, qreal tolerance);
    static QPolygonF simplifyDouglasPeuckerN(const QPolygonF &polygon, uint vertices);
};
