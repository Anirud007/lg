//8,1,2,2,3


#include<vector>
#include<iostream>
using namespace std;

int main() {
    int arr[5] = {8,1,2,2,3};
    vector<int> a;
    int counter = 0;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (arr[i] > arr[j]) {
                counter++;
            }
        }
        a.push_back(counter);
        counter = 0;
    }
    for (int i = 0; i < 5; i++) {
        cout << a[i] << " ";
    }
    return 0;
}