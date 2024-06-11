#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int n = 5;
	vector<int> a;
	for (int i = 0; i < n; i++) {
		a.push_back((i + 1) * 2);
	}
	vector<int> b;
	for (int i = 0; i < n; i++) {
		b.push_back((i + 1) * 3);
	}
	vector<int> c(n);
	auto r1 = set_difference(a.begin(), a.end(), b.begin(), b.end(), c.begin());

	c.resize(r1 - c.begin());
	for (auto i = c.begin(); i != c.end(); i++) {
		cout << *i << " ";
	}
	return 0;
}
//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//int main() {
//	int n = 5;
//	vector<int> a;
//	for (int i = 0; i < n; i++) {
//		a.push_back((i + 1) * 2);
//	}
//	auto r1 = lower_bound(a.begin(), a.end(), 7, [](int i, int j) {return i < j; });
//	cout << *r1 << " ";
//	auto r2 = lower_bound(a.begin(), a.end(), 7, [](int i, int j) {return i > j; });
//	cout << *r2;
//}
//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include<math.h>
//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <numeric>
//using namespace std;
//
//int main() {
//	int n = 5;
//	vector<int> a;
//	for (int i = 0; i < n; i++) {
//		a.push_back(i + 1);
//	}
//	int min{ 3 };
//
//	auto sum = accumulate(a.begin(), a.end(), 0, [min](int sum, int v) {
//		if (v < min)
//			return sum;
//		return sum + v;
//		});
//	cout << sum << endl;
//}
//#include <numeric>
//using namespace std;
//
//int main() {
//	int n = 3;
//	vector<int> a;
//	for (int i = 0; i < n; i++) {
//		a.push_back(i + 1);
//	}
//	auto res = accumulate(a.begin(), a.end(), 1, [](int i, int j) {return pow(j, i); });
//	cout << res << " ";
//	sort(a.begin(), a.end(), [](int a, int b) {return a > b; });
//	auto res2 = accumulate(a.begin(), a.end(), 1, [](int i, int j) {return pow(j, i); });
//	cout << res2;
//}
//#include <iostream> 
//#include <vector> 
//
//using namespace std;
//
//int main() {
//    int n = 17;
//    vector<int> a;
//    for (int i = 0; i < n; i++) {
//        a.push_back(i);
//    }
//    cout << a.capacity() << " ";
//    a.shrink_to_fit();
//    a.push_back(n + 1);
//    cout << a.capacity();
//    return 0;
//}
//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//int main() {
//	int n = 5;
//	vector<int> a;
//	for (int i = 0; i < n; i++) {
//		a.push_back(i + 1);
//	}
//	auto it1 = a.begin() + 2;
//	auto it2 = a.begin() + 3;
//	sort(a.begin(), a.end(), [](int a, int b) {return a > b; });
//	cout << *(it1) << " " << *(it2) << endl;
//	sort(it1, it2);
//	cout << *(it1) << " " << *(it2) << endl;
//}