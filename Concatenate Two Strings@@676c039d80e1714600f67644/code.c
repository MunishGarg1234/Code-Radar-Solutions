#include<stdio.h>
#include<string.h>
int main(){
    char ch[100],ch1[100];
    fgets(ch,100,stdin);
    fgets(ch1,100,stdin);
    ch[strcspn(ch,"\n")]="\0";
    strcat(ch,ch1);
    return 0;
}