#include <bits/stdc++.h> 
using namespace std;

bool cp(string &s, int i, int j) {
	if (i > j) {
		return true;
	}
	if(s[i] != s[j]) {
		return false;
	}
	else {
		return cp(s, i+1, j-1);
	}
}

int main() {
	string a = "abccba";
	cout << boolalpha << cp(a, 0, a.length() - 1) << "\n";
	return 0; 
}
