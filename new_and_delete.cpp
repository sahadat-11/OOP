// //In The Name of ALLAH
// #include<bits/stdc++.h>
// using namespace std;
// int main() {
// 	int *ptr;
// 	ptr = new int;

// 	if(!ptr) {
// 		cout << "Allocation Error! \n";
// 		return 0;
// 	}
// 	*ptr = 100;
// 	cout << "Here is integer p = " << *ptr << "\n";
// 	delete ptr;
//   return 0;
// }

// //In The Name of ALLAH
// #include<bits/stdc++.h>
// using namespace std;
// class samp {
// 	int a, b;
// public: 
// 	void set_value(int i, int j) {
// 		a = i, b = j;
// 	}
//     int get_product() {
//         return a * b;
//     }
// };
// int main() {
// 	samp *ptr;
// 	ptr = new samp; // allocate object;
// 	if(!ptr) {
// 		cout << "Allocation Error! ";
// 		return 0;
// 	}
//     ptr-> set_value(3, 5);
//     cout << ptr-> get_product();
//     delete ptr;
//     cout << ptr->get_product(); // 0 return ;
//   return 0;
// }

// //In The Name of ALLAH
// #include<bits/stdc++.h>
// using namespace std;
// class samp {
// 	int a, b;
// public: 
// 	samp(int i, int j) {
// 		a = i, b = j;
// 	}
//     int get_product() {
//         return a * b;
//     }
// };
// int main() {
// 	samp *ptr;
// 	ptr = new samp (5, 7); // allocate object;
// 	if(!ptr) {
// 		cout << "Allocation Error! ";
// 		return 0;
// 	}
//     cout << ptr-> get_product() << "\n";
//     delete ptr;
//     cout << ptr->get_product(); // 0 return ;
//   return 0;
// }

// //In The Name of ALLAH
// #include<bits/stdc++.h>
// using namespace std;
// int main() {
// 	int *ptr;
// 	ptr = new int[5];
// 	if(!ptr) {
// 		cout << "Not Allocate\n";
// 		return 0;
// 	}
// 	for(int i = 0; i < 5; i++) {
// 		ptr[i] = i;
// 	}
// 	for(int i = 0; i < 5;  i++) {
// 		cout << ptr[i] << " ";
// 	}
// 	delete [] ptr;
// 	for(int i = 0; i < 5;  i++) { // gives Garvage value;
// 		cout << ptr[i] << " ";
// 	}
//   return 0;
// }



// //In The Name of ALLAH
// #include<bits/stdc++.h>
// using namespace std;
// int main() {
// 	int *ptr;
// 	ptr = new int[5];
// 	if(!ptr) {
// 		cout << "Not Allocate\n";
// 		return 0;
// 	}
// 	for(int i = 0; i < 5; i++) {
// 		ptr[i] = i * i;
// 	}
// 	for(int i = 0; i < 5;  i++) {
// 		cout << ptr[i] << " ";
// 	}
// 	delete [] ptr;
// 	for(int i = 0; i < 5;  i++) { // gives Garvage value;
// 		cout << ptr[i] << " ";
// 	}
//   return 0;
// }


// //In The Name of ALLAH
// #include<bits/stdc++.h>
// using namespace std;
// class samp {
// 	int a, b;
// public: 
// 	void set(int i, int j) {
// 	  a = i, b = j;
// 	}
//     int get_product() {
//         return a * b;
//     }
// };
// int main() {
// 	samp *ptr;
// 	ptr = new samp [10]; // allocate object;
// 	if(!ptr) {
// 		cout << "Allocation Error! ";
// 		return 0;
// 	}
//     for(int i = 0; i < 10; i++) {
//     	ptr[i].set(i, i);
//     }
//     for(int i = 0; i < 10; i++) {
//     	cout << ptr[i].get_product() << "\n";
//     }
//     delete [] ptr;

//   return 0;
// }


//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
class samp {
	int a, b;
public: 
	void set(int i, int j) {
	  a = i, b = j;
	}
	~samp() {
		cout << "Destructing\n";
	}
    int get_product() {
        return a * b;
    }
};
int main() {
	samp *ptr;
	ptr = new samp [10]; // allocate object;
	if(!ptr) {
		cout << "Allocation Error! ";
		return 0;
	}
    for(int i = 0; i < 10; i++) {
    	ptr[i].set(i, i);
    }
    for(int i = 0; i < 10; i++) {
    	cout << ptr[i].get_product() << "\n";
    }
    delete [] ptr;
     
  return 0;
}
