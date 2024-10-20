// #include<stdio.h>
// float area(base,height){
//         return 0.5*base*height;
//     }
// int main(){
//     int base, height;
    
//     printf("Enter the value of base: \n");
//     scanf("%d", &base);
//     printf("Enter the value of height: \n");
//     scanf("%d", &height);
//     // int area = 0.5*base*height;
//     printf("The area is: %.3f", area(base,height));
//     return 0;
// }

#include<stdio.h>

// Function to calculate the area of a triangle
float area(float base, float height) {
    return 0.5 * base * height;  // 0.5 will give a floating-point result
}

int main() {
    float base, height;

    // Input the values
    printf("Enter the value of base: \n");
    scanf("%f", &base);
    printf("Enter the value of height: \n");
    scanf("%f", &height);

    // Calling the area function and displaying the result
    printf("The area is: %.2f", area(base, height));  // %.2f for two decimal places

    return 0;
}
