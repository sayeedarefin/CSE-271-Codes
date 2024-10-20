// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int a,b,temp;
    printf("Enter two numbers: \n");
    scanf("%d%d", &a,&b);
    
    printf("Before Swapping \n a=%d \n b=%d \n", a,b);
    
    // temp=a;
    // a=b;
    // b=temp;
    
    // a= a+b;
    // b= a-b;
    // a=a-b;
    
    // a= a*b;
    // b=a/b;
    // a=a/b;
    
    a= a^b;
    b= a^b;
    a= a^b;
    
    printf("After Swapping \n a=%d \n b=%d", a,b);
    return 0;
}