#include <bits/stdc++.h>

using namespace std;

#define int long long int
#define pi M_PI

#define rep(i, n) for(int i = 0; i < (int) n; i++)
#define repd(i, n) for(int i = (int) (n - 1); i >= 0; i--)
#define FOR(i, a, b) for(int i = a; i <= (int) b; i++)
#define FORD(i, a, b) for(int i = a; i >= (int) b; i--)

template<typename T>
void load(int n, vector<T> &v) {
  rep(i, n) {
    T a;
    cin >> a;
    v.push_back(a);
  }
}

signed main() {
  int n;
  cin >> n;
  vector<int> a;
  load(pow(2, n), a);

  vector<int> remaining(pow(2, n));
  // 0 ~ 2^n - 1 で埋める
  iota(remaining.begin(), remaining.end(), 0);

  for (int i = 1; i <= n - 1; i++) {
    vector<int> next_remaining;
    for (int j = 0; j < pow(2, n - i); j++) {
      if (a[remaining[2 * j]] < a[remaining[2 * j + 1]]) {
        next_remaining.emplace_back(remaining[2 * j + 1]);
      } else {
        next_remaining.emplace_back(remaining[2 * j]);
      }
    }
    remaining = next_remaining;
  }
  if (a[remaining[0]] < a[remaining[1]]) {
    cout << remaining[0] + 1 << endl;
  } else {
    cout << remaining[1] + 1 << endl;
  }
}