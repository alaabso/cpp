// Week 2: Student Grading System
// Concepts: Multiple Decisions (if - else if - else)
// if jimce, do not come to uni, if sabti and is 1530 soo bax
#include <iostream>
using namespace std;

int main() {
    int score;

    cout << "--- Exam Result System ---" << endl;
    cout << "Enter the student's score (0-100): ";
    cin >> score;

    // Logic: Checking ranges for grades
    if (score >= 90 && score <= 100) {
        cout << "Grade: A (Excellent)" << endl;
    } 
    else if (score >= 80) {
        cout << "Grade: B (Very Good)" << endl;
    } 
    else if (score >= 70) {
        cout << "Grade: C (Good)" << endl;
    } 
    else if (score >= 60) {
        cout << "Grade: D (Satisfactory)" << endl;
    } 
    else if (score >= 0 && score < 60) {
        cout << "Grade: F (Fail)" << endl;
    } 
    else {
        // This catches numbers less than 0 or greater than 100
        cout << "Error: Invalid score entered." << endl;
    }

    cout << "\nPress ENTER to exit...";
    cin.ignore();
    cin.get();
    
    return 0;
}