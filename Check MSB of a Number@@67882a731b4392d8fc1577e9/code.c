#include <stdio.h>

int main() {
    int x,r;
    scanf("%d",&x);
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
