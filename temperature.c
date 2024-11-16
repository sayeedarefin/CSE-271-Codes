#include<stdio.h>
int main(){
    float c, farenheit;
    printf("Enter tha temperature in Celcius:  \n");
    scanf("%f", &c);
    farenheit=((9*c)/5)+32;
    printf("Your Entered temperature is %f and The farenheit value is: %.2f: " ,c,farenheit);

    return 0;
}