// Missing Topic: Inheritance
#include <iostream>
using namespace std;

class Animal {
public:
    void eat() { cout << "Eating..." << endl; }
};

class Cat : public Animal {
public:
    void meow() { cout << "Meow!" << endl; }
};

int main() {
    Cat myCat;
    myCat.eat();  // From Parent
    myCat.meow(); // From Child
    return 0;
}