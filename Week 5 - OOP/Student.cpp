// Week 5: Introduction to Classes and Objects
// Concepts: Class definition, Attributes, Methods, and Constructors
#include <iostream>
#include <string>
using namespace std;

// The 'Student' class is a blueprint for all students in our system
class Student {
public:
    // Attributes: What a student HAS (Variables inside a class)
    string name;
    int id;
    double gpa;

    // Constructor: A special function that runs when we create a new Student
    // It helps us set up the student's information immediately
    Student(string n, int i, double g) {
        name = n;
        id = i;
        gpa = g;
        cout << "[System]: New student record created for " << name << endl;
    }

    // Method: What a student DOES (Functions inside a class)
    void displayInfo() {
        cout << "\n--- Student Profile ---" << endl;
        cout << "Name: " << name << endl;
        cout << "ID Number: " << id << endl;
        cout << "Current GPA: " << gpa << endl;
        
        // Logical check inside a method
        if (gpa >= 2.0) {
            cout << "Academic Status: Satisfactory" << endl;
        } else {
            cout << "Academic Status: Warning (Low GPA)" << endl;
        }
        cout << "-----------------------" << endl;
    }
};

int main() {
    cout << "=== University Management System ===\n" << endl;

    // Creating Objects: We use the 'Student' blueprint to make actual students
    // These are called 'instances' of the class
    Student student1("Ali Ahmed", 1001, 3.5);
    Student student2("Hassan Farah", 1002, 1.8);

    // Using the methods to show their information
    student1.displayInfo();
    student2.displayInfo();

    // Exit sequence
    cout << "\nPress ENTER to exit...";
    cin.ignore();
    cin.get();

    return 0;
}