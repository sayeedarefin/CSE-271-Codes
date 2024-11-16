#include <stdio.h>

int main() {
    int c, d;
    char a[] = "CProgramming"; // String to be printed

    // Loop to print the string in increasing order of characters
    for (c = 0; c <= 11; c++) {
        d = c + 1; // Calculate the substring length to print
        printf("%12.*s\n", d, a); // Print substring right-aligned with width 12
    }

    // Loop to print the string in decreasing order of characters
    for (c = 11; c >= 0; c--) {
        d = c + 1; // Calculate the substring length to print
        printf("%12.*s\n", d, a); // Print substring right-aligned with width 12
    }

    return 0;
}
