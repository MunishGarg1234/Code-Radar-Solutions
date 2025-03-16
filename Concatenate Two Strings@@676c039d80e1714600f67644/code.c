#include<stdio.h>
int main(){
    char ch[100],ch1[100];
    fgets(ch,100,stdin);
    fgets(ch1,100,stdin);
    ch[strcspn(ch,"\n")]='\0';
    ch1[strcspn(ch1,"\n")]='\0';
    int indx1=strcspn(ch,"\0");
    for(int j=0;ch1[j]!='\0';j++){
        ch[indx1]=ch1[j];
        indx++;
    }
    puts(ch);
    return 0;
}