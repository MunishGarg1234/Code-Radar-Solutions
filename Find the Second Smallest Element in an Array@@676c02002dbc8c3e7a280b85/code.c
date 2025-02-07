#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<=n-1;i++){
        scanf("%d",&arr[i]);
    }
    int x=0;
    int a=arr[0];
    for(int i=1;i<=n-1;i++){
        if(a>arr[i]){
            a=arr[i];
        }
    }
    int b=arr[0];
    for(int i=1;i<=n-1;i++){
        if(b>arr[i] && arr[i]!=a){
            b=arr[i];
        }
    }
    printf("%d",b);
    return 0;
}