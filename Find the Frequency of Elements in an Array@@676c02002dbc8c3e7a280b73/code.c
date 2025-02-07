#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<=n-1;i++){
        scanf("%d",&arr[i]);
    }
    int count;
    for(int i=0;i<=n-1;i++){
        count=1;
        if(arr[i]==-1){
            continue;
        }
        for(int j=0;j<=n-1;j++){
            if(arr[i]==arr[j]){
                count++;
                arr[j]=-1;
            }
        }
        printf("%d %d",arr[i],count);
        printf("\n");
    }
    return 0;
}
