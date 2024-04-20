#include <iostream>
using namespace std;
int main() {
	int a[5] = {1,2,3,4,5};
	for (int i = 0; i < 5; i += 2) {
		if (i+1 < 5n) {
			swap(a[i], a[i+1]);
		}
	}
	for (int i = 0; i < 5; i++) {
		cout << a[i] << endl;
	}
	return 0;
}
