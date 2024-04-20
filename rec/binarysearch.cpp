#include <bits/stdc++.h> 
using namespace std;

bool bs(int *arr, int s, int e, int k) 
{
	//base case 
	if(s > e) {
		return false;
	}
	int mid = (s + e) / 2;
	if (arr[mid] == k) {
		return true;
	}
	//R call 
	if(arr[mid] < k) {
		bs(arr, mid + 1, e, k);
	}
	else {
		bs(arr, s, mid - 1, k);
	}
}

int main() {
	int arr[5] = {1,2,3,4,5};
	bool ans = bs(arr, 0, 4, 1);
	cout << boolalpha << ans << '\n';
	return 0;
}