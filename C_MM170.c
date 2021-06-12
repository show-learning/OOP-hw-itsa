#include<stdio.h>
int main(){
    int n;
    float ans,temp;
    while(scanf("%d",&n) != EOF){
        if(n==0)
            break;
        ans = 4.0;
        for(int i =1 ;i < n;i++){
            temp = 1 + 2 * i ;
            temp = 4 / temp;
            if(i%2 == 1)
                ans = ans - temp; 
            else
                ans = ans + temp;
        }
        printf("%.5f\n",ans);
    }
}