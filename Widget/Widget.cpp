
#include "Widget.h"

int AndySaul::Widget::Use(Widget &widget)
{
  widget.doSomething();
  return widget.combine(1, 2);
}
