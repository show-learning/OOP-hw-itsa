#include<stdio.h>
int main(){
    int n;
    int ans = 0;
    int i = 0;
    scanf("%d",&n);
    while (ans <= n)
    {   
        i++;
        ans = ans + i;
        
    }
    i--;
    printf("N=%d\n",i);
    return 0;
}