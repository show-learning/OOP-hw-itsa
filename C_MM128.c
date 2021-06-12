#include<stdio.h>
#include <string.h>
int main(){
    int h,w,a,judge;
    float temp_h,temp_t,temp_s;
    while (scanf("%d %d %d",&h,&w,&a) != EOF)
    {
        temp_h = w * 41.2 / h ;
        temp_t = h * w / 634.4;
        temp_s = w * 0.4;
        if(a >= 30){
            judge = a - 30;
            judge = judge / 5;
            temp_t = temp_t + 0.15 * judge;
        }
        if(a >=28){
            judge = a - 28;
            judge = judge / 2;
            temp_s = temp_s + 0.25 * judge;
        }
        printf("%.2f %.2f %.2f\n",temp_h,temp_t,temp_s);
        scanf("%d",&judge);
        if(judge == -1)
            break;
    }
    
    return 0;
}