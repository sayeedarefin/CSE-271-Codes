#include <stdio.h>

int main() {
    
    int* p1, p2;
    
     p2 = 5;
     p1= &p2;

     //changing the value of a pointer
     p2= 1;
    
    printf("%d \n", *p1);
    printf("%d", p2);

    return 0;
}