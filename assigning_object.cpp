//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
class myclass {
  int a, b; 
public: 
  void set(int x, int y) {
    a = x; b = y;
  }
  void show() {
    cout << a << " " << b << "\n";
  }
};
int main() {
  myclass ob1, ob2;
  ob1.set(5, 10);
  ob2 = ob1;
  ob1.show();
  ob2.show();

  return 0;
}
//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
class myclass {
  int a, b; 
public: 
  void set(int x, int y) {
    a = x; b = y;
  }
  void show() {
    cout << a << " " << b << "\n";
  }
};
class yourclass {
  int a, b; 
public: 
  void set(int x, int y) {
    a = x; b = y;
  }
  void show() {
    cout << a << " " << b << "\n";
  }
};
int main() {
  myclass ob1;
  yourclass ob2;
  ob1.set(5, 10);
  ob2 = ob1; // we cannot assign one ob1 and ob2 another class object;
  ob1.show();
  ob2.show();

  return 0;
}