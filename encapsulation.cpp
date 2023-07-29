//In The Name of ALLAH
#include <iostream>
using namespace std;
class student {
  private:
    string name;
  public:
     void getname(string x) {
        name = x;
     }
     void display() {
        cout << name << "\n";
     }
};
int main() {
   student s1;
   s1.getname("sahadat");
   s1.display();
}

// encapsulation in constructor
//In The Name of ALLAH
#include <iostream>
using namespace std;
class person {
  private:
    string name;
    int age;
  public:
     person(string s, int x) {
        name = s;
        age = x;
     }
     void display() {
        cout << name << " " << age << "\n";
     } 
};
int main() {
   person p1("sahadat", 24);
   p1.display();
}


//In The Name of ALLAH
#include <iostream>
using namespace std;
class student {
  private:
    string name;
  public:
     void getname(string x) {
        name = x;
     }
     string display() {
        return name;
     }
};
int main() {
   student s1;
   s1.getname("sahadat hossain");
   cout << s1.display();
}

// calculate circle area;
//In The Name of ALLAH
#include <iostream>
using namespace std;
class circle {
  private:
    float radius, area;
  public:
     void getradius() {
        cout << "Enter the radius: ";
        cin >> radius;
     }
     void calculated_area() {
        area = 3.1416*radius*radius;
        cout << area << "\n";
     }
};
int main() {
   circle c;
   c.getradius();
   c.calculated_area();
}