#include<stdio.h>

int main(){
    int array[10];
    printf("Add Element to the Array:\n");
    for(int i=0; i < 5; i++ ){
        scanf("%d",&array[i]);
    }
    printf("Values Of ararys::\n");
    for(int i=0;i<5;i++){
        printf(" %d ",array[i]);
    }
    return 0;
}