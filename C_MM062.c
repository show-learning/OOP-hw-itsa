#include<stdio.h>
//印出有幾個0，相乘可能超過int
int main(){
    long long int temp = 1;
    int n;
    while(scanf("%d",&n)!=EOF){
        temp = temp * n; 
    }
    n = 0;
    while(temp % 10 == 0){
        temp = temp / 10;
        n++;
    }
    printf("%d\n",n);
    return 0;
}