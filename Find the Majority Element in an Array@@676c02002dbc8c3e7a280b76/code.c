#include <stdio.h>
int main() {
    int n,target=n/2;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<=n-1;i++){
        scanf("%d",&arr[i]);
    }
    int count;
    for(int i=0;i<=n-1;i++){
        count=0;
        if(arr[i]==-100){
            continue;
        }
        for(int j=i+1;j<=n-1;j++){
            if(arr[i]==arr[j]){
                count++;
                arr[j]=-100;
            }
        }
        if(count >target){
            printf("%d",arr[i]);
            break;
        }
        else{
            printf("-1");
            break;
        }
    }
    return 0;
}