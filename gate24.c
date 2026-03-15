#include<stdio.h>
int fun(int i){
    while(i<20){
        i++;
        if(i%2) continue;

    }
    return i;

}
int main(){
    printf("%d",fun(2+4%6*2+9/10));
    return 0;
}