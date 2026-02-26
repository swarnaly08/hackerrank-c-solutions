#include <stdio.h>

// Recursive function to find the nth term
int find_nth_term(int n, int a, int b, int c) {
    // Base cases: returning the first three terms
    if (n == 1) return a;
    if (n == 2) return b;
    if (n == 3) return c;

    // Recursive call: sum of previous three terms
    return find_nth_term(n - 1, a, b, c) + 
           find_nth_term(n - 2, a, b, c) + 
           find_nth_term(n - 3, a, b, c);
}

int main() {
    int n, a, b, c;
  
    // Reading input
    scanf("%d %d %d %d", &n, &a, &b, &c);
    
    // Calculating and printing the result
    int result = find_nth_term(n, a, b, c);
    printf("%d\n", result);
    
    return 0;
}