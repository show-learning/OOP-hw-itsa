#include<stdio.h>
int main(){
    int n,temp,a; 
    scanf("%d",&n);
    int count = 0;
    for(int i = 2; count < n ;i++){
        for(int j = 2;j <= i; j++){
            if(j == i){
                temp = j;
                a = 0;
                while(temp !=0){
                    a = a * 10;
                    a = a + temp % 10;
                    temp =temp / 10;
                    
                }
                for(int k = 2; k <=a; k++){
                    if(k == a){
                        printf("%d\n",j);
                        count++;
                    }
                    else if(a % k == 0){
                        break;
                    }
                }
                
            }
            else if(i % j == 0){
                break;
            }
        }
    }
}