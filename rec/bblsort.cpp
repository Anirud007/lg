#include <bits/stdc++.h> 
using namespace std;

void bbls(int *arr, int n) {
	if(n == 0 || n == 1) {
		return;
	}

	for (int i = 0; i < n; i++) {
		if(arr[i] > arr[i+1]) {
			swap(arr[i], arr[i+1]);
		}
	}
	bbls(arr, n-1);
}

int main() {
	int arr[5] = {1,4,3,7,2};
	bbls(arr, 5);
	for (auto x : arr) {
		cout << x << " ";
	}
	return 0;
}