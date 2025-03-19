#include <stdio.h>
#include <string.h>

#define MAX_CHAR 256  // Total ASCII characters

int main() {
    char str[100], result;
    int freq[MAX_CHAR] = {0}, maxFreq = 0;

    // Input string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Count frequency of each character
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != '\n') { // Ignore newline from fgets
            freq[(int)str[i]]++;
        }
    }

    // Find the most frequent character (alphabetically first in case of tie)
    for (int i = 0; i < MAX_CHAR; i++) {
        if (freq[i] > maxFreq) {
            maxFreq = freq[i];
            result = (char)i;
        }
    }

    // Output result
    printf("Most frequent character: '%c' -> %d times\n", result, maxFreq);

    return 0;
}
