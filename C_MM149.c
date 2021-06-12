#include<stdio.h>
int main(){
    int a[5],temp,ans;
    scanf("%d,%d,%d,%d,%d",&a[0],&a[1],&a[2],&a[3],&a[4]);
    for(int i = 0 ;i < 5; i++){
        for(int j = i; j <5; j++){
            if(a[i] > a[j]){
                temp  = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    ans = a[0] * 100 + a[1] * 10 + a[2];
    printf("%d\n",ans);
    temp = ans;
    ans = a[0] * 100 + a[1] * 10 + a[3];
    if(ans != temp)
        printf("%d\n",ans);
    temp = ans;
    ans = a[0] * 100 + a[1] * 10 + a[4];
    if(ans != temp)
        printf("%d\n",ans);
    temp = ans;
    ans = a[0] * 100 + a[2] * 10 + a[3];
    if(ans != temp)
        printf("%d\n",ans);
    temp = ans;
    ans = a[0] * 100 + a[2] * 10 + a[4];
    if(ans != temp)
        printf("%d\n",ans);
    temp = ans;
    ans = a[0] * 100 + a[3] * 10 + a[4];
    if(ans != temp)
        printf("%d\n",ans);
    temp = ans;
    ans = a[1] * 100 + a[2] * 10 + a[3];
    if(ans != temp)
        printf("%d\n",ans);
    temp = ans;
    ans = a[1] * 100 + a[2] * 10 + a[4];
    if(ans != temp)
        printf("%d\n",ans);
    temp = ans;
    ans = a[1] * 100 + a[3] * 10 + a[4];
    if(ans != temp)
        printf("%d\n",ans);
    temp = ans;
    ans = a[2] * 100 + a[3] * 10 + a[4];
    if(ans != temp)
        printf("%d\n",ans);
    temp = ans;
    return 0;
}