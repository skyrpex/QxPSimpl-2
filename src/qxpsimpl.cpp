#include "include/qxpsimpl.h"
#include "../psimpl/psimpl.h"
#include <QPolygonF>
#include <QVector>

static QVector<qreal> toVector(const QPolygonF& polygon)
{
    QVector<qreal> vector;
    for(const auto point : polygon) {
        vector << point.x() << point.y();
    }
    return vector;
}

static QPolygonF fromVector(const QVector<qreal> &vector)
{
    QPolygonF polygon;
    for(int i = 0; i < vector.count(); i += 2) {
        polygon << QPointF(vector.at(i), vector.at(i+1));
    }
    return polygon;
}

QPolygonF QxPSimpl::simplifyNthPoint(const QPolygonF &polygon, uint n)
{
    QVector<qreal> simplified;
    const auto vector = toVector(polygon);
    psimpl::simplify_nth_point<2>(vector.constBegin(), vector.constEnd(), n, std::back_inserter(simplified));
    return fromVector(simplified);
}

QPolygonF QxPSimpl::simplifyRadialDistance(const QPolygonF &polygon, qreal tolerance)
{
    QVector<qreal> simplified;
    const auto vector = toVector(polygon);
    psimpl::simplify_radial_distance<2>(vector.constBegin(), vector.constEnd(), tolerance, std::back_inserter(simplified));
    return fromVector(simplified);
}

QPolygonF QxPSimpl::simplifyPerpendicularDistance(const QPolygonF &polygon, qreal tolerance, uint n)
{
    QVector<qreal> simplified;
    const auto vector = toVector(polygon);
    psimpl::simplify_perpendicular_distance<2>(vector.constBegin(), vector.constEnd(), tolerance, n, std::back_inserter(simplified));
    return fromVector(simplified);
}

QPolygonF QxPSimpl::simplifyReumannWitkam(const QPolygonF &polygon, qreal tolerance)
{
    QVector<qreal> simplified;
    const auto vector = toVector(polygon);
    psimpl::simplify_reumann_witkam<2>(vector.constBegin(), vector.constEnd(), tolerance, std::back_inserter(simplified));
    return fromVector(simplified);
}

QPolygonF QxPSimpl::simplifyOpheim(const QPolygonF &polygon, qreal minTolerance, qreal maxTolerance)
{
    QVector<qreal> simplified;
    const auto vector = toVector(polygon);
    psimpl::simplify_opheim<2>(vector.constBegin(), vector.constEnd(), minTolerance, maxTolerance, std::back_inserter(simplified));
    return fromVector(simplified);
}

QPolygonF QxPSimpl::simplifyLang(const QPolygonF &polygon, qreal tolerance, uint lookAhead)
{
    QVector<qreal> simplified;
    const auto vector = toVector(polygon);
    psimpl::simplify_lang<2>(vector.constBegin(), vector.constEnd(), tolerance, lookAhead, std::back_inserter(simplified));
    return fromVector(simplified);
}

QPolygonF QxPSimpl::simplifyDouglasPeucker(const QPolygonF &polygon, qreal tolerance)
{
    QVector<qreal> simplified;
    const auto vector = toVector(polygon);
    psimpl::simplify_douglas_peucker<2>(vector.constBegin(), vector.constEnd(), tolerance, std::back_inserter(simplified));
    return fromVector(simplified);
}

QPolygonF QxPSimpl::simplifyDouglasPeuckerN(const QPolygonF &polygon, uint vertices)
{
    QVector<qreal> simplified;
    const auto vector = toVector(polygon);
    psimpl::simplify_douglas_peucker_n<2>(vector.constBegin(), vector.constEnd(), vertices, std::back_inserter(simplified));
    return fromVector(simplified);
}
