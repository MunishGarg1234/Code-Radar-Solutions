#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int count = 0;
    fgets(str, sizeof(str), stdin);
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ' && str[i + 1] != ' ' && str[i + 1] != '\0') {
            count++;
        }
    }
    printf("%d", count+1);
    return 0;
}
