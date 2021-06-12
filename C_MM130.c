#include<stdio.h>
int main(){
    int n;
    float ans;
    scanf("%d",&n);
    int d, b, g, dog;
    for(int i = 0; i < n; i++ ){
        scanf("%d %d %d %d",&d,&b,&g,&dog);
        ans = b + g;
        ans = d / ans;
        ans = ans * dog;
        printf("%.2f\n",ans); 
    }
    return 0;
}