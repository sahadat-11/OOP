//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
class Test {
	int num;
public:
	Test() : num(8) {

	}
	void operator++() {
		num += 2;
	}
	void print() {
		cout << "The count is : " << num;
	}
};
int main() {
	Test tt;
	++tt;
	tt.print();
}