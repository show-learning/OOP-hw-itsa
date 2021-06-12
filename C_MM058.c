#include<stdio.h>
//求多項式解
int main(){
    int a,b,c;
    int temp;
    scanf("%d, %d, %d",&a,&b,&c);
    for(int x = 0;x<c;x++){
        temp = c- a*x;
        if(temp % b ==0){
            temp = temp / b;
            if(temp >= 0)
                printf("%d,%d\n",x,temp);
        }
    }
    return 0;
}