#include <bits/stdc++.h>

using namespace std;

#define int long long int

#define rep(i, n) for(int i = 0; i < (int) n; i++)
#define repd(i, n) for(int i = (int) (n - 1); i >= 0; i--)

#define FOR(i, a, b) for(int i = a; i <= (int) b; i++)

signed main() {
  int n;
  cin >> n;
  vector<int> a;
  rep(i, n) {
    int b;
    cin >> b;
    a.push_back(b);
  }

  sort(a.begin(), a.end());

  rep(i, n - 1) {
    if (a[i] == a[i + 1]) {
      cout << "NO" << endl;
      return 0;
    }
  }
  cout << "YES" << endl;
}