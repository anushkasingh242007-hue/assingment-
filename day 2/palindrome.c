#include<stdio.h>
int mai()
{
int n, temp, rev = 0;
pri ntf("enter  number");
scanf("%d", &n);
temp = n;
int original = temp;
while (temp > 0) {
    rev = rev*10 + temp % 10;
    temp = temp/10;
}
if(rev == orginal)
printf("palindrome");
else
printf("not palindrome");
return0;
}