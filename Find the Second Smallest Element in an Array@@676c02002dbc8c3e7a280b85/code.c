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
        if(arr[i]<=a){
            a=arr[i];
        }
    }
    int b=1;
    for(int i=0;i<=n-1;i++){
        if(arr[i]<=b && b!=a){
            b=arr[i];
        }
    }
    if(a==b){
        printf("-1");
    }
    else{
        printf("%d",b);
    }
    return 0;
}