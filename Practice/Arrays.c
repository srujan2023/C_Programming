#include<stdio.h>

int main(){
    int n=4,i;
    int marks[n];
    double Average;
    int sum=0;
    printf("Enter First Test Marks\n");

    for(i=0;i<n;i++){
    scanf("%d",&marks[i]);
    }
    marks[0] = 100;

    marks[n-1] = 100;


    printf("This is Your Student Marks\n");
    for(i=0;i<n;i++){
    printf("%d ",marks[i]);
    sum=sum+marks[i];
    }
    Average=sum/4;
    printf("\nAverage Marks: %.2f",Average);
}