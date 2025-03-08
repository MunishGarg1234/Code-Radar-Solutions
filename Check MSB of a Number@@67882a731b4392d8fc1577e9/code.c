#include<stdio.h>
int main(){
    long long int a;
    scanf("%lld",&a);
    if(a%2!=0){
        printf("Set");
    }
    else{
        printf("Not Set");
    }
    return 0;
}