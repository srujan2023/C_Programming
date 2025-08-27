#include<string.h>
#include<stdio.h>

int main(){
    char s1[] = "Srujan";
    char s2[] = "ffoorthi";
    char s3[10];
    printf("%d \n",strcmp(s1,s2));
    puts(strcpy(s3,s1));
    return 0;
}