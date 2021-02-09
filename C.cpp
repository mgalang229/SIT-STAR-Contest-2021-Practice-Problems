#include <bits/stdc++.h>

using namespace std;

int main() {                            
	ios::sync_with_stdio(false);
	cin.tie(0);
 	int t0, t1, t2;
 	cin >> t0 >> t1 >> t2;
 	if (abs(t0 - t1) < abs(t0 - t2)) {
 		cout << abs(t0 - t1) + abs(t1 - t2);
 	} else {
 		cout << abs(t0 - t2) + abs(t2 - t1);
 	}
 	cout << '\n';
	return 0;
}      
