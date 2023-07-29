//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
class parent {
public: 
	void test(int n) {
		cout << "I am is parent class and number is : " << n << "\n";
	}
};
class child : public parent {
public:
	void test(int n) {
		cout << "I am is child class and number is : " << n << "\n";
	}
};
int main() {
	child obj1;
	obj1.test(5);
	obj1.parent :: test(10);

   return 0;
}