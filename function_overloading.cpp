//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
void test() {
	cout << "I am in test function\n";
}
void test(int n) {
	cout << "The number = " << n << "\n";
}
void test(double n) {
	cout << "The number = " << n << "\n";
}
int main() {
	test();
	test(10);
	test(10.6);
}