#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int k=1;k<=n-i;k++){
            printf(" ");
        }
        for(int j=1;j<=2*i-1;j++){
            printf("*");
        }
        printf("\n");
    }
    for(int i=n-1;i>=1;i--){
        for(int j=n-i;j>=1;j--){
            printf(" ");
        }
        for(int l=2*i-1;l>=1;l--){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}