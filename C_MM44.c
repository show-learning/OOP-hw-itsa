#include<stdio.h>
#include <string.h>
int main(){
    char n[3];
    char t[8];
    int count;
    while (scanf("%s %s",n,t) != EOF)
    {
        count = 0;
        char *ptr = t;
        while(strstr(ptr,n) != NULL){
            ptr = strstr(ptr,n);
            count++;
            *ptr = '\0';
            ptr = ptr + 1;
            
        }
        printf("%d\n",count);
    }
    
    return 0;
}