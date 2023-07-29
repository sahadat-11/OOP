//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
class Person {
public: 
	string name;
	int age;
	void display1() {
		cout << "Name = " << name << "\n";
		cout << "age = " << age << "\n";
	}
};
class student : public Person {
	// name, age, display1 access here;
public:
	int id;
	void display2() {
		cout << "Name = " << name << "\n";
		cout << "age = " << age << "\n";
		cout << "Id = " << id << "\n";
	}
};
int main() {
	student s1;
	s1.id = 10;
	s1.name = "sahadat";
	s1.age = 22;
	s1.display2();

   return 0;
}

//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
class Person {
public: 
	string name;
	int age;
	void display1() {
		cout << "Name = " << name << "\n";
		cout << "age = " << age << "\n";
	}
};
class student : public Person {
	// name, age, display1 access here;
public:
	int id;
	void display2() {
		display1(); // display er sob access here;
		cout << "Id = " << id << "\n";
	}
};
int main() {
	student s1;
	s1.id = 10;
	s1.name = "sahadat";
	s1.age = 22;
	s1.display2();

   return 0;
}

//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
class Animal {
public: 
	int leg = 4;
};
class dog : public Animal {
	//leg  access here;
public:
	int tail = 1;
};
int main() {
	dog d;
	cout << d.leg << "\n";
	cout << d.tail << "\n";

   return 0;
}

//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
class Animal {
public: 
	int leg = 4;
};
class dog : public Animal {
	//leg  access here;
public:
	int tail = 1;
};
int main() {
	dog d;
	cout << d.leg << "\n";
	cout << d.tail << "\n";

   return 0;
}


#include <iostream>
#include <string>
using namespace std;
class Vehicle {
  public: 
    string brand = "Ford";
    void honk() {
      cout << "Tuut, tuut! \n" ;
    }
};
class Car: public Vehicle {
  public: 
    string model = "Mustang";
};
int main() {
  Car myCar;
  myCar.honk();
  cout << myCar.brand + " " + myCar.model;
  return 0;
}

