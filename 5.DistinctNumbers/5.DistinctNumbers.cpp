//Author : Abdulhamit Sahadi
//Created: August 05, 2024
//Problem Link: https://cses.fi/problemset/task/1621


#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;


int main() {

	int n = 0;
	cin >> n;

	vector<int> x(n);

	for (int i = 0; i < n; ++i) {

		cin >> x[i];
	}

	sort(x.begin(), x.end());

	int res = 0;

	for (int i = 1; i < n; ++i) {

		if (x[i] != x[i - 1]) {
			
			++res;
		}
	}

	cout << res + 1;

	return 0;
}