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

  vector<char> v;

  for (int i = s.length() - 1; i >= 0; i--) {
    char c = s[i];
    if (c == '6') {
      v.emplace_back('9');
    } else if (c == '9') {
      v.emplace_back('6');
    } else {
      v.emplace_back(c);
    }
  }

  string ans(v.begin(), v.end());
  cout << ans << endl;
}