#include <stdio.h>
int main() {
    int n,k=1;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            if(k==1){
                printf("%d ",k);
                k=0;
            }
            else{
                printf("%d ",k);
                k=1;
            }
        }
        printf("\n");
    }
    return 0;
}