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

  say_hello03();

  //printf("Try to call function_shared_test03(1), get: 0x%x "
  //    , function_shared_test03(1)
  //    );

  //cout << "Try to call function_shared_test03(1), get: 0x%x \n" <<inputdata << std::endl;
  cout << "Try to call function_shared_test03(1), get: " <<function_shared_test03(1) << std::endl;


    int inputdata;
    //int outputdata;
    int *p;

#if 0
//exmaple the standard cout/cin/endl
    std::cout << "Hello cpp!" << std::endl;
    std::cout << "Please input your data: " << std::endl;
    std::cin >> inputdata;
    std::cout << "your inputdata is: " <<inputdata << std::endl;
#endif

#if 0
{
//example of specifying the cout/cin/endl
    using std::cout;
    using std::endl;
    using std::cin;
    cout << "Hello cpp!" << std::endl;
    cout << "Please input your data: " << std::endl;
    cin >> inputdata;
    cout << "your inputdata is: " <<inputdata << std::endl;
}
#endif

#if 0
//example of specifying the namespace
    using namespace std;
    cout << "Hello cpp!" << std::endl;
    cout << "Please input your data: " << std::endl;
    cin >> inputdata;
    cout << "your inputdata is: " <<inputdata << std::endl;
#endif


    std::cout << " ^-^ " << std::endl;

    inputdata = 20;
    p = &inputdata;
    std::cout << "#pinter test#try to use the pointer" << std::endl;
    std::cout << "data is " << *p << std::endl;

//#####struct test example
    struct_test_qshan();

//#####class test example
    class_test_qshan();



  std::cout <<  std::endl << "end of " << __func__ << " in " << __FILE__ <<  std::endl;
  std::cout << "Bye test03 ^-^" << std::endl;
  std::cout << "===================================================" << std::endl;

    return 0;


}
