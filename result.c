// #include<stdio.h>
// int main(){
//     float s1,s2,s3,s4,s5,total,average;
//     printf("Enter the results for easch 5 subjects from 0-100\n");
//     scanf("%f%f%f%f%f" ,&s1,&s2,&s3,&s4,&s5);
//     total= s1+s2+s3+s4+s5;
//     average= total/5;
//     printf("Your total number is: %.2f", total);
//     printf("Your average number is: %.2f", average);

//     return 0; 
// }






#include <stdio.h>

int main() {
    float s1, s2, s3, s4, s5, total, average;
    printf("Enter the results for each of the 5 subjects (from 0-100):\n");
    
    scanf("%f %f %f %f %f", &s1, &s2, &s3, &s4, &s5);
    
    total = s1 + s2 + s3 + s4 + s5;
    average = total / 5;
    
    printf("Your total score is: %.2f\n", total);     
    printf("Your average score is: %.2f\n", average); 

    return 0; 
}
