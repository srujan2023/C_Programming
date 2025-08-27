#include<string.h>
#include<stdio.h>

int main(){
    char name[50],mail[50],phone[11],aadhar[15];
    printf("Enter your name\n");
    gets(name);
    printf("Enter your mail Id\n");
    gets(mail);
    printf("Enter your Phone Number\n");
    gets(phone);
    printf("Enter your aadher Number\n");
    gets(aadhar);
    printf("====================================================================\n");
    printf("==============================Your Details=================================\n");
    puts(name);
    puts(mail);
    puts(phone);
    puts(aadhar);
    return 0;
}