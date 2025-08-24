#include<stdio.h>

 int main(){
    int num1 = 20, num2 = 10;
    printf("Before Swaping\n");
    printf("Value num1:%d\n",num1);
    printf("Value num2:%d\n",num2);
   int temp = num1;
    num1 = num2;
    num2 = temp;
    printf("After Swaping\n");
    printf(" Value num1:%d\n",num1);
    printf(" Value num2:%d\n",num2);

    return 0;
 }