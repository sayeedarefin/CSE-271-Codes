#include <stdio.h>
#include <string.h>

int main() {
    char string1[] = "Hello, ";
    char string2[] = "World!";
    char string3[20]; // Ensure string3 is large enough to hold the result

    // Copy the content of string1 into string3
    strcpy(string3, string1);

    // Concatenate string2 to string3
    strcat(string3, string2);

    // Output the concatenated string
    printf("Concatenated String: %s\\n", string3);
    return 0;
}
