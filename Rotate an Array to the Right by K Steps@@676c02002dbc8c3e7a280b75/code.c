#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int arr1[n];
    for(int i=0;i<=n-1;i++){
        scanf("%d",&arr[i]);
        arr1[i]=0;
    }
    int k;
    scanf("%d",&k);
    for(int i=0;i<=n-1;i++){
        if(i+k<=n-1){
        arr1[i+k]=arr[i];
        }
        else{
            arr1[i+k-n]=arr[i];
        }
    }
    for(int i=0;i<=n-1;i++){
        printf("%d ",arr1[i]);
    }
    return 0;
}