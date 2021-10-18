#include <stdio.h>
#include <iostream>

using namespace std;
using std::string;

int say_hello03()
{
  #if 1

    std::cout << std::endl << "--------------------------------------------------" << std::endl << std::endl;
    std::cout << "Hello, test03" << std::endl;
    std::cout << "Run function: " << __func__ << " in " << __FILE__ <<  std::endl;

    //add function body here

    std::cout << std::endl << "--------------------------------------------------" << std::endl;
  #endif

  return 0;
}
