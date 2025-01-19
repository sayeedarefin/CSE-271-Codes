#include<stdio.h>
#include<string.h>
int main(){
    char arr[]= "Hello World";
    char v[10], c[10];
    int length= strlen(arr);
    int vi =0, ci=0;

    for (i = 0; i < length; i++)
    {
        if (arr[i]=='a' || arr[i]=='e' || arr[i]=='i' || arr[i]='o' || arr[i]='u');
        {
            v[vi]=arr[i];
            vi++;
        }
        else{
            c[ci]= arr[i];
        }
        
    }
    
    return 0;
}


#include <stdio.h>
#include <string.h>

int main() {
    char arr1[] = "ABCDE";
    char arr2[10]; 
    int len = strlen(arr1);
    
    
    for (int i = 0; i < len; i++) {
        arr2[i] = arr1[len - i - 1];
    }
    arr2[len] = '\0'; 

    
    printf("Reversed string: %s\n", arr2);
    
    return 0;
}

#include <stdio.h>
#include <string.h>

int main() {
    char arr1[] = "1234";
    char arr2[] = "ABCD"; // Changed to uppercase for desired output
    char arr3[20]; // Buffer to store the interleaved result

    int i = 0, j = 0;

    // Interleave characters from arr1 and arr2
    while (arr1[i] != '\0' && arr2[i] != '\0') {
        arr3[j++] = arr2[i]; // Take character from arr2
        arr3[j++] = arr1[i]; // Take character from arr1
        i++;
    }

    // Null-terminate the resulting string
    arr3[j] = '\0';

    printf("Interleaved string: %s\n", arr3);

    return 0;
}
