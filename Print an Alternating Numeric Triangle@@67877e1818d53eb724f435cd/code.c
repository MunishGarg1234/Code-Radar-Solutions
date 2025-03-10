#include <stdio.h>
int main() {
    int n,k=1;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        if(k==0){
            k=1;
        }
        else{
            k=0;
        }
        for(int j=1;j<=i;j++){
            if(i==1){
                k=1;
            }
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