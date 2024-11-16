// #include <stdio.h>
// #include <string.h>

// int main() {
//     int i, j, n;
//     char a[50][50], tmp[50]; // Array to store strings and a temporary string for swapping

//     // Prompt the user to enter the number of strings
//     printf("Enter the number of strings: ");
//     scanf("%d", &n);
//     getchar(); // Clear the newline character left in the input buffer by scanf

//     // Read each string using fgets
//     printf("Enter the strings:\n");
//     for (i = 0; i < n; i++) {
//         fgets(a[i], sizeof(a[i]), stdin);
//         a[i][strcspn(a[i], "\n")] = '\0'; // Remove the newline character from each string
//     }

//     // Sort the strings alphabetically using a simple bubble sort algorithm
//     for (i = 0; i < n - 1; i++) {
//         for (j = i + 1; j < n; j++) {
//             // Compare strings and swap if needed
//             if (strcmp(a[i], a[j]) > 0) {
//                 strcpy(tmp, a[i]);
//                 strcpy(a[i], a[j]);
//                 strcpy(a[j], tmp);
//             }
//         }
//     }

//     // Print the sorted strings
//     printf("\nSorted Output:\n");
//     for (i = 0; i < n; i++) {
//         puts(a[i]);
//     }

//     return 0;
// }



#include<stdio.h>
#include<string.h>

int main(){
    char a[50][50],temp[50];
    int i,j,n;

    printf("Enter the number of strings: \n");
    scanf("%d", &n);
    getchar();

    printf("Enter the strings: \n");
    for (i = 0; i < n; i++)
    {
        fgets(a[i], sizeof(a[i]), stdin);
        a[i][strcspn(a[i], "\n")]='\0';
    }
    
    for (i = 0; i < n-1; i++)
    {
        for (j = i+1; j < n; j++)
        {
            if (strcmp(a[i], a[j]) > 0)
            {
                strcpy(temp,a[i]);
                strcpy(a[i],a[j]);
                strcpy(a[j],temp);
            }
            
        }
        
    }
    
    printf("\nThe sorted output are: \n");
    for (i = 0; i < n; i++)
    {
        puts(a[i]);
    }
    
    return 0;
}