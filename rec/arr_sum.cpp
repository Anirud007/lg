#include <bits/stdc++.h>
using namespace std;

bool ars(int arr[], int n, int key) {
	//base case
	if(n==0) {
		return false;
	}
	if (arr[0] == key) {
		return true;
	}
	else {
		bool remp = ars(arr+1, n-1, key);
		return remp;	
	}
	

}

int main() {
	
	int arr[5] = {1,2,3,4,5};
	int ans = ars(arr, 5, 210);
	cout << boolalpha <<  << ans;
	return 0;
}