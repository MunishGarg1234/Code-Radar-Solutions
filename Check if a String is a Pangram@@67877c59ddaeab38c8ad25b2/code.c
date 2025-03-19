#include<stdio.h>
#include<ctype.h>
int main(){
    char ch[100];
    fgets(ch,100,stdin);
    int x=0;
    for(int i=0;ch[i]!='\0';i++){
        if(!isalpha(ch[i])){
            x=1;
            printf("No");
        }
    }
    if(x==0){
        printf("Yes");
    }
    return 0;
}