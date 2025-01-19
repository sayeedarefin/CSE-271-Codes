// problem-1: perform bubble sort on the given array and show each steps by printing the array

// input: Arr[6]={2,5,7,3,4,1}
// output: Arr[6]={1,2,3,4,5,7}

// #include<stdio.h>
// int main(){
//     int Arr[6]={2,5,7,3,4,1};
//     int i,j,temp;
//     for(i=0;i<6;i++){
//         for(j=0;j<6-i-1;j++){
//             if(Arr[j]>Arr[j+1]){
//                 temp=Arr[j];
//                 Arr[j]=Arr[j+1];
//                 Arr[j+1]=temp;
//             }
//         }
//         for(int k=0;k<6;k++){
//             printf("%d ",Arr[k]);
//         }
//         printf("\n");
//     }
//     return 0;
// }




// #include<stdio.h>
// int main(){
//     int num;
//     scanf("%d",&num);
//     for(int i=2;i<=9;i++){
//         if(num%i==0){
//             printf("%d ",i);
//         }
//     }
//     return 0;
// }



// #include<stdio.h>
// int prime(int num){
//     int i;
//     for(i=2;i<num;i++){
//         if(num%i==0){
//             return 0;
//         }
//     }
//     return 1;
// }
// int main(){
//     int start,end;
//     scanf("%d %d",&start,&end);
//     for(int i=start;i<=end;i++){
//         if(prime(i)){
//             printf("%d ",i);
//         }
//     }
//     return 0;
// }





// #include<stdio.h>
// #include<string.h>
// int main(){
//     char str[100];
//     int i,j;
//     scanf("%s",str);
//     int len=strlen(str);
//     for(i=0,j=len-1;i<len/2;i++,j--){
//         if(str[i]!=str[j]){
//             printf("Not a palindrom");
//             return 0;
//         }
//     }
//     printf("Palindrom");
//     return 0;
// }
