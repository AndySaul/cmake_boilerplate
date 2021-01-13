
#ifndef ANDYSAUL_WIDGET_H
#define ANDYSAUL_WIDGET_H

namespace AndySaul {

class Widget
{
public:
  virtual ~Widget() = default;

  virtual void doSomething() = 0;
  virtual int add(int x, int y) const = 0;
};

} // namespace AndySaul

#endif // ANDYSAUL_WIDGET_H
