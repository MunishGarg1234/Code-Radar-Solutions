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
        if(arr[i]==0){
            continue;
        }
        for(int j=i+1;j<=n-1;j++){
            if(arr[i]==arr[j]){
                count++;
                arr[i]=0;
            }
        }
        printf("%d %d",arr[i],count);
        printf("\n");
    }
    return 0;
}
