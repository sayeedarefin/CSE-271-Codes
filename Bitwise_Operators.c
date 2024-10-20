#include<stdio.h>
int main()
{
    int a= 25, b=5 , c=6;
    printf("a & b: %d\n",a & b);


    //The bitwise AND (&) operator compares each bit of two integers. If both bits in the same position are 1, the corresponding result bit is set to 1; otherwise, it is set to 0.

    printf("a & c: %d\n",a & c);

    //Since none of the bits in the same positions are both 1, the result of a & b is 0.

    printf("a | b: %d\n", a | b);
    printf("a ^ b: %d\n", a ^ b);
    printf("a | b: %d\n", a | b);
    printf("a >> b: %d\n", a >> b);
    printf("a << b: %d\n", a << b);
    printf("~a: %d\n", ~a);
    


}