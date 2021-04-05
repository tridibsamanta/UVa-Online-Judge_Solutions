/*
 ~ Author    : tridib_2003
*/

#include<bits/stdc++.h>
using namespace std;

int getValue(string name) {

	int n = name.length(), sum = 0;

	for (int i = 0; i < n; ++i) {

		if (name[i] >= 'a' && name[i] <= 'z') {
			sum += name[i] - 'a' + 1;
		}
		else if (name[i] >= 'A' && name[i] <= 'Z') {
			sum += name[i] - 'A' + 1;
		}
	}

	while (sum / 10 > 0) {

		int num = sum;
		sum = 0;

		while (num > 0) {
			sum += num % 10;
			num /= 10;
		}
	}

	return sum;
}

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	ios::sync_with_stdio(false);
	cin.tie(0);

	string s1, s2;

	while (cin >> s1 >> s2) {

		double val1 = getValue(s1);
		double val2 = getValue(s2);

		// cout << val1 << '\n' << val2 << '\n';

		if (val2 > val1)
			swap(val1, val2);

		double ans = (val2 / val1) * 100;

		cout << fixed << setprecision(2) << ans << " %" << '\n';

	}

	return 0;
}
