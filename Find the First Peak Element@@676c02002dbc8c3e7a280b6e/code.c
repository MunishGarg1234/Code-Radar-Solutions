#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    int m;
    for(int i=0;i<=n-1;i++){
        scanf("%d",&m);
        arr[i]=m;
    }
    for(int j=0;j<=n-1;j++){
        if(j==0){
            if(arr[0]>arr[1]){
                printf("%d",arr[0]);
                break;
            }
        }
        if(j==n-1){
            if(arr[n-1]>arr[n-2]){
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