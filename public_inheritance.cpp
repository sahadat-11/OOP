// //In The Name of ALLAH
// #include<bits/stdc++.h>
// using namespace std;
// class parent {
// 	private : 
// 	 int a; // we cannot access a for private member;
// 	protected : 
// 	 int b; 
// 	public: 
// 	 int c;
// };
// class child : public parent {
// 	public :
// 	void input() {
// 	 cout << "Enter the value of a : ";
// 	 cin >> a;
// 	 cout << "Enter the value of b : ";
// 	 cin >> b;
// 	 cout << "Enter the value of c : ";
// 	 cin >> c;
//    }
// };
// int main() {
// 	child obj;
//  obj.input();
//  return 0;
// }

//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
class parent {
	private : 
	 int a; // we cannot access a for private member;
	protected : 
	 int b; 
	public: 
	 int c;
};
class child : private parent {
	public :
	void input() {
	 cout << "Enter the value of b : ";
	 cin >> b;
	 cout << "Enter the value of c : ";
	 cin >> c;
    }
    void show() {
    	cout << "The value of b = " << b << "\n";
    	cout << "The value of c = " << c << "\n";
    }
};
int main() {
	child obj;
    obj.input();
    obj.show();
   return 0;
}