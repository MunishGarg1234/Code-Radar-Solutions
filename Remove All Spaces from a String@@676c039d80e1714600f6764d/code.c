#include<stdio.h>
int main(){
    char ch[100];
    fgets(ch,100,stdin);
    for(int i=0;ch[i]='\0';i++){
        if(ch[i]==' '){
            ch[strcspn(ch," ")]='';
        }
    }
    printf("%s",ch);
    return 0;
}