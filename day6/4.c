#include <stdio.h>
int power(int x, int n) {
    int result = 1;
    while(n > 0) {
        if(n & 1) result *= x; // if n is odd
        x *= x;
        n >>= 1;
    }
    return result;
}

int main() {
    int x, n;
    printf("Enter x and n: ");
    scanf("%d %d", &x, &n);
    printf("%d^%d = %d", x, n, power(x, n));
    return 0;
}