// //In The Name of ALLAH
// #include <iostream>
// using namespace std;
// class Test {
//    private:
//       int n = 10;
//    public:
//       void show() {
//          cout << "The Value of n : " << n << "\n";
//       }
// };
// int main() {
//      Test t1, t2; // Declaring object
//      t1.show();
//      t2.show();
// }


// //In The Name of ALLAH
// #include <iostream>
// #include<string>
// using namespace std;
// class student {
//    public:
//       void display(string name) {
//          cout << "The name is : " << name << "\n";
//       }
// };
// int main() {
//      string name;
//      cout << "Enter The name: ";
//      getline(cin, name);
//      student s1;
//      s1.display(name);
// }
// //In The Name of ALLAH
// #include <iostream>
// #include<string>
// using namespace std;
// class student {
//    private: 
//       int roll = 10;
//    public:
//       void display() {
//          cout << "The roll number is : " << roll;
//       }
// };
// int main() {
//      student s1;
//      s1.display();
// }

// //In The Name of ALLAH
// #include <iostream>
// #include<string>
// using namespace std;
// class student {
//    private: 
//    public:
//       void display(int roll) {
//          cout << "The roll number is : " << roll;
//       }
// };
// int main() {
//      int roll; cin >> roll;
//      student s1;
//      s1.display(roll);
// }

// //In The Name of ALLAH
// #include <iostream>
// #include<string>
// using namespace std;
// class student {
//    private: 
//    public:
//       int display(int a ,int b) {
//         return a + b;
//       }
// };
// int main() {
//      int a, b; cin >> a >> b;
//      student s1;
//      int sum = s1.display(a, b);
//      cout << sum << "\n";
// }

//In The Name of ALLAH
#include <iostream>
#include<string>
using namespace std;
class student {
   private: 
   public:
      void display(int roll, string name) {
        cout << "the roll number is : " << roll << "\n";
        cout << "the name is : " << name << "\n";
      }
};
int main() {
     int roll; string name; cin >> roll >> name;
     student s1;
     s1.display(roll, name);
}
