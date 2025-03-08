#include<stdio.h>
int main(){
    int x,n,ans=0,power=1;
    scanf("%d %d",&x,&n);
    for(int i=0;i<=31;i++){
        r=x%2;
        x=x/2;
        if(i==n){
            r=1;
        }
        ans=ans+r*power;
        power=power*2;
    }
    printf("%d",ans);
    return 0;
}