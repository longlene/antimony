#include "control/csg/difference_control.h"
#include "ui/colors.h"

DifferenceControl::DifferenceControl(Canvas *canvas, Node *node)
    : TextLabelControl("A & ~B", Colors::green, canvas, node)
{
    // Nothing to do here
}