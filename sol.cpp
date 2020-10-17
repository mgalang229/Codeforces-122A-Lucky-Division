#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin >> n;
	bool ok = false;
	for (int i = 1; i <= n; i++) {
		int a[1000], cnt = 0, tmp = i, tmp2 = i;
		while (tmp != 0) {
			a[cnt++] = tmp % 10;
			tmp /= 10;
		}
		bool lucky = true;
		for (int j = cnt - 1; j >= 0; j--) {
			if (a[j] != 4 && a[j] != 7) {
				lucky = false;
			}
		}
		if (lucky) {
			if (n % tmp2 == 0) {
				ok = true;
			}
		}
	}
	cout << (ok ? "YES" : "NO") << '\n';
	return 0;
}
