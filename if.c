#include<stdio.h>
int main(){
    int i;
    printf("Please enter a number: ");
    scanf("%d" , &i);
    if (i>=9)
    {
        printf("%d is greater than 9", i);
    }
    else{
        printf("%d is not greater than 9", i);
    }
    
}