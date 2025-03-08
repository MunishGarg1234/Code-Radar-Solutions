#include<stdio.h>
int main(){
    int n,r;
    scanf("%d %d",&n,&r);
    while(n!=0){
        r=n%2;
        n=n/2;
    }
    if(r==0){
        printf("Not Set");
    }
    else{
        printf("Set");
    }
    return 0;
}