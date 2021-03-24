/*
 ~ Author    : tridib_2003
*/

#include<bits/stdc++.h>
using namespace std;

void solve() {

	string s;
	cin >> s;

	int len = s.length();

	if (len <= 2) {
		cout << '+';
		return;
	}

	if (s[len - 2] == '3' && s[len - 1] == '5') {
		cout << '-';
		return;
	}

	if (s[0] == '9' && s[len - 1] == '4') {
		cout << '*';
		return;
	}

	if (len > 3) {

		if (s[0] == '1' && s[1] == '9' && s[2] == '0') {
			cout << '?';
			return;
		}
	}

	cout << '+';
}

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	ios::sync_with_stdio(false);
	cin.tie(0);

	int tc;
	cin >> tc;

	while (tc--) {

		solve();
		cout << '\n';
	}

	return 0;
}
