#include<stdio.h>
int main(){
    char ch[100];
    fgets(ch,100,stdin);
    for(int i=0;ch[i]!='\0';i++){
        if(ch[i]>='a' && ch[i]<='z'){
            ch[i]=ch[i]-32;
        }
        else if(ch[i]>='A' && ch[i]<='Z'){
            ch[i]=ch[i]+32;
        }
    }
    printf("%s",ch);
    return 0;
}