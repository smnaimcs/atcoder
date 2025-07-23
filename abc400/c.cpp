#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < n; i++)

int main () {
	ll n;
	cin >> n;
	ll res = 0;
	for (int a = 1; a < 60; a++) {
		ll m = n;
		rep (i, a) m /= 2;
		ll x = sqrtl ((long double) m);
		res += (x + 1) / 2;
	}
	cout << res << '\n';
	return 0;
}


// I am sure this method is sure to work!