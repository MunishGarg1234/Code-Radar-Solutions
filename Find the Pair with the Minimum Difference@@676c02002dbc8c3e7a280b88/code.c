// Your code here...
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int a,b,x,y;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            a=arr[i]-arr[j];
            if(a<0){
                a=a*-1;
            }
            if(a<b){
                b=a;
                x=arr[i];
                y=arr[j];
            }
        }
    }
    printf("%d",b);
    return 0;
}