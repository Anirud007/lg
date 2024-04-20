#include <iostream>
#include <vector>
using namespace std;

vector<int> plusone(vector<int> a) {
    int e = a.size() - 1;
    while (e >= 0) {
        if (a[e] == 9) {
            a[e]  = 0;
        }
        else {
            a[e] += 1;
            return a;            
        }
        e--;
    }
    if (a[0] == 0) {
        a.insert(a.begin(), 1);
    }
    return a;

}
int main() {
    vector<int> a{9};
    vector<int> f = plusone(a);
    for (int i = 0; i < f.size(); i++) {
        cout << f[i] << endl;
    }
    
}