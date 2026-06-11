#include <stdio.h>
#include <math.h>
int main() {
    int is prime(int n) {
       if (n <=1) return 0;
       for (int i = 2; i<= sqrt(n); i++)
       if (n% i == 0) return 0;
       return 1;
    }
    int main() {
        int low, high;
        printf("enter range low high:");
        scanf("%d %d", &low,&high);
        printf("prime number:");
        for (int i =low; i<=high; i++) {
            if(is prime9i)) {
                printf("5d", i);
            }
            rerurn 0;
        }