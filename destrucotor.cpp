//In The Name of ALLAH
#include <iostream>
using namespace std;
class Test {
  public:
     Test() { // its not execute because constructor has no return type;
      cout << "Constructor is called ......\n";
    }
    ~Test() {
      cout << "Destructor is called ........\n";
    }
};
void objcreate() {
  Test t1, t2;
}
int main() {
    objcreate();
    cout << "Back in main......\n";
    system("pause"); // system is pause;
    Test t3;
}
