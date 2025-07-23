#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < n; i++)

int main () {
	ll n;
	int m;
	cin >> n >> m;
	using pll = pair<ll,ll>;
	vector<pll> b_ex;
	rep (i, m) {
		ll a, b;
		cin >> a >> b;
		b_ex.emplace_back (a, b);
	}
	sort (b_ex.begin (), b_ex.end (), [&] (pll a, pll b) {
		if (a.second - a.first == b.second - b.first) 
			return a.first < b.first;
		return a.second - a.first > b.second - b.first;
	});
	ll ans = 0;
	rep (i, m) {
		auto [a, b] = b_ex[i];
		// cout << a << ' ' << b << '\n';
		if (n < a) continue;
		ll t = 1 + (n - a) / (a - b);
		n -= t * (a - b);
		ans += t;
	}
	cout << ans << '\n';
}