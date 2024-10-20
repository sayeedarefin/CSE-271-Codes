// #include<stdio.h>
// int main(){
//     int num;
//     char ch;
//     float f;

//     printf("Enter the value of integer: ");
//     scanf("%d" , &num);
//     printf("Entered integer is: %d", num);

//     printf("Enter the value of character: ");
//     scanf("%c" , &ch);
//     printf("Entered character is: %d", ch);

//     printf("Enter the value of float: ");
//     scanf("%f" , &f);
//     printf("Entered float is: %d", f);

// }

#include<stdio.h>
int main(){
    int num;
    char ch;
    float f;

    printf("Enter the value of integer: ");
    scanf("%d" , &num); // Correct for integer input
    printf("Entered integer is: %d\n", num); // Correct for integer output

    printf("Enter the value of character: ");
    scanf(" %c" , &ch); // Use %c for character input, space before %c is to consume any leftover newline
    printf("Entered character is: %c\n", ch); // Use %c for character output

    printf("Enter the value of float: ");
    scanf("%f" , &f); // Use %f for float input
    printf("Entered float is: %f\n", f); // Use %f for float output

    return 0;
}
