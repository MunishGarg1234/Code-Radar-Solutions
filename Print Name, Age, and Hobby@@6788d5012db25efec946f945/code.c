#include <stdio.h>
int main() {
    char a[20];
    int b;
    char c[20];
    scanf("%s %d",&a,&b);
    scanf("%s",&c);
    printf("Name: %s",a);
    printf("Age: %d",b);
    printf("Hobby: %s",c);
    return 0;
}