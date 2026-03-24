#include <iostream>
#include <string>

using namespace std;


int main() {
 
  string firstname;
  int currentyear;
  int yearofbirth;
  int age;

  cout<<"What is your name? ";
  cin>>firstname;

  cout<<"Enter current year ";
  cin>>currentyear;
  
  cout<<"Enter year of birth ";
  cin>>yearofbirth;

  age = currentyear - yearofbirth;

  cout<<"Your age is "<<age;

  cin.ignore();
  cin.get();
  return 0;
}