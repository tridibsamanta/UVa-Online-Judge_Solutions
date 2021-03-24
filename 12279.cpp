/*
 ~ Author    : tridib_2003
*/

#include<bits/stdc++.h>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	ios::sync_with_stdio(false);
	cin.tie(0);

	int tc = 1;

	while (true) {

		int n;
		cin >> n;

		if (n == 0)
			break;

		int reasonCnt = 0, treatCnt = 0;

		for (int i = 0; i < n; ++i) {
			int val;
			cin >> val;

			if (val == 0)
				++treatCnt;
			else
				++reasonCnt;
		}

		cout << "Case " << tc++ << ": " << reasonCnt - treatCnt << '\n';
	}

	return 0;
}
