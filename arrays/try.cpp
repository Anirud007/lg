#include <iostream>
using namespace std;

int main() {
    int s, n;
    int arr[5]= {1,2,3,4,5};
    cin >> s;
    cin >> n;
    for (int i = 0; i < n; i++) {
        for(int j = 1; j < n; j++) {
            if (arr[i] + arr[j] == s) {
                cout << i << j << endl;
            }
        }
    }
}


// 1 1 1 2 2 3
// i
// j   