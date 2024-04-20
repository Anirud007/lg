#include <iostream> 
#include <map>
#include <vector>
using namespace std;


int main() {
    vector<int> nums;
    // vector<int>::iterator it;
    // it = nums.begin()+1;
    nums.push_back(3);
    nums.push_back(2);
    nums.push_back(3);
    nums.push_back(4);
    nums.push_back(5);
    nums.erase(2,1);
    for(int i = 0; i < nums.size(); i++) {
        cout << nums[i] << endl;
    }


    // map<int, int> m;
    // counting function
    // for (auto x : nums) {
    //     m[x]++;
    // }
    // for (auto x : m) {
    //     if (x.second > 1) {
    //         return x.first;
    //     }
    // }
    return 0;
}