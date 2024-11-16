#include<stdio.h>

int main(){
    int a, b, temp;
    
    printf("Enter 2 valid numbers: \n");
    scanf("%d %d", &a, &b);
    
    printf("Numbers before swapping: a = %d, b = %d\n", a, b);
    
    temp = a;  
    a = b;     
    b = temp;  
    printf("Numbers after swapping: a = %d, b = %d\n", a, b);
    
    return 0;
}
