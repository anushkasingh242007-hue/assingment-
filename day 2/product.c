#include<stdio.h>
int mai()
{
    int n, prod =1 , temp;
    printf("enter a number");
    scanf("%d" , &n);
    temp = n;
    if (temp==0) {
        prod = 0;
    } else {
        while ( temp > 0) {
            prod = prod * (temp % 10);
            temp = temp / 10;
        }
    }
    printf("product of digits: %d", prod);
    return 0;
}