// Your code here...
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int a=0,b=200,x=0,y=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            a=arr[j]-arr[i];
            if(a<0){
                a=-1*a;
            }
            if(a<b){
                b=a;
                x=arr[i];
                y=arr[j];
            }
        }
    }
    if(n==1){
        printf("-1");
    }
    else if(y>=x){
        printf("%d %d",x,y);
    }
    else if(y<x){
        printf("%d %d",y,x);
    }
    
    return 0;
}