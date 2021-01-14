
#ifndef ANDYSAUL_WIDGET_H
#define ANDYSAUL_WIDGET_H

namespace AndySaul::Widget {

class Widget
{
public:
  virtual ~Widget() = default;

  virtual void doSomething() = 0;
  virtual int combine(int x, int y) const = 0;
};

int Use(Widget &widget);

} // namespace AndySaul::Widget

#endif // ANDYSAUL_WIDGET_H
