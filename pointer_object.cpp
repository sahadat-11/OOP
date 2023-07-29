// //In The Name of ALLAH
// #include<bits/stdc++.h>
// using namespace std;
// class Complex {
// 		int real, imaginary;
// 	public: 
// 		void setdata(int a, int b) {
// 			real = a;
// 			imaginary = b;
// 		}
// 		void getdata() {
// 			cout << "The Real value is : " << real << "\n";
// 			cout << "The imaginary value is : " << imaginary << "\n";
// 		}
// };
// int main() {
//     Complex obj;
//     obj.setdata(1, 5);
//     obj.getdata();
//  return 0;
// }

// //In The Name of ALLAH
// #include<bits/stdc++.h>
// using namespace std;
// class Complex {
// 		int real, imaginary;
// 	public: 
// 		void setdata(int a, int b) {
// 			real = a;
// 			imaginary = b;
// 		}
// 		void getdata() {
// 			cout << "The Real value is : " << real << "\n";
// 			cout << "The imaginary value is : " << imaginary << "\n";
// 		}
// };
// int main() {
//     Complex obj;
//     Complex *ptr;
//     ptr = & obj;
//     //(*ptr).setdata(1, 5); // it is exactly same as
//     ptr->setdata(1, 5);
//     (*ptr).getdata();
//  return 0;
// }

//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
class samp {
	int a, b;
	public :
	samp(int i, int j) {
		a = i; b = j;
	} 
	int get_a() {
		return a;
	}
	int get_b() {
		return b;
	}
};
int main() {
	samp obj[4] = {samp(1, 2), samp(3,4), samp(5, 6), samp(7, 8)};
	samp *ptr;
	ptr = obj;
	for(int i = 0; i < 4; i++) {
	  cout << ptr->get_a() << " ";
	  cout << ptr->get_b() << "\n";
	  ptr++; // important
   }
 return 0;
}

