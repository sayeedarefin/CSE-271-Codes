#include <stdio.h>
int main() {
    int c, d;
    char a[] = "CProgramming"; // String to be printed

    // Loop to print the string in increasing order of characters
    for (c = 0; c < 12; c++) { // Loop from 0 to 11 (length of the string)
        d = c + 1; // Calculate the substring length to print
        printf("%-*.*s\n", 12, d, a); // Print left-aligned substring of length d
    }

    // Loop to print the string in decreasing order of characters
    for (c = 11; c >= 0; c--) { // Loop from 11 to 0
        d = c + 1; // Calculate the substring length to print
        printf("%-*.*s\n", 12, d, a); // Print left-aligned substring of length d
    }

    return 0;
}
