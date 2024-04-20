#include <bits/stdc++.h>
using namespace std;

void ins(int *arr, int n, int ind) {
	// base case 
	if(ind == n) {
		return;
	}
	//solve 1 case
	int cur = arr[ind];
	int j = ind - 1;
	while(j >= 0) {
		if(cur < arr[j]) {
			arr[j + 1] = arr[j--];
		}
		else {
			break;
		}
	}
	arr[j + 1] = cur;
	// Rec Call 
	ins(arr, n, ind + 1);
}

int main() {
	int arr[5] = {1,4,3,7,2};
	ins(arr, 5, 1);
	for (auto x : arr) {
		cout << x << " ";
	}
	return 0;
}