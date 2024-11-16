#include <stdio.h>
#include<string.h>

int main() {
    char str1[15];
    char str2[15];
    int ret;
    

    strcpy(str1, "sayeed");
    strcpy(str2, "arefin");

    int length1= strlen(str1);
    int length2= strlen(str2);

    ret = strcmp(str1,str2);
    if (ret<0)
    {
        printf("str1 is less than str 2");
    }
    else if (ret>0)
    {
        printf("str2 is less than str 1 \n");
    }
    else
    {
        printf("str1 == 2");
    }
    printf("Length of str1 is %d \n", length1);
    printf("Length of str2 is %d", length2);
    
    return 0;
}
