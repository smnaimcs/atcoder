#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < n; i++)

int main () {
	int n, R, C;
	string s, ans = "";
	cin >> n >> R >> C >> s;
	int r = 0, c = 0;
	using P = pair<int,int>;
	set<P> smokes;
	smokes.emplace (0, 0);
	rep (i, n) {
		if (s[i] == 'N') r++;
		if (s[i] == 'S') r--;
		if (s[i] == 'W') c++;
		if (s[i] == 'E') c--;
		smokes.emplace (r, c);
		int tr = r + R, tc = C + c;
		if (smokes.count (P (tr, tc))) ans += '1';
		else ans += '0';
	}
	cout << ans << '\n';
	return 0;
}