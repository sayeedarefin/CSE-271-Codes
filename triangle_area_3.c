#include<stdio.h>
int main(){
    float base, height, area;
    printf("Enter the value of base: ");
    scanf("%f", &base);
    printf("Enter the value of height: ");
    scanf("%f", &height);
    printf("The given base and height is: %.2f and %.2f: \n",base, height);
    area= 0.5*base*height;
    printf("The area is: %.2f", area);
    return 0; 
}