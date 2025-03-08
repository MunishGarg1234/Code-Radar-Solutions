#include<stdio.h>
int main(){
    int n,r;
    scanf("%d %d",&n,&r);
    while(n!=0){
        r=n%2;
        n=n/2;
    }
    r=r+5;
    if(r==6){
        printf("Set");
    }
    else{
        printf("Not Set");
    }
    return 0;
}