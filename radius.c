// #include<stdio.h>
// #define PI acos(-1) //constant value

// int main(){
//     double radius, diameter, area;
//     scanf("%lf" , &radius);
//     diameter = 2*radius;
//     area= PI*radius*radius;

//     printf("Diameter = %1f\n area= %0.2lf", diameter, area);

//     return 0; 
// }




#include <stdio.h>
#include <math.h> // for acos()

#define PI acos(-1) // Constant value for PI

int main() {
    double radius, diameter, area;
    printf("Enter the value of radius: ");
    scanf("%lf", &radius);
    
    diameter = 2 * radius;
    area = PI * radius * radius;

    printf("Diameter = %.1f\nArea = %.2lf\n", diameter, area);

    return 0; 
}
