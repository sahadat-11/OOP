//In The Name of ALLAH
#include <iostream>
using namespace std;
class Counter {
  private:
     static int cnt;
  public:
     Counter() { 
      cout << "Constructor is called ......\n";
      cnt++;
    }
    void display() {
      cout << "number of object = " << cnt << "\n";
    }  
};
int Counter :: cnt;
int main() {
    Counter t1, t2, t3;
    t1.display();
    t2.display();
    t3.display();
}