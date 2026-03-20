#include<stdio.h>

void greet(){
    printf("Hello, World!\n");
}

int add(int a, int b){
    int c;
    c = a + b;
    return c;
}

int main(){
    int sum, n, m;
greet();
printf("Enter two numbers: ");
scanf("%d %d", &n, &m);
sum = add(n, m);
printf("The sum is: %d\n", sum);
return 0;
}