#include <stdio.h>
#include "say_hello_01.h"
#include "test01_shared.h"
int main()
{
  printf("\n");
  printf("===================================================\n");
  printf("hello test01 \n");
  printf("\n");

  say_hello01();
  printf("Try to call function_shared_test01(1), get: 0x%x \n"
      , function_shared_test01(1)
      );

  printf("\n");
  printf("Bye test01 \n");
  printf("===================================================\n");
  printf("\n");
  return 0;

}
