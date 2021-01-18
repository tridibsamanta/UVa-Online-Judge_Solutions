/*
 ~ Author    : tridib_2003
*/

#include <iostream>
#include <string>

using namespace std;


int main() {

	string str;
	bool start = true;

	while (getline(cin, str)) {

		int len = str.length();

		for (int i = 0; i < len; ++i) {
			if (str[i] == '"') {
				if (start) {
					cout << "``";
					start = false;
				}
				else {
					cout << "''";
					start = true;
				}
			}
			else {
				cout << str[i];
			}
		}

		cout << '\n';
	}

	return 0;
}
