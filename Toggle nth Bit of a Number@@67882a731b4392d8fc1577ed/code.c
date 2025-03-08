#include<stdio.h>
int main(){
    int x,n,r,ans=0,power=1;
    scanf("%d %d",&x,&n);
    for(int i=0;i<=31;i++){
        r=x%2;
        x=x/2;
        if(i==n){
            if(r==0){
                r=1;
            }
            else{
                r=0;
            }
        }
        ans=ans+r*power;
        power=power*2;
    }
    printf("%d",ans);
    return 0;
}