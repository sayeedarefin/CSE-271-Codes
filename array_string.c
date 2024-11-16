// #include<stdio.h>
// int main(){
//     char a[100], ch;
//     int i=0; 

//     printf("Enter the line of text \n");

//     do
//     {
//         ch = getchar();
//         a[i]=ch;
//         i++;
//     } while (ch != '\n');

//     i=i-1;
//     a[i]='\0';
    
//     printf("%s",a);
//     return 0;




// }


#include<stdio.h>
int main(){
    char a[100];
    int i;

    printf("Enter the line of text \n");

    for(i=0; i<99; i++){
        a[i]=getchar();
        if (a[i] == '\n')
        {
            break;
        }
        
    }
    a[i]='\0';
    
    printf("%s",a);
    return 0;
}