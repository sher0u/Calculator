#include <stdio.h>

// Declare the function of the addition
double addition(double a, double b) {
    return a + b;
}

// Declare the fucntion of the Substraction
double Substraction(double a, double b){
    return a-b;
}
// declare the fuycntion of multiplication
double multiplication (double a,double b)
{
    return a*b;
}

// declare the ducntion of devision
double devision (double a, double b){
    return a/b;
}

int main() {
    double Num1, Num2, result;

    // Get the input values
    printf("Enter the first number: ");
    scanf("%lf", &Num1);

    printf("Enter the second number: ");
    scanf("%lf", &Num2);

    // Call the addition function
    result = addition(Num1, Num2);

    // Display the result of addition
    printf("The result of addition is: %lf\n", result);

    // call the fucntion of substraction
    result= Substraction(Num1,Num2);

    // display the result of the substration
    printf("The result of addition is: %lf\n", result);

    // call the fucntion of mulyplication
    result= multiplication(Num1,Num2);

    // display the result of the multplication
    printf("The result of addition is: %lf\n", result);

    // call the fucntion of devision
    result= devision(Num1,Num2);

    // display the result of the devision
    printf("The result of devision is: %lf\n", result);



    return 0;
}
