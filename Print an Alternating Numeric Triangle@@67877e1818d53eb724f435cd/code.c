#include <stdio.h>
int main() {
    int n,k=1;
    scanf("%d",&n);
    for(int i=0;i<=n-1;i++){
        if(k==0){
            k=1;
        }
        else{
            k=0;
        }
        for(int j=0;j<=i;j++){
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