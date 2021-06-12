#include<stdio.h>
int main(){

    int n = 0;
    int temp;
    for(int i = 100; i < 1000; i++){
        n = 0;
        temp = i / 100;
        temp = temp * temp *temp;
        n = n + temp;
        temp = i / 10;
        temp = temp % 10;
        temp = temp * temp *temp;
        n = n + temp;
        temp = i % 10;
        temp = temp * temp *temp;
        n = n + temp;
        if(n == i)
            printf("%d\n",i);
    }
    
    return 0;
}