#include <iostream>

#include <a/foo.hpp>

#if defined(MSVC)
  #define OUTPUT_FUNCTION_NAME __FUNCSIG__
#else
  #define OUTPUT_FUNCTION_NAME __PRETTY_FUNCTION__
#endif

namespace b {
  void foo() { 
    a::foo();
    std::cout << OUTPUT_FUNCTION_NAME << "\n";
  }
}
