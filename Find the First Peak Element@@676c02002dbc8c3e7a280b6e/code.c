#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<=n-1;i++){
        scanf("%d",&arr[i]);
    }
    for(int j=1;j<=n-2;j++){
        if(arr[j]>arr[j-1] && arr[j]>arr[j+1]){
            printf("%d",arr[j]);
            break;
        }
    }
    for(int i=0;i<=n-1;i++){
        if(i==0){
            if(arr[i]>arr[i+1]){
                printf("%d",arr[i]);
                break;
            }
        }
        if(i==n-1){
            if(arr[i]>arr[i-1]){
                printf("%d",arr[i]);
                break;
            }
        }
    }
    return 0;
}