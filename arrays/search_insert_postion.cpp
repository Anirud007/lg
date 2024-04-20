#include <iostream>
using namespace std;

int search(int nums[], int size, int target) {
    int s = 0;
    int e = sizeof(nums)/sizeof(int);
    int m = (s + e) / 2;
    if (nums[e - 1] < target) {
        return e;
    }
    while (s <= e) {
        if (nums[m] == target) {
            return m;
        }
        else if (nums[m] < target) {
            s = m + 1;
        }
        else if (nums[m] > target) {
            e = m - 1;
        }
        m = (s + e) / 2;
    }
    return s;
}

int main() {
    int l[4] = {1, 3, 5, 6};
    int v  = search(l, 4, 2);
    return 0;
}