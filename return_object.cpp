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
