#include<stdio.h>
int main(){
    float ans = 0.0;
    int a[5],temp;
    for(int i = 0 ;i < 3 ;i++){
        scanf("%d,%d,%d,%d,%d",&a[0],&a[1],&a[2],&a[3],&a[4]);
        for(int j = 0; j < 5; j++){
            for(int k = 0; k< 5; k++){
                if(a[j] > a[k]){
                    temp = a [k];
                    a[k] = a [j];
                    a[j] = temp;
                }
            }
        }
        ans = ans + a[0] + a[1] +a[2];
    }
    ans = ans / 9;
    printf("%.2f\n",ans);
    return 0;
}