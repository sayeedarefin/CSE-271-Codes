// #include <stdio.h>
// int main() {
//     int i, j, numberofRows, numberofColms;
//     int A[10][10], B[10][10], C[10][10];

//     printf("Enter the number of Rows & Colms:");
//     scanf("%d%d", &numberofRows, &numberofColms);

//     printf("Enter Elements of A matrix:\n");
//     for (i = 0; i < numberofRows; i++) {
//         for (j = 0; j < numberofColms; j++) {
//             printf("A[%d][%d]=", i, j);
//             scanf("%d", &A[i][j]);
//         }
//         printf("\n");
//     }

//     printf("A =");
//     for (i = 0; i < numberofRows; i++) {
//         printf("\t");
//         for (j = 0; j < numberofColms; j++) {
//             printf("%d ", A[i][j]);
//         }
//         printf("\n");
//     }

//     printf("\n\nEnter Elements of B matrix:\n");
//     for (i = 0; i < numberofRows; i++) {
//         for (j = 0; j < numberofColms; j++) {
//             printf("B[%d][%d]=", i, j);
//             scanf("%d", &B[i][j]);
//         }
//         printf("\n");
//     }

//     printf("B =");
//     for (i = 0; i < numberofRows; i++) {
//         printf("\t");
//         for (j = 0; j < numberofColms; j++) {
//             printf("%d ", B[i][j]);
//         }
//         printf("\n");
//     }

//     for (i = 0; i < numberofRows; i++) {
//         for (j = 0; j < numberofColms; j++) {
//             C[i][j] = A[i][j] + B[i][j];
//         }
//     }

//     printf("\nC =");
//     for (i = 0; i < numberofRows; i++) {
//         printf("\t");
//         for (j = 0; j < numberofColms; j++) {
//             printf("%d ", C[i][j]);
//         }
//         printf("\n");
//     }

//     return 0;
// }

// #include <stdio.h>
// int main() {
//     int i, j;
//     for (i = 0; i < 6; i++) {
//         for (j = 0; j < i; j++) {
//             printf("* ");
//         }
//         printf("\n ");
//     }
//     return 0;
// }
// #include <stdio.h>
// int main() {
//     int i, j;
//     for (int i = 0; i < 6; i++) {
//         for (int j = 0; j < 6 - i; j++) {
//             printf(" ");
//         }
//         for (int k = 1; k <= i; k++) {
//             printf("* ");
//         }
//         printf("\n");
//     }
//     return 0;
// }

// #include <stdio.h>

// int binarySearch(int arr[], int size, int target) {
//     int low = 0, high = size - 1;

//     while (low <= high) {
//         int mid = (low + high) / 2;

//         if (arr[mid] == target) {
//             return mid;
//         } else if (arr[mid] < target) {
//             low = mid + 1;
//         } else {
//             high = mid - 1;
//         }
//     }

//     return -1;
// }

// int main() {
//     int arr[] = {12, 15, 24, 28, 30};
//     int size = sizeof(arr) / sizeof(arr[0]);
//     int target = 28;

//     int result = binarySearch(arr, size, target);

//     if (result != -1) {
//         printf("Element %d is found at index %d.\n", target, result);
//     } else {
//         printf("Element %d is not found in the array.\n", target);
//     }

//     return 0;
// }

// #include <stdio.h>

// void bubbleSort(int arr[], int size) {
//     for (int i = 0; i < size - 1; i++) {
//         for (int j = 0; j < size - i - 1; j++) {
//             if (arr[j] > arr[j + 1]) {
//                 int temp = arr[j];
//                 arr[j] = arr[j + 1];
//                 arr[j + 1] = temp;
//             }
//         }
//     }
// }

// void printArray(int arr[], int size) {
//     for (int i = 0; i < size; i++) {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");
// }

// int main() {
//     int arr[] = {2, 1, 5, 8, 4, 3};
//     int size = sizeof(arr) / sizeof(arr[0]);

//     printf("Original array: ");
//     printArray(arr, size);

//     bubbleSort(arr, size);

//     printf("Sorted array: ");
//     printArray(arr, size);

//     return 0;
// }


#include <stdio.h>

void insertAndSort(int arr[], int *size, int value) {
    int i;
    for (i = *size - 1; i >= 0 && arr[i] > value; i--) {
        arr[i + 1] = arr[i];
    }
    arr[i + 1] = value;
    (*size)++;
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int Brr[10] = {1, 2, 3, 4, 5, 6, 7, 8};
    int size = 8;
    int Q1 = 2, Q2 = 5;

    printf("Original array: ");
    printArray(Brr, size);

    insertAndSort(Brr, &size, Q1);
    insertAndSort(Brr, &size, Q2);

    printf("Updated array after inserting Q1 and Q2: ");
    printArray(Brr, size);

    return 0;
}
