#include <bits/stdc++.h>

using namespace std;

#define int long long int

#define rep(i, n) for(int i = 0; i < (int) n; i++)
#define repd(i, n) for(int i = (int) (n - 1); i >= 0; i--)
#define FOR(i, a, b) for(int i = a; i <= (int) b; i++)
#define FORD(i, a, b) for(int i = a; i >= (int) b; i--)

template <typename T>
void load(int n, vector<T> &v) {
  rep(i, n) {
    T a;
    cin >> a;
    v.push_back(a);
  }
}

signed main() {
  int t;
  cin >> t;
  rep(i, t) {
    int l, r;
    cin >> l >> r;

    int sum = 0;
    if (r >= 2 * l) {
      sum = (2 * l + r) * (r - 2 * l + 1) / 2 + (1 - 2 * l) * (r - 2 * l + 1);
    }
    cout << sum << endl;
  }
}