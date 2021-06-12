#include<stdio.h>
int main(){
    int n,t,b,g;
    int t_b = 0,t_g = 0;
    scanf("%d",&n);
    for(int i = 0; i < n ;i++){
        t_b = 0,t_g = 0;
        scanf("%d",&t);
        for(int j = 0;j < t ; j++){
            scanf("%d %d",&b,&g);
            if(b > g)
                t_b = t_b + b + g;
            else
                t_g = t_g + b + g;
        }
        if(t_b > t_g)
            printf("blue %d\n",t_b - t_g);
        else
            printf("green %d\n",t_g - t_b);
    }
}