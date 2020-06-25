#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

void decode() {
	int a[4];
	for(int i = 0; i < 4; ++i) {
		cin >> a[i];
	}
	sort(a, a + 4);
	bool ok = false;
	if(a[3] == a[0] + a[1] + a[2]) {
		ok = true;
	}
	else if(a[0] + a[3] == a[1] + a[2]) {
		ok = true;
	}
	if(ok) cout << "YES";
	else cout << "NO";
	cout << "\n";
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	decode();
	return 0;
}
