#include<stdio.h>
int main(){
    long long int x;
    int r,count=0;
    scanf("%lld",&x);
    while(x!=0){
        r=x%2;
        x=x/2;
        count++;
    }
    printf("%d",32-count);
    return 0;
}