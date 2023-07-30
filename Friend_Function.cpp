
//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
class person {
private:
	string name = "Sahadat";
	friend void dispalay(person nameobj);
};
void dispalay(person nameobj) {
	cout << "My name is : " << nameobj.name;
}
int main() {
	person obj;
	dispalay(obj);
  return 0;
}

//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
class person {
private:
	string name = "Sahadat";
public:
	friend void dispalay(person nameobj);
};
void dispalay(person nameobj) {
	cout << "My name is : " << nameobj.name;
}
int main() {
	person obj;
	dispalay(obj);
  return 0;
}

//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
class summation {
private:
	int x, y, sum;
public:
	void input() {
		cout << "Enter the numbers : ";
		cin >> x >> y;
	}
	int display(int res) {
		cout << "Sum = " << res << "\n";
	}
	friend int cal(summation obj);
};
int cal(summation obj) {
	obj.sum = obj.x + obj.y;
	return obj.sum;
}
int main() {
	summation obj;
	obj.input();
    int output = cal(obj); // friend function a object pass hobe;
    obj.display(output);
  return 0;
}
