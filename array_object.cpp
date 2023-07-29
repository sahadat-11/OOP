// //In The Name of ALLAH
// #include<bits/stdc++.h>
// using namespace std;
// class Name {
// 	public : 
// 	void print() {
// 		cout << "Sahadat";
// 	}
// };
// int main() {
// 	Name obj;
// 	obj.print();
// }

// //In The Name of ALLAH
// #include<bits/stdc++.h>
// using namespace std;
// class Name {
// 	public : 
// 	void print() {
// 		cout << "Sahadat\n";
// 	}
// };
// int main() {
// 	Name obj[10];
// 	for(int i = 0; i < 10; i++) {
// 	obj[i].print();
//  }

//  return 0;
// }
// //In The Name of ALLAH
// #include<bits/stdc++.h>
// using namespace std;
// class samp {
// 	int n;
// 	public : 
// 	void set(int i) {
// 		n = i;
// 	}
// 	void print() {
// 		cout << n << " ";
// 	}
// };
// int main() {
// 	samp obj[10];
// 	for(int i = 0; i < 10; i++) {
// 		obj[i].set(i);
// 	}
// 	for(int i = 0; i < 10; i++) {
// 	obj[i].print();
//   }
//  return 0;
// }

// multidimension

// //In The Name of ALLAH
// #include<bits/stdc++.h>
// using namespace std;
// class samp {
// 	int n;
// 	public :
// 	samp(int i) {
// 		n = i;
// 	} 
// 	int print() {
// 		return n;
// 	}
// };
// int main() {
// 	samp obj[4][2] = {1, 2, 3, 4, 5, 6, 7, 8};
// 	for(int i = 0; i < 4; i++) {
// 	  cout << obj[i][0].print() << " ";
// 	  cout << obj[i][1].print() << "\n";
//    }
//  return 0;
// }

// //In The Name of ALLAH
// #include<bits/stdc++.h>
// using namespace std;
// class samp {
// 	int n;
// 	public :
// 	void set(int x) {
// 		n = x;
// 	}
// 	int print() {
// 		return n;
// 	}
// };
// int main() {
// 	samp obj[4][2];
// 	for(int i = 0; i < 4; i++) {
// 		for(int j = 0; j < 2; j++) {
// 			int x; cin >> x;
// 			obj[i][j].set(x);
// 		}
// 	}
// 	for(int i = 0; i < 4; i++) {
// 	  cout << obj[i][0].print() << " ";
// 	  cout << obj[i][1].print() << "\n";
//    }
//  return 0;
// }


// //In The Name of ALLAH
// #include<bits/stdc++.h>
// using namespace std;
// class samp {
// 	int n;
// 	public :
// 	samp (int x) {
// 		n = x;
// 	}
// 	int print() {
// 		return n;
// 	}
// };
// int main() {
// 	samp obj[4][2] = {1, 2, 4, 6, 3, 6, 4, 5};
// 	for(int i = 0; i < 4; i++) {
// 	  cout << obj[i][0].print() << " ";
// 	  cout << obj[i][1].print() << "\n";
//    }
//  return 0;
// }


//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
class samp {
	int a, b;
	public :
	samp (int x, int y) {
		a = x; b = y;
	}
	int get_a() {
		return a;
	}
	int get_b() {
		return b;
	}
};
int main() {
	samp obj[4][2] = {samp(1, 2), samp(3,4), samp(5, 6), samp(7,8), samp(9, 10)
    , samp(11, 12), samp(13, 14), samp(15, 16)};
	for(int i = 0; i < 4; i++) {
     cout << obj[i][0].get_a() << " ";
     cout << obj[i][0].get_b() << "\n";
     cout << obj[i][1].get_a() << " ";
     cout << obj[i][1].get_b() << "\n";
   }
 return 0;
}


