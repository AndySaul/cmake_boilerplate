#include "Message.h"
#include "Version.h"

#include <iostream>

using namespace AndySaul::version;

int main(int /*argc*/, char *argv[])
{
  std::cout << argv[0] << " Version " << MAJOR << "." << MINOR << '\n';
  std::cout << message::greeting() << '\n';

  return 0;
}
