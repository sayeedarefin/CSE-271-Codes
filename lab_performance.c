// #include <stdio.h>
// int main() {
// int i, j;

// char a[] = "CSE-272";

// for (i = 7; i >= 0; i--) {
// j = i + 1; printf("%9.*s\n", j, a);
// }

// return 0;

// }

//add space to even position of the string
//input: str1["ABCDEFGH"]
//output: str2["AB CD EF GH"]







// #include <stdio.h>
// #include <string.h>

// int main() {
//     char str1[] = "ABCDEFGHIJKL";
//     char str2[2 * sizeof(str1)];

//     addSpace(str1, str2);

//     printf("Output: %s\n", str2);

//     return 0;
// }

// void addSpace(const char*input , char*output){
//     int i;
//     int j=0;
//     int length = strlen(input);

//     for (i = 0; i < length; i++) {
//         output[j++] = input[i];
//         if ((i + 1) % 2 == 0 && i != length - 1) {
//             output[j++] = ' ';
//         }
//     }
//     output[j] = '\0'; 

// }
   






// #include <stdio.h>

// int main() {
//     int arr1[] = {1, 2, 3, 4, 5};
//     int arr2[] = {2, 4, 6, 8, 10};

//     int size1 = sizeof(arr1) / sizeof(arr1[0]);
//     int size2 = sizeof(arr2) / sizeof(arr2[0]);

//     for (int i = 0; i < size1; i++) {
//         if (i == 0) {
//             arr1[i] = 0;  
//         } else {
//             arr1[i] = i * arr1[i];  
//         }
//     }


//     printf("array 1: ");
//     for (int i = 0; i < size1; i++) {
//         printf("%d ", arr1[i]);
//     }
//     printf("\n");


//     return 0;
// }

 






//convert the new array into a new array
// input: arr[5]={1,2,3,4,5}
// output: arr[5]= {0,2,6,12,20}
// input: arr[5]= {2,4,6,8,10}
//output: arr[5]= {0,4,12,24,40}










// #include<stdio.h>
// int main(){
//     int num;
//     printf("Enter your mark here: ");
//     scanf("%d", &num);

//     if (num>80 && num<=100)
//     {
//         printf("Your result is A+");
//     }
//     else if (num>60 && num<=80)
//     {
//         printf("Your result is A");
//     }
//     else if(num>39 && num<=59){
//         printf("Your result is B+");
//     }
//     else{
//         printf("Failed");
//     }
    
//     return 0;
// }




#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);  
    if(n % 2 == 0){
        goto even;  
    }
    
    goto end; 
    
    even:  
    printf("%d is even\n", n);

    end:  
    return 0;
}
