#include <stdio.h>
int main() {
    char str[100];
    int count = 0;
    fgets(str,100, stdin);
    for (int i = 0; str[i]; i++) {
        if ((str[i] != ' ' && str[i] != '\n') && (str[i + 1] == ' ' || str[i + 1] == '\n' || str[i + 1] == '\0')) {
            count++;
        }
    }
    printf("Word count: %d", count);
    return 0;
}
