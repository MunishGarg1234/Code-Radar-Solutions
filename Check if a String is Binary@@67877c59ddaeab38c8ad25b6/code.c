#include<stdio.h>
int main(){
    char ch[100];
    fgets(ch,100,stdin);
    int x=1;
    for(int i=0;ch[i]!='\0';i++){
        if(ch[i]=='0' || ch[i]=='1'){
            continue;
        }
        else{
            x=0;
            printf("No");
            break;
        }
    }
    if(x==1){
        printf("Yes");
    }
    return 0;
}