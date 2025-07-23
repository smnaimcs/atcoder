#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < n; i++)

int main () {
	int n, m;
	cin >> n >> m;
	ll last = 0;
	vector<ll> x (n), a (n-1);
	rep (i, n) {
		cin >> x[i];
	}
	sort (x.begin (), x.end ());
	rep (i, n) if (i != 0 && x[i] != x[i-1]) a.emplace_back (x[i] - x[i-1]);
	sort (a.begin (), a.end ());
	ll total = 0;
	rep (i, a.size ()-m+1) total += a[i];
	cout << total << '\n';
}