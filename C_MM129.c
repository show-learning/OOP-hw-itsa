#include<stdio.h>
int main(){
    int n;
    int remain;
    while(scanf("%d",&n) != EOF ){
        if(n == 0)
            break;
        remain =  n % 6 + n / 6;
        n = n + n / 6;
        while(remain >= 6){
            n = n + remain / 6;
            remain = remain % 6 + remain / 6;
        }
        printf("%d %d\n",n,n % 6);
    }
    return 0;
}