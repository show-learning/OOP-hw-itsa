#include<stdio.h>
int main(){
    int x,y,z;
    int temp;
    while(scanf("%d %d %d",&x,&y,&z) != EOF){
        if(x + y <= z ||x + z <= y || y + z <= x){
            printf("Not Triangle\n");
        }
        else{ 
            if( x <= z && y <= z){
                temp = z * z;
                temp = temp - x * x;
                temp = temp - y * y;
                if(temp ==0){
                    printf("Right Triangle\n");
                }
                else if(temp < 0){
                    printf("Acute Triangle\n");
                }
                else{
                    printf("Obtuse Triangle\n");
                }   
            }
            else if( x <= y && z <= y){
                temp = y * y;
                temp = temp - x * x;
                temp = temp - z * z;
                if(temp ==0){
                    printf("Right Triangle\n");
                }
                else if(temp < 0){
                    printf("Acute Triangle\n");
                }
                else{
                    printf("Obtuse Triangle\n");
                }
            }
            else if( y <= x && z <= x){
                temp = x * x;
                temp = temp - y * y;
                temp = temp - z * z;
                if(temp ==0){
                    printf("Right Triangle\n");
                }
                else if(temp < 0){
                    printf("Acute Triangle\n");
                }
                else{
                    printf("Obtuse Triangle\n");
                }
            }
        }
    }
    return 0;
}