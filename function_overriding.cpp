//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
class parent {
public: 
	void test(int n) {
		cout << "I am is parent class and number is : " << n << "\n";
	}
};
class child : public parent {
public:
	void test(int n) {
		cout << "I am is child class and number is : " << n << "\n";
	}
};
int main() {
	child obj1;
	obj1.test(5);
	//obj1.parent :: test(10);

   return 0;
}

//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
class person {
public: 
	void display() {
		cout << "I am a person\n";
	}
};
class student : public person {
public:
	void display() {
		cout << "I am a student\n";
	}
};
class teacher : public person {
public:
	void display() {
	cout << "I am a teacher\n";
  }
};
int main() {
	teacher t;
	person p;
	student s;
	t.display();
	p.display();
	s.display();

   return 0;
}