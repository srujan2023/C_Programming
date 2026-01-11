#include<stdio.h>
int main(){
    int p = 3,q = 4,r=5;
    p = q++ + r--;
    q = --p + r++;
    r = p++ - --q;
    printf("%d ",p*q+r);
    return 0;
}