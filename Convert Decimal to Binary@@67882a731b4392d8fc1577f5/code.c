#include<stdio.h>
int main(){
    int x,r,i=0;
    char ch[32];
    scanf("%d",&x);
    while(x!=0){
        r=x%2;
        x=x/2;
        ch[i]=r;
        i++;
    }
    for(int j=i;j>=0;j--){
        printf("%d",ch[j]);
    }
    
    return 0;
}