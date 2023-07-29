//In The Name of ALLAH
#include <iostream>
#include<string>
using namespace std;
class Test {
  public: 
    int n;
};
int main() {
  Test t;
  cout << "Enter the Number: ";
  cin >> t.n;
  cout << "The value is : " << t.n << "\n";
}

//In The Name of ALLAH
#include <iostream>
#include<string>
using namespace std;
class Test {
    int n;
};
int main() {
  Test t;
  cout << "Enter the Number: ";
  cin >> t.n; // we cannot access because default become private;
  cout << "The value is : " << t.n << "\n";
}


//In The Name of ALLAH
#include <iostream>
#include<string>
using namespace std;
class Test {
  private: 
    int n;
  public: 
    int x = 11;
    void input() {
    cout << "Enter The Number: ";
    cin >> n;
  }
  void output() {
    cout << "The valut of n : " << n << "\n";
    cout << "The valut of x : " << x << "\n";
  }
};
int main() {
  Test t;
 // t.n = 10; we cannot access n for private specifier;
  t.x = 10; // if in public x = 11 but in the main function we assing x = 10;
  t.input();
  t.output();
}

