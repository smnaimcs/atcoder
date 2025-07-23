#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < n; i++)

int main () {
	string s;
	cin >> s;
	int n = s.size ();
	int done = 0;
	rep (i, n) {
		if (s[i] == '#') {
			cout << i+1;
			done++;
			if (done == 2) {cout << '\n'; done=0;}
			else cout << ',';
		}
	}
}