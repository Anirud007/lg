#include <bits/stdc++.h>

using namespace std;

void sels(int *arr, int n) {
	//base case
	if(n == 0) {
		return;
	}
	//solve 1 case
	int min_ind = 0;
	for(int i = 0; i < n; i++) {
		if(arr[min_ind] > arr[i]) {
			min_ind = i;
		}
	}
	swap(arr[0], arr[min_ind]);
	// Rec call
	sels(arr + 1, n - 1);
}

int main() {
	int arr[5] = {1,4,3,7,2};
	sels(arr, 5);
	for (auto x : arr) {
		cout << x << " ";
	}
	return 0;
}