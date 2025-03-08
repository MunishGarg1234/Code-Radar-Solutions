#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    while(n!=0){
        r=n%2;
        n=n/2;
    }
    if(r==1){
        printf("Set");
    }
    else{
        printf("Not Set");
    }
    return 0;
}