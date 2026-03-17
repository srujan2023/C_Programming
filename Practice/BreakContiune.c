#include<stdio.h>

int main(){
    int i;
    float number,sum=0;

for(i=0;i<10;i++){
    printf("Enter n%d: ",i+1);
    scanf("%f",&number);

    if(number<0){
        // break; //Break the Entire Loop
        // continue; //Break the Current Iteration
    }
    sum += number;
    printf("Present Sum:%f\n",sum);
    }
    printf("Total Sum:%f\n",sum);

}