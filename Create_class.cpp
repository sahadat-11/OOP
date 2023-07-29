//In The Name of ALLAH
#include <iostream>
using namespace std;
class Test {
   private:
      int n = 10;
   public:
      void show() {
         cout << "The Value of n : " << n << "\n";
      }
};
int main() {
     Test t1, t2; // Declaring object
     t1.show();
     t2.show();
}

