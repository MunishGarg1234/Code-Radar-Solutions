#include<stdio.h>
int main(){
    int x,n,r;
    scanf("%d %d",&x,&n);
    for(int i=0;i<=n;i++){
        r=x%2;
        x=x/2;
        if(i==n){
            printf("%d",r);
            break;
        }
    }
    return 0;
}