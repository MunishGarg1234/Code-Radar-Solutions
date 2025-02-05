#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<=n-1;i++){
        scanf("%d",&arr[i]);
    }
    int a=arr[0];
    for(int j=1;j<=n-1;j++){
        if(a<arr[i]){
            a=arr[i];
        }
    }
    int b=arr[0];
    for(int i=1;i<=n-1;i++){
        if(b<arr[i] && b!=a){
            b=arr[i];
        }
    }
    printf("%d",a*b);
    // a=max no
    return 0;
}