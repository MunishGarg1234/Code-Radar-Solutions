#include <stdio.h>
int main() {
    int n,count=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<=n-1;i++){
        scanf("%d",&arr[i]);
    }
    int a,x=0;
    for(int i=0;i<=n-1;i++){
        x=0;
        a=arr[i];
        if(a>1){
            for(int j=2;j<=a-1;j++){
                if(a%j==0){
                    x=1;
                    break;
                }
            }
            if(x==0){
                count=count+1;
            }
        }
    }
    printf("%d",count);
    return 0;
}