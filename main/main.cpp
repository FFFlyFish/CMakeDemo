#include <iostream>
#include "func.h"

int main()
{
   int a = 2;
   int b = 1;
   int ret = -1;
   func1(a, b, 1, ret);
   std::cout << a << " + " << b << " = " << ret << std::endl;
   func1(a, b, 2, ret);
   std::cout << a << " - " << b << " = " << ret << std::endl;
   return 0;
}
