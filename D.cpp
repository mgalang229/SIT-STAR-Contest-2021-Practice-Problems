#include <bits/stdc++.h>

using namespace std;

int main() {                            
  ios::sync_with_stdio(false);
  cin.tie(0);
  int tt;
  cin >> tt;
  while (tt--) {
  	vector<int> a(3), b(3);
  	for (int i = 0; i < 3; i++) {
  		cin >> a[i];
  	}
   	for (int i = 0; i < 3; i++) {
  		cin >> b[i];
  	}
  	sort(a.rbegin(), a.rend());
  	sort(b.rbegin(), b.rend());
  	int sum = 0;
  	for (int i = 0; i < 3; i++) {
  		sum += (a[i] * b[i]);
  	}
  	cout << sum << '\n';
 	}
	return 0;
}      
