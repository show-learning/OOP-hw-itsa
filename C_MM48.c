#include<stdio.h>
int main(){
    int n,x;
    scanf("%d",&n);
    for(int i = 0; i < n; i++){
        scanf("%d",&x);
        if (x > 100){
            x = x - 10; 
        }
        else{
            x = 91;
        }
        printf("%d\n",x);
    }
    return 0;
}