#include <stdio.h>
void fibonacciSeries(int n){
    if(n==1){
         printf(0);
    }
    else if(n==2){
        printf(1);
    }
    else{
        printf("%d",fibonacciSeries(n-1) + fibonacciSeries(n-2));
    }
}
int main() {
    return 0;
}
