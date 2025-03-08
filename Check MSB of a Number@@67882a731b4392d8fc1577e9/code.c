#include<stdio.h>
int main(){
    long long int a;
    scanf("%lld",&a);
    if(a<0){
        a=a*-1;
    }
    if(a%2==1){
        printf("Set");
    }
    else{
        printf("Not Set");
    }
    return 0;
}