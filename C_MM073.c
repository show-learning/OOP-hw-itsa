#include<stdio.h>
int main(){
    int d;
    scanf("%d",&d);
    int remain;
    scanf("%d",&remain);
    for(int i = 0;i < d;i++ ){
        remain = remain +1;
        remain = remain * 2;
    }
    printf("%d\n",remain);
    return 0;
}