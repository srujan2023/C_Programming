#include <stdio.h>

int main(){

    int num = 5; //3
    int num2 = 3;  //1
    int num3 = 2; //1
    
    num = num2++;
    num2 = --num3;

 printf("%d",num + num2 + num3);
    return 0;
}