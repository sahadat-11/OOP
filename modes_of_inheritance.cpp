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

//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
class samp {
	int i;
public:
	samp(int n) {
		i = n;
		cout << "Constructing\n";
	}
	~samp() {
		cout << "Destructing\n";
	}
	int get_a() {
		return i;
	}
};
int square(samp o) {
	return o.get_a() * o.get_a();
}
int main() {
	samp a(10);
	cout << square(a) << "\n";
    
  return 0;
}