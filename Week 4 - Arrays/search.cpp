// Week 4: Student ID Finder
// Concepts: Searching an Array (Linear Search)
#include <iostream>
using namespace std;

int main() {
    // A pre-set list of registered Student IDs
    int registeredIDs[6] = {101, 205, 308, 412, 550, 601};
    int searchID;
    bool found = false;

    cout << "--- Security Checkpoint ---" << endl;
    cout << "Enter Student ID to verify: ";
    cin >> searchID;

    // We look through the list one by one
    for (int i = 0; i < 6; i++) {
        if (registeredIDs[i] == searchID) {
            found = true;
            break; // Stop looking once found
        }
    }

    if (found) {
        cout << "ACCESS GRANTED: ID " << searchID << " is on the list." << endl;
    } else {
        cout << "ACCESS DENIED: ID " << searchID << " not found." << endl;
    }

    // Exit sequence
    cout << "\nPress ENTER to exit...";
    cin.ignore();
    cin.get();

    return 0;
}