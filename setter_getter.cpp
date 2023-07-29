//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
class Book {
  private: 
    int page; float price; string name;
  public: 
    void setpage(int p) {
    page = p;
  }
  void setprice(float pr) {
    price = pr;
  }
  void setname(string n) {
    name = n;
  }
  void display() {
    cout << "The book page : " << page << "\n";
    cout << "The book price : " << price << "\n";
    cout << "The book name : " << name << "\n";
  }
};
int main() {
  Book b1;
  cout << "Enter the book page : ";
  int p; cin >> p;
  cout << "Enter the book price: ";
  float pr; cin >> pr;
  cout << "Enter the book name: ";
  string name; cin >> name;
  b1.setpage(p);
  b1.setprice(pr);
  b1.setname(name);
  b1.display();
}
//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
class Book {
	private : 
	   int page;
	   float price;
	   string name;
    public: 
      void setpage(int p) {
      	page = p;
      }
      void setprice(float pr) {
      	price = pr;
      }
      void setname(string n) {
      	name = n;
      }
      int getpage() {
      	return page;
      }
      float getprice() {
      	return price;
      }
      string getname() {
      	return name;
      }
};
int main() {
     Book b1;
     cout << "Enter the book page : ";
     int p; cin >> p;
     cout << "Enter the book price: ";
     float pr; cin >> pr;
     cout << "Enter the book name: ";
     string name; cin >> name;
     b1.setpage(p);
     b1.setprice(pr); 
     b1.setname(name);
     cout << "The book page : " << b1.getpage() << "\n";
     cout << "The book price : " << b1.getprice() << "\n";
     cout << "The book name : " << b1.getname() << "\n";
}