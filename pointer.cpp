//In The Name of ALLAH
#include <iostream>
using namespace std;
int main() {
  int a = 3;
  int *b = &a; //& address of operator: 
  //*(value at) dereference operator, oi location a kon value ase;
  cout << a << "\n";
  cout << &a << "\n"; // address of a;
  cout << b << "\n"; // address of a;
  cout << &b << "\n"; // address of b;
  cout << *b << "\n"; // dereference of b. thats means value of a
  //cout << *a << "\n"; // its not valid;
  // //pointer to pointer
  int **c = &b; 
  cout << b << "\n"; // address of a;
  cout << &b << "\n"; // address of b;
  cout << c << "\n"; // address of b ;
  cout << *c << "\n"; // the value at address c. that means address of b
  cout << **c << "\n";// the value at address value at(value ad(c)) .that means value of a;
  
}