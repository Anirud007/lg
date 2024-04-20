#include <iostream>

using namespace std;

int main() {
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int count=1;
    if(arr[0]==0)
    {
        cout<<"\nWe Cannot Exit the Array:";
    }
    else
    {
        int p=arr[0];
        while(p<sizeof(arr)/sizeof(int))
        {
            p+=arr[p];
            count++;
        }
    }
    cout << count << endl;
    return 0;
}