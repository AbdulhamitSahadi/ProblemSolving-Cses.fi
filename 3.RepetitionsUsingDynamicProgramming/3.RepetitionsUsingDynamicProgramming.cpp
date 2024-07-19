//Author : Abdulhamit Sahadi
//Created: July 19, 2024
//Problem Link: https://cses.fi/problemset/task/1069

#include<iostream>
#include<vector>

using namespace std;

int main() {

	string n = "";
	cin >> n;

	int len = n.length();
	int res = 1;

	vector<int> dp(len, 1);

	for (int i = 1; i < len; ++i) {

		if (n[i] == n[i - 1]) {

			dp[i] = dp[i - 1] + 1;
			res = max(res, dp[i]);
		}
	}

	cout << res;

	return 0;
}