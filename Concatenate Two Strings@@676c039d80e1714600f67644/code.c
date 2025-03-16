#include<stdio.h>
#include<string.h>
int main(){
    char ch[100],ch1[100];
    fgets(ch,100,stdin);
    fgets(ch1,100,stdin);
    for(int i=0;i<=100;i++){
        if(ch[i]=='\n'){
            ch[i]='\0';
        }
        if(ch1[i]=='\n'){
            ch1[i]='\0';
        }
    }
    strcat(ch,ch1);
    puts(ch);
    return 0;
}