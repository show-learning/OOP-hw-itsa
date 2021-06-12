#include<stdio.h>
int main(){
    int n,a,b,c,d,ans_a = 0,ans_b = 0;
    char o;
    scanf("%d",&n);
    for(int i = 0; i < n; i++){
        scanf(" %c ",&o);
        scanf("%d %d %d %d",&a,&b,&c,&d);
        if(o == '+'){
            ans_a = a + c;
            ans_b = b + d;
        }
        else if(o == '-'){
            ans_a = a - c;
            ans_b = b - d;
        }
        else if(o == '*'){
            ans_a = a * c - b * d;
            ans_b = a * d + b * c;
        }
        printf("%d %d\n",ans_a,ans_b);
    }
    return 0;
}