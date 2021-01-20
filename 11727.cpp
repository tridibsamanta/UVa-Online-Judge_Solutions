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

	int tc;
	cin >> tc;

	for (int i = 1; i <= tc; ++i) {

		int s1, s2, s3;
		cin >> s1 >> s2 >> s3;

		if ((s1 > s2 && s1 < s3) || (s1 > s3 && s1 < s2))
			cout << "Case " << i << ": " << s1 << '\n';
		else if ((s2 > s1 && s2 < s3) || (s2 > s3 && s2 < s1))
			cout << "Case " << i << ": " << s2 << '\n';
		else if ((s3 > s1 && s3 < s2) || (s3 > s2 && s3 < s1))
			cout << "Case " << i << ": " << s3 << '\n';

	}

	return 0;
}
