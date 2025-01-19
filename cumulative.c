// #include<stdio.h>
// #include<string.h>
// int main(){
//     int arr[]={1,2,3,4,5};
//     int i,sum=0, c=0;

//     printf("Index: ");
    

//     for (i = 0; i < 5; i++)
//     {
//         printf("%d ", i);        
//     }
//     printf("\nGiven: ");
    
//     for (i = 0; i < 5; i++)
//     {
//         printf("%d ", arr[i]);        
//     }

//      printf("\nCumulative: ");
   
//     for (i = 0; i < 5; i++)
//     {
//         c+=arr[i];
//         printf("%d ", c);        
//     }
//     printf("\nFinal: %d", c);
//     return 0;
// }

#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int sum = 0;

    printf("Index | Given | Cumulative\n");

    for (int i = 0; i < n; i++) {
        sum += arr[i]; // Calculate cumulative sum
        printf("%4d   | %5d | %5d\n", i, arr[i], sum);
    }

    printf("Final Sum: %d\n", sum);
    return 0;
}
