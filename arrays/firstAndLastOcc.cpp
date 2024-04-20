#include <iostream>
using namespace std;

int firstOcc(int arr[], int size, int key) {
    int start = 0;
    int end = size;
    int ans = -1;
    int mid  = (start + end) / 2;
    
    while  (start <= end) {
        if (arr[mid] == key) {
            ans = mid;
            end = mid - 1;
        }
        if (arr[mid] < key) 
        {
            start = mid + 1; 
        }
        if (arr[mid] > key) {
            end =  mid - 1;
        }
        mid = (start + end) / 2;
    }
    return ans;
}
int lastOcc(int arr[], int size, int key) {
    int start = 0;
    int end = size;
    int ans = -1;
    int mid  = (start + end) / 2;
    
    while  (start <= end) {
        if (arr[mid] == key) {
            ans = mid;
            start = mid + 1;
        }
        if (arr[mid] < key) 
        {
            start = mid + 1; 
        }
        if (arr[mid] > key) {
            end =  mid - 1;
        }
        mid = (start + end) / 2;
    }
    return ans;
}

int main() {
    int a[5]  = {1, 2, 2, 3, 2};
    int foc = firstOcc(a, 5, 2);
    int loc = lastOcc(a, 5, 2);
    cout << foc << endl; 
    cout << loc << endl; 
    return 0;
}