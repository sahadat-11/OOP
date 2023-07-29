// //In The Name of ALLAH
// #include<bits/stdc++.h>
// using namespace std;
// class Distance {
// private:
// 	int km, hr;
// public:
// 	Distance() : km(0), hr(0) {
// 	}
// 	void get() {
// 		cout << "Enter Distance in kilometer: ";
// 		cin >> km;
// 		cout << "Enter Hours of Distance: ";
// 		cin >> hr;
// 	}
// 	void show() {
// 		cout << "Your Traveled is " << km << " km  " << hr << "  Hours" << endl;
// 	}
// 	void total(Distance p) {
// 	 Distance t;
// 	 t.km = km + p.km;
// 	 t.hr = hr + p.hr;
// 	 cout << "Total Traveled is " << t.km << " KM " << t.hr << " Hour \n";
// 	}
// };
// int main() {
//   Distance youdis, mydis;
//   cout << "---------- Your Input Of Distance ------\n";
//   youdis.get();
//   youdis.show();
//   cout << "---------- My Input Of Distance ------\n";
//   mydis.get();
//   mydis.show();
//   cout << "---------- Toatal output Of Distance ------\n";
//   mydis.total(youdis);

//    return 0;
// }

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
