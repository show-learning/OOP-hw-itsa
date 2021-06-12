#include<stdio.h>
#include<string.h>
int main(){
    char input[1001];
    char reverse[1001];
    int i,len;
    while(scanf("%s",input)!=EOF){
        len=strlen(input);
        for(i=0;i<len;i++){
            reverse[i]=input[len-i-1];
        }
        reverse[len]='\0';
        printf("%s\n",reverse);
    }
    return 0;
}
