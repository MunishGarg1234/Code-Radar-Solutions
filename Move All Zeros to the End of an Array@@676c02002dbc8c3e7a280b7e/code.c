// Your code here...
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n],arr1[n];
    for(int i=0;i<=n-1;i++){
        scanf("%d",&arr[i]);
    }
    int k=n-1,a=0;
    for(int i=0;i<=n-1;i++){
        if(arr[i]==0){
            arr1[k]=arr[i];
            k--;
        }
        else{
            arr1[a]=arr[i];
            a++;
        }
    }
    for(int j=0;j<=n-1;j++){
        printf("%d ",arr1[j]);
    }
    return 0;
}