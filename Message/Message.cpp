#include "Message.h"

using namespace message;
using namespace std::string_literals;

auto message::greeting() -> std::string
{
  return "Hello, World!"s;
}
