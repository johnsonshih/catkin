#include <iostream>

#if defined(MSVC)
  #define OUTPUT_FUNCTION_NAME __FUNCSIG__
#else
  #define OUTPUT_FUNCTION_NAME __PRETTY_FUNCTION__
#endif

int main(int, char**)  {
  std::cout << OUTPUT_FUNCTION_NAME << "\n";
}
