#include<stdio.h>
int main(){

    int l,w,area;

    printf("Enter the value of length: \n");
    scanf("%d", &l);

    printf("Enter the value of width: \n");
    scanf("%d", &w);

    area=l*w;

    printf("The area of rectangle is :%d \n", area);

    return 0;
}