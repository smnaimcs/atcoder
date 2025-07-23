#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < n; i++)

int main () {
	int h, w, n;
	cin >> h >> w >> n;
	vector<set<int>> row (h), col (w);
	rep (i, n) {
		int x, y; cin >> x >> y;
		x--; y--;
		row[x].insert (y);
		col[y].insert (x);
	}
	int q;
	cin >> q;
	while (q--) {
		int a, b; cin >> a >> b;
		b--;
		if (a == 1) {
			cout << row[b].size () << '\n';
			for (int y : row[b]) {
				col[y].erase (b);
			}
			row[b] = {};
		}
		else {
			cout << col[b].size () << '\n';
			for (int x : col[b]) {
				row[x].erase (b);
			}
			col[b] = {};
		}
	}
}