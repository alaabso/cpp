// Week 4: Simple Arrays
// Read previous checkPassFail(int score)
#include <iostream>
using namespace std;

int main() {
    int marks[5] = {80, 90, 75, 60, 55};
    int total = 0;

    for (int i = 0; i < 5; i++) {
        cout << "Student " << (i + 1) << ": " << marks[i] << endl;
        total += marks[i];
    }

    cout << "Average: " << (total / 5.0) << endl;

    cout << "\nPress ENTER to exit...";
    cin.ignore();
    cin.get();

    return 0;
}