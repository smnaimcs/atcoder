#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < n; i++)

bool isPa (ll y, ll a) {
	string s = "";
	while (y > 0) {
		s += y % a;
		y /= a;
	}
	string rs = s;
	reverse (rs.begin (), rs.end ());
	return rs == s;
}

int main () {
	int a;
	ll n;
	cin >> a >> n;
	ll ans = 0;
	auto check = [&] (string s) {
		ll y = stoll (s);
		if (y <= n && isPa (y, a)) ans += y;
	};
	for (int x = 1; x < 1e6; x++) {
		string s = to_string (x);
		string rs = s;
		reverse (rs.begin (), rs.end ());
		s += rs;
		check (s);
		s.erase (s.begin ()+s.size ()/2);
		check (s);
	}
	cout << ans << '\n';
	return 0;
}