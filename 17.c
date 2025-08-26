#include<stdio.h>

int main(){
    char name1[10] = "Srujan";
    char name2[10] = "Spoorthi";
    char name3[10];
    printf("%s \n",name1);
    puts(name2);
    printf("Enter your Name\n");
    scanf("%s",&name3);
    puts(name3);
    return 0;
}