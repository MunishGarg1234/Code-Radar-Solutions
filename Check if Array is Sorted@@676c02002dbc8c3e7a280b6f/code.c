#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int arr1[n];
    int m;
    for(int i=0;i<=n-1;i++){
        scanf("%d",&m);
        arr1[i]=m;
    }
    for(int j=0;j<=n-1;j++){
        if(j+1<=n-1){
            if(arr1[j]<=arr1[j+1]){
                continue;
            }
            else{
                printf("Not Sorted");
                return 0;
            }
        }
    }
    printf("Sorted");
    return 0;
}