#include <bits/stdc++.h>

using namespace std;

#define int long long int

#define rep(i, n) for(int i = 0; i < (int) n; i++)
#define repd(i, n) for(int i = (int) (n - 1); i >= 0; i--)

#define FOR(i, a, b) for(int i = a; i <= (int) b; i++)

signed main() {
  int n, k;
  cin >> n >> k;
  vector<int> h;
  rep(i, n) {
    int a;
    cin >> a;
    h.push_back(a);
  }

  sort(h.begin(), h.end());
  int sum = 0;
  FOR(i, 1, n - k) {
    sum += h[i - 1];
  }
  cout << sum << endl;
}