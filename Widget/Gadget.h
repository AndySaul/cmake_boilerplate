#ifndef ANDYSAUL_GADGET_H
#define ANDYSAUL_GADGET_H

#include "Widget.h"

namespace AndySaul::Widget {

class Gadget : public Widget
{
public:
  void doSomething() override;
  int combine(int a, int b) const override;
};

} // namespace AndySaul::Widget

#endif // ANDYSAUL_GADGET_H
