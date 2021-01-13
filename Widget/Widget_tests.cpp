#include "Widget.h"

#include <gmock/gmock.h>

using AndySaul::Widget;

using namespace ::testing;

class MockWidget : public Widget
{
public:
  MOCK_METHOD(void, doSomething, (), (override));
  MOCK_METHOD(int, add, (int x, int y), (const, override));
};

auto Use(Widget &widget) -> int
{
  widget.doSomething();
  return widget.add(1, 2);
}

TEST(Widget, free_function_uses_widget_to_do_something)
{
  MockWidget widget;
  EXPECT_CALL(widget, doSomething());
  EXPECT_CALL(widget, add(1, 2)).WillOnce(Return(42));

  auto const result = Use(widget);

  EXPECT_EQ(42, result);
}