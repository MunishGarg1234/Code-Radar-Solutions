#include<stdio.h>
int main() {
    int n,x,y;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<=n-1;i++){
        scanf("%d",&arr[i]);
    }
    int k;
    scanf("%d",&k);
    for(int i=0;i<=n-1;i++){
        for(int j=0;j<=n-1;j++){
            if(i!=j){
                
                if(arr[i]+arr[j]==k && (x!=arr[j] && y!=arr[i])){
                    x=arr[i];
                    y=arr[j];
                    printf("%d %d\n",x,y);
                }
            }
        }
    }
    return 0;
}