#include<stdio.h>
int main(){
    unsigned long long a;
    scanf("%llu",&a);
    if(a%2==0){
        printf("Not Set");
    }
    else{
        printf("Set");
    }
    return 0;
}