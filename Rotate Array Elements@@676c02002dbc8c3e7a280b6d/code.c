// Your code here...
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
    k=k%n;
    for(int i=0;i<=n-1;i++){
        arr[(i+k)%n]=arr[i];
    }
    for(int i=0;i<=n-1;i++){
        printf("%d\n",arr[i]);
    }
    return 0;
}