#include<stdio.h>
//輸入k，印出依序1~500內k個質數，和這些質數和
int main(){
    int k;
    scanf("%d",&k);
    int count = 0;
    int sum = 0;
    for(int i = 2; i < 500; i++){
        for(int j = 2;j <= i; j++){
            if(j == i){
                printf("%d,",j);
                sum = sum + j;
                count++;
            }
            else if(i % j == 0){
                break;
            }
        }
        if(count == k){
            break;
        }
    }
    printf("\n%d\n",sum);
    return 0;
}