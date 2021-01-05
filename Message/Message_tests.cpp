
#include "Message.h"

#include <gtest/gtest.h>

using namespace message;
using namespace std::string_literals;

TEST(Message, displays_hello_world)
{
  EXPECT_EQ("Hello, World!"s, greeting());
}