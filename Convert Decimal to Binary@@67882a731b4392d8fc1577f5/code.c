#include<stdio.h>
int main(){
    int x,r,i=0;
    char ch[32];
    scanf("%d",&x);
    if(x==0){
        printf("0");
    }
    while(x!=0){
        r=x%2;
        x=x/2;
        ch[i]=r;
        i++;
    }
    for(int j=i-1;j>=0;j--){
        printf("%d",ch[j]);
    }
    
    return 0;
}