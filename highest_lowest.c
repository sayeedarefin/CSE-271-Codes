#include<stdio.h>
int main(){
    int i,n;

    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];

    printf("Enter the elements: ");

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    int min=arr[0], max= arr[0], min_index=0, max_index=0;


    for (i = 0; i < n; i++)
    {
        if (arr[i] < min)
        {
            min=arr[i];
            min_index= i;
        }
        if (arr[i] > max)
        {
            max=arr[i];
            max_index = i;
        }
        
    }
    
    printf("The Highest Number is: %d and the index is: %d\n", max,max_index);
    printf("The Lowest Number is: %d and the index is: %d\n", min,min_index);

    return 0;
}