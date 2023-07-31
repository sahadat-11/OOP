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
class samp {
	int i;
public:
	samp(int n) {
		i = n;
	}
	int get_a() {
		return i;
	}
};
int square(samp o) {
	return o.get_a() * o.get_a();
}
int main() {
	samp a(2), b(3);
	cout << square(a) << "\n";
	cout << square(b) << "\n";

  return 0;
}

//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
class samp {
	int i;
public:
	samp(int n) {
		i = n;
	}
	int get_a() {
		return i;
	}
};
void square(samp o) {
	cout << "Copy of a has i value of : " << o.get_a() * o.get_a() << "\n";
}
int main() {
	samp a(2);
	square(a);
    cout << "But a is unchanged in main function " << a.get_a() << "\n";
  return 0;
}
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
//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
class Complex {
	int r, i; 
public: 
	void read();
	void print();
	void sum(Complex, Complex);
};
void Complex :: read() {
	cout << "Enter Real and Imaginary Number: ";
	cin >> r >> i;
}
void Complex :: print() {
	cout << "Real = " << r << "\n";
	cout << "Imaginary = " << i << "\n";
}
void Complex :: sum(Complex c1, Complex c2) {
	r = c1.r + c2.r;
	i = c1.i + c2.i;
}

int main() {
	Complex c1, c2, c3;
	c1.read();
	c2.read();
	c3.sum(c1, c2);
	c3.print();
  return 0;
}
