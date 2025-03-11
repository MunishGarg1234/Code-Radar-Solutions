#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<=n-1;i++){
        scanf("%d",&arr[i]);
    }
    int k;
    scanf("%d",&k);
    for(int i=0;i<=n-1;i++){
        if(i+k<=n-1){
        arr[i]=arr[i+k];
        }
        else{
            arr[i]=arr[i+k-n];
        }
        printf("%d ",arr[i]);
    }    
    return 0;
}