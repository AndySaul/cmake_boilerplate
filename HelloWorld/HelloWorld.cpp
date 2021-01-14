#include "Message.h"
#include "Version.h"

#include <iostream>

using namespace AndySaul;

int main(int /*argc*/, char **argv)
{
  std::cout << argv[0] << " Version " << version::MAJOR << "." << version::MINOR
            << '\n';
  std::cout << message::greeting() << '\n';

  return 0;
}
