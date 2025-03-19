#include <stdio.h>
#include <string.h>
#define MAX_CHAR 256
int main() {
    char str[100], result;
    int freq[MAX_CHAR] = {0}, maxFreq = 0;
    fgets(str, sizeof(str), stdin);
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != '\n') {
            freq[(int)str[i]]++;
        }
    }
    for (int i = 0; i < MAX_CHAR; i++) {
        if (freq[i] > maxFreq) {
            maxFreq = freq[i];
            result = (char)i;
        }
    }
    printf(" '%c' %d", result, maxFreq);

    return 0;
}
