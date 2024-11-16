#include <stdio.h>
#include <string.h>

int main() {
    char b[50];
    char a = 't';        // Initialize a character to check if it's a palindrome
    int length, left,right;

    // Display prompt to the user
    printf("Enter a string to check if it is a palindrome:\n");

    // Loop to read input continuously until EOF
    while (1) {
        // Use scanf to get user input
        if (scanf("%s", b) == EOF) {
            break; // Exit the loop if we encounter EOF
        }

        length = strlen(b); // Calculate the length of the input string
        

        // Separate `for` loop to check if the string is a palindrome
        for (left = 0, right = length - 1; left < right; left++, right--) {
            if (b[left] != b[right]) {
                a = 'f'; // Mark as not a palindrome if characters don't match
                break;   // Exit the loop early if a mismatch is found
            }
        }

        // Print the result based on whether it's a palindrome
        if (a == 't') {
            printf("Palindrome\n");
        } else {
            printf("Not Palindrome\n");
        }

        // Ask the user to enter another string
        printf("Enter another string to check or press Ctrl+D (EOF) to exit:\n");
    }

    return 0; // Indicate successful program termination
}
