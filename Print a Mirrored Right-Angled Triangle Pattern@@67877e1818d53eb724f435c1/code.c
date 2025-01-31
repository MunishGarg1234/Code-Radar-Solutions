#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    for(int i=n;i>=1;i--){
        for(int j=i;j>=2;j--){
            printf(" ");
        }
        for(int k=1;k<=(n+1-i);k++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}