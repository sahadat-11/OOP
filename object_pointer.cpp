//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
class parent {
public:
	void show() {
		cout << "This is show method of parent class\n";
	}
};
int main() {
	parent *ptr;
	ptr = new parent;
	ptr-> show();
   return 0;
}