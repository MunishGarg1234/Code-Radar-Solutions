#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<=n-1;i++){
        scanf("%d",&arr[i]);
    }
    int a=arr[0],b=arr[0];
    for(int i=1;i<=n-1;i++){
        if(b<arr[i]){
            b=arr[i];
        }
        if(a>ar[i]){
            a=arr[i];
        }
    }
    printf("%d %d",b,a);
    return 0;
}