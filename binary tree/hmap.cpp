#include <iostream>
#include <map>
#include <unordered_map>
#include <vector> 
using namespace std;

void counter(vector<int> a, unordered_map<int, int> m) {
    for(int i = 0; i < a.size(); i++) {
        if(m.count(a[i]) == 0) {
            m[a[i]] = 1;
        }
        else {
            m[a[i]]++;
        }
    }
    for(auto x : m) {
        cout << "count " << x.first << "is " << x.second << endl;
    }
}

int find_min(vector<int> a, unordered_map<int, int> m) {
    int min_val = INT16_MAX;
    for(auto x : m) {
        if (x.second < min_val) {
            min_val = x.second;
        }
    }
    return min_val;
}

int find_max(vector<int> a, unordered_map<int, int> m) {
    int max_val = INT16_MIN;
    for(auto x : m) {
        if (x.second > max_val) {
            max_val = x.second;
        }
    }
    return max_val;
}

int main() {
    vector<int> a;
    unordered_map<int, int> m;
    a.push_back(12);
    a.push_back(2);
    a.push_back(3);
    a.push_back(4);
    a.push_back(5);
    a.push_back(2);
    a.push_back(3);
    a.push_back(12);
    a.push_back(12);
    counter(a, m); 
    cout << find_max(a, m) << endl; 
    cout << find_min(a, m) << endl; 
    return 0;
}