#include <iostream>

using namespace std;

int main() {
 
  int age;
  cout<<"What is your age ";
  cin>>age;

  if(age > 30) {
    cout<<"You are old";
  }

  if(age < 30) { 
    cout<<"You are young";
  }


  cin.ignore();
  cin.get();
  return 0;
}