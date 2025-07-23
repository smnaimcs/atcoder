#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < n; i++)

int main () {
	unordered_map<int,bool> mp;
	int n; cin >> n;
	rep (i, n) {
		int x;
		cin >> x;
		mp[x] = true;
	}
	int x;
	cin >> x;
	if (mp[x]) cout << "Yes\n";
	else cout << "No\n";
}