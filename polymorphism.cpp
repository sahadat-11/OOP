//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
class person {
public: 
	void display() {
		cout << "I am is person\n";
	}
};
class student : public person {
public:
	void display() {
		cout << "I am is student\n";
	}
};
class teacher : public person {
public:
	void display() {
		cout << "I am is teacher\n";
	}
};
int main() {
	teacher t;
	student s;
	person p;
	t.display();
	s.display();
	p.display();

   return 0;
}