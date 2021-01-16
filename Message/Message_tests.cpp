
#include "Message.h"

#include <gmock/gmock.h>

using namespace message;
using namespace std::string_literals;

using namespace ::testing;

TEST(Message, displays_hello_world)
{
  EXPECT_EQ("Hello, World!"s, greeting());
}
