#include <stdio.h>
int main() {
    char str[100];
    int count = 0;
    fgets(str,100, stdin);
    for (int i = 0; str[i]; i++) {
        if (ch[i]==' ' || ch[i+1]!=' ') {
            count++;
        }
    }
    printf("%d", count+1);
    return 0;
}
