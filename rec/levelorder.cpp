#include <bits/stdc++.h>

using namespace std;

// typedef nu NULL;
typedef vector<int> vi;
typedef vector<long long> vll;
typedef vector<string> vs;
typedef long long ll;

#define MP make_pair
#define PB push_back
#define PU push
#define PO pop
#define FI first
#define SE second
#define FO(a, b, c) for (int(a) = (b); (a) < (c); (a)++) 
#define FOD(a, b, c) for(int(a) = (b); (a) <= (c); (a)++) 
#define FOSQ(a, b, c) for(int(a) = (b); (a) * (a) < (c); (a)++)
#define FOE(a, b) for (auto &(a) : (b))
#define REP(i, n) FO(i, 0, n)
#define ALL(v) v.begin(), v.end()
#define SRT(v) sort(ALL(v))
#define REV(v) reverse(ALL(v))


int main () {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	REP(int i; 10;) {
		cout << i <<  " ";
	}
	return 0;
}



//  [2,8,4,9] -- insertion sort 
//  [2,8,4]     