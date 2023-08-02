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
   obj.dispalay();
  return 0;
}