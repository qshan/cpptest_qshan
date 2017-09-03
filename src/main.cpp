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

#if 1
//example of specifying the namespace
    using namespace std;
    cout << "Hello cpp!" << std::endl;
    cout << "Please input your data: " << std::endl;
    cin >> inputdata;
    cout << "your inputdata is: " <<inputdata << std::endl;
#endif




    cout << "your inputdata is: ";

    printf("\n##this is end of %s in %s##\n", __func__, __FILE__);
    printf("\n^-^ ##this is end of cpptest_qshan## ^-^\n");

    return 0;
}
