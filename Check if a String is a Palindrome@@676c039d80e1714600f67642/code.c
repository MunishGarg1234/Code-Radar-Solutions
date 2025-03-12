#include<stdio.h>
#include<string.h>
int main(){
    char ch[100],ch1[100];
    scanf("%s",ch);
    int a=strlen(ch),j=0;
    for(int i=a-1;i>=0;i--){
        ch1[j]=ch[i];
        j++;
    }
    puts(ch1);
    return 0;
}