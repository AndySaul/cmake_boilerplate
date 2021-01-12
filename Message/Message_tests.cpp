
#include "Message.h"

#include <gmock/gmock.h>

using namespace message;
using namespace std::string_literals;

using namespace ::testing;

TEST(Message, displays_hello_world)
{
  EXPECT_EQ("Hello, World!"s, greeting());
}

class Widget
{
public:
  virtual ~Widget() = default;

  virtual void doSomething() = 0;
  virtual int add(int x, int y) const = 0;
};

class MockWidget : public Widget
{
public:
  MOCK_METHOD(void, doSomething, (), (override));
  MOCK_METHOD(int, add, (int x, int y), (const, override));
};

auto Use(Widget &widget)-> int
{
  widget.doSomething();
  return widget.add(1, 2);
}

TEST(Message, calls_widget_add_when_passed_to_func)
{
  MockWidget widget;
  EXPECT_CALL(widget, add(1, 2)).WillOnce(Return(42));
  EXPECT_CALL(widget, doSomething());

  auto const result = Use(widget);

  EXPECT_EQ(42, result);
}