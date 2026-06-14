#include <stdio.h>
#include <math.h>
int main() {
    long bin;
    int dec = 0, i = 0;
    printf("Enter binary: ");
    scanf("%lld", &bin);

    while(bin > 0) {
        int digit = bin % 10;
        dec += digit * pow(2, i++);
        bin /= 10;
    }
    printf("Decimal: %d", dec);
    return 0;
}
