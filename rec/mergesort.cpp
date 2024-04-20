#include <bits/stdc++.h> 
using namespace std;

void merge(int *arr, int s, int e) {
	int mid = (s+e)/2;
	int len1 = mid - s + 1;
	int len2 = e - mid;

	int *first = new int[len1];
	int *second = new int[len2];

	int k = s;
	for(int i = 0; i < len1; i++) {
		first[i] = arr[k++]; 
	}

	k = mid + 1;
	for (int i = 0; i < len2; i++) {
		second[i] = arr[k++];
	}

	int ind1 = 0;
	int ind2 = 0;
	k = s;
	while(ind1 < len1 && ind2 < len2) {
		if(first[ind1] < second[ind2]) {
			arr[k++] = first[ind1++];
		}
		else {
			arr[k++] = second[ind2++];
		}
	}
	while (ind1 < len1) {
		arr[k++] = first[ind1++];
	}
	while (ind2 < len2) {
		arr[k++] = second[ind2++];
	}
}


void msort(int *arr, int s, int e) {
	//base case 
	if(s >= e) {
		return;
	}
	int mid = (s + e) / 2;

	msort(arr, s, mid);

	msort(arr, mid+1, e);

	merge(arr, s, e);
} 


int main() {
	int arr[5] = {2,5,7,9,3};
	msort(arr, 0, 5-1);
	for(auto x : arr) {
		cout << x << " ";
	}
	return 0;
}