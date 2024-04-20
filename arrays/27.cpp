#include <iostream>

using namespace std;

int main() {
    int arr1[3] = {1,2,3};
    int arr2[3] = {4,5,6};
    int total[sizeof(arr1)/sizeof(int) + sizeof(arr2)/sizeof(int)];
    int arr1_p = 0;
    int arr2_p = 0; 
    for (int i = 0; i < sizeof(total)/sizeof(int); i++) {
        if (i % 2 == 0) {
            total[i] = arr1[arr1_p];
            arr1_p++;
        }
        if (i % 2 != 0){
            total[i] = arr2[arr2_p];
            arr2_p++;
        }
    }
    for (int i = 0; i < sizeof(total) / sizeof(int); i++) {
        cout << total[i] << endl;
    }
    return 0;
}