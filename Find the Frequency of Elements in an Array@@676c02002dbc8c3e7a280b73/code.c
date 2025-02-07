#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<=n-1;i++){
        scanf("%d",&arr[i]);
    }
    int a,count=0;
    for(int i=0;i<=n-1;i++){
        count=1;
        for(int j=0;j<=n-1;j++){
            if(arr[i]==arr[j] && i!=j){
                a=arr[i];
                count++;
            }
        }
        printf("%d %d",a,count);
        printf("\n");
    }
    return 0;
}