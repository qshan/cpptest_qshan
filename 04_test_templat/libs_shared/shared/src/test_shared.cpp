#include <stdio.h>

int function_shared_test(int arg0)
{
  #if 0
    printf("\n");
    printf("-------------------------------------------------- \n");
    printf("hi, test\n");
    printf("Here is the funciton %s \n", __func__);
    printf("the argo is 0x%x\n",arg0);
    printf("-------------------------------------------------- \n");
    printf("\n");
  #endif
  return (arg0 + 1);
}
