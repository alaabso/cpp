// Week 2: Savings Goal Tracker
// Concepts: 'while' loops (Used when we don't know the exact number of steps)
#include <iostream>
using namespace std;

int main() {
    double goal;
    double totalSaved = 0;
    double deposit;
    int weeks = 0;

    cout << "--- Digital Piggy Bank ---" << endl;
    cout << "What is your savings goal? $";
    cin >> goal;

    // The 'while' loop keeps running as long as the condition is TRUE
    // Condition: Is our current total still less than our goal?
    while (totalSaved < goal) {
        weeks++; // Increase the week counter by 1
        
        cout << "\nWeek " << weeks << ":" << endl;
        cout << "Current Total: $" << totalSaved << endl;
        cout << "Enter deposit for this week: $";
        cin >> deposit;

        // Add the new deposit to the total
        totalSaved = totalSaved + deposit;
        
        cout << "Progress: " << (totalSaved / goal) * 100 << "% reached." << endl;
    }

    // This part only runs once the loop is FINISHED (Total >= Goal)
    cout << "\n====================================" << endl;
    cout << "GOAL REACHED!" << endl;
    cout << "It took you " << weeks << " weeks to save $" << totalSaved << "." << endl;
    cout << "Target was: $" << goal << endl;
    cout << "====================================" << endl;

    cout << "\nPress ENTER to exit...";
    cin.ignore();
    cin.get();
    
    return 0;
}