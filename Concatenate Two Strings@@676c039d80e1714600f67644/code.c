#include<stdio.h>
#include<string.h>
int main(){
    char ch[100],ch1[100];
    fgets(ch,100,stdin);
    fgets(ch1,100,stdin);
    ch[strcspn(ch,"\n")]='\0';
    ch1[strcspn(ch1,"\n")]='\0';
    int a=strcspn(ch,"\0");
    for(int j=0;ch1[j]!='\0';j++){
        ch[a]=ch1[j];
        a++;
    }
    puts(ch);
    return 0;
}