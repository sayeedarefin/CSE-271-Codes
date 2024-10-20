// #include<stdio.h>
// int main()
// {
//     int i;
//     printf("Enter your result score: ");
//     scanf("%d", &i);

//     if (i>=0 && i<=100)
//     {
//         if (i>=90)
//         {
//             printf("Your grade is 'A'");
//         }
//         else if (i>=80 && i<90)
//         {
//             printf("Your grade is 'B'");
//         }
//         else if (i>=70 && i<80)
//         {
//             printf("Your grade is 'C'");
//         }
//         else if (i>=60 && i<70)
//         {
//             printf("Your grade is 'D'");
//         }
//         else{
//             printf("You have failed");
//         }   
//     }
//     else{
//         printf("Invalid Score");
//     }
    
// }

#include<stdio.h>
int main()
{
    int i;
    char choice;

    do {
        printf("Enter your result score: ");
        scanf("%d", &i);

        if (i >= 0 && i <= 100) // Check for valid range
        {
            if (i >= 90)
            {
                printf("Your grade is 'A'\n");
            }
            else if (i >= 80)
            {
                printf("Your grade is 'B'\n");
            }
            else if (i >= 70)
            {
                printf("Your grade is 'C'\n");
            }
            else if (i >= 60)
            {
                printf("Your grade is 'D'\n");
            }
            else
            {
                printf("Your grade is 'F'\n");
            }
        }
        else
        {
            printf("Invalid Score\n"); // Error message for out-of-range scores
            
        }

        // Asking user if they want to continue
        printf("Do you want to enter another score? (y/n): ");
        scanf(" %c", &choice); // Space before %c to handle newline character

    } 
    while(choice == 'y' || choice == 'Y'); // Loop condition for continuing

    return 0;
}
