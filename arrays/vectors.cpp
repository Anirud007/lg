#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int main() {
	vector<int> arr{1, 1, 1, 2, 2};
	vector<int> num;
	sort(arr.begin(), arr.end());
	int counter = 0;
	int target = arr[0];
	for (int i = 0; i < arr.size(); i++)
	{
        if (arr[i] != arr[i+1])
        {
			target = arr[i+1];
			counter++;
			num.push_back(counter);
			counter = 0;
		}
		if (arr[i] == arr[i+1])
        {
			counter++;
		}
	}
	for (int i = 0; i <  num.size(); i++)
    {
        for (int j = 1; j < num.size(); j++) {
            if (num[i] == num[j]) {
                cout << "f";
            }
            if (num[i] != num[j]) {
                cout << "";
            }
        }
        break;
    }
	return 0;
}
