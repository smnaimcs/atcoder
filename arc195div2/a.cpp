#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < n; i++)

int main () {
	int n, m;
	cin >> n >> m;
	vector<int> a (n), b (m);
	rep (i, n) cin >> a[i];
	rep (i, m) cin >> b[i];
	int j = 0; bool twice = false;
	rep (i, n) {
		if (j < m && a[i] == b[j]) {
			j++;
		}
		else if (j > 0 && a[i] == b[j-1]) twice = true;
	}
	if (j == m && twice) cout << "Yes\n";
	else cout << "No\n";
}