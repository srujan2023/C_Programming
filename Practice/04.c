#include<stdio.h>

int main(){
    int num1 = 35;
    num1++; //post-increment operator
    printf("The value of num1 is: %d\n", num1);
    ++num1; //pre-increment operator
    printf("The value of num1 is: %d\n", num1);
    return 0;
}