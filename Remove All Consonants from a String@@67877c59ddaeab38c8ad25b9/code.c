#include<stdio.h>
#include<ctype.h>
int main(){
    char ch[100],ch1[100];
    fgets(ch,100,stdin);
    int j=0;

    for(int i=0;ch[i]!='\0';i++){
        ch[i]=tolower(ch[i]);
        if(ch[i]=='a' || ch[i]=='e' || ch[i]=='i' || ch[i]=='o' || ch[i]=='u' || ch[i]==' '){
            ch1[j]=ch[i];
            j++;
        }
    }
    ch1[j]='\0';
    printf("%s",ch1);
    return 0;
}