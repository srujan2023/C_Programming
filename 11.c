#include<stdio.h>

int sumtwo(int a,int b);

int main(){
    int a = 50,b = 30,c;
    c = sumtwo(a,b);
    printf("Addition two numbers values::%d",c);
    return 0;
}

int sumtwo(int a,int b){
    return a + b;
}