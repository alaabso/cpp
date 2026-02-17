// Week 10: Preparing Logic for GUI
// Concepts: Separation of concerns. 
// This class works in Console NOW, but plugs into Qt LATER.

#include <iostream>
#include <string>
using namespace std;

// This class doesn't know about "cout" or "cin". 
// It just does the work. This makes it perfect for GUIs.
class CalculatorEngine {
public:
    int add(int a, int b) {
        return a + b;
    }
    
    int subtract(int a, int b) {
        return a - b;
    }
};

// In a real Qt app, this 'main' would be replaced by the Window code.
int main() {
    CalculatorEngine engine;
    
    // Simulate a User clicking a button
    int input1 = 10;
    int input2 = 5;
    
    // The "Button" calls the engine
    int result = engine.add(input1, input2);
    
    // The "Screen" shows the result
    cout << "[GUI Display]: The result is " << result << endl;
    
    return 0;
}