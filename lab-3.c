// #include<stdio.h>
// #include<string.h>
// int main(){
//     char arr[]= "Hello World";
//     char v[10], c[10];
//     int length= strlen(arr);
//     int vi =0, ci=0;

//     for (i = 0; i < length; i++)
//     {
//         if (arr[i]=='a' || arr[i]=='e' || arr[i]=='i' || arr[i]='o' || arr[i]='u');
//         {
//             v[vi]=arr[i];
//             vi++;
//         }
//         else{
//             c[ci]= arr[i];
//         }
        
//     }
    
//     return 0;
// }


// #include <stdio.h>
// #include <string.h>

// int main() {
//     char arr1[] = "ABCDE";
//     char arr2[10]; 
//     int len = strlen(arr1);
    
    
//     for (int i = 0; i < len; i++) {
//         arr2[i] = arr1[len - i - 1];
//     }
//     arr2[len] = '\0'; 

    
//     printf("Reversed string: %s\n", arr2);
    
//     return 0;
// }

#include <stdio.h>
#include <string.h>

int main() {
    char arr1[] = "1234";
    char arr2[] = "abcd";
    char arr3[20]; 

    int i = 0, j = 0;

    while (arr1[i] != '\0') {
        arr3[j++] = arr1[i++];
    }

    i = 0;
    while (arr2[i] != '\0') {
        arr3[j++] = arr2[i++];
    }
    arr3[j] = '\0'; 



    printf("Concatenated string: %s\n", arr3);
    
    return 0;
}
