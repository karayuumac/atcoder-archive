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

  string sb = s;

  int a = 0;
  rep(i, s.length()) {
    if (i == 0) {
      if (s[i] != '0') {
        s[i] = '0';
        a++;
      }
    } else if (s[i - 1] == s[i]) {
      s[i] = s[i - 1] == '0' ? '1' : '0';
      a++;
    }
  }
  int b = 0;
  rep(i, sb.length()) {
    if (i == 0) {
      if (sb[i] != '1') {
        sb[i] = '1';
        b++;
      }
    } else if (sb[i - 1] == sb[i]) {
      sb[i] = sb[i - 1] == '0' ? '1' : '0';
      b++;
    }
  }
  cout << min(a, b) << endl;
}