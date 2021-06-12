#include<stdio.h>
int main(){
    int p,q,total = 0,temp = 0,c = 0;
    int count = 0;
    scanf("%d %d",&p,&q);
    while(p || 0 || q != 0 || c !=0){
        temp = c + p % 10 + q % 10;
        c = temp;
        temp = temp % 7;
        for(int i = 0; i < count; i++){
            temp = temp * 10;
        }
        total = total + temp;
        count++;
        c = c / 7;
        p = p / 10;
        q = q / 10;
    }
    printf("%d\n",total);
    return 0;
}