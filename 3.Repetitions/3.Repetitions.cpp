//Author : Abdulhamit Sahadi
//Created: July 19, 2024
//Problem Link: https://cses.fi/problemset/task/1069

#include<iostream>

using namespace std;

int main() {

	int res = 0, current = 0;

	string str = "";
	cin >> str;

	for (int i = 0; i < (int)(str.length()) - 1; ++i) {

		if (str[i] == str[i + 1]) {

			++current;
		}
		else {

			res = max(current, res);
			current = 0;
		}

	}

	cout << max(current, res) + 1 << "\n";

	return 0;
}