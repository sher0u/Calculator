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
    int check;
    double Num1, Num2, result;
    char operation;
    char continueFlag = 'y';

    check = printf("Welcome !! For source Code Check My github @sher0u\n ");
    // in the right form
    if (check < 0) {
        perror("Error during printing");
        return 1;
    }

    while (continueFlag == 'y' || continueFlag == 'Y')
    {
        // Get the first number
        check = printf("Enter Your First Number: ");

        // in the right form
        if (check < 0) {
            perror("Error during printing");
            return 2;
        }
        while (scanf("%lf", &Num1) != 1)
        {
            check =printf("Invalid input, please reenter a valid value: ");

            // in the right form
            if (check < 0) {
                perror("Error during printing");
                return 3;
            }
            buffer();
        }
        // buffer(); // Uncomment this line if you encounter issues with subsequent inputs

        // Get the operation from the user
        bool isValidOperation = false;

// Get the operation from the user
        while (!isValidOperation) {
            check =printf("Enter the operation (+, -, *, /, q to quit): ");
            // in the right form
            if (check < 0) {
                perror("Error during printing");
                return 4;
            }
            if (scanf(" %c", &operation) == 1) {
                if (operation == 'q') {

                    check =printf("Program terminated.\n");
                    // in the right form
                    if (check < 0) {
                        perror("Error during printing");
                        return 5;
                    }
                    return 0;
                } else if (operation == '+' || operation == '-' || operation == '*' || operation == '/') {
                    isValidOperation = true; // Exit the loop if a valid operation is entered
                } else {
                    check = printf("Invalid input, please reenter a valid operation or 'q' to quit: ");
                    // in the right form
                    if (check < 0) {
                        perror("Error during printing");
                        return 6;
                    }
                    buffer();
                }
            } else {
                check = printf("Invalid input, please reenter a valid operation or 'q' to quit: ");
                // in the right form
                if (check < 0) {
                    perror("Error during printing");
                    return 7;
                }
                buffer();
            }
        }
        // buffer(); // Uncomment this line if you encounter issues with subsequent inputs

        // Get the second number
        check =printf("Enter Your Second Number: ");
        // in the right form
        if (check < 0) {
            perror("Error during printing");
            return 8;
        }

        while (scanf("%lf", &Num2) != 1)
        {

            check = printf("Invalid input, please reenter a valid value: ");
            // in the right form
            if (check < 0) {
                perror("Error during printing");
                return 9;
            }
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
                check = printf("Invalid operation\n");
                // in the right form
                if (check < 0) {
                    perror("Error during printing");
                    return 10;
                }
                return 1; // this will exit with an error code
        }

        check = printf("Result: %g\n", result);// we use %g to print the integer if th ecorrect form and the float
        // in the right form

        if (check < 0) {
            perror("Error during printing");
            return 11;
        }


        // Ask if the user wants to continue

        check =printf("Do you want to perform another calculation? (y/n): ");
        // in the right form
        if (check < 0) {
            perror("Error during printing");
            return 12;
        }
        while (scanf(" %c", &continueFlag) != 1) {

            check = printf("Invalid input, please enter 'y' or 'n': ");
            // in the right form
            if (check < 0) {
                perror("Error during printing");
                return 13;
            }
            buffer();  // Clear invalid input

            // Consume any remaining characters in the buffer including the newline
            int c;
            while ((c = getchar()) != '\n' && c != EOF);
        }
    }

    check =printf("Program terminated.\n");
    // in the right form
    if (check < 0) {
        perror("Error during printing");
        return 13;
    }
    return 0;
}

/*_______________________________
Yousfi abdelakder / GitHub :@sher0u /mail : abdelkader.yousfi.pr@mail.ru
_______________________________-
 * Tested to work.
 */