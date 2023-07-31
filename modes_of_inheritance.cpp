// // C++ Implementation to show that a derived class
// // doesn’t inherit access to private data members.
// // However, it does inherit a full parent object.
// class A {
// public:
// 	int x;

// protected:
// 	int y;

// private:
// 	int z;
// };

// class B : public A {
// 	// x is public
// 	// y is protected
// 	// z is not accessible from B
// };

// class C : protected A {
// 	// x is protected
// 	// y is protected
// 	// z is not accessible from C
// };

// class D : private A // 'private' is default for classes
// {
// 	// x is private
// 	// y is private
// 	// z is not accessible from D
// };

// C++ program to implement
// Hierarchical Inheritance
#include <iostream>

using namespace std;

// base class
class Vehicle {
  public: Vehicle() {
    cout << "This is a Vehicle\n";
  }
};

// first sub class
class Car: public Vehicle {};

// second sub class
class Bus: public Vehicle {};

// main function
int main() {
  // Creating object of sub class will
  // invoke the constructor of base class.
  Car obj1;
  //Bus obj2;
  return 0;
}