#include<stdio.h>
//taxi
int main(){
    int s,k,m,d;
    scanf("%d %d %d %d",&s,&k,&m,&d);
    int sum;
    sum = s;
    if(d <= m){
        sum = sum + k * d;
    }
    else{
        sum = sum + k * m;
        d = d - m;
        k = k + 5;
        sum = sum + k *d; 
    }
    printf("%d\n",sum);
    return 0;
}