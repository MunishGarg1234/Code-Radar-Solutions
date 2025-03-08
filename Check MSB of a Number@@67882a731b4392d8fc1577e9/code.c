#include <stdio.h>

int main() {
    long long int x;
    int r;
    scanf("%lld",&x);
    if(x==0){
        printf("Not Set");
    }
    while(x!=0){
        r=x%2;
        x=x/2;
    }
    if(r==1){
        printf("Set");
    }
    if(r==0){
        printf("Not Set");
    }
    return 0;
}
