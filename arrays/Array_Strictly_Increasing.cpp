#include <iostream>
#include <vector>
using namespace std;

bool canBeIncreasing(vector<int>& nums) {  
        int count = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] > nums[i+1]) {
                count++;
            }
            if (count > 1){
                return false;
            }
        }
        return true;
    }

int main() {
    vector<int> a{1,2,10,12,5,7};
    bool out = canBeIncreasing(a);
    cout << out << endl;
    return 0;
}