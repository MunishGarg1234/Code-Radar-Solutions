#include<stdio.h>
int main(){
    char ch[100],ch1[100];
    fgets(ch,100,stdin);
    int j=0;
    for(int i=0;ch[i]!='\0';i++){
        if(ch[i]=='a' || ch[i]=='e' || ch[i]=='i' || ch[i]=='o' || ch[i]=='u'){
            ch1[j]=ch[i];
            j++;
        }
    }
    printf("%s",ch1);
    return 0;
}