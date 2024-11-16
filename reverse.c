// #include <stdio.h>
// #include <string.h>

// int main() {
//     char a[50], b[50]; // Declare two character arrays with a maximum size of 50
//     int i, j, len;     // Declare integer variables for iteration and length

//     // Prompt user for input
//     printf("Enter a string: ");
    
//     // Use `fgets()` to read input safely
//     fgets(a, sizeof(a), stdin);

//     // Remove the newline character added by `fgets()`
//     a[strcspn(a, "\n")] = '\0';

//     // Calculate the length of the input string
//     len = strlen(a);

//     // Reverse the input string and store it in array `b`
//     for (i = 0, j = len - 1; i < len; i++, j--) {
//         b[j] = a[i];
//     }

//     // Null-terminate the reversed string
//     b[len] = '\0';

//     // Print the reversed string
//     printf("Reversed string: %s\n", b);

//     return 0; // End of the program
// }


// #include <string.h>
// #include <stdio.h>
// int main()
// {

// char a[50],b[50];
// int i,j,len;

// gets(a);

// len=strlen(a);

// for(i=0,j=len-1;i<len;i++,j--)
// b[j]=a[i];

// for(i=0;i<len;i++)

// putchar(b[i]);
// }

// #include <stdio.h>
// #include <string.h>
// int main(){
    
//     char a[50], b[50];
//     int i,j,length;

//      printf("Enter any string: \n");
//      fgets(a, sizeof(a), stdin);
//      a[strcspn(a, "\n")]='\0';
//      length =strlen(a);

//      for (i = 0, j=length-1; i < length; i++, j--)
//      {
//         b[j]=a[i];
//      }
//      b[length]='\0';

//     printf("Reversed string: %s \n", b);
//     return 0; 

// }



#include<stdio.h>
#include<string.h>

int main(){
    int i,j,length;
    char a[50], b[50];

    printf("Enter the string: \n");

    fgets(a, sizeof(a), stdin);
    a[strcspn(a, "\n")]='\0';
    length =strlen(a);

    for (i = 0, j=length-1; i < length; i++,j--)
    {
        b[j]=a[i];
    }
    
    b[length]='\0';
    printf("%s",b);
    return 0;
}