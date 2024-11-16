#include <stdio.h>

int main() {
    int arr[5] = {10, 2, 31, 4, 9};
    int highestIndex = 0, lowestIndex = 0;

    for (int i = 1; i < 5; i++) {
        if (arr[i] > arr[highestIndex]) {
            highestIndex = i;
        }
        if (arr[i] < arr[lowestIndex]) {
            lowestIndex = i;
        }
    }

    printf("Highest: index = %d, val = %d\n", highestIndex, arr[highestIndex]);
    printf("Lowest: index = %d, val = %d\n", lowestIndex, arr[lowestIndex]);

    return 0;
}