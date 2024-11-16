// #include<stdio.h>
// int main(){
//     int arr[5]= {10,2,31,4,9};
//     int highestIndex=0, lowestIndex=0;
//     int i;

//     for (int i = 1; i < 5; i++)
//     {
//         if (arr[i] > arr[highestIndex])
//         {
//             highestIndex=i;
//         }
//         if (arr[i] < arr[lowestIndex])
//         {
//             lowestIndex=i;
//         }
//     }
//     printf("Highest Index : %d, index value: %d\n", highestIndex, arr[highestIndex]);
//     printf("Lowest Index : %d, index value: %d\n", lowestIndex, arr[lowestIndex]);

//     return 0;
// }


// #include <stdio.h>
// #include <string.h>

// int main() {
//     char Arr1[] = "CSE - 272";
//     char Arr2[50];
//     int j = 0,length;

//     length= strlen(Arr1);
//     for (int i = 0; i < length; i++) {
//         if (Arr1[i] != ' ') {
//             Arr2[j++] = Arr1[i];
//         }
//     }
//     Arr2[j] = '\0'; 

//     printf("Arr2: %s\n", Arr2); 
//     return 0;
// }























#include <stdio.h>
#include <string.h>

int main() {
    char Arr1[] = "AEaeLlMm";
    char Arr2[50]; 
    char Arr3[50]; 
    int j = 0, k = 0;


    for (int i = 0; i < strlen(Arr1); i++) {
        if (Arr1[i] >= 'A' && Arr1[i] <= 'Z') {
            if (strchr(Arr2, Arr1[i]) == NULL) {
                Arr2[j++] = Arr1[i];
            }
        } else if (Arr1[i] >= 'a' && Arr1[i] <= 'z') {
            // Add to Arr3 if it's lowercase
            if (strchr(Arr3, Arr1[i]) == NULL) {
                Arr3[k++] = Arr1[i];
            }
        }
    }
    Arr2[j] = '\0'; 
    Arr3[k] = '\0'; 

    printf("Arr2: %s\n", Arr2); 
    printf("Arr3: %s\n", Arr3); 
    return 0;
}












