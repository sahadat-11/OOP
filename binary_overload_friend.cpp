//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
class multiply {
	int a, b;
public:
	void getdata(int x, int y) {
		a = x, b = y;
	}
	void display() {
		cout << a << " " << b << "\n";
	}
	friend multiply operator +(multiply c) {
		multiply temp;
		temp.a = a + c.a;
		temp.b = b + c.b;
		return temp;
	}
};
int main() {
	multiply ob1, ob2, ob3;
	ob1.getdata(15,20);
	ob2.getdata(3,45);
	ob3 = ob1+ob2;
	ob3.display();
}