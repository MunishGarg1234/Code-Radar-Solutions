#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    fgets(str,100,stdin);
    int count=strlen(str);
    printf("%d",count);
    return 0;
}