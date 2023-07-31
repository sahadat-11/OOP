//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
class Test {
	int num;
public:
	Test() : num(8) {

	}
	void print() {
		cout << "The count is : " << num;
	}
	void operator++() { // important
		num += 2;
	}
};
int main() {
	Test tt;
	++tt; // important
	tt.print();
}