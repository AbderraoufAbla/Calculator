#include <stdio.h>

int main() {
    char operator; // variable to store the operator (+, -, *, /)
    float num1, num2, result; // variables to store the input numbers and the result

    printf("Enter an operator (+, -, *, /): ");
    scanf("%c", &operator); // get the operator from the user

    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2); // get the input numbers from the user

    switch(operator) {
        case '+': // addition
            result = num1 + num2;
            printf("%.2f + %.2f = %.2f", num1, num2, result);
            break;
        case '-': // subtraction
            result = num1 - num2;
            printf("%.2f - %.2f = %.2f", num1, num2, result);
            break;
        case '*': // multiplication
            result = num1 * num2;
            printf("%.2f * %.2f = %.2f", num1, num2, result);
            break;
        case '/': // division
            result = num1 / num2;
            printf("%.2f / %.2f = %.2f", num1, num2, result);
            break;
        default: // invalid operator
            printf("Invalid operator!");
    }

    return 0;
}

