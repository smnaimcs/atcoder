#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < n; i++)

void solve () {
	int n; string s;
	cin >> n >> s;
	int n2 = 1 << n;
	vector<bool> visited (n2);
	visited[0] = true;

	rep (t, n2) if (visited[t]) {
		rep (i, n) {
			int nt = t | 1 << i;
			if (nt == t || s[nt-1] == '1') continue;
			visited[nt] = true;
		}
	}

	if (visited[n2-1]) cout << "Yes\n";
	else cout << "No\n";
}

int main () {
	int t; cin >> t;
	rep (ti, t) solve ();
	return 0;
}
