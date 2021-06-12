#include<stdio.h>
int main(){
    int n;
    int sum = 0;
    scanf("%d",&n);
    for(int i = 1; i <= n; i++){
        sum = sum + i;
        if(i != 1){
            printf("+ ");
        }
        printf("%d ",i);
    }
    printf("= %d\n",sum);
}