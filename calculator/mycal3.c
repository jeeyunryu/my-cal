#include <stdio.h>
#include "calculator.h"

int main() {
    int num1, num2;
    char operator;

    // Get input from user
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);
    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &operator);

    int result_int;
    float result_float;

    // Perform operation based on operator
    switch(operator) {
        case '+':
            result_int = add(num1, num2);
            printf("%d + %d = %d", num1, num2, result_int);
            break;
        case '-':
            result_int = subtract(num1, num2);
            printf("%d - %d = %d", num1, num2, result_int);
            break;
        case '*':
            result_int = multiply(num1, num2);
            printf("%d * %d = %d", num1, num2, result_int);
            break;
        case '/':
            result_float = divide(num1, num2);
            printf("%d / %d = %.2f", num1, num2, result_float);
            break;
        default:
            printf("Invalid operator");
            break;
    }

    return 0;
}