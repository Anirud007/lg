#include <iostream>
using namespace std;
int main() {
    int a[5] = {1,2,3,4,5};
    int  k = 0; 
    for (int i = 0; i < sizeof(a) / sizeof(int); i++) {
        if(a[i] != 2 ) {
            a[k] = a[i];
            k++;
        }
    }  
    // for(int i = 0; i < 5; i++) {
    //     cout << a[i] << endl;
    // }
    return k;
}