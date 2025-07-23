#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < n; i++)

int main () {
	int h, w;
	cin >> h >> w;
	vector grid (h, vector<ll> (w));
	vector gain (h, vector<ll> (w));
	rep (i, h) rep (j, w) {
		cin >> grid[i][j];
		gain[i][j] = grid[i][j];
	}
	vector<ll> req (h+w-1);
	rep (k, h+w-1) cin >> req[k];
	for (int i = 1; i < h+w-1; i++) req[i] += req[i-1];
	using pii = pair<int,int>;
	queue<pii> q;
	q.emplace (0, 0);
	ll ans = 0;
	rep (k, h+w-1) {
			int n = q.size ();
			ll have = 0;
			// cout << n << endl;
			rep (ii, n) {
				auto [i, j] = q.front (); q.pop ();
				have = max (have, gain[i][j]);
				if (k == h + w - 2) continue;
				// if (k == h + w - 2) {ans = max (ans, gain[i][j]); cout << ans << endl;}
				if (i + 1 < h) {
					gain[i+1][j] = max (gain[i+1][j], grid[i+1][j] + gain[i][j]);
					q.emplace (i+1, j);
				}
				if (j + 1 < w) {
					gain[i][j+1] = max (gain[i][j+1], grid[i][j+1] + gain[i][j]);
					q.emplace (i, j+1);
				}
			}
			// cout << have << ' ' << req[k] << endl;
			if (have < req[k]) ans += req[k] - have;
	}
	cout << ans << '\n';
}