// Week 1 Lab: Currency Converter
// Concepts: Basic Math Operators, Input/Output
#include <iostream>
using namespace std;

int main() {
    double usd;    // Amount in US Dollars
    double slsh;   // Equivalent in Somaliland Shillings
    double rate;   // Exchange rate (1 USD = ? SLSH)

    cout << "--- Dollar to Somaliland Shilling Converter ---" << endl;

    // Ask user for the exchange rate
    cout << "Enter current exchange rate (SLSH per USD): ";
    cin >> rate;

    // Ask user for amount in Dollars
    cout << "Enter amount in US Dollars: ";
    cin >> usd;

    // Conversion formula: SLSH = USD * rate
    slsh = usd * rate;

    cout << "\n----------------------------------------" << endl;
    cout << usd << " USD = " << slsh << " SLSH" << endl;
    cout << "----------------------------------------" << endl;

    cout << "\nPress ENTER to exit...";
    cin.ignore();
    cin.get();

    return 0;
}