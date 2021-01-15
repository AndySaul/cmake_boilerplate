#include "Message.h"
#include "Version.h"

#include <iostream>

using namespace AndySaul;
namespace v = version;

int main(int /*argc*/, char **argv)
{
  std::cout << "Version " << v::MAJOR << "." << v::MINOR << '\n';
  std::cout << message::greeting() << '\n';

  return 0;
}
