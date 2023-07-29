//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
void test() {
	cout << "I am in test function\n";
}
void test(int n) {
	cout << "The number = " << n << "\n";
}
void test(double n) {
	cout << "The number = " << n << "\n";
}
int main() {
	test();
	test(10);
	test(10.6);
}


//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
class sum {
public:
	void add (int a, int b) {
		cout << a + b << "\n";
	}
	void add (int a, int b, int c) {
		cout << a + b + c << "\n";
	}
};
int main() {
	sum obj;
	obj.add(5, 10);
	obj.add(5, 10, 15);
}


