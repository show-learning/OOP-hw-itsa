#include<stdio.h>
int main(){
    int n;
    int p = 70;
    scanf("%d",&n);
    if(n <= 1500){
        p = 70;
    }
    else{
        n = n - 1500;
        if(n % 500 != 0){
            n = n / 500;
            n = n + 1;
        }
        else
            n = n / 500;
        p = p + 5 * n;
    }
    printf("%d\n",p);
    return 0;
}