#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int arr[n+1];
    int m;
    for(int i=0;i<=n;i++){
        scanf("%d",&m);
        arr[i]=m;
    }
    for(int j=0;j<=n;j++){
        if(j==0){
            if(arr[0]>arr[1]){
                printf("%d",arr[0]);
                break;
            }
        }
        if(j==n){
            if(arr[n]>arr[n-1]){
                printf("%d",arr[n-1]);
                break;
            }
        }
        if (arr[j]<arr[j+1] && arr[j-1]<arr[j]){
            printf("%d",arr[j]);
            break;
        }
    }
    return 0;
}