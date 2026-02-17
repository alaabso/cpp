// Week 2: Multiplication Table Generator
// Concepts: 'for' loops (Good for repeating a set number of times)
// Marka aad guriga kasoo baxdo, hal talaabo soo qaad, dabadeedna ku celceli,
// isla talaabadii mid eeg, waxba ka badalin,
// sidaa ku wad inta aad 1600 talaabo ka tirinayso, waad timid
#include <iostream>
using namespace std;

int main() {
    int number;

    cout << "--- Multiplication Table Generator ---" << endl;
    cout << "Enter a number to see its table: ";
    cin >> number;

    // Loop starts at 1, continues while i is 12 or less, increases by 1 each time
    for (int i = 1; i <= 12; i++) {
        cout << number << " x " << i << " = " << (number * i) << endl;
    }

    cout << "\nPress ENTER to exit...";
    cin.ignore();
    cin.get();

    return 0;
}