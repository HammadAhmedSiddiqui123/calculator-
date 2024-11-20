#include <stdio.h>

int main() {
    double num1, num2, result;
    char oper;

    
    printf("Enter first number: ");
    scanf("%lf", &num1);

    
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &oper);
    printf("Enter second number: ");
    scanf("%lf", &num2);

    
    if (oper == '+') {
        result = num1 + num2;
    } else if (oper == '-') {
        result = num1 - num2;
    } else if (oper == '*') {
        result = num1 * num2;
    } else if (oper == '/') {
        if (num2 != 0) {
            result = num1 / num2;
        } else {
            printf("Error: Division by zero is not allowed.\n");
            return 1;
        }
    } else {
        printf("Error: Invalid operator.\n");
        return 1; 
    }

    
    printf("Result: %.2f\n", result);

    return 0; 
}



