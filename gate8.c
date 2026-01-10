#include <stdio.h>
 
 int x = 40;
 
int main(){
    int x = 30;
    {
        int x = 20;
        {
             int x = 80;
            printf("%d",x);
        }
    }
    return 0;
}