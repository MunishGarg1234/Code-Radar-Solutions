#include<stdio.h>
int main(){
    char ch[100];
    fgets(ch,100,stdin);
    int x=0;
    for(int i=0;ch[i]!='\0';i++){
        if (!((ch[i]>='a' && ch[i]<='z')|| (ch[i]>='A' && ch[i]<='Z') || (ch[i]==' '))){
            x=1;
            printf("No");
            break;
        }
    }
    if(x==0){
        printf("Yes");
    }
    else{

    }
    return 0;
}