 // Week 2: ATM Simulation
// Concepts: If/Else Logic
#include <iostream>
using namespace std;

int main() {
    int correctPin = 1234;
    int enteredPin;
    double balance = 500.00;

    cout << "--- SOM-BANK ATM ---" << endl;
    cout << "Enter PIN: ";
    cin >> enteredPin;

    // The "Gatekeeper" Logic
    if (enteredPin == correctPin) {
        cout << "Access Granted." << endl;
        cout << "Your Balance: $" << balance << endl;
        
        if (balance < 100) {
            cout << "Warning: Low Balance!" << endl;
        }
    } else {
        cout << "ERROR: Incorrect PIN." << endl;
    }

    cout << "\nPress ENTER to exit...";
    cin.ignore();
    cin.get();

    return 0;
}