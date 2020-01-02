#include "Message.h"

#include <gtest/gtest.h>

TEST(Message, displays_hello_world)
{
  EXPECT_STREQ("Hello, World!", message::greeting().c_str());
}
