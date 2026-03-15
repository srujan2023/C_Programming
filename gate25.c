#include<stdio.h>
int fun (int i){
    return i++;
}

int main(){
    int sum = 0;
    for(int j = 0; j<10; j++)
    sum+=fun(j);
printf("%d",sum);
return 0;
}