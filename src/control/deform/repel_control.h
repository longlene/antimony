#ifndef REPEL_CONTROL_H
#define REPEL_CONTROL_H

#include "control/wireframe.h"
#include "control/3d/sphere_control.h"

#include "ui/colors.h"

class RepelRadiusControl : public SphereRadiusControl
{
public:
    explicit RepelRadiusControl(Canvas* canvas, Node* node, QGraphicsItem* parent)
        : SphereRadiusControl(canvas, node, parent) {}
protected:
    QColor defaultPenColor() const override { return Colors::blue; }
};

////////////////////////////////////////////////////////////////////////////////
class RepelControl : public WireframeControl
{
public:
    explicit RepelControl(Canvas* canvas, Node* node);

protected:
    void drag(QVector3D center, QVector3D delta) override;
    QPointF inspectorPosition() const override;
    QVector<QVector<QVector3D>> lines() const override;

    QPointF baseInputPosition() const override;
    QPointF baseOutputPosition() const override;

    QColor defaultPenColor() const override { return Colors::blue; }
    RepelRadiusControl* radius;
};

#endif