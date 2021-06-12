#include<stdio.h>
int main(){
    int n;
    int p = 2;
    int judge = 0;
    scanf("%d",&n);
    for(int i = 2;i <= n; i++){
        for(int j = 2; j < i / 2;j++){
            judge = 0;
            if(i % j == 0){
                judge = 1;
                break;
            }
        }
        if(judge == 0){
            p = i;
        }
    }
    printf("%d\n",p);
    return 0;
}