#include<stdio.h>

int main(){
    int chioce,num1 = 50 ,num2 = 50;
    printf("Enter your Chioce\n");
    scanf("%d",&chioce);
    if(chioce == 1){
        printf("Addition Value is:%d\n",num1+num2);
    }else{
        printf("Invalid Chioce");
    }
    return 0;
}