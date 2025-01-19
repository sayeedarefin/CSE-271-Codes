// #include<stdio.h>

// int main(){
//     int a,b,sum,sub,mul,div;
//     printf("Please enter two valid numbers");
//     scanf("%d%d", &a, &b);

//     sum= a+b;
//     sub= a-b;
//     mul= a*b;
//     div= a/b;
//     printf("Sum is: \n",sum);
//     printf("Sub is: \n" ,sub);
//     printf("Mul is: \n" ,mul);
//     printf("Div is: \n" ,div);
// }



#include<stdio.h>

int main() {
    int a, b, sum, sub, mul;
    float div;

    // Prompt the user to enter two numbers
    printf("Please enter two valid numbers: ");
    
    // Correctly reading the input from the user
    scanf("%d %d", &a, &b);

    // Performing the operations
    sum = a + b;
    sub = a - b;
    mul = a * b;
    div = (float)a / b; // Casting to float for division to handle decimal values

    // Printing the results
    printf("Sum is: %d\n", sum);
    printf("Subtraction is: %d\n", sub);
    printf("Multiplication is: %d\n", mul);
    printf("Division is: %.2f\n", div); // Display division with two decimal points

    return 0;
}
