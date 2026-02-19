#include <stdio.h>

int main() {
    int n, sum = 0;
    
    // Input the five-digit number
    scanf("%d", &n);
    
    // Process each of the 5 digits
    sum += n % 10;    // Get 4th index digit (units)
    n /= 10;          // Remove it
    
    sum += n % 10;    // Get 3rd index digit (tens)
    n /= 10;
    
    sum += n % 10;    // Get 2nd index digit (hundreds)
    n /= 10;
    
    sum += n % 10;    // Get 1st index digit (thousands)
    n /= 10;
    
    sum += n % 10;    // Get 0th index digit (ten-thousands)
    
    printf("%d\n", sum);
    
    return 0;
}