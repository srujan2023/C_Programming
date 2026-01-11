#include<stdio.h>
int main(){
    int x = 10, y = 5 ,z = 2;
    x=y++ * z--;
    y=++x - --z;
    z=x++ + y--;
    printf("%d %d %d",x + y*2 + z * 3);
    return 0;
}