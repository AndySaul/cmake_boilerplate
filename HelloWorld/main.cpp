#include "Gadget.h"
#include "Message.h"
#include "Version.h"

#include <iostream>

using namespace AndySaul;
using namespace Widget;
namespace v = version;

extern "C" void hello_from_rust();

int main(int /*argc*/, char ** /*argv*/)
{
  std::cout << "Version " << v::MAJOR << "." << v::MINOR << '\n';
  std::cout << message::greeting() << '\n';

  std::cout << "Using the Widget lib:\n";
  Gadget gadget;
  std::cout << "gadget.combine(1, 2): " << gadget.combine(1, 2) << '\n';

  hello_from_rust();

  return 0;
}
