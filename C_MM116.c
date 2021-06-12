#include<stdio.h>
int main(){
    int g,b,c;
    scanf("%d %d %d",&g,&b,&c);
    int p = 0;
    p = 20 * g +25 *b;
    while(g >= 3 && b >= 2){
        g = g - 3;
        b = b - 2;
        c = c - 1;
    }
    if(c > 0){
        p = p + c * 30;
    }
    printf("%d\n",p);
    return 0;
}