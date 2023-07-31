//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
class sum {
	public:
	int a, b;
	void getdata(int x, int y) {
		a = x, b = y;
	}
	void display() {
		cout << a << " " << b << "\n";
	}
	friend sum operator +(sum &c1, sum &c2); // important
	
};
sum operator +(sum &c1, sum &c2) { // important
		sum temp;
		temp.a = c1.a + c2.a;
		temp.b = c1.b + c2.b;
		return temp;
}
int main() {
	sum ob1, ob2, ob3;
	ob1.getdata(15,20);
	ob2.getdata(3,45);
	ob3 = ob1+ob2; // important
	ob3.display();
}