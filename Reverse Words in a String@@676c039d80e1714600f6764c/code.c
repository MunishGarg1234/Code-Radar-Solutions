#include<stdio.h>
#include<string.h>
int main(){
    char ch[100];
    fgets(ch,100,stdin);
    int length;
    for(int i=0;ch[i]='\0';i++){
        length=5;
        for(int j=0;ch[j]!=' ';j++){
            printf("%c",ch[length-1]);
            length--;
            if(length<0){
                break;
            }
        }
        printf(" ");
    }
    return 0;
}