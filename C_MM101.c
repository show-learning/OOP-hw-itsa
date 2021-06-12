#include<stdio.h>
int main(){
    int n; 
    int p;
    int temp;
    scanf("%d",&n);
    p = n;
    while(p >=3){
        temp = p / 3;
        n = n + temp;
        p = p % 3;
        p = p + temp;
    }
    printf("%d\n",n);
    return 0;
}