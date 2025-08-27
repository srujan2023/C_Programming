#include<stdio.h>
#include<string.h>

int main(){
    char s1[] = "srujan";
    char s2[] = "Spoorthi";
    char s3[10];
    printf("Length of string is %d \n",strlen(s1));
    printf(" String Before Reverse\n");
    printf(" %s\n",s2);
    printf("String After Reverse \n",s2);
    printf( strrev(s2));
    return 0;
}