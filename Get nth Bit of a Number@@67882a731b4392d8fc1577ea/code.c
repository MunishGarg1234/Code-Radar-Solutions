#include<stdio.h>
int main(){
    int x,n,r;
    scanf("%d %d",&x,&n);
    for(int i=1;i<=n;i++){
        r=x%2;
        x=x/2;
        if(i==n){
            printf("%d",r);
        }
    }
    return 0;
}