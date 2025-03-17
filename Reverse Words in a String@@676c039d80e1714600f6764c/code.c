#include<stdio.h>
int main(){
    char ch[3];
    fgets(ch,3,stdin);
    printf("%s",ch);
    return 0;
}