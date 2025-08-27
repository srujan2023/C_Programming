#include<stdio.h>
#include<string.h>

int main(){
    char s1[] = "srujan";
    char s2[] = "Spoorthi";
    char s3[10];
    printf("Length of string is %d \n",strlen(s1));
    puts(strcat(s1,s2));
    printf("String join After %s",s1);
    return 0;
}