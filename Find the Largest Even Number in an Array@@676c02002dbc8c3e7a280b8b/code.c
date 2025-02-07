#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<=n-1;i++){
        scanf("%d",&arr[i]);
    }
    int a=arr[0];
    int x=0;
    for(int i=0;i<=n-1;i++){
        if(arr[i]%2==0){
            if(a<arr[i]){
                a=arr[i];
                x=1;
            }
        }
    }if(x==1){
        printf("%d",a);
    }
    else{
        printf("-1");
    } 
    return 0;
}