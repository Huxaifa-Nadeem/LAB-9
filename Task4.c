#include <stdio.h>

float calculate(float a, float b, char op) {
    switch (op) {
        case '+':
            return a + b;
        case '-':
            return a - b;
        case '*':
            return a * b;
        case '/':
            if (b != 0) {
                return a / b;
            } else {
                printf("Error: Division by zero.\n");
                return 0;
            }
        default:
            printf("Invalid operation.\n");
            return 0;
    }
}

int main() {
    float x, y, result;
    char operation;

    printf("Enter first number: ");
    scanf("%f", &x);
    printf("Enter an operation (+, -, *, /): ");
    scanf(" %c", &operation);
    printf("Enter second number: ");
    scanf("%f", &y);

    result = calculate(x, y, operation);

    if (!(operation == '/' && y == 0)) {
        printf("Result: %.2f\n", result);
    }

    return 0;
}
