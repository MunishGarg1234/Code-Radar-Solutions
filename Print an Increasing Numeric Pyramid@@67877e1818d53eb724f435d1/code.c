#include <stdio.h>
int main() {
    int n,k;
    scanf("%d",&n);
    for(int i=n;i>=1;i--){
        for(int j=1;j<=i-1;j++){
            printf(" ");
        }
        k=1;
        for(int j=i;j<=n;j++){
            printf("%d ",k);
            k++;
        }
        printf("\n");
    }
    return 0;
}