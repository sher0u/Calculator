#include <stdio.h>
#include <math.h>

// Declare the function of addition
double addition(double num1, double num2, double *result) {
    // Check if num1 is NaN
    if (isnan(num1)) return 1;

    // Check if num2 is NaN
    if (isnan(num2)) return 2;

    // Check if result is NULL
    if (result == NULL) return 3;

    *result = num1 + num2;
    return 0;
}

// Declare the function of subtraction
double subtraction(double a, double b, double *result) {
    // Check if a is NaN
    if (isnan(a)) return 1;

    // Check if b is NaN
    if (isnan(b)) return 2;

    // Check if result is NULL
    if (result == NULL) return 3;

    *result = a - b;
    return 0;
}

// Declare the function of multiplication
double multiplication(double a, double b, double *result) {
    // Check if a is NaN
    if (isnan(a)) return 1;

    // Check if b is NaN
    if (isnan(b)) return 2;

    // Check if result is NULL
    if (result == NULL) return 3;

    *result = a * b;
    return 0;
}

// Declare the function of division
double division(double a, double b, double *result) {
    // Check if a is NaN
    if (isnan(a)) return 1;

    // Check if b is NaN
    if (isnan(b)) return 2;

    // Check if result is NULL
    if (result == NULL) return 3;

    // Check for division by zero
    if (b == 0) {
        return 2;
    }

    // Perform division and set the result
    *result = a / b;

    return 0;
}

int main() {
    double Num1, Num2, result;
    char operation;

    // Get the input values
    printf("Enter the first number: ");
    scanf("%lf", &Num1);

    // Get the operation from the user
    printf("Please enter your operation: ");
    scanf(" %c", &operation);

    printf("Enter the second number: ");
    scanf("%lf", &Num2);

    // now let's make the switch case for the arithmetic operation
    switch (operation) {
        case '+':
            if (addition(Num1, Num2, &result) != 0) {
                printf("Error in addition function\n");
                return 1;
            }
            break;
        case '-':
            if (subtraction(Num1, Num2, &result) != 0) {
                printf("Error in subtraction function\n");
                return 1;
            }
            break;
        case '*':
            if (multiplication(Num1, Num2, &result) != 0) {
                printf("Error in multiplication function\n");
                return 1;
            }
            break;
        case '/':
            if (division(Num1, Num2, &result) != 0) {
                printf("Error in division function\n");
                return 1;
            }
            break;
        default:
            printf("Invalid operation\n");
            return 1; // this will exit with an error code
    }

    printf("Result: %lf\n", result);

    return 0;
}
