// //  Program to Check if a Number is Prime Using a Function

// #include <stdio.h>
// #include <stdbool.h>

// bool isPrime(int num) {
//     if (num <= 1) return false; 
//     for (int i = 2; i <= num / 2; i++) {
//         if (num % i == 0) {
//             return false; 
//         }
//     }
//     return true;
// }

// int main() {
//     int num;
//     printf("Input a positive number: ");
//     scanf("%d", &num);

//     if (isPrime(num)) {
//         printf("The number %d is a prime number.\n", num);
//     } else {
//         printf("The number %d is not a prime number.\n", num);
//     }

//     return 0;
// }



// // Program to Convert Decimal to Binary Using a Function
// #include <stdio.h>
// void decToBin(int decimal)
// {
//     int binary[32];
//     int i = 0;
//  while (decimal > 0)
//         {
//         binary[i] = decimal % 2;
//         decimal /= 2;
//         i++;
//     }
//     printf("The Binary value is : ");
//     for (int j = i - 1; j >= 0; j--)
//         {
//         printf("%d", binary[j]);
//     }
//     printf("\n");
// }

// int main() {
//     int decimal;
//     printf("Input any decimal number: ");
//     scanf("%d", &decimal);
//     decToBin(decimal);
//     return 0;
// }


// Program to Get the Largest Element of an Array Using a Function

#include <stdio.h>
int findLargest(int arr[], int size)
 {
    int max = arr[0];
    for (int i = 1; i < size; i++) 
{
        if (arr[i] > max)
 {
            max = arr[i];
        }
    }
    return max;
}

int main() {
    int n;
    printf("Input the number of elements to be stored in the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Input %d elements in the array:\n", n);
    for (int i = 0; i < n; i++) {
        printf("element - %d : ", i);
        scanf("%d", &arr[i]);
    }
    int largest = findLargest(arr, n);
    printf("The largest element in the array is : %d\n", largest);
 return 0;
}