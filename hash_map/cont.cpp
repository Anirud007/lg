#include <iostream>
using namespace std;

int findmax(vector<int> a) {
        sort(a.begin(), a.end()); 
        return a[a.size() - 1];
    }
int find_index(vector<int> a, int e) {
    for (int i = 0; i < a.size(); i++) {
        if (a[i] == e) {
            return i;
        }
    }
    return 0;
}
long long MaxXP(int n, int k, int initial_exp, vector<int>& exp_req, vector<int>& exp_gain)
{
    int count = 0;
    bool a = true;
    while(a) {
        if (count == k) {
            return initial_exp;
            break;
        } 
        int try_ch = findmax(exp_gain);
        int try_ch_ind = find_index(exp_gain, try_ch);
        if (initial_exp >= exp_req[try_ch_ind]) {
            initial_exp += exp_gain[try_ch_ind];
            count++;
            exp_gain[try_ch_ind] = NULL;
            exp_req[try_ch_ind] = NULL;
        }
        else {
            continue;
        }
    }
    return initial_exp;







    // map<int, int> m;
    //     for (int i = 0; i < exp_gain.size(); i++) {
    //         m[exp_gain[i]] = exp_req[i];
    //     }
    //     for(auto x : m) {
            
    //     }