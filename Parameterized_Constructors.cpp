// In The Name Of ALLAH
#include<bits/stdc++.h>
using namespace std;
class Point {
	int a, b; 
public: 
	Point(int x) {
		a = x;
		cout << "This default constructor\n";
	}
	Point(int x, int y) { // parameterized constructor
		a = x, b = y;
	}
	GetA() {
		return a;
	}
	GetB() {
		return b;
	}
};
int main() {
	Point ob(12);
  Point obj(10, 20);
  cout << ob.GetA() << endl;
  cout << obj.GetA() << " " << obj.GetB() << "\n";
  return 0;
}