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

	if (sum % 9 == 0)
		return 9;
	else
		return sum % 9;
}

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	string s1, s2;

	while (getline(cin, s1)) {

		getline(cin, s2);

		int val1 = getValue(s1);
		int val2 = getValue(s2);

		if (val2 > val1)
			swap(val1, val2);

		double ans = (double)val2 / (double)val1;

		cout << setprecision(2) << setiosflags(ios_base::fixed) << ans * 100.0 << " %\n";
	}

	return 0;
}
