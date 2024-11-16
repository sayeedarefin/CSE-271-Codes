// #include<stdio.h>
// int main(){
//     int arr[10];
//     int i;
//     for ( i = 0; i < 10; i++)
//     {
//         scanf("%d", &arr[i]);
//     }
//     for ( i = 0; i < 10; i++)
//     {
//         printf("%d\n", arr[i]);
//     }
//     for ( i = 0; i < 10; i++)
//     {
//         printf("index= %d\n val=%d\n", i, arr[i]);
//     }

    
//     return 0; 
// }






// #include <stdio.h>

// int main() {
//     int arr[10];
//     int i;

//     printf("Enter 10 integers:\n");
//     for (i = 0; i < 10; i++) {
//         scanf("%d", &arr[i]); 
//     }

//     printf("\nArray elements:\n");
//     for (i = 0; i < 10; i++) {
//         printf("%d\n", arr[i]);
//     }

//     printf("\nArray elements with indices:\n");
//     for (i = 0; i < 10; i++) {
//         printf("index = %d, val = %d\n", i, arr[i]);
//     }

//     return 0;
// }



#include <stdio.h>

int main() {
    int arr[10];
    int i;

    printf("Enter 10 integers:\n");
    for (i = 9; i < 10; i--) {
        scanf("%d", &arr[i]); 
    }

    printf("\nArray elements:\n");
    for (i = 9; i < 10; i--) {
        printf("%d\n", arr[i]);
    }

    printf("\nArray elements with indices:\n");
    for (i = 9; i < 10; i--) {
        printf("index = %d, val = %d\n", i, arr[i]);
    }

    return 0;
}
