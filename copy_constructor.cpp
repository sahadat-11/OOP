//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
class myclass {
   int a;
public:
    myclass() {
        a = 10;
    }
    myclass(int n) {
        a = n;
    }
    void display() {
        cout << "The value is : " << a << "\n";
    }
};
int main() {
  myclass x, y, z(45);
  x.display();
  y.display();
  z.display();
  return 0;
}

//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
class myclass {
   int a;
public:
    myclass() {
        a = 10;
    }
    myclass(int n) {
        a = n;
    }
    myclass(myclass & obj) {
        cout << "Copy Constructor Called\n";
        a = obj.a;
    }
    void display() {
        cout << "The value is : " << a << "\n";
    }
};
int main() {
  myclass x, y, z(45);
  x.display();
  y.display();
  z.display();
  myclass z1(z);
  z1.display();
  return 0;
}

//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
class myclass {
   int a;
public:
    myclass() {
        a = 10;
    }
    myclass(int n) {
        a = n;
    }
    void display() {
        cout << "The value is : " << a << "\n";
    }
};
int main() {
  myclass x, y, z(45);
  x.display();
  y.display();
  z.display();
  return 0;
}

//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
class myclass {
   int a;
public:
    myclass() {
        a = 10;
    }
    myclass(int n) {
        a = n;
    }
    // when copy constructor is not found ,compiler suplies its own copy constructor
    myclass(myclass & obj) {
        cout << "Copy Constructor Called\n";
        a = obj.a;
    }
    void display() {
        cout << "The value is : " << a << "\n";
    }
};
int main() {
  myclass x, y, z(45), z2;
  x.display();
  y.display();
  z.display();
  myclass z1(z);
  z1.display();
  z2 = z; // copy constructor not called because z2 declare above
  myclass z3 = z; // copy constructor is called 
  return 0;
}