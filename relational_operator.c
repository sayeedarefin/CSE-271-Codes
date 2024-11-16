// #include<stdio.h>
// int main()
// {
//     int a=25, b= 5;
//     printf("a<b : %d\n", a<b);
//     printf("a>b : %d\n", a>b);
//     printf("a<=b : %d\n", a<=b);
//     printf("a=>b : %d\n", a>=b);
//     printf("a==b : %d\n", a==b);
//     printf("a!=b : %d\n", a!=b);
//     return 0;
// }



#include<stdio.h>
int main(){
    int a,b;
    printf("Enter 2 valid numbers: \n");
    scanf("%d%d", &a,&b);
    printf("a>b: %d\n", a>b);
    printf("a>b: %d\n", a<b);
    printf("a>b: %d\n", a==b);
    printf("a>b: %d\n", a!=b);
}