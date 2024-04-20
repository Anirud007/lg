#include <bits/stdc++.h> 
using namespace std;

// int part(int arr[], int s, int e) { 
// 	int pivot = arr[s];
// 	int cnt = 0; 
// 	for(int i = s + 1; i <= e; i++) {
// 		if(arr[i] <= pivot) {
// 			cnt++;
// 		}
// 	}
// 	int pvtind = s + cnt;
// 	swap( arr[pvtind], arr[s]);

// 	int  i = s;
// 	int j = e;	
// 	while(i < pvtind && j > pvtind) {
// 		while(arr[i] < pivot) {
// 			i++;
// 		}
// 		while(arr[j] > pivot) {
// 			j--;
// 		}

// 		if(i < pvtind && j > pvtind) {
// 			swap(arr[i++], arr[j--]);
// 		}
// 	}
// 	return pvtind;
// }

// void qsort(int *arr, int s, int e) {
// 	// base case 
// 	if(s >= e) {
// 		return;
// 	}
// 	int p = part(arr, s, e);
// 	qsort(arr, s, p - 1);
// 	qsort(arr, p + 1, e);

// }

// int main() {
// 	int arr[5] = {2,5,7,9,3};
// 	qsort(arr, 0, 5-1);
// 	for(auto x : arr) {
// 		cout << x << " ";
// 	}
// 	return 0;
// }






int main() {
	string s = "anirud";
	cout << s.size() << endl;
	cout << s.length() << endl;
	return 0;
}