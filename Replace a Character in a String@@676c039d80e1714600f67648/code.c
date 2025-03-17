#include<stdio.h>
int main(){
    char ch[100];
    fgets(ch,100,stdin);
    char ch1,ch2;
    scanf("%c",&ch1);
    scanf("%c",&ch2);
    for(int i=0;ch[i]!='\0';i++){
        if(ch[i]=='l'){
            ch[i]='z';
        }
    }
    puts(ch);
    return 0;
}