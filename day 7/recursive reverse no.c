#include <stdio.h>
int rev(int n, int revNum) {
    if(n == 0) return revNum;
    return rev(n / 10, revNum * 10 + n % 10);
}
int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    printf("Reverse = %d", rev(n, 0));
    return 0;
}