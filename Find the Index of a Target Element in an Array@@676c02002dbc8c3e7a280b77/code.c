#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<=n-1;i++){
        scanf("%d",&arr[i]);
    }
    int target;
    scanf("%d",&target);
    int x=0;
    for(int j=0;j<=n-1;j++){
        if(arr[j]==target){
            printf("%d",j);
            x=1;
            break;
        }
    }
    if(x==0){
        printf("-1");
    }
    return 0;
}