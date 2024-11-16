

#include <stdio.h>

int main() {
    int arr[7];
    int i;

    
    arr[0] = 0;
    for (i = 1; i < 7; i++) {
        arr[i] = arr[i - 1] + i;
    }

    
    printf("index     ");
    for (i = 0; i < 7; i++) {
        printf("%d ", i);
    }
    printf("\n");

    
    printf("arr[index] ");
    for (i = 0; i < 7; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}


// #include <stdio.h>

// int main() {
//     int arr[7];
//     int i;

//     arr[0] = 0;
//     for (i = 1; i < 7; i++) {
//         arr[i] = arr[i - 1] + i;
//     }

//     printf("index     ");
//     for (i = 0; i < 7; i++) {
//         printf("%d ", i);
//     }
//     printf("\n");

//     printf("arr[index] ");
//     for (i = 0; i < 7; i++) {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");

//     printf("\nEven elements and their indices:\n");
//     for (i = 0; i < 7; i++) {
//         if (arr[i] % 2 == 0) {
//             printf("index = %d, value = %d\n", i, arr[i]);
//         }
//     }

//     return 0;
// }
