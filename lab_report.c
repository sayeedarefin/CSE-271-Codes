#include <stdio.h>
int main() {
int i, j;

char a[] = "DEPTofPME";

for (i = 0; i <= 8; i++) {
j = i + 1; printf("%9.*s\n", j, a);
}

for (i = 8; i >= 0; i--) {
j = i + 1; printf("%9.*s\n", j, a);
}

return 0;
}


#include <stdio.h>
#include <string.h>

void addSpaceToEvenPositions(const char* input, char* output) {
    int i, j = 0;
    int length = strlen(input);

    for (i = 0; i < length; i++) {
        output[j++] = input[i];
        // Add a space after even positions (1-indexed)
        if ((i + 1) % 2 == 0 && i != length - 1) {
            output[j++] = ' ';
        }
    }
    output[j] = '\0'; // Null-terminate the output string
}

int main() {
    char str1[] = "ABCDEFGH";
    char str2[2 * sizeof(str1)]; // Allocate enough space for output

    addSpaceToEvenPositions(str1, str2);

    printf("Output: %s\n", str2);

    return 0;
}
