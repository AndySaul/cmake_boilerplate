#include "Gadget.h"

#include <gmock/gmock.h>

using namespace AndySaul::Widget;

using namespace ::testing;

TEST(Gadget, combines_two_values_with_equal_weights)
{
  Gadget gadget;

  EXPECT_EQ(3, gadget.combine(1, 2));
}
