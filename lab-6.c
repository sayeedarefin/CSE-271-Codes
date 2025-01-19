// #include <stdio.h>

// int main() {
//     int num1, num2;
//     char operator;

//     printf("Enter two numbers and an operator: ");
//     scanf("%d %d %c", &num1, &num2, &operator);

//     if (operator == '+') {
//         printf("Result: %d\n", num1 + num2);
//     } else if (operator == '-') {
//         printf("Result: %d\n", num1 - num2);
//     } else if (operator == '*') {
//         printf("Result: %d\n", num1 * num2);
//     } else if (operator == '/') {
//         if (num2 != 0) {
//             printf("Result: %.2f\n", (float)num1 / num2);
//         } else {
//             printf("Error\n");
//         }
//     } else {
//         printf("Invalid\n");
//     }
//     }


// #include <stdio.h>

// int main() {
//     int num;

//     printf("Enter a number (0-9): ");
//     scanf("%d", &num);

//     if (num == 0) {
//         printf("Zero\n");
//     } else if (num == 1) {
//         printf("One\n");
//     } else if (num == 2) {
//         printf("Two\n");
//     } else if (num == 3) {
//         printf("Three\n");
//     } else if (num == 4) {
//         printf("Four\n");
//     } else if (num == 5) {
//         printf("Five\n");
//     } else if (num == 6) {
//         printf("Six\n");
//     } else if (num == 7) {
//         printf("Seven\n");
//     } else if (num == 8) {
//         printf("Eight\n");
//     } else if (num == 9) {
//         printf("Nine\n");
//     } else {
//         printf("Invalid\n");
//     }

//     return 0;
// // }


// take number as input and print them untill number =0 is terminated and stops scanning

// sample input: 1,2,3
// output: 1,2,3

// sample input :0
// output: terminated


#include <stdio.h>

void processNumber() {
    int num;

    scanf("%d", &num);

    if (num == 0) {
        printf("Terminated\n");
        return; 
    }

}