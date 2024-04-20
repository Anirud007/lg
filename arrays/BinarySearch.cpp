#include<iostream>
using namespace std; 

int binarySearch(int arr[], int size, int key) {
    int start = 0;
    int end = size - 1;
    int mid = (start + end) / 2;

    while (start <= end) {
    
        if (arr[mid] ==  key) {
            return mid;
        }
    
        if (key > arr[mid]) {
            start = mid + 1; 
        }
    
        else {
            end = mid - 1;
        }
    
        mid = (start + end) / 2;
    }
    return mid;
}
int main() {
    int even[6] = {1, 2, 4, 5, 6, 7}; 
    int odd[5] = {1, 2, 3, 4, 5};
    int index = binarySearch(even, 6, 3);
    int z = binarySearch(odd, 5, 2);

    cout << index << endl;
    cout << z << endl;

    return 0;
}
