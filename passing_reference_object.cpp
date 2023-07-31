//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
class myclass {
	int who;
public:
	myclass(int n) {
		who = n;
		cout << "Constructing\n";
	}
	~myclass() {
		cout << "Destructor\n";
	}
	int id() {
		return who;
	}
};
void f(myclass o) { // o is return pass by value;
  cout << "recieved " << o.id() << "\n";
}
int main() {
	myclass x(1);
	f(x);
  return 0;
}
// Constructing
//recieved 1
//Destructor
//Destructor

//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
class myclass {
	int who;
public:
	myclass(int n) {
		who = n;
		cout << "Constructing\n";
	}
	~myclass() {
		cout << "Destructor\n";
	}
	int id() {
		return who;
	}
};
void f(myclass &o) { // o is return pass by reference;
  cout << "recieved " << o.id() << "\n";
}
int main() {
	myclass x(1);
	f(x);
  return 0;
}
// Constructing
//recieved 1
//Destructor

