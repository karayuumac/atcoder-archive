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

  vector<vector<int>> v;
  for (int bit = 0; bit < (1 << (s.length() - 1)); bit++) {
    vector<int> d;
    for (int i = 0; i < s.length() - 1; i++) {
      if (bit & (1 << i)) {
        d.emplace_back(i);
      }
    }
    v.emplace_back(d);
  }

  int sum = 0;
  for (auto dt : v) {
    vector<int> contents;
    int prev_pos = 0;
    for (auto pos : dt) {
      contents.emplace_back(stoll(s.substr(prev_pos, pos - prev_pos + 1)));
      prev_pos = pos + 1;
    }
    contents.emplace_back(stoll(s.substr(prev_pos, s.length() - prev_pos + 1)));
    for (auto c : contents) {
      sum += c;
    }
  }
  cout << sum << endl;
}