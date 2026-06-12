#include <stdio.h>
#include <math.h>

int isArmstrong(int n) {
    int temp = n, sum = 0, digits = 0;
    int t = n;
    while(t > 0) { digits++; t /= 10; }
    while(temp > 0) {
        int d = temp % 10;
        sum += pow(d, digits);
        temp /= 10;
    }
    return sum == n;
}

int main() {
    int low, high;
    printf("Enter range low high: ");
    scanf("%d %d", &low, &high);
    
    printf("Armstrong numbers: ");
    for(int i = low; i <= high; i++) {
        if(isArmstrong(i)) printf("%d ", i);
    }
    return 0;
}