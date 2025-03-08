#include <stdio.h>
int main() {
    int n,k,rows=1;
    int x=rows;
    scanf("%d",&n);
    for(int i=n;i>=1;i--){
        for(int j=0;j<=i-1;j++){
            printf(" ");
        }
        k=1;
        for(int j=i;j<=n;j++){
            printf("%d ",k);
            k++;
        }
        for(int j=1;j<=rows-1;j++){
            printf("%d",x);
            x--;
        }
        rows++;
        printf("\n");
    }
    return 0;
}