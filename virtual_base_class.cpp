//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
class A {
public:
	void display() {
		cout << "HELLO From A";
	}
};
class B : public A {

};
class C : public A {

};
class D : public B, public C {

};
int main() {
  D obj;
  obj.display();
}
// // return wrong answer;

//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
class A {
public:
	void display() {
		cout << "Hello From A";
	}
}; 
class B : virtual public A {

};
class C : virtual public A {

};
class D : public B, public C {

};
int main() {
  D obj;
  obj.display();
}


#include<iostream>

using namespace std;

class GrandParent {
  public: void print() {
    cout << "Hello" << endl;
  }
};

class Father: virtual public GrandParent {
  //print function inherited from GrandParent
};

class Mother: virtual public GrandParent {
  //print function inherited from GrandParent
};

//multiple inheritance
class Child: public Father, public Mother {
  //print function only inherited once as both mother and father
  //have virtual keywords before them

};

int main() {
  Child c;

  c.print();
  //No Ambiguity now

  return 0;
}
