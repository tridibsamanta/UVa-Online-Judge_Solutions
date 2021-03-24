/*
 ~ Author    : tridib_2003
*/

#include<bits/stdc++.h>
using namespace std;

void solve() {

	int n;
	cin >> n;

	int maxSpeed = 0;

	while (n--) {

		int speed;
		cin >> speed;

		maxSpeed = max(maxSpeed, speed);
	}

	cout << maxSpeed;
}

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	ios::sync_with_stdio(false);
	cin.tie(0);

	int tc = 1, c = 1;
	cin >> tc;

	while (tc--) {

		cout << "Case " << c++ << ": ";
		solve();
		cout << '\n';
	}

	return 0;
}
