#include <stdio.h>
int main() {
    char a[20];
    int b;
    char c[20];
    scanf("%s %d",&a,&b);
    scanf("%s",&c);
    printf("Name: %s\n",a);
    printf("Age: %d\n",b);
    printf("Hobby: %s\n",c);
    return 0;
}