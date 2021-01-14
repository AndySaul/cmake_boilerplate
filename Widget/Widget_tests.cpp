#include "Widget.h"
#include "Gadget.h"

#include <gmock/gmock.h>

using namespace AndySaul::Widget;

using namespace ::testing;

class MockWidget : public Widget
{
public:
  MOCK_METHOD(void, doSomething, (), (override));
  MOCK_METHOD(int, combine, (int x, int y), (const, override));
};

auto Use(Widget &widget) -> int
{
  widget.doSomething();
  return widget.combine(1, 2);
}

TEST(Widget, free_function_uses_widget_to_do_something)
{
  MockWidget widget;
  EXPECT_CALL(widget, doSomething());
  EXPECT_CALL(widget, combine(1, 2)).WillOnce(Return(42));

  auto const result = Use(widget);

  EXPECT_EQ(42, result);
}

TEST(Gadget, combines_two_values_with_equal_weights)
{
  Gadget gadget;

  EXPECT_EQ(3, gadget.combine(1,2));
}