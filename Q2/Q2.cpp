#include <iostream>
#include "Person.h"

using std::cout;
using std::endl;

int main() {
  Person one; 
  Person two("Smythecraft"); 
  Person three("Dimwiddy", "Sam"); 
  one.Show();
  cout << endl;
  one.FormalShow();
  
  two.Show();
  two.FormalShow();
  
  cout << endl;
  three.Show();
  three.FormalShow();
  cout << endl;

  return 0;
}