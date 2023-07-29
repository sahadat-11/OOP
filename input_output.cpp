//In The Name of ALLAH
#include <iostream>
#include<string>
using namespace std;
class student {
   private:
      int roll;
      string name;
   public:
      void input() {
         cout << "Enter the roll number: ";
         cin >> roll;
         cout << "Enter the name: ";
         cin >> name;
      }
      void output() {
          cout << "Roll Number = " << roll << "\n";
          cout << "Name = " << name << "\n";
      }
};
int main() {
    student s1;
    s1.input();
    s1.output();
}
