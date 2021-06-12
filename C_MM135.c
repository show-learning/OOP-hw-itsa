#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a, b, temp;
    for(int i = 0; i < n; i++ ){
        if(i != 0){
            printf("\n\n");
        }
        scanf("%d %d",&a,&b);
        temp = b - a + 1;
        if(temp > 5){
            for(int j = 1; j <= 9; j++){
                for(int k = a ; k < a + 5; k++){
                    printf("%d * %d = ",k,j);
                    if(k * j < 10){
                        printf(" ");
                    }
                    printf("%d",k * j);
                    if(k != a + 4){
                        printf("     ");
                    }
                }
                printf("\n");
            }
            printf("\n\n");
            a = a +5;
        }
        for(int j = 1; j <= 9; j++){
            for(int k = a ; k <= b; k++){
                printf("%d * %d = ",k,j);
                if(k * j < 10){
                    printf(" ");
                }
                printf("%d",k * j);
                if(k != b){
                    printf("     ");
                }
            }
            printf("\n");
        }
        
    }
    return 0;
}