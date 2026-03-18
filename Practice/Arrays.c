#include<stdio.h>

int main(){
    int Marks[4],i;
    printf("Enter First Test Marks\n");

    for(i=0;i<4;i++){
    scanf("%d",&Marks[i]);
    }

    printf("This is Your Student Marks\n");
    for(i=0;i<4;i++){
    printf("%d ",Marks[i]);
    }
}