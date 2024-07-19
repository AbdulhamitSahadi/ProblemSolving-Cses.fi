//Author : Abdulhamit Sahadi
//Created: July 19, 2024
//Problem Link: https://cses.fi/problemset/task/1083

#include<iostream>
using namespace std;


int main() {

	long long n = 0LL;
	cin >> n;

	long long sum = 0LL;

	for (int i = 0; i < n - 1; ++i) {

		int num = 0;
		cin >> num;

		sum = sum + (long long)num;
	}

	cout << (n * (n + 1) / 2.0) - sum << "\n";

	return 0;
}