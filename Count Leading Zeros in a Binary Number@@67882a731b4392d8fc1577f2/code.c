#include<stdio.h>
int main(){
    int x,r,count=0;
    scanf("%d",&x);
    while(x!=0){
        r=x%2;
        x=x/2;
        count++;
    }
    printf("%d",32-count);
    return 0;
}