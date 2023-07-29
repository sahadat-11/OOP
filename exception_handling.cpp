// a divide by b; b == 0;
//In The Name of ALLAH
#include <iostream>
using namespace std;
int main() {
   try{
    int a, b; cin >> a >> b;
    if(b == 0) {
      throw -1;
    }
    double res = 1.0*a / b;
    cout << res << "\n";
  }
  catch(int x) {
   cout << "Try again\n";
  }
}

// square root // n < 0 (negative)
//In The Name of ALLAH
#include <iostream>
#include<math.h>
using namespace std;
int main() {
   try{
    int n; cin >> n;
    if(n < 0) {
      throw -1;
    }
    cout << sqrtl(n);
  }
  catch(int x) {
   cout << "Try again\n";
  }
}

#include <iostream>
using namespace std;
int main() {
   try {
   throw 10;
   }
   catch (char *excp) {
      cout << "Caught " << excp;
   }
   catch (...) {
      cout << "Default Exception\n";
   }
   return 0;
}

//Implicit type conversion doesn’t happen for 
//primitive types. For example, in the following 
//program, ‘a’ is not implicitly converted to int. 
#include <iostream>
using namespace std;
int main() {
   try {
   throw 'a';
   }
   catch (int x) {
      cout << "Caught " << x;
   }
   catch (...) {
      cout << "Default Exception\n";
   }
   return 0;
}

//If an exception is thrown and not caught anywhere,
// the program terminates abnormally. For example,
// in the following program, a char is thrown, 
//but there is no catch block to catch the char. 
#include <iostream>
using namespace std;
int main() {
   try {
   throw 'a';
   }
   catch (int x) {
      cout << "Caught ";
   }
   return 0;
}

//When an exception is thrown, all objects
// created inside the enclosing try block are destroyed 
//before the control is transferred to the catch block
#include <iostream>
using namespace std;
class Test {
public:
   Test() { cout << "Constructor of Test " << endl; }
   ~Test() { cout << "Destructor of Test " << endl; }
};
int main() {
   try {
      Test t1;
      throw 10;
   }
   catch (int i) {
      cout << "Caught " << i << endl;
   }
}
