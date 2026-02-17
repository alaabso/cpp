// Week 2: Simple Menu-Driven Calculator
// Concepts: switch-case statement (Good for choosing from a list)
#include <iostream>
using namespace std;

int main() {
    char operation;
    double num1, num2;

    cout << "Welcome to the Simple Calculator" << endl;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    cout << "Choose an operation (+, -, *, /): ";
    cin >> operation;

    // switch checks the 'operation' character
    switch (operation) {
        case '+':
            cout << "Result: " << num1 + num2 << endl;
            break;
        case '-':
            cout << "Result: " << num1 - num2 << endl;
            break;
        case '*':
            cout << "Result: " << num1 * num2 << endl;
            break;
        case '/':
            // Nested IF to prevent dividing by zero
            if (num2 != 0) {
                cout << "Result: " << num1 / num2 << endl;
            } else {
                cout << "Error: Cannot divide by zero!" << endl;
            }
            break;
        default:
            cout << "Error: Invalid operation chosen." << endl;
    }

    cout << "\nPress ENTER to exit...";
    cin.ignore();
    cin.get();
    
    return 0;
}