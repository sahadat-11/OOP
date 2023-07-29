//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
class Parent {
public:
	Parent() { // consturctor; 
		cout << "Constructor of Parent class\n";// 1st call
	}
	~Parent() { // destructor
		cout << "Destructor of Parent class\n"; // 4th call
	}
};
class child : public Parent {
public:
	child() {
		cout << "Constructor of child class\n"; // 2nd call
	}
	~child() {
		cout << "Destructor of child class\n"; // 3rd call
	}
};
int main() {
	child obj;
   return 0;
}

//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
class Parent {
public:
	Parent() { // consturctor; 
		cout << "Constructor of Parent class\n";// 1st call
	}
	~Parent() { // destructor
		cout << "Destructor of Parent class\n"; // 6th call
	}
};
class child1 : public Parent {
public:
	child1() {
		cout << "Constructor of child1 class\n"; // 2nd call
	}
	~child1() {
		cout << "Destructor of child1 class\n"; // 5th call
	}
};
class child2 : public child1 {
public :
	child2() {
		cout << "Constructor of child2 class\n"; // 3rd call
	}
	~child2() {
		cout << "Destructor of child2 class\n"; // 4th call
	}
};
int main() {
	child2 obj; // check child1 obj, parent obj
   return 0;
}

// constructor and destructor call are fully reverse order;