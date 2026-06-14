#include <stdio.h>

int main() {
    int n, count = 0;
    printf("Enter number: ");
    if (scanf("%d", &n) != 1) return 1;

    while (n > 0) {
        count += n & 1; // check LSB
        n >>= 1; // right shift
    }
    printf("Set bits: %d", count);
    return 0;
}
