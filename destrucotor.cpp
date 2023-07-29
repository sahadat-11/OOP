//In The Name of ALLAH
#include <iostream>
using namespace std;
class Test {
  public:
     Test() { 
      cout << "Constructor is called ......\n";
    }
    ~Test() {
      cout << "Destructor is called ........\n";
    }
};
int main() {
    Test t1;
}

// count constructor and destructor call
//In The Name of ALLAH
#include <iostream>
using namespace std;
int cnscnt = 0, dstcnt = 0;
class Test {
  public:
     Test() { // its not execute because constructor has no return type;
      cnscnt++;
      cout << "Constructor is called : " << cnscnt << "\n";
    }
    ~Test() {
      dstcnt++;
      cout << "Destructor is called : " << dstcnt << "\n";
    }
};
int main() {
    Test t1, t2, t3;
}

// constructor and destructor call in object in array
//In The Name of ALLAH
#include <iostream>
using namespace std;
int cnscnt = 0, dstcnt = 0;
class Test {
  public:
     Test() { // its not execute because constructor has no return type;
      cnscnt++;
      cout << "Constructor is called : " << cnscnt << "\n";
    }
    ~Test() {
      dstcnt++;
      cout << "Destructor is called : " << dstcnt << "\n";
    }
};
int main() {
    Test t[10];
    for(int i = 1; i <= 10; i++) {
      t[i];
    }
}
