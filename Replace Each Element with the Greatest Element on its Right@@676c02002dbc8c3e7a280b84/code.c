#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<=n-1;i++){
        scanf("%d",&arr[i]);
    }
    int b;
    for(int i=0;i<=n-1;i++){
        b=-1;
        for(int j=0;j<=n-1;j++){
            if(i!=j){
            if(arr[j]>=b){
                b=arr[j];
            } 
            }
        }
        arr[i]=b;
    }
    for(int j=0;j<=n-1;j++){
        printf("%d ",arr[j]);
    }
    return 0;
}