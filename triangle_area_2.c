// #include <stdio.h>
// #include <math.h>

// float area (float a, float b, float c);
// int isValidTriangle(float a, float b, float c);

// int main() {
//     float a, b, c;
//     printf("Enter the lengths of the three sides of the triangle: ");
//     scanf("%f%f%f", &a, &b, &c);

//     // Check if the sides form a valid triangle
//     if (isValidTriangle(a, b, c)) {
//         printf("Area of the triangle is: %.2f", area(a, b, c));
//     } else {
//         printf("The given sides do not form a valid triangle.");
//     }

//     return 0;
// }

// // Function to calculate area using Heron's formula
// float area (float a, float b, float c) {
//     float s = (a + b + c) / 2;  // Semi-perimeter
//     return sqrt(s * (s - a) * (s - b) * (s - c));  // Heron's formula
// }

// // Function to check if the sides form a valid triangle
// int isValidTriangle(float a, float b, float c) {
//     return (a + b > c) && (a + c > b) && (b + c > a);
// }


#include <stdio.h>
#include <math.h>
float area (float a, float b,float c)
{
float s=(a+b+c)/2;
return sqrt(s*(s-a)*(s-b)*(s-c));
}

int main()
{

float a,b,c;
float area (float a, float b,float c);


printf("Enter size of each sides of triangle: ");
scanf("%f%f%f",&a,&b,&c);
printf("Area of the triangle is: %f",area(a,b,c));
return 0;
}


