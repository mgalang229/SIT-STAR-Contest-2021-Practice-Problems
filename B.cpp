#include <bits/stdc++.h>

using namespace std;

int main() {                            
  ios::sync_with_stdio(false);
	int tt;
	cin >> tt;
	while (tt--) {
		int n;
		cin >> n;
		int oldest = n / 3 + 1;
		int middle = oldest - 1;
		int youngest = middle - 1;
		if ((youngest + middle + oldest == n) && (youngest >= 0 && middle >= 0 && oldest >= 0)) {
			cout << youngest << " " << middle << " " << oldest;
		} else {
			cout << -1;
		}
		cout << '\n';
	}
	return 0;
}      
