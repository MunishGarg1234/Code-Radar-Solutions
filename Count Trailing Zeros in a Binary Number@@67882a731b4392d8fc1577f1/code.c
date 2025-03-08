#include<stdio.h>
int main(){
    int x,count=0,r;
    scanf("%d",&x);
    while(x!=0){
        r=x%2;
        x=x/2;
        if(r==0){
            count++;
        }
    }
    printf("%d",count);
    return 0;
}