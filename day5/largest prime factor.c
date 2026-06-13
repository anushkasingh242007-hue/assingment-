#include <stdio.h>

int main() {
    int num;
    int largest_factor = 1;

    // Ask the user for input
    printf("Enter a number: ");
    scanf("%d", &num);

    int original_num = num; // Keep a copy for the final print statement

    // 1. Remove all factors of 2
    while (num % 2 == 0) {
        largest_factor = 2;
        num = num / 2;
    }

    // 2. Remove odd factors starting from 3
    for (int i = 3; i * i <= num; i = i + 2) {
        while (num % i == 0) {
            largest_factor = i;
            num = num / i;
        }
    }

    // 3. If what's left is greater than 2, then it must be prime
    if (num > 2) {
        largest_factor = num;
    }

    // Output the result
    printf("The largest prime factor of %d is: %d\n", original_num, largest_factor);

    return 0;
}