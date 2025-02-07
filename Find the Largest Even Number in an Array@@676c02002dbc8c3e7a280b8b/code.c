#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<=n-1;i++){
        scanf("%d",&arr[i]);
    }
    int a=arr[0];
    for(int i=0;i<=n-1;i++){
        if(arr[i]%2==0){
            if(a<arr[i]){
                a=arr[i];
            }
        }
    }
    printf("%d",a);
    return 0;
}