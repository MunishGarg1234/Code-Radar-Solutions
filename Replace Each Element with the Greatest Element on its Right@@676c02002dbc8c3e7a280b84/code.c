#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<=n-1;i++){
        scanf("%d",&arr[i]);
    }
    int a;
    for(int i=0;i<n;i++){
        a=-100;
        for(int j=i+1;j<n;j++){
            if(arr[j]>a){
                a=arr[j];
            }
        }
        arr[i]=a;
    }
    arr[n-1]=-1;
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}