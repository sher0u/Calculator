#include <stdio.h>
#include <math.h>

// Function to clear the input buffer
void buffer(void)
{
    int c;
    while ((c = getchar()) != EOF && c != '\n');
}

// Declare the function of addition
double addition(double num1, double num2, double *result)
{
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
double subtraction(double a, double b, double *result)
{
    if (isnan(a)) return 1;

    if (isnan(b)) return 2;


    if (result == NULL) return 3;

    *result = a - b;
    return 0;
}

// Declare the function of multiplication
double multiplication(double a, double b, double *result)
{
    if (isnan(a)) return 1;

    if (isnan(b)) return 2;

    if (result == NULL) return 3;

    *result = a * b;
    return 0;
}

// Declare the function of division
double division(double a, double b, double *result)
{
    if (isnan(a)) return 1;

    if (isnan(b)) return 2;

    if (result == NULL) return 3;

    // Check for division by zero
    while (b == 0)
    {
        printf("You can't divide by 0, enter the number 2 again:\n ");
        do {
            int scanfResult = scanf("%lf", &b);
            if (scanfResult != 1) {
                printf("You can't enter words. Please re-enter the number 2: ");
                buffer();
            }
        } while (b == 0);
    }

    *result = a / b;
    return 0;
}

int main() {
    double Num1, Num2, result;
    char operation;
    char continueFlag = 'y';

    while (continueFlag == 'y' || continueFlag == 'Y')
    {
        // Get the first number
        printf("Enter Your First Number: ");
        while (scanf("%lf", &Num1) != 1)
        {
            printf("Invalid input, please reenter a valid value: ");
            buffer();
        }
        // buffer(); // Uncomment this line if you encounter issues with subsequent inputs

        // Get the operation from the user
        while (1)
        {
            // Get the operation from the user
            printf("Enter the operation (+, -, *, /): ");
            if (scanf(" %c", &operation) == 1 && (operation == '+' || operation == '-' || operation == '*' || operation == '/')) {
                break; // Exit the loop if a valid operation is entered
            } else {
                printf("Invalid input, please reenter a valid operation: ");
                buffer();
            }
        }
        // buffer(); // Uncomment this line if you encounter issues with subsequent inputs

        // Get the second number
        printf("Enter Your Second Number: ");
        while (scanf("%lf", &Num2) != 1)
        {
            printf("Invalid input, please reenter a valid value: ");
            buffer();
        }
        // buffer(); // Uncomment this line if you encounter issues with subsequent inputs

        // now let's make the switch case for the arithmetic operation
        switch (operation)
        {
            case '+':
                if (addition(Num1, Num2, &result) != 0)
                {
                    printf("Error in addition function\n");
                    return 1;
                }
                break;
            case '-':
                if (subtraction(Num1, Num2, &result) != 0)
                {
                    printf("Error in subtraction function\n");
                    return 1;
                }
                break;
            case '*':
                if (multiplication(Num1, Num2, &result) != 0)
                {
                    printf("Error in multiplication function\n");
                    return 1;
                }
                break;
            case '/':
                if (division(Num1, Num2, &result) != 0)
                {
                    printf("Error in division function\n");
                    return 1;
                }
                break;
            default:
                printf("Invalid operation\n");
                return 1; // this will exit with an error code
        }
        int a;
        a = printf("Result: %g\n", result);// we use %g to print the integer if th ecorrect form and the float
                                                     // in the right form

        if (a < 0) {
            perror("Error during printing");
            return -1;
        }



        // Ask if the user wants to continue
        printf("Do you want to perform another calculation? (y/n): ");
        while (scanf(" %c", &continueFlag) != 1) {
            printf("Invalid input, please enter 'y' or 'n': ");
            buffer();  // Clear invalid input

            // Consume any remaining characters in the buffer including the newline
            int c;
            while ((c = getchar()) != '\n' && c != EOF);
        }
    }

    printf("Program terminated.\n");
    return 0;
}

/*_______________________________
Yousfi abdelakder / github :@sher0u /mail : abdelkader.yousfi.pr@mail.ru
_______________________________
 * Tested to work.
 */
