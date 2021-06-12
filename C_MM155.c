#include<stdio.h>
int main(){
    int n,judge; 
    while(scanf("%d",&n)!=EOF){
        judge = 1;
        for(int i = 2; i < n/2 ;i++){
            if(n % i == 0){ 
                judge = 0;  
                break;
            }
        }
        if(judge == 1)
            printf("yes\n");
        else
            printf("no\n");
    }
}