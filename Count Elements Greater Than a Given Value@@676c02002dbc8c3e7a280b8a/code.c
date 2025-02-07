#include <stdio.h>
int main() {
    int n,target;
    scanf("%d %d",&n,&target);
    int arr[n];
    for(int i=0;i<=n-1;i++){
        scanf("%d",&arr[i]);
    }
    int count=0;
    for(int i=0;i<=n-1;i++){
        if(arr[i]>target){
            count++;
        }
    }
    printf("%d",count);
    return 0;
}