#include<stdio.h>
int main(){
    char ch[100];
    fgets(ch,100,stdin);
    int j=0;
    for(int i=0;ch[i]=='\0';i++){
        if(ch[i]!=' '){
            ch[j]=ch[i];
        }
    }
    printf("%s",ch);
    return 0;
}