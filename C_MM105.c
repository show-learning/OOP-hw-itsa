#include<stdio.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    int n = 1;
    for(int i = 0; i < b; i++){
        n = n * a;
    }
    printf("%d\n",n);
    return 0;
}