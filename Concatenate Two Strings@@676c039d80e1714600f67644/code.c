#include<stdio.h>
#include<string.h>
int main(){
    char ch[100],ch1[100],ch3[200];
    fgets(ch,100,stdin);
    fgets(ch1,100,stdin);
    strcat(ch,ch1);
    puts(ch);
    return 0;
}