//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
class A {
private:
	int id = 10;
	string name = "sahadat";
public:
	friend class B;
};
class B {
public:
	void display(A obj) {// object received is important
		cout << obj.id << " " << obj.name << "\n";
	}
};
int main() {
	A ob1;
	B ob2;
	ob2.display(ob1);
}