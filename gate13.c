#include<stdio.h>

int main(){
    int a=4,b=6,c=3;
    a=b++ + --c;
    b= a-- - c++;
        printf("%d",a * 100 + b * 10 + c);
    return 0;
}