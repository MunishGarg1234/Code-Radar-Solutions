#include<stdio.h>
int main(){
    int x,n,r;
    scanf("%d %d",&x,&n);
    for(int i=0;i<=31;i++){
        r=x%2;
        x=x/2;
        if(i==n){
            r=0;
        }
        printf("%d",r);
    }
    return 0;
}