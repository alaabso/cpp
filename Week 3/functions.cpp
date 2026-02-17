// Week 3: Modular Grade Calculator
// Concepts: Functions, Return Values
// Kaba sida loo xidhaa waa function, shaadhka sida loo xidhaa waa function
#include <iostream>
#include <string>
using namespace std;

string checkPassFail(int score) {
    return (score >= 50) ? "PASSED" : "FAILED";
}

void printHeader() {
    cout << "==========================" << endl;
    cout << "   EXAM RESULT SYSTEM     " << endl;
    cout << "==========================" << endl;
}

int main() {
    printHeader();
    int score;
    cout << "Enter score: ";
    cin >> score;
    cout << "Result: " << checkPassFail(score) << endl;

    cout << "\nPress ENTER to exit...";
    cin.ignore();
    cin.get();

    return 0;
}