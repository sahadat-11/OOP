//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
class Player() {
private:
	int age;
	string name, team;
public:
	Player() {
		cout << "Enter the Player name : ";
		getline(cin, name);
		cout << "Enter the Player team : ";
		getline(cin, team);
		cout << "Enter the Player age: ";
		cin >> age;
	}
};
int main() {
   Player p;
   
   return 0;
}
