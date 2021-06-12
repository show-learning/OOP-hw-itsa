#include<stdio.h>
int main(){
    int n;
    int judge = 0;
    scanf("%d",&n);
    int count = 0;
    int temp;
    for(int i = 2;i < n / 2; i++){
        if(n % i == 0){
            judge = 1;
            break;
        }
    }
    if(judge == 1){
        printf("%d is not a prime number.\n",n);
    }
    else{
        printf("%d is a prime number.\n",n);
    }
    return 0;
}