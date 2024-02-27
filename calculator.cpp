#include <iostream>
#include <cmath>
#include <type_traits>
using namespace std;

void choice1() {
    double number1;
    string operation;
    double number2;
    cout << "Welcome to Simple Equations \n";
    cout << "Enter a number: \n";
    cin >> number1;
    cout << "Enter an operation (+, -, *, /): \n";
    cin >> operation;
    cout << "Enter a number: \n";
    cin >> number2;

    if (operation == "+") {
        double sum = number1 + number2;
        cout << sum << "\n";
    } else if (operation == "-") {
        double difference = number1 - number2;
        cout << difference << "\n";
    } else if (operation == "*") {
        double product = number1 * number2;
        cout << product << "\n";
    } else if (operation == "/") {
        double quotient = number1 / number2;
        cout << quotient << "\n";
    } else {
        cout << "Enter a valid operation \n";
    }
}

void choice2() {
    double base;
    double exponent;
    int option;
    cout << "Welcome to Exponents and Square Roots \n";
    cout << "Would you like to calculate an exponent (1), or a square root (2) (enter the number): \n";
    cin >> option;
    while (option != 1 && option != 2) {
        cout << "Invalid Input, try again. \n";
        cin >> option;
        }
    if (option == 1) {
        cout << "Enter the base: \n";
        cin >> base;
        cout << "Enter the exponent: \n";
        cin >> exponent;
        double result = pow(base, exponent);
        cout << result  << "\n";
    } else if (option == 2) {
        cout << "Enter the number you would like to be square rooted: \n";
        cin >> base;
        double result = sqrt(base);
        cout << result << "\n";
    }
}

void choice3() {
    int trigFun;
    cout << "Welcome to Trig Functions";
    cout << "Below are the trigonometric function, Enter the number of the one you would like to use: \n";
    cout << "1. Cos \n";
    cout << "2. Tan \n";
    cout << "3. Sin \n";
    cout << "4. Acos \n";
    cout << "5. Atan \n";
    cout << "6. Asin \n";
    cin >> trigFun;
    cout << "Enter the number you would like put in your trigonometric function: ";
    double number;
    cin >> number;
    if (trigFun == 1){
        double result = cos(number);
        cout << result << "\n";
    } else if (trigFun == 2) {
        double result = tan(number);
        cout << result << "\n";
    } else if (trigFun == 3) {
        double result = sin(number);
        cout << result << "\n";
    } else if (trigFun == 4) {
        double result = acos(number);
        cout << result << "\n";
    } else if (trigFun == 5) {
        double result = atan(number);
        cout << result << "\n";
    } else if (trigFun == 6) {
        double result = asin(number);
        cout << result << "\n";
    } else {
        cout << "Invalid Input, Try Again.";
    }
}

int main()
{
    int choices;
    do {
        cout << "Welcome to the Calculator \n";
        cout << "What would you like to do today (enter the number): \n";
        cout << "1. Simple equation (+, -, *, /) \n";
        cout << "2. Exponents/Square Roots \n";
        cout << "3. Trigonometric Functions \n";
        cout << "4. Exit \n";
        cin >> choices;

        switch (choices) {
            case 1:
                choice1();
                break;
            case 2:
                choice2();
                break;
            case 3:
                choice3();
                break;
            case 4:
                cout << "Exiting the Calculator. Goodbye! \n";
                break;
            default:
                cout << "Invalid input, please try again! \n";
        }

    } while (choices != 4);

    return 0;
}