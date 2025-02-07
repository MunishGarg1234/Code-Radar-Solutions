#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<=n-1;i++){
        scanf("%d",&arr[i]);
    }
    int x=0;
    for(int i=0;i<=n-1;i++){
        for(int j=0;j<=n-1;j++){
            if(arr[i]==arr[j] && i!=j){
                printf("%d",arr[j]);
                x=1;
                break;
            }
        }
        if(x==1){
            break;
        }
    }
    return 0;
}