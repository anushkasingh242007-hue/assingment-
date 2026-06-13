#include <stdio.h>

int main() {
    int num, temp, remainder, sum = 0, fact, i;
    
    // Take input from user
    printf("Enter a number: ");
    scanf("%d", &num);
    
    // Store original number in temp
    temp = num;
    
    // Loop to process each digit
    while (temp > 0) {
        
        // Extract last digit
        remainder = temp % 10;
        
        // Initialize factorial
        fact = 1;              
        
        // Calculate factorial using for loop
        for (i = 1; i <= remainder; i++) {
            fact *= i;
        }
        
        // Add factorial to sum
        sum += fact;
        
        // Remove last digit
        temp /= 10;    
    }
    
    // Check if number is strong
    if (sum == num) {
        printf("%d is a strong number.\n", num);
    } else {
        printf("%d is not a strong number.\n", num);
    }
    
    return 0;
}