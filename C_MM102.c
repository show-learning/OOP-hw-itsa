#include<stdio.h>
int main(){
    float l,c,s;
    char unit[2];
    int day = 0;
    scanf("%f %s",&l,unit);
    if(unit[0] == 'm'){
        l = l * 100;
    }
    scanf("%f %s",&c,unit);
    if(unit[0] == 'm'){
        c = c * 100;
    }
    scanf("%f %s",&s,unit);
    if(unit[0] == 'm'){
        s = s * 100;
    }
    while( l > 0){
        l = l - c;
        if(l >0){
            l = l + s;
        }
        day++;
    }
    printf("%d\n",day);
    return 0;
}