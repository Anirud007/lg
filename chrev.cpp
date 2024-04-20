#include <bits/stdc++.h> 
using namespace std;

bool ch(string s1, string s2) {
	if (s1.size() != s2.size()) {
		return false;
	}
	queue<char> q1;
	for(int i = 0; i < s1.size(); i++) {
		q1.push(s1[i]);
	}
	queue<char> q2;
	for(int i = 0; i < s2.size(); i++) {
		q2.push(s2[i]);
	}
	int k = s2.size();
	while(k--) {
		char ch = q2.front();
		q2.pop();
		q2.push(ch);
		if(q1 == q2) {
			return true;
		}
	}
	return false;
}

int main() {
	string s1 = "abc";
	string s2 = "cba";
	cout << ch(s1, s2) << endl;
	return 0;
}