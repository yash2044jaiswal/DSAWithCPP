#include <bits/stdc++.h>
using namespace std;

long long factorial(int n) {
	if (n <= 1) return 1;
	return n * factorial(n - 1);
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	if (!(cin >> n)) return 0;
	if (n < 0) {
		cout << "Undefined for negative integers\n";
		return 0;
	}
	cout << factorial(n) << '\n';
	return 0;
}
