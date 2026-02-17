// Week 6: Encapsulation (Data Protection)
// Concepts: Private vs. Public, Getters, and Setters
#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    // PRIVATE: These are "locked" inside the class.
    // They cannot be changed or seen directly from outside.
    double gpa;
    int id;

public:
    string name;

    // Constructor to set up the student
    Student(string n, int i, double g) {
        name = n;
        id = i;
        setGpa(g); // Use the setter even inside the constructor for safety
    }

    // SETTER: A "Security Guard" function that checks data before saving it
    void setGpa(double newGpa) {
        if (newGpa >= 0.0 && newGpa <= 4.0) {
            gpa = newGpa;
        } else {
            cout << "[System Error]: Invalid GPA value attempted for " << name << endl;
            gpa = 0.0; // Default safe value
        }
    }

    // GETTER: A "Viewing Window" that lets us see the private data
    double getGpa() {
        return gpa;
    }

    void displayProfile() {
        cout << "--- Student Profile ---" << endl;
        cout << "Name: " << name << endl;
        cout << "ID: " << id << endl;
        cout << "GPA: " << gpa << endl;
        cout << "-----------------------" << endl;
    }
};

int main() {
    cout << "=== Encapsulation & Security Demo ===\n" << endl;

    Student s1("Muna Ali", 5501, 3.8);

    // 1. Try to access public data (Works)
    s1.name = "Muna A. Farah"; 

    // 2. Try to access private data directly (Will cause a Compiler Error if uncommented)
    // s1.gpa = 5.0; 

    // 3. Use the SETTER to change the GPA safely
    cout << "Attempting to set an impossible GPA (5.0)..." << endl;
    s1.setGpa(5.0); 

    // 4. Use the GETTER to see the value
    cout << "Current GPA of " << s1.name << " is: " << s1.getGpa() << endl;

    s1.displayProfile();

    // Exit sequence
    cout << "\nPress ENTER to exit...";
    cin.ignore();
    cin.get();

    return 0;
}