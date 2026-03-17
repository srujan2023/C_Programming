#include<stdio.h>

int main(){

    int a,b,choice;

    printf("Enter A:",a);
    scanf("%d",&a);

    printf("Enter B:",b);
    scanf("%d",&b);

    printf("1.Add\n 2.Subtract\n Enter Your choice>>");
    scanf("%d",&choice);
    
    switch(choice){
        case 1:
        printf("%d",a+b);
        break;

        case 2:
        printf("%d",a-b);
        break;

        default:
        printf("Invalid Option! Try Again!");
    }
}