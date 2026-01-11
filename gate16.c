#include<stdio.h>
int main(){
    int a=2,b=3,c=4;
    a = b++ * --c;
    b = a-- + c++;
    c = --a + b++;
    printf("%d",a*a + b*b + c*c);
    return 0;
}