#include <iostream>

using namespace std;

int main() {
  int steps;

  steps = 1;

  while(steps < 18) {
    cout<<"I am walking, doing step "<<steps<<endl;

    steps = steps + 1;
  } 



  cin.ignore();
  cin.get();
  return 0;
}