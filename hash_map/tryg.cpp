#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
using namespace std;

int main() {
	long long n; 
	cin >> n;
	vector<long long> ans;
	while(n%2==0) {
		ans.push_back(2);
		n = n/2;
	}
	for(int i = 0; i < sqrt(n); i+2) {
		while(n%i==0) {
			ans.push_back(i);
			n = n/i;
		}
	}
	if(n > 2) {
		ans.push_back(2);
	}
	sort(ans.begin(), ans.end());
	cout << ans[ans.size() - 1];
	return 0;
}