#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int count = 0;
    int temp;
    while (n > 0)
    {
        if(n % 2 == 1){
            count++;
            n = n - 1;
        }
        n =  n / 2;
    }
    
    printf("The number of bits is %d.\n",count);
    return 0;
}