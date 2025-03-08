#include <stdio.h>

int main() {
    int n, msb = 0;
    scanf("%d", &n);

    while (n != 0) {
        msb = n % 2;  // Store the last remainder
        n = n / 2;     // Reduce n by dividing it by 2
    }

    if (msb == 1) {
        printf("Set\n");  // MSB is 1
    } else {
        printf("Not Set\n");  // MSB is 0 (should never happen for positive numbers)
    }

    return 0;
}
