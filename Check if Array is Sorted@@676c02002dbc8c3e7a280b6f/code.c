#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int arr1[n];
    int m;
    for(int i=0;i<=n-1;i++){
        scanf("%d",&m);
        arr1[i]=m;
    }
    int b=1;
    for(int j=0;j<=n-2;j++){
        if(arr1[j]>arr1[j+1]){
            b=0;
            break;
        }
    }
    if(b){
        printf("Sorted");
    }
    else{
        printf("Not Sorted");
    }
    return 0;
}