#include<stdio.h>
#include<string.h>
int main(){
    char ch[100],ch1[100];
    scanf("%s",ch);
    int a=strlen(ch),j=0;
    for(int i=a-1;i>=0;i--){
        ch1[j]=ch[i];
        j++;
    }
    int k=0,l=0;
    for(int i=0;i<=a-1;i++){
        if(ch[i]!=ch1[k]){
            l=1;
            printf("No");
            break;
        }
        k++;
    }
    if(l==0){
        printf("Yes");
    }
    return 0;
}