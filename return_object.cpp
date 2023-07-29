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
// 	Distance total(Distance pas) {
// 	 Distance t;
// 	 t.km = km + pas.km;
// 	 t.hr = hr + pas.hr;
// 	 return t;
// 	 //cout << "Total Traveled is " << t.km << " KM " << t.hr << " Hour \n";
// 	}
// };
// int main() {
//   Distance youdis, mydis, Res;
//   cout << "---------- Your Input Of Distance ------\n";
//   youdis.get();
//   youdis.show();
//   cout << "---------- My Input Of Distance ------\n";
//   mydis.get();
//   mydis.show();
//   cout << "---------- Toatal output Of Distance ------\n";
//   Res = mydis.total(youdis); // google korte hobe; 
//   Res.show();
//    return 0;
// }

//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
class samp {
	string name;
public:
	void show() {
		cout << name << "\n";
	}
	void set(string s) {
		name = s;
	}
};
samp input() {
	string s;
	samp str;
	cout << "Enter a string : ";
	cin >> s;
	str.set(s);
	return str;
}
int main() {
	samp ob;
	ob = input();
	ob.show();
  return 0;
}

//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
class samp {
	int n;
public:
	void set(int i) {
		n = i;
	}
	void show() {
		 cout << n << " ";
	}
};
samp input() {
   samp o;
   o.set(5);
   return o;
}
int main() {
	samp obj;
	obj = input();
	obj.show();

  return 0;
}