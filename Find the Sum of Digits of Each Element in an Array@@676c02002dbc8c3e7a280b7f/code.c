#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<=n-1;i++){
        scanf("%d",&arr[i]);
    }
    int a,sum=0;
    for(int i=0;i<=n-1;i++){
        a=arr[i];
        while(a>0){
            sum=sum+a%10;
            a=a/10;
        }
        printf("%d ",sum);
    }
    return 0;
}