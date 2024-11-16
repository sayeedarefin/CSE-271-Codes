#include <stdio.h>
int main(){
    int a,b,c;
    printf("Enter 3 valid numbers: ");
    scanf("%d%d%d",&a,&b,&c);

    if(a<b){
        if(a<c){
            printf("%d is the smallest number \n", a);
        }
        else{
            printf("%d is the smallest number \n", c);
        }
    }
    else{
    if(b<c){
        printf("%d is the largest number \n",b);
        }
        else{
        printf("%d is the largest number \n",c);
        }
}


    if(a>b){
        if(a>c){
        printf("%d is the largest number \n",a);
    }
        else{
        printf("%d is the largest number \n",c);
        }
    }
else{
    if(b>c){
        printf("%d is the largest number \n",b);
        }
        else{
        printf("%d is the largest number \n",c);
        }
}

return 0;
}
