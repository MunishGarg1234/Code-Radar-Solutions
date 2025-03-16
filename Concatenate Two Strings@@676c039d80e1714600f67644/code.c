#include<stdio.h>
#include<string.h>
int main(){
    char ch[100],ch1[100],ch3[200];
    fgets(ch,100,stdin);
    fgets(ch1,100,stdin);
    ch3=strcat(ch,ch1);
    puts(ch3);
    return 0;
}