#include<stdio.h>
int main(){
    char ch[100];
    fgets(ch,100,stdin);
    char ch1,ch2;
    scanf("%c",&ch1);
    scanf("%c",&ch2);
    for(int i=0;ch[i]!='\0';i++){
        if(ch[i]==ch1){
            ch[i]=ch2;
        }
    }
    for(int i=0;ch[i]!='\0';i++){
        printf("%c",ch[i]);
    }
    return 0;
}