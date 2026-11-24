#include <stdio.h>

int main() {
    char operator;
    double a, b, result;

    // prompt user for the operator
    printf("Enter an operator(+,-,*,/): ");
    scanf("%c", &operator);

    // prompt user for the two numbers
    printf("Enter two numbers: ");
    scanf("%lf %lf", &a, &b);

    switch (operator) {
        case '+':
            result = a + b;
            printf("Addition is= %lf", result);
            break;

        case '-':
            result = a - b;
            printf("Subtraction is= %lf", result);
            break;

        case '*':
            result = a * b;
            printf("Multiplication is = %lf", result);
            break;

        case '/':
            if (b != 0) {
                result = a / b;
                printf("Division is = %.2f", result);
            }
            else {
                printf("Division by zero is not possible");
            }
            break;

        default:
            printf("Invalid choice");
    }
    return 0;
}
