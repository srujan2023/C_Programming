#include<stdio.h>

int main(){
    char name[20] = "John Doe";
  const int Rollno = 20;   
    float marks = 90.75;
    char phoneno[10] = "7876543210";
    printf("Name: %s\n", name);     
    printf("Roll No: %d\n", Rollno);
    printf("Marks: %.2f\n", marks);
    printf("Phone No: %s\n", phoneno);
    return 0;
}