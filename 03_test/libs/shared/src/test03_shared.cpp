#include <stdio.h>
#include <iostream>

int function_shared_test03(int arg0)
{
  #if 1
    std::cout << std::endl << "--------------------------------------------------" << std::endl << std::endl;
    std::cout << "hi, test03" << std::endl;
    std::cout << "Run function: " << __func__ << " in " << __FILE__ <<  std::endl;
    std::cout << "get argo is 0x" << arg0 << std::endl;
    std::cout << std::endl << "--------------------------------------------------" << std::endl;
  #endif

  return (arg0 + 1);
}
