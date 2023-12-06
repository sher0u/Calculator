#include <stdio.h>
#include <stdbool.h>

// Declare the function of the addition
double addition(double a, double b) {
    return a + b;
}

// Declare the fucntion of the Substraction
double Substraction(double a, double b){
    return a-b;
}
double multiplication(double a, double b) {
    // Check if either of the arguments is 0
    if (a == 0 || b == 0) {
        return 0;
    } else {
        // Perform normal multiplication
        return a * b;
    }
}

// declare the ducntion of devision
double devision (double a, double b){
    if (b==0)
    {
        return 2;
    }
    else {
        return a/b;
    }
}

int main() {
    double Num1, Num2, result;
    char operation;

    // Get the input values
    printf("Enter the first number: ");
    scanf("%lf", &Num1);

    printf("Enter the second number: ");
    scanf("%lf", &Num2);

    // Get the operation from th euser
    printf("Please enter your operation");
    scanf(" %c",&operation);
    
    // now lets make the switch case for th arthmethique operation 
    switch (operation) {
        case '+':
            result = addition(Num1, Num2);// Call the addition function
            break;
        case '-':
            result= Substraction(Num1,Num2);     // call the fucntion of substraction
            break;
        case '*':
            result= multiplication(Num1,Num2);     // display the result of the multplication
            break;
        case '/':
            result= devision(Num1,Num2);        // display the result of the devision
            break;
        default:
            printf("invalid operation");
            return 1; // this will exit with an error code

    }

    return 0;
}
