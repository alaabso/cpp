// Week 7: File Writing
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    string note;
    cout << "Enter a note: ";
    getline(cin, note);

    ofstream myFile("my_notes.txt", ios::app); 
    if (myFile.is_open()) {
        myFile << note << endl;
        myFile.close();
        cout << "Saved!" << endl;
    }
    return 0;
}