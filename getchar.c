#include <stdio.h>

int main() {
    // Declare a character array to store the input string and a character variable for each character input
    char string[100], letter;
    int i =0; // Initialize an index variable `i` to keep track of the position in the array

    // Prompt the user to enter a string
    printf("Enter any string: \n");

    // Use a `do-while` loop to read characters one by one from user input
    do {
        letter = getchar();  // Read a single character from the input
        string[i] = letter;  // Store the character in the `string` array
        i++;                 // Increment the index to move to the next position
    } while (letter != '\n'); // Continue reading until the user presses Enter (newline character)

    // Print the entered string (it includes the newline character at the end)
    printf("%s", string);

    // Correctly terminate the string to mark the end
    string[i - 1] = '\0';

    return 0;
}
