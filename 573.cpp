/*
 ~ Author    : tridib_2003
*/

#include<bits/stdc++.h>
using namespace std;

void solve(int h, int u, int d, int f) {

	int day = 1;

	if (u > h) {
		cout << "success on day " << day;
		return;
	}

	double currHeight = u - d;

	if (currHeight < 0) {
		cout << "failure on day " << day;
		return;
	}

	double fatigue = u * ((double)f / 100);
	double currClimb = u;

	while (1) {

		++day;

		if (currClimb > 0)
			currClimb -= fatigue;

		currHeight += currClimb;

		if (currHeight > h) {
			cout << "success on day " << day;
			return;
		}

		currHeight -= d;

		if (currHeight < 0) {
			cout << "failure on day " << day;
			return;
		}

	}

}

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	ios::sync_with_stdio(false);
	cin.tie(0);

	int tc = 1;
	// cin >> tc;

	while (tc) {

		int h, u, d, f;
		cin >> h >> u >> d >> f;

		if (h == 0)
			break;

		solve(h, u, d, f);

		cout << '\n';
	}

	return 0;
}
