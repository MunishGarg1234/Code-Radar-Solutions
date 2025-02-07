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
    for(int j=0;j<=n-1;j++){
        if(arr[i]==target){
            printf("%d",i);
        }
    }
    return 0;
}