#include <stdio.h>

// 1. Without Recursion (Iterative Approach)
unsigned long long factorial_iterative(int n) {
    if (n < 0) return 0; // Factorial is not defined for negative numbers

    unsigned long long result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

// 2. With Recursion (Recursive Approach)
unsigned long long factorial_recursive(int n) {
    if (n < 0) return 0; // Factorial is not defined for negative numbers
    if (n <= 1) return 1; // Base case: 0! and 1! are both 1

    return n * factorial_recursive(n - 1); // Recursive case
}

int main() {
    int num = 5;

    printf("--- Factorial of %d ---\n", num);
    printf("Without recursion (Iterative): %llu\n", factorial_iterative(num));
    printf("With recursion (Recursive):    %llu\n", factorial_recursive(num));

    return 0;
}
