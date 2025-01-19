#include<stdio.h>
int main(){
    int n,i,sum=0;
    printf("Enter the number of elements you want to add");
    scanf("%d", &n);
    int arr[n];

    printf("Enter the elements: \n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++)
    {
        sum= sum+arr[i];
    }
    printf("The sum is: %d", sum);
    
    

    return 0; 
}