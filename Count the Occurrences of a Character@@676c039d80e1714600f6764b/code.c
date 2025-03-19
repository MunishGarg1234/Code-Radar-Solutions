#include<stdio.h>
int main(){
    char ch[100];
    fgets(ch,100,stdin);
    char ch1;
    scanf(" %c",&ch1);
    int count=0;
    for(int i=0;ch[i]!='\0';i++){
        if(ch[i]==ch1){
            count++;
        }
    }
    printf("%d",count);
    return 0;
}