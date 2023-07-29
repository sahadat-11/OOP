#include<iostream>
using namespace std;

int sum(int a, int b){
    int c = a + b;
    return c;
}

// This will not swap a and b
void swap(int a, int b){ //temp a b
    int temp = a;        //4   4  5   
    a = b;               //4   5  5
    b = temp;            //4   5  4 
}

// Call by reference using pointers
void swapPointer(int* a, int* b){ //temp a b
    int temp = *a;          //4   4  5   
    *a = *b;               //4   5  5
    *b = temp;            //4   5  4 
}

// Call by reference using C++ reference Variables
// int & 
void swapReferenceVar(int &a, int &b){ //temp a b
    int temp = a;          //4   4  5   
    a = b;               //4   5  5
    b = temp;            //4   5  4 
    // return a;
}

int main(){
    int x =4, y=5;
    // cout<<"The sum of 4 and 5 is "<<sum(a, b);
    cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl;
     //swap(x, y); // This will not swap a and b
    //swapPointer(&x, &y); //This will swap a and b using pointer reference
    swapReferenceVar(x, y); //This will swap a and b using reference variables
    // swapReferenceVar(x, y) = 766; //This will swap a and b using reference variables
    cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl; 
    return 0;
}


// //In The Name of ALLAH
// #include<bits/stdc++.h>
// using namespace std;
// class myclass {
//    int who;
// public:
//     myclass(int n) {
//         who = n;
//         cout << "Constructing\n";
//     }
//     ~myclass() {
//         cout << "Destructing\n";
//     }
//     int id() {
//       return who;
//    }
// };
// void f(myclass o) {
//     cout << "Received " << o.id() << "\n";
// }
// int main() {
//   myclass x(1);
//   f(x);
//   return 0;
// }

// //In The Name of ALLAH
// #include<bits/stdc++.h>
// using namespace std;
// class myclass {
//    int who;
// public:
//     myclass(int n) {
//         who = n;
//         cout << "Constructing\n";
//     }
//     ~myclass() {
//         cout << "Destructing\n";
//     }
//     int id() {
//       return who;
//    }
// };
// void f(myclass & o) {
//     cout << "Received " << o.id() << "\n";
// }
// int main() {
//   myclass x(1);
//   f(x);
//   return 0;
// }