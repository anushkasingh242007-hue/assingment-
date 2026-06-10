#include<stdio.h>
int mai()
{
    int n, sum = 0, temp;
    printf("enter a number;");
    scanf("%d", &n);
    temp = n;
    while (temp !=0)
    {
        sum = sum + temp % 10;
        temp =temp/10;
    }
    printf("sum of digits of %d " , sum);
return 0;
}
    