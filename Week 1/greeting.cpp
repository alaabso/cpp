// Week 1: Interactive Greeting
// Concepts: Libraries, Input/Output, String variables, Simple Math
#include <iostream> // Library for input (cin) and output (cout)
#include <string>   // Library to handle text (names, words)

using namespace std;

int main() {
    // 1. Create variables (Think of these as labeled empty boxes)
    string firstName; // A box for text
    int currentYear;  // A box for whole numbers
    int birthYear;    // A box for whole numbers

    // 2. Output: Show text on the screen to ask the student a question
    cout << "--- Welcome to your first C++ Program ---" << endl;
    cout << "Please enter your first name: ";
    
    // 3. Input: The computer waits for the student to type and press ENTER
    cin >> firstName;

    cout << "Enter the current year (for example, 2024): ";
    cin >> currentYear;

    cout << "Enter the year you were born: ";
    cin >> birthYear;

    // 4. Logic: The computer calculates the age using the values in the boxes
    int age = currentYear - birthYear;

    // 5. Result: Combining text and calculations to show the final message
    cout << "\n----------------------------------------" << endl;
    cout << "Hello, " << firstName << "!" << endl;
    cout << "Based on the years you entered, you are " << age << " years old." << endl;
    cout << "----------------------------------------" << endl;

    cout << "\nPress ENTER to close the program..."; 
    cin.ignore();
    cin.get();
    return 0; // Signals that the program finished successfully
}