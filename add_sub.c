#include <stdio.h>
int a,b;
int add(int a,int b)
{
return a+b;
}
int sub(int a,int b)
{
return a-b;
}
int main()
{
// int a=20,b=10;
printf("Enter two valid numbers: \n");
scanf("%d%d", &a,&b);
printf("%d + %d = %d\n",a,b,add(a,b));
printf("%d - %d = %d\n",a,b,sub(a,b));
return 0;
}