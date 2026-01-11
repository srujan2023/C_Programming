#include<stdio.h>
int  main(){
    int m = 5,n =6,k = 7;
    m = n++ - --k;
    n = m++ + k--;
    k = ++m + --n;
    printf("%d",m*100 + n*10 + k);
    return 0;
}