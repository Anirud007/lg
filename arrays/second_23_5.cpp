// // wap to swap the alternate pair of elements 

#include <iostream>
using namespace std;
int main() 
{
    int n;
    cout << "size of array " << endl;
    cin >> n;
    cout << "element "; 
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int j = 0;
    while (j < n) {
        swap(arr[j], arr[j+2]);
        swap(arr[j+1], arr[j+3]);
        j = j + 4;
        if (n-j%4 != 0) {
            break;
        }
    }
    for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
    {
        cout  << arr[i] << " ";
    }
    return 0;
}