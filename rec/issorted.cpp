#include <bits/stdc++.h>
using namespace std;

bool iss(int arr[], int n) {
	if(n == 0 || n == 1) {
		return true;
	}
	if (arr[0] > arr[1]) {
		return false;
	}
	else {
		bool ans = iss(arr + 1, n-1);
		return ans;
	}
}

int main() {
	int arr[5] = {1,2,3,4,5};
	bool ans = iss(arr, 5);
	cout << ans << endl;
	return 0;
}