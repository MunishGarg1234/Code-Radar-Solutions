#include<stdio.h>
int main(){
    char ch[100];
    int arr[300]={0};
    fgets(ch,100,stdin);
    char most;
    int a=0;
    for(int i=0;ch[i]!='\0';i++){
        arr[(int)ch[i]]++;
        if(arr[(int)ch[i]]>a){
            a=arr[(int)ch[i]];
            most=ch[i];
        }
    }
    printf("%c",most);
    return 0;
}