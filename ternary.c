#include<stdio.h>
int main(){
    int a, b, c, d;
    printf("Enter three valid values: \n");
    scanf("%d%d%d", &a, &b, &c);
    d = (a > b) ? ((a > c) ? a : c) : (b > c ? b : c);
    printf("The largest value is: %d\n", d);
    return 0;
}
