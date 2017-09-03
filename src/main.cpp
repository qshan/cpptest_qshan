/*
 * main.cpp
 *
 *  Created on: Oct 26, 2016
 *      Author: fshan
 */

#include <stdio.h>
#include <iostream>
#include "practice_cpp.h"

using namespace std;
using std::string;

int main()
{
    int inputdata;
    int outputdata;
    int *p;

#if 0
//exmaple the standard cout/cin/endl
    std::cout << "Hello cpp!" << std::endl;
    std::cout << "Please input your data: " << std::endl;
    std::cin >> inputdata;
    std::cout << "your inputdata is: " <<inputdata << std::endl;
#endif

#if 0
//example of specifying the cout/cin/endl
    using std::cout;
    using std::endl;
    using std::cin;
    cout << "Hello cpp!" << std::endl;
    cout << "Please input your data: " << std::endl;
    cin >> inputdata;
    cout << "your inputdata is: " <<inputdata << std::endl;
#endif

#if 0
//example of specifying the namespace
    using namespace std;
    cout << "Hello cpp!" << std::endl;
    cout << "Please input your data: " << std::endl;
    cin >> inputdata;
    cout << "your inputdata is: " <<inputdata << std::endl;
#endif


    cout << "^-^ " << std::endl;

    inputdata = 20;
    p = &inputdata;
    cout << "#pinter test#try to use the pointer" << std::endl;
    cout << "data is " << *p << std::endl;

//#####struct test example
    struct_test_qshan();

//#####class test example
    class_test_qshan();




///////////////////////////////////////////////////////////////////////////////
    //printf("\n##this is end of %s in %s##\n", __func__, __FILE__);
    //printf("\n^-^ ##this is end of cpptest_qshan## ^-^\n");
    cout << std::endl  << std::endl;
    cout << "##this is end of## " << __func__ << " in " << __FILE__ <<  std::endl;
    cout << "##this is end of cpptest_qshan## ^-^" <<  std::endl;
    return 0;
}

