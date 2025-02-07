#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    float target=n/2.0;
    int arr[n];
    for(int i=0;i<=n-1;i++){
        scanf("%d",&arr[i]);
    }
    int count,maxcount=0;
    for(int i=0;i<=n-1;i++){
        count=1;
        for(int j=i+1;j<=n-1;j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
        if(count >maxcount){
            maxcount=count;
            maxelement=arr[i];
        }
    }
    // printf("%d",maxelement);
    return 0;
}
