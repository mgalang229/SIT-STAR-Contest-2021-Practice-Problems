#include <bits/stdc++.h>

using namespace std;

int main() {                            
  ios::sync_with_stdio(false);
	int tt;
	cin >> tt;
	while (tt--) {
		int a, b, c;
		cin >> a >> b >> c;
		if (a * b == c) {
			cout << "YES\n";
			cout << a << " " << b << " " << c;
		} else if (b * c == a) {
    	cout << "YES\n";
			cout << b << " " << c << " " << a;
		} else if (c * a == b) {
			cout << "YES\n";
			cout << c << " " << a << " " << b;
		} else {
			cout << "NO";
		}
		cout << '\n';
	}
	return 0;
}      
