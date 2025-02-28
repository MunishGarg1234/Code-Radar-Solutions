#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<=n-1;i++){
        scanf("%d",&arr[i]);
    }
    int b=-1000;
    for(int i=0;i<=n-1;i++){
        for(int j=0;j<=n-1;j++){
            if(i!=j){
                if(arr[i]*arr[j]>b){
                    b=arr[i]*arr[j];
                }
            }
        }
    }
    printf("%d",b);   
    return 0;
}