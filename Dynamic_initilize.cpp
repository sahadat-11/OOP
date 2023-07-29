// In The Name Of ALLAH
#include<bits/stdc++.h>
using namespace std;
class Point {
	int a, b; 
public: 
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
  Point obj(10, 20); //dynamic initialize object
  cout << obj.GetA() << " " << obj.GetB() << "\n";
  return 0;
}