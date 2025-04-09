// Your code here...
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int a=0,b=100,x,y;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            a=arr[j]-arr[i];
            if(a<0){
                a=-1*a;
            }
            if(a<b){
                b=a;
                // x=arr[i];
                // y=arr[j];
            }
        }
    }
    printf("%d",b);
    return 0;
}