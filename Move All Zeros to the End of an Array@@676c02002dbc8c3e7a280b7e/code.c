// Your code here...
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<=n-1;i++){
        scanf("%d",&arr[i]);
    }
    int k=0,a=n-1;
    for(int i=0;i<=n-1;i++){
        if(arr[i]!=0){
            arr[k]=arr[i];
            k+=1;
        }
        else{
            arr[a]=arr[i];
            a-=1;
        }
    }
    for(int j=0;j<=n-1;j++){
        printf("%d ",arr[j]);
    }
    return 0;
}