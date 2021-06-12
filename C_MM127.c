#include<stdio.h>
int main(){
    int a,b,c;
    scanf("%d , %d , %d",&a,&b,&c);
    printf("%d.",a / b);
    for(int i = 0; i < c; i++){
        a = a % b;
        a = a * 10;
        printf("%d",a / b);
    }
    printf("\n");
    return 0;
}