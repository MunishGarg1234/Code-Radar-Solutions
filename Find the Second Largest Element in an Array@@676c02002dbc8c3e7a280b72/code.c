#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int x=0;
    int arr[n];
    for(int i=0;i<=n-1;i++){
        scanf("%d",&arr[i]);
    }
    int a=arr[0],b=arr[0];
    for(int i=1;i<=n-1;i++){
        if(a<arr[i]){
            a=arr[i];
        }
    }
    for(int j=1;j<=n-1;j++){
        if(b<arr[j] && arr[j]!=a){
            b=arr[j];
        }
    }
    printf("%d",b);
    return 0;
}