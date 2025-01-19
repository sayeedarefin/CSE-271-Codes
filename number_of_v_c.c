#include <stdio.h>
#include <ctype.h> // For tolower() function

int main() {
    char str[100];
    int vowels = 0, consonants = 0;
    char vowelList[100], consonantList[100]; // Arrays to store found vowels and consonants
    int vIndex = 0, cIndex = 0; // Indices for the lists

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // Read the string including spaces

    for (int i = 0; str[i] != '\0'; i++) {
        char ch = tolower(str[i]); // Convert character to lowercase

        // Check if the character is a vowel
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            vowels++;
            vowelList[vIndex++] = str[i]; // Store the vowel
        }
        // Check if it's an alphabetic character (and not a vowel) for consonants
        else if (ch >= 'a' && ch <= 'z') {
            consonants++;
            consonantList[cIndex++] = str[i]; // Store the consonant
        }
    }

    // Add null terminators to the vowel and consonant lists
    vowelList[vIndex] = '\0';
    consonantList[cIndex] = '\0';

    printf("\nNumber of vowels: %d\n", vowels);
    printf("Vowels: %s\n", vowelList);

    printf("\nNumber of consonants: %d\n", consonants);
    printf("Consonants: %s\n", consonantList);

    return 0;
}

