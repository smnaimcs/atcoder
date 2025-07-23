#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < n; i++)

int main () {
	int n, l;
	cin >> n >> l;
	vector<int> a (l);
	a[0] = 1;
	int last = 0;
	rep (i, n-1) {
		int x;
		cin >> x;
		a[(last+x) % l]++;
		last = (last + x) % l;
	}
	ll res = 0;
	if (l % 3 != 0) {
		cout << 0 << '\n';
		return 0;
	}
	rep (i, l/3) {
		ll curRes = 1;
		for (int j = i; j < l; j+=(l/3)) {
			curRes *= a[j];
		}
		res += curRes;
	}
	cout << res << '\n';
	return 0;
}