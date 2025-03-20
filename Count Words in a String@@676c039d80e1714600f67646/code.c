#include <stdio.h>
int main() {
    char ch[100];
    int count = 0;
    fgets(ch,100, stdin);
    for (int i = 0; ch[i]!='\0'; i++) {
        if (ch[i]==' ') {
            count++;
        }
    }
    printf("%d", count+1);
    return 0;
}
