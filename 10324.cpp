/*
 ~ Author    : tridib_2003
*/

#include<bits/stdc++.h>
using namespace std;

#define maxN 1000111

int dp[maxN];

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	ios::sync_with_stdio(false);
	cin.tie(0);

	int caseNo = 1;
	string str;

	while (cin >> str) {

		int n = str.length();

		dp[0] = 0;

		for (int i = 1; i < n + 1; ++i) {
			dp[i] = dp[i - 1] + str[i - 1] - '0';
		}

		cout << "Case " << caseNo++ << ":\n";

		int q;
		cin >> q;

		while (q--) {

			int startPos, endPos;
			cin >> startPos >> endPos;

			if (startPos > endPos)
				swap(startPos, endPos);

			++startPos;
			++endPos;

			if (dp[endPos] - dp[startPos - 1] == 0 || dp[endPos] - dp[startPos - 1] == endPos - startPos + 1)
				cout << "Yes\n";
			else
				cout << "No\n";
		}
	}

	return 0;
}
