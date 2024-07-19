//Author : Abdulhamit Sahadi
//Created: July 19, 2024
//Problem Link: https://cses.fi/problemset/task/1068
#include<iostream>
using namespace std;


int main() {

	long long n = 0LL;
	cin >> n;

	if (n == 1) cout << n;

	else {

		cout << n << " ";

		while (n != 1) {

			if (n % 2 == 1) {

				n = n * 3 + 1;
			}
			else {
				
				n /= 2;
			}

			cout << n << " ";
		}
	}

	return 0;
}