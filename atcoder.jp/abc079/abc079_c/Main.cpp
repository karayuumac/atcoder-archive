#include <bits/stdc++.h>

using namespace std;

#define int long long int

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
  string s;
  cin >> s;

  vector<vector<bool>> v;
  for (int bit = 0; bit < (1 << 3); bit++) {
    vector<bool> d;
    for (int i = 0; i < 3; i++) {
      if (bit & (1 << i)) {
        // +を入れることに対応
        d.emplace_back(true);
      } else {
        // -を入れることに対応
        d.emplace_back(false);
      }
    }
    v.emplace_back(d);
  }

  for (auto dt : v) {
    int sum = s[0] - '0';
    for (int i = 0; i < 3; i++) {
      if (dt[i]) {
        sum += (s[i + 1] - '0');
      } else {
        sum -= (s[i + 1] - '0');
      }
    }
    if (sum == 7) {
      for (int i = 0; i < 3; i++) {
        cout << s[i] << (dt[i] ? '+' : '-');
      }
      cout << s[3] << "=7" << endl;
      return 0;
    }
  }
}