#include <stdio.h>
#include <iostream>
#include "test03.h"

using namespace std;
using std::string;

int main()
{

  std::cout <<  std::endl << "===================================================" << std::endl;
  std::cout << "start of " << __func__ << " in " << __FILE__ <<  std::endl;
  std::cout << "Hello test03 " << std::endl << std::endl;

  //TODO//
  //#define TRY_ALL 1
  #define TRY_ALL 0

  #if TRY_ALL
    say_hello03();
  #endif

  //printf("Try to call function_shared_test03(1), get: 0x%x "
  //    , function_shared_test03(1)
  //    );

  #if 1
  std::cout << "Try to call function_shared_test03(1), get: " <<function_shared_test03(1) << std::endl;
  #endif

  #if TRY_ALL
    int inputdata;
  //exmaple the standard cout/cin/endl
    std::cout << "Hello cpp!" << std::endl;
    std::cout << "Please input your data: " << std::endl;
    std::cin >> inputdata;
    std::cout << "your inputdata is: " <<inputdata << std::endl;
  #endif

  #if TRY_ALL
  {
    int inputdata1;
  //example of specifying the cout/cin/endl
    using std::cout;
    using std::endl;
    using std::cin;
    std::cout << "Hello cpp!" << std::endl;
    std::cout << "Please input your data: " << std::endl;
    cin >> inputdata1;
    std::cout << "your inputdata1 is: " <<inputdata1 << std::endl;
  }
  #endif

  #if TRY_ALL
    int inputdata2;
  //example of specifying the namespace
    using namespace std;
    std::cout << "Hello cpp!" << std::endl;
    std::cout << "Please input your data: " << std::endl;
    std::cin >> inputdata2;
    std::cout << "your inputdata2 is: " << inputdata2 << std::endl;
  #endif

  #if TRY_ALL
    int inputdata3;
    //int outputdata;
    int *p;

    inputdata3 = 20;
    p = &inputdata3;
    std::cout << "#pinter test#try to use the pointer" << std::endl;
    std::cout << "data is " << *p << std::endl;
  #endif

  std::cout << " ^-^ " << std::endl;

  #if TRY_ALL
  //#####struct test example
  struct_test_qshan();
  #endif

  #if TRY_ALL
  //#####class test example
  class_test_qshan();
  #endif


  std::cout <<  std::endl << "end of " << __func__ << " in " << __FILE__ <<  std::endl;
  std::cout << "Bye test03 ^-^" << std::endl;
  std::cout << "===================================================" << std::endl;

  return 0;
}
