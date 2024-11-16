#include <stdio.h>

int main() {
    int a = 25, b = 10, c = 0, d = 0;
    
    printf("a = %d, b = %d, c = %d, d = %d\n", a, b, c, d);

    c = ++a - b;
    printf("a = %d, b = %d, c = %d\n", a, b, c);

    d = b++ + a;
    printf("a = %d, b = %d, d = %d\n", a, b, d);

    c = --a - b;
    printf("a = %d, b = %d, c = %d\n", a, b, c);

    d = b-- + a;
    printf("a = %d, b = %d, d = %d\n", a, b, d);

    return 0;
}
