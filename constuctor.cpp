//In The Name of ALLAH
#include <iostream>
#include<string>
using namespace std;
class Test {
  public: 
    void Test() { // its not execute because constructor has no return type;
      cout << "Constructor is called ......\n";
    }
};
int main() {
  Test t1, t2, t3;
}
//In The Name of ALLAH
#include <iostream>
#include<string>
using namespace std;
class Test {
  public: 
    Test() {
      cout << "Constructor is called ......\n";
    }
};
int main() {
  Test t1, t2, t3; // constructor is called 3 times;
}
In The Name of ALLAH
#include <iostream>
#include<string>
using namespace std;
class Test { 
    Test() { // default private;
      cout << "Constructor is called ......\n";
    }
};
int main() {
  Test t1, t2, t3; // not called because object are private;
}

//In The Name of ALLAH
#include <iostream>
#include<string>
using namespace std;
class Test {
  private: 
    int n;
  public: 
    Test() {
      cout << "Constructor is called ......\n";
      n = 10;
    }
    void display() {
      cout << "The value of n = " << n << "\n";
    }
};
int main() {
  Test t1; 
  t1.display();
}

//In The Name of ALLAH
#include <iostream>
#include<string>
using namespace std;
class Test {
  private: 
    int n, x, y;
  public: 
    Test() : n(11), x(12), y(30){ // initially;
      cout << "Constructor is called ......\n";
    }
    void display() {
      cout << "The value of n = " << n << "\n";
      cout << "The value of x = " << x << "\n";
      cout << "The value of y = " << y << "\n";
    }
};
int main() {
  Test t1; 
  t1.display();
}
//In The Name of ALLAH
#include <iostream>
#include<string>
using namespace std;
class Test {
  private: 
    int n;
  public: 
    Test() {
      cout << "Constructor is called ......\n";
    }
    Test(int num) {
       n = num;
    }
    void display() {
      cout << "The value of n = " << n << "\n";
    }
};
int main() {
  Test t1;// 1st test call because thats no parameter;
  Test t2(20); // 2nd test call because thats has a parameter;
  t2.display();
}

//In The Name of ALLAH
#include <iostream>
#include<string>
using namespace std;
class Test {
  private: 
    int n;
  public: 
    Test() : n(12) {
      cout << "Constructor is called ......\n";
    }
    Test(int num) {
       n = num;
    }
    void display() {
      cout << "The value of n = " << n << "\n";
    } 
};
int main() {
  Test t1; // 1st test call because thats no parameter;
  Test t2(20); // 2nd test call because thats has a parameter;
  t2.display();
  t1.display();

}