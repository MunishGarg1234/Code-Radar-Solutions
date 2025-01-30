#include <stdio.h>
int main() {
    int n,b;
    scanf("%d",&n);
    b=67;
    for(int i=2;i<=n-1;i++){
        if(n%i==0){
            printf("Not Prime");
            return 0;
        }
    }
    printf("Prime");
    return 0;
}