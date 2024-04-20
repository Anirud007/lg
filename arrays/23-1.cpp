//  wap to n elements and interchange first half of the array with the second half

#include <iostream>
using namespace std;
int main() {
    int temp;
	int arr[6] = {1,2,3,4,5,6};
	int mid  = 6 / 2;
	for (int s = 0;  s < mid; s++) {
		temp=arr[s];
		arr[s]=arr[mid];
		arr[mid]=temp;
		mid++;
	}
	for (int i = 0; i < 6; i++) {
		cout << arr[i] << endl;
	}
	return 0;
}
