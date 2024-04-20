#include <iostream>
#include <map>
#include <unordered_map>
#include <vector> 
#include <string>
using namespace std;

int main() {
	vector<int> ans;
	// int count = 3;
	// int temp = 3;
	// vector<int> v(count, temp);
	// ans.insert(ans.end(), v.begin(), v.end());
	// cout  << "ans" << endl;
	// for (auto x : ans) { 
	// 	cout  << x << " ";
	// }	
	// cout << endl;
	// cout  << "v" << endl;
	// for (auto x : v) { 
	// 	cout  << x << " ";
	// }
	ans.push_back(10);
	ans.push_back(10);
	ans.push_back(10);
	ans.push_back(10);

	cout << ans.size() << endl;
	cout << ans.length() << endl;
	return 0;
}

// int main() {
// 	vector<string> a;
// 	int max = 0;
// 	int index = 0;
// 	a.push_back("anirud");
// 	a.push_back("anirud");
	
// 	for(auto x : a) {
// 		if (max == 0) {
// 			max = x.size();
// 		} 
// 		if (x.size() > max) {
// 			max = x.size();
// 		}
		
		
// 	} 
// 	return 0;
// }